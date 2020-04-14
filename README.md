# Welcome to the Libft!
> LIBFT는 42에서 필요한 라이브러리를 직접 구현한 프로젝트입니다.

작성한 함수가 어떤 역할을 했었는지, 시간이 지나면 자꾸 까먹어서 다시 확인할 용도로 작성되었습니다.

Coding convention은 42의 convention을 따라 작성되었으며, [*libft-unit-test*](https://github.com/alelievr/libft-unit-test)를 통해 테스트하였습니다.

라이브러리가 무엇이고 왜 사용하는지에 대한 이해가 필요하시면 [*라이브러리 만들기*](https://www.joinc.co.kr/w/Site/C/Documents/Make_Library)를 참고해주세요.

## Issues and pull requests
아직 학습하는 단계이기 때문에, 잘못된 이해 혹은 잘못된 코드가 작성되었을 수도 있습니다.  
이런 문제들을 발견하셨다면, 그냥 지나치지 마시고, 코린이를 위해, 이슈 혹은 풀 리퀘스트를 날려주시면 정말 감사하겠습니다. :kissing_heart::kissing_heart::kissing_heart::kissing_heart:

## Getting started
1. Libft 프로젝트를 클론합니다.
    > git clone https://github.com/kohyounghwan/Libft.git
2. make 명령어를 통해 정적 라이브러리를 생성합니다. Libft.a
    >make

## Contents
later

## MAKEFILE
later

## Part 1 - Libc functions
> 함수들의 프로토타입은 OS X의 BSD libc를 기준으로 작성되었습니다.

---

### ft_memset
> memory set

**Prototype Declaration**  
```c
void    *ft_memset(void *b, int c, size_t len);
```

**Description**  
메모리 영역 `b`의 `len` byte까지를 `c`로 초기화합니다.


**Return**  
메모리 영역 `b`의 포인터를 반환


**Ussage**  
메모리 영역을 특정 문자로 초기화할 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_bzero
> byte zero

**Prototype Declaration**  
```c
void    ft_bzero(void *s, size_t n);
```

**Description**  
메모리 영역 `s`의 `n` bytes까지를 `0`으로 초기화합니다.
초기화 용도로 사용되며, memset과 동일한 역할을 합니다.


**Return**  
없음


**Ussage**  
메모리 영역을 0으로 초기화할 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_memchr
> memory character

**Prototype Declaration**  
```c
void    *ft_memchr(const void *s, int c, size_t n);
```

**Description**  
`n` bytes 까지의 메모리 영역 `s`에서 문자 `c`가 처음 발견된 곳의 포인터를 반환한다.


**Return**  
처음으로 값 `c`가 나타나는 포인터


**Ussage**  
메모리영역에서 값 `c`의 위치를 찾아낼 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_memcpy
> memory copy

**Prototype Declaration**  
```c
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
```

**Description**  
메모리 영역 `src`의 `n` bytes만큼을 `dst`로 복사합니다.
절대 src와 dst의 메모리 영역이 겹쳐서는 안됩니다.
메모리 영역이 겹치면, memcpy 대신 memmove를 사용해야합니다.


**Return**  
메모리 영역 `dst`의 포인터를 반환


**Ussage**  
메모리영역을 `n`만큼 복사할 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_memccpy
> memory copy until `c` found

**Prototype Declaration**  
```c
void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
```

**Description**  
메모리 영역 `src`에서 `dst`로 `n` bytes만큼 복사하는데, `src`에서 `c`가 나타날 때까지만 복사합니다(첫번째 `c`도 복사함).
절대 `src`와 `dst`의 메모리 영역이 `겹쳐서는 안됩니다`.


**Return**  
복사된 메모리 영역 dst의 다음 포인터(+1)


**Ussage**  
특정 문자까지만 복사하고 싶을 때(?)
>:warning: 리턴 값은 어떻게 활용되는지 잘 모르겠습니다... 알려주세요.. 왜 리턴 값이 굳이 카피한 만큼의 다음 포인터일까요? 어떤 목적이 있을 것같긴한데..

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_memmove
> memory move

**Prototype Declaration**  
```c
void    *ft_memmove(void *dst, const void *src, size_t len);
```

**Description**  
메모리 영역 `src`의 `len` bytes만큼을 `dst`로 복사합니다.
memcpy와 동일하나, `src`와 `dst`의 메모리 영역이 겹칠 때 사용합니다.


**Return**  
메모리 영역 `dst`


**Ussage**  
메모리 영역을 `len`만큼 복사할 때
`src`와 `dst`의 메모리 영역이 겹칠 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_memcmp
> memory compare 

**Prototype Declaration**  
```c
int    ft_memcmp(const void *s1, const void *s2, size_t n);
```

**Description**  
메모리 영역 `s1`과 `s2`를 `n` bytes까지 비교합니다.


**Return**  
`s1`이 크면 양수  
`s2`가 크면 음수  
같으면 0  


**Ussage**  
메모리 영역을 비교할 때
정렬에서 비교가 필요할 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strlen
> string length

**Prototype Declaration**  
```c
size_t    ft_strlen(const char *s);
```

**Description**  
문자열 `s`의 길이를 구합니다.


**Return**  
문자열 `s`의 길이

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strlcpy
> string l copy

**Prototype Declaration**  
```c
size_t    ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
```

**Description**  
문자열 `src`에서 `dst`로 `dstsize` bytes 만큼 복사합니다.
문자열 끝에 NUL문자(\0)가 보장된 strcpy 입니다.


**Return**  
`src`의 길이(복사를 시도하려고 하는 길이)


**Ussage**  
문자열을 복사할 때
memcpy와 어떤차이가 있는지는 잘 모르겠습니다..

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strlcat
> string l cat

**Prototype Declaration**  
```c
size_t    ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
```

**Description**  
문자열 `dst` 뒤에 `src`를 이어 붙여주는데, `dstsize` bytes 만큼만 이어붙여줍니다.
문자열 끝에 NUL문자(\0)가 보장된 strcat 입니다. (dstsize의 제일 마지막에 \0을 붙임)


**Return**  
만드려고 시도했던 최종 문자열의 길이(?)


**Ussage**  
NUL이 보장되는 strcat이 필요할 때
하지만, 리턴 값이 어떻게 사용되고 왜 그렇게 되는지 이해가 안됩니다..

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strchr
> string chracter

**Prototype Declaration**  
```c
char    *ft_strchr(const char *s, int c);
```

**Description**  
문자열 `s`에서 문자 `c`가 처음 발견된 곳의 포인터를 반환한다.
`s` 가 정상적인 문자열이 아닐 경우, 문제가 생길 수 있음.


**Return**  
문자 `c`가 처음 발견된 곳의 포인터
문자열 `s`에 문자 `c`가 없으면 NULL 포인터


**Ussage**  
문자열 앞에서부터 특정 문자를 찾을 떄

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strrchr
> string reverse(rear(?)) chracter

**Prototype Declaration**  
```c
char    *ft_strrchr(const char *s, int c);
```

**Description**  
문자열 `s`의 `뒤에서부터` 문자 `c`가 처음 발견된 곳의 포인터를 반환한다.
`s` 가 정상적인 문자열이 아닐 경우, 문제가 생길 수 있음.


**Return**  
뒤에서부터 문자 `c`가 처음 발견된 곳의 포인터
문자열 `s`에 문자 `c`가 없으면 NULL 포인터


**Ussage**  
문자열 뒤에서부터 특정 문자를 찾을 떄

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strnstr
> string n string

**Prototype Declaration**  
```c
char    *strnstr(const char *haystack, const char *needle, size_t len);
```

**Description**  
문자열 `haystack`에서 `needle`을 찾아주는데, `len`길이까지만 찾아 줍니다.


**Return**  
`haystack` 에서 찾은 문자열의 포인터


**Ussage**  
문자열에서 특정 문자열이 포함되어 있는지 확인하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strncmp
> string n compare

**Prototype Declaration**  
```c
int ft_strncmp(const char *s1, const char *s2, size_t n);
```

**Description**  
문자열 `s1`과 문자열 `s2`를 `n`만큼 비교해줍니다.


**Return**  
`s1`이 크면 양수  
`s2`가 크면 음수  
같으면 0   


**Ussage**  
두 문자열을 비교하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_atoi
> ascii to int

**Prototype Declaration**  
```c
int    ft_atoi(const char *str);
```

**Description**  
문자열 `str`을 정수로 바꿔줍니다.


**Return**  
문자열에 `str`에 해당하는 정수


**Ussage**  
문자로된 숫자를 진짜 숫자로 바꿔줄 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_isalpha
> is alphabetic character

**Prototype Declaration**  
```c
int    ft_isalpha(int c);
```

**Description**  
`c`가 알파벳 문자인지 아닌지 확인해줍니다.  
EOF(-1)를 처리해주기 위해 int로 받습니다.  


**Return**  
알파벳이면     1  
알파벳이 아니면 0  


**Ussage**  
알파벳 문자인지 아닌지 확인해야할 떄

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_isdigit
> is digit character

**Prototype Declaration**  
```c
int    ft_isdigit(int c);
```

**Description**  
`c`가 숫자 문자인지 아닌지 확인해줍니다.  
EOF(-1)를 처리해주기 위해 int로 받습니다.  


**Return**  
숫자면      1  
숫자가 아니면 0  


**Ussage**  
숫자 문자인지 아닌지 확인해야 할 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_isalnum
> is alphanumeric character

**Prototype Declaration**  
```c
int    ft_isalnum(int c);
```

**Description**  
`c`가 알파벳 또는 숫자 문자인지 아닌지 확인해줍니다.  
EOF(-1)를 처리해주기 위해 int로 받습니다.  


**Return**  
알파벳이나 숫자면      1
알파벳이나 숫자가 아니면 0

**Ussage**  
알파벳이랑 숫자만 골라내고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_isascii
> is ASCII charecter

**Prototype Declaration**  
```c
int    ft_isascii(int c);
```

**Description**  
`c`가 ASCII 문자인지 아닌지 확인해줍니다.  
EOF(-1)를 처리해주기 위해 int로 받습니다.  


**Return**  
ASCII 문자면      1
ASCII 문자가 아니면 0


**Ussage**  
아스키 문자인지 아닌지 확인하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_isprint
> is printable charecter

**Prototype Declaration**  
```c
int    ft_isprint(int c);
```

**Description**  
`c`가 출력 가능한 문자인지 아닌지 확인해줍니다.  
EOF(-1)를 처리해주기 위해 int로 받습니다.  


**Return**  
출력 가능한 문자면      1
출력 가능한 문자가 아니면 0


**Ussage**  
출력할 수 있는 문자인지 아닌지 확인하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_toupper
> to upper case charecter

**Prototype Declaration**  
```c
int    ft_toupper(int c)
```

**Description**  
`c`가 소문자면 대문자로 바꿔줍니다.  
EOF(-1)를 처리해주기 위해 int로 받습니다.  


**Return**  
대문자로 변환된 문자(int)


**Ussage**  
소문자를 대문자로 바꾸고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_tolower
> to lower case charecter

**Prototype Declaration**  
```c
int    ft_tolower(int c);
```

**Description**  
`c`가 대문자면 소문자로 바꿔줍니다.  
EOF(-1)를 처리해주기 위해 int로 받습니다.  


**Return**  
소문자로 변환된 문자(int)


**Ussage**  
대문자를 소문자로 바꾸고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_calloc
> contiguous allocation

**Prototype Declaration**  
```c
void    *ft_calloc(size_t count, size_t size);
```

**Description**  
0으로 초기화된 연속적인 메모리공간(`count` x `size`)을 할당해줍니다.


**Return**  
할당 성공시 할당된 공간의 포인터  
할당 실패시 NULL 포인터


**Ussage**  
메모리 할당과 동시에 초기화가 필요할 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strdup
> string duplicate

**Prototype Declaration**  
```c
char    *ft_strdup(const char *s1);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

## Part 2 - Additional functions
> libc에는 없지만, 유용한 함수들을 모아둔 파트입니다.

---

### ft_substr
> 

**Prototype Declaration**  
```c
char    *ft_substr(char const *s, unsigned int start, size_t len);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strjoin
> 

**Prototype Declaration**  
```c
char    *ft_strjoin(char const *s1, char const *s2);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strtrim
> 

**Prototype Declaration**  
```c
char    *ft_strtrim(char const *s1, char const *set);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_split
> 

**Prototype Declaration**  
```c
char    **ft_split(char const *s, char c);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_itoa
> 

**Prototype Declaration**  
```c
char    *ft_itoa(int n);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strmapi
> 

**Prototype Declaration**  
```c
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_putchar_fd
> 

**Prototype Declaration**  
```c
void    ft_putchar_fd(char c, int fd);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_putstr_fd
> 

**Prototype Declaration**  
```c
void    ft_putstr_fd(char *s, int fd);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_putendl_fd
> 

**Prototype Declaration**  
```c
void    ft_putendl_fd(char *s, int fd);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_putnbr_fd
> 

**Prototype Declaration**  
```c
void    ft_putnbr_fd(int n, int fd);
```

**Description**  
문자열 `s1`을 복제해줍니다.


**Return**  
복제한 문자열의 포인터


**Ussage**  
문자열을 복제하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

## BONUS
> list에 관련된 함수들을 모아둔 파트입니다.

본 파트에서 사용할 list는 다음과 같은 structure를 가지고 있습니다.
```c
typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

### ft_lstnew
> list new

**Prototype Declaration**  
```c
t_list    *ft_lstnew(void *content);
```

**Description**  
`content`의 내용으로 새로운 요소(element)를 만들어 줍니다.  
`content`가 NULL일 때도 `content`가 NULL인 요소를 만들어 줍니다.

**Return**  
새로 만들어진 요소의 포인터를 반환합니다.


**Ussage**  
새로운 요소(element)를 만들고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstlast
> list last

**Prototype Declaration**  
```c
t_list    *ft_lstlast(t_list *lst);
```

**Description**  
`lst`의 마지막 요소를 찾아줍니다.


**Return**  
`Lst` 마지막 요소의 포인터


**Ussage**  
리스트의 마지막 요소에 접근하고 싶을 때  
마지막 요소에 접근해서 무언가 하고 싶을 때  

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstsize
> list size

**Prototype Declaration**  
```c
int    ft_lstsize(t_list *lst);
```

**Description**  
`lst`의 길이를 구해서 반환해줍니다.


**Return**  
`lst`의 길이


**Ussage**  
리스트의 길이를 구하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstadd_front
> list add front

**Prototype Declaration**  
```c
void    ft_lstadd_front(t_list `lst, t_list *new);
```

**Description**  
`lst` 리스트 앞에 `new` 요소를 붙여 줍니다.


**Return**  
없음


**Ussage**  
리스트 `앞에` 새로운 요소를 이어 붙이고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstadd_back
> list add back

**Prototype Declaration**  
```c
void    ft_lstadd_back(t_list `lst, t_list *new);
```

**Description**  
`lst` 리스트 뒤에 `new` 요소를 붙여 줍니다.


**Return**  
없음


**Ussage**  
리스트 `뒤에` 새로운 요소를 이어 붙이고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstdelone
> list delete one

**Prototype Declaration**  
```c
void    ft_lstdelone(t_list *lst, void (*del)(void*));
```

**Description**  
`lst` 요소를 삭제합니다.  
`lst->content`에 `del`을 적용해주고 `lst`를 free합니다.  
`lst->next`는 free하지 않습니다.  


**Return**  
없음


**Ussage**  
요소의 content을 지우고 싶을 때


<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstclear
> lst clear

**Prototype Declaration**  
```c
void    ft_lstclear(t_list `lst, void (*del)(void*));
```

**Description**  
`lst` 의 content를 지워줍니다.(리스트를 초기화 해줍니다.)  
`lst->next`는 free하지 않습니다. 

**Return**  
없음


**Ussage**  
리스트 전체를 지우고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstiter
> list iteration

**Prototype Declaration**  
```c
void    ft_lstiter(t_list *lst, void (*f)(void *));
```

**Description**  
리스트를 순회하면서 `lst`에 `f`를 적용해줍니다.


**Return**  
없음


**Ussage**  
리스트 전체에 함수를 적용하고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_lstmap
> list mapping

**Prototype Declaration**  
```c
t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

**Description**  
리스트를 순회하면서 `lst`에 `f`를 적용하고, 적용에 성공한 함수들의 리스트를 반환합니다. 


**Return**  
`f`가 적용된 리스트의 포인터


**Ussage**  
리스트에서 `f`가 적용된 리스트들만 추리고 싶을 때  


lstiter는 반환형이 없는 `f`를 사용하였고, lstmap은 반환형이 있는 `f`이기 때문에 함수의 적용여부를 확인 할 수 있음(?)  
그래서 함수가 적용된 리스트만 반환할 수 있다(?) 그럼 아얘 용도가 사라진 원 리스트의 next는 어떻게 되는 것이지,,?  


<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

## EXTRA
> 개인적으로 필요한 함수들을 모아둔 파트입니다.

### ft_islower
> is lower case character

**Prototype Declaration**  
```c
int    ft_islower(int c);
```

**Description**  
`c`가 소문자인지 아닌지 확인합니다.


**Return**  
소문자이면     1
소문자가 아니면 0


**Ussage**  
소문자인지 아닌지 알고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_isupper
> is upper case character

**Prototype Declaration**  
```c
int    ft_isupper(int c);
```

**Description**  
`c`가 대문자인지 아닌지 확인합니다.


**Return**  
대문자이면     1
대문자가 아니면 0


**Ussage**  
대문자인지 아닌지 알고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

### ft_strnlen
> string n length

**Prototype Declaration**  
```c
size_t    ft_strnlen(const char *s, size_t maxlen);
```
**Description**  
문자열 `s`에서 `maxlen`까지의 길이를 구합니다.


**Return**  
문자열 `s`에서 `maxlen`까지의 길이


**Ussage**  
문자열의 길이를 `maxlen`까지만 알고 싶을 때

<div align="right">
    <b><a href="#Contents">↥ back to top</a></b>
</div>

---

