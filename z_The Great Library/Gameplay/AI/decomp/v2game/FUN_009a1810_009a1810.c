// FUN_009a1810 @ 009a1810 body=[[009a1810, 009a18df]]


void FUN_009a1810(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 3) {
    FUN_009a1140();
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 4))();
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 0xc) {
      FUN_009a1140();
    }
    FID_conflict__sscanf((char *)(*(int *)(in_ECX + 0x1c) + 0x10),"%f");
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 4))();
    if (iVar1 != 0) {
      if (*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 0xc) {
        FUN_009a1140();
      }
      FID_conflict__sscanf((char *)(*(int *)(in_ECX + 0x1c) + 0x10),"%f",in_EAX + 4);
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 4))();
      if (iVar1 != 0) {
        if (*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 0xc) {
          FUN_009a1140();
        }
        FID_conflict__sscanf((char *)(*(int *)(in_ECX + 0x1c) + 0x10),"%f",in_EAX + 8);
        iVar1 = (**(code **)(**(int **)(in_ECX + 0x1c) + 4))();
        if ((iVar1 != 0) && (*(int *)(*(int *)(in_ECX + 0x1c) + 0xc) != 4)) {
          FUN_009a1140();
        }
      }
    }
  }
  return;
}

