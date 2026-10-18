// FUN_004e8bd0 @ 004e8bd0 body=[[004e8bd0, 004e8c62]]


undefined4 FUN_004e8bd0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_EDI;
  undefined1 local_10 [4];
  int local_c;
  
  if ((*(int *)(in_EAX + 0x48) != 0) &&
     (FUN_004ead40(*(undefined4 *)(in_EAX + 0x30),local_10,*(undefined4 *)(unaff_EDI + 100),
                   unaff_EDI,0), local_c != *(int *)(in_EAX + 0x48))) {
    return 0;
  }
  iVar1 = *(int *)(in_EAX + 0x30);
  if ((((*(char *)(iVar1 + 0x12f) != '\0') ||
       (*(int *)(*(int *)(unaff_EDI + 0x6c) + 0x50) == *(int *)(*(int *)(in_EAX + 0x4c) + 0x50))) &&
      ((*(char *)(iVar1 + 300) != '\0' || (*(int *)(unaff_EDI + 0x6c) == *(int *)(in_EAX + 0x4c)))))
     && ((*(char *)(iVar1 + 0x12d) != '\0' ||
         (*(int *)(unaff_EDI + 0x70) == *(int *)(in_EAX + 0x50))))) {
    if ((*(char *)(iVar1 + 0x12e) == '\0') &&
       (iVar1 = *(int *)(iVar1 + 0x130), iVar2 = FUN_009665d0(unaff_EDI), iVar2 != iVar1)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

