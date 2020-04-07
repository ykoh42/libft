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
void    *memset(void *b, int c, size_t len);
```
**Description**  
메모리 영역 **b**의 **len** byte까지를 **c**로 초기화합니다.


**Return**  
메모리 영역 **b**의 포인터를 반환


**Ussage**  
메모리 영역을 특정 문자로 초기화할 때

---

### ft_bzero
> byte zero

**Prototype Declaration**  
```c
void    bzero(void *s, size_t n);
```
**Description**  
메모리 영역 **s**의 **n** bytes까지를 **0**으로 초기화합니다.
초기화 용도로 사용되며, memset과 동일한 역할을 합니다.


**Return**  
없음


**Ussage**  
메모리 영역을 0으로 초기화할 때

---

### ft_memchr
> memory character

**Prototype Declaration**  
```c
void    *memchr(const void *s, int c, size_t n);
```
**Description**  
**n** bytes 까지의 메모리 영역 **s**에서 문자 **c**가 처음 발견된 곳의 포인터를 반환한다.

**Return**  
처음으로 값 **c**가 나타나는 포인터


**Ussage**  
메모리영역에서 값 **c**의 위치를 찾아낼 때

---

### ft_memcpy
> memory copy

**Prototype Declaration**  
```c
void    *memcpy(void *restrict dst, const void *restrict src, size_t n);
```
**Description**  
메모리 영역 **src**의 **n** bytes만큼을 **dst**로 복사합니다.
절대 src와 dst의 메모리 영역이 겹쳐서는 안됩니다.
메모리 영역이 겹치면, memcpy 대신 memmove를 사용해야합니다.


**Return**  
메모리 영역 **dst**의 포인터를 반환


**Ussage**  
메모리영역을 **n**만큼 복사할 때

---

### ft_memccpy
> memory copy until **c** found

**Prototype Declaration**  
```c
void    *memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
```
**Description**  
메모리 영역 **src**에서 **dst**로 **n** bytes만큼 복사하는데, **src**에서 **c**가 나타날 때까지만 복사합니다(첫번째 **c**도 복사함).
절대 **src**와 **dst**의 메모리 영역이 **겹쳐서는 안됩니다**.


**Return**  
복사된 메모리 영역 dst의 다음 포인터(+1)


**Ussage**  
특정 문자까지만 복사하고 싶을 때(?)
>:warning: 리턴 값은 어떻게 활용되는지 잘 모르겠습니다... 알려주세요.. 왜 리턴 값이 굳이 카피한 만큼의 다음 포인터일까요? 어떤 목적이 있을 것같긴한데..

---

### ft_memmove
> memory move

**Prototype Declaration**  
```c
void    *memmove(void *dst, const void *src, size_t len);
```
**Description**  
메모리 영역 **src**의 **len** bytes만큼을 **dst**로 복사합니다.
memcpy와 동일하나, **src**와 **dst**의 메모리 영역이 겹칠 때 사용합니다.


**Return**  
메모리 영역 **dst**


**Ussage**  
메모리 영역을 **len**만큼 복사할 때
**src**와 **dst**의 메모리 영역이 겹칠 때

---

### ft_memcmp
> memory compare 

**Prototype Declaration**  
```c
int    memcmp(const void *s1, const void *s2, size_t n);
```
**Description**  
메모리 영역 **s1**과 **s2**를 **n** bytes까지 비교합니다.


**Return**  
**s1**이 크면 **양수**
**s2**가 크면 **음수**
같으면 **0**


**Ussage**  
메모리 영역을 비교할 때
정렬에서 비교가 필요할 때

---

여기까지
### ft_strlen
> string length

**Prototype Declaration**  
```c
size_t    strlen(const char *s);
```
**Description**  
문자열 **s**의 길이를 구합니다.


**Return**  
문자열 **s**의 길이

---

### ft_strlcpy
> string l copy

**Prototype Declaration**  
```c
size_t    strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
```
**Description**  
문자열 **src**에서 **dst**로 **dstsize** bytes 만큼 복사합니다.
문자열 끝에 NUL문자(\0)가 보장된 strcpy 입니다.


**Return**  
**src**의 길이(복사를 시도하려고 하는 길이)


**Ussage**  
문자열을 복사할 때
memcpy와 어떤차이가 있는지는 잘 모르겠습니다..

---

### ft_strlcat
> string l cat

**Prototype Declaration**  
```c
size_t    strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
```
**Description**  
문자열 **dst** 뒤에 **src**를 이어 붙여주는데, **dstsize** bytes 만큼만 이어붙여줍니다.
문자열 끝에 NUL문자(\0)가 보장된 strcat 입니다. (dstsize의 제일 마지막에 \0을 붙임)


**Return**  
만드려고 시도했던 최종 문자열의 길이(?)


**Ussage**  
NUL이 보장되는 strcat이 필요할 때
하지만, 리턴 값이 어떻게 사용되고 왜 그렇게 되는지 이해가 안됩니다..

---

### ft_strchr
> string chracter

**Prototype Declaration**  
```c
char    *strchr(const char *s, int c);
```
**Description**  
문자열 **s**에서 문자 **c**가 처음 발견된 곳의 포인터를 반환한다.
**s** 가 정상적인 문자열이 아닐 경우, 문제가 생길 수 있음.

**Return**  
문자 **c**가 처음 발견된 곳의 포인터
문자열 **s**에 문자 **c**가 없으면 NULL 포인터

---

### ft_strrchr
> string reverse(rear(?)) chracter

**Prototype Declaration**  
```c
char    *strrchr(const char *s, int c);
```
**Description**  
문자열 **s**의 **뒤에서부터** 문자 **c**가 처음 발견된 곳의 포인터를 반환한다.
**s** 가 정상적인 문자열이 아닐 경우, 문제가 생길 수 있음.


**Return**  
뒤에서부터 문자 **c**가 처음 발견된 곳의 포인터
문자열 **s**에 문자 **c**가 없으면 NULL 포인터

여기까지 커밋
---

### ft_strnstr
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_strncmp
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_atoi
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_isalpha
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_isdigit
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_isalnum
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_isascii
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_isprint
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_toupper
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

### ft_tolower
> 

**Prototype Declaration**  
```c

```

**Description**  

**Return**  


---

## Part 2 - Additional functions
> libc에는 없지만, 유용한 함수들을 모아둔 파트입니다.

---

### 
> 

**Prototype Declaration**  
```c

```
**Description**  



**Return**  



**Ussage**  


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
**content**의 내용으로 새로운 요소(element)를 만들어 줍니다.  
**content**가 NULL일 때도 **content**가 NULL인 요소를 만들어 줍니다.

**Return**  
새로 만들어진 요소의 포인터를 반환합니다.


**Ussage**  
새로운 요소(element)를 만들고 싶을 때

---

### ft_lstlast
> list last

**Prototype Declaration**  
```c
t_list    *ft_lstlast(t_list *lst);
```
**Description**  
**lst**의 마지막 element를 찾아줍니다.


**Return**  
**Lst**의 마지막 element 포인터


**Ussage**  
리스트의 마지막 요소에 접근하고 싶을 때  
마지막 요소에 접근해서 무언가 하고 싶을 때  

---

### ft_lstsize
> list size

**Prototype Declaration**  
```c
int    ft_lstsize(t_list *lst);
```
**Description**  
**lst**의 길이를 구해서 반환해줍니다.


**Return**  
**lst**의 길이


**Ussage**  
리스트의 길이를 구하고 싶을 때

---

### ft_lstadd_front
> list add front

**Prototype Declaration**  
```c
void    ft_lstadd_front(t_list **lst, t_list *new);
```
**Description**  
**lst** 리스트 앞에 **new** 리스트를 붙여 줍니다.


**Return**  
없음


**Ussage**  
리스트 **앞에** 새로운 리스트를 이어 붙이고 싶을 때

---

### ft_lstadd_back
> list add back

**Prototype Declaration**  
```c
void    ft_lstadd_back(t_list **lst, t_list *new);
```
**Description**  
**lst** 리스트 뒤에 **new** 리스트를 붙여 줍니다.


**Return**  
없음


**Ussage**  
리스트 **뒤에** 새로운 리스트를 이어 붙이고 싶을 때

---

### ft_lstdelone
> list delete one

**Prototype Declaration**  
```c
void    ft_lstdelone(t_list *lst, void (*del)(void*));
```
**Description**  
lst


**Return**  



**Ussage**  


---

### ft_lstclear
> 

**Prototype Declaration**  
```c
void    ft_lstclear(t_list **lst, void (*del)(void*));
```
**Description**  



**Return**  



**Ussage**  


---

### ft_lstiter
> 

**Prototype Declaration**  
```c
void    ft_lstiter(t_list *lst, void (*f)(void *));
```
**Description**  



**Return**  



**Ussage**  


---

### ft_lstmap
> 

**Prototype Declaration**  
```c
t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
**Description**  



**Return**  



**Ussage**  


---









## EXTRA
> 개인적으로 사용할 함수들을 모아둔 파트입니다.

### ft_strnlen
> string n length

**Prototype Declaration**  
```c
size_t    strnlen(const char *s, size_t maxlen);
```
**Description**  
문자열 **s**에서 **maxlen**까지의 길이를 구합니다.


**Return**  
문자열 **s**에서 **maxlen**까지의 길이


**Ussage**  
문자열의 길이를 **maxlen**까지만 알고 싶을 때

---
