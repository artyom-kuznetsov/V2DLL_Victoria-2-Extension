// FUN_004b7910 @ 004b7910 body=[[004b7910, 004b799d]]


void FUN_004b7910(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  if ((*(int *)(in_EAX + 0x110) == 0) ||
     (iVar1 = *(int *)(*(int *)(in_EAX + 0x110) + 0x10),
     (int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) < 1)) {
    iVar1 = in_EAX + 0x130;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  iVar1 = *(int *)(iVar1 + 4);
  *(undefined4 *)(in_EAX + 0x110) = 0;
  *(undefined1 *)(*(int *)(in_EAX + 0x5c) + 0x28) = 1;
  if ((*(int *)(in_EAX + 0x110) == 0) ||
     (iVar2 = *(int *)(*(int *)(in_EAX + 0x110) + 0x10),
     (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
    iVar2 = in_EAX + 0x130;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x34);
  }
  if (iVar1 != *(int *)(iVar2 + 4)) {
    FUN_0048ea60();
  }
  return;
}

