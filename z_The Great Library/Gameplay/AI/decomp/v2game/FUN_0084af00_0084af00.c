// FUN_0084af00 @ 0084af00 body=[[0084af00, 0084af6c]]


void FUN_0084af00(void)

{
  int in_EAX;
  int in_EDX;
  
  if (((*(char *)(in_EAX + 0x3c) != '\0') && (*(int *)(in_EDX + 0x324) == in_EAX)) &&
     (*(int *)(in_EDX + 0x134) == *(int *)(in_EAX + 0x38))) {
    if ((*(int *)(in_EAX + 0x124) != 0) && (*(char *)(in_EAX + 0x23a) == '\0')) {
      *(undefined1 *)(in_EAX + 0x23a) = 1;
    }
    if (((*(int *)(in_EDX + 300) != 0) && (*(int *)(in_EDX + 0x158) != 0)) &&
       ((*(int *)(in_EAX + 0x134) != 0 && (*(char *)(in_EAX + 0x23b) == '\0')))) {
      *(undefined1 *)(in_EAX + 0x23b) = 1;
    }
  }
  return;
}

