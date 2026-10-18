// FUN_006793b0 @ 006793b0 body=[[006793b0, 006793ef]]


undefined4 FUN_006793b0(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1608) != 0) {
    iVar1 = (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1600) + 4))();
    if ((((*(int *)(in_ECX + 0x1608) == 1) && (iVar1 == 0)) || (iVar1 == 2)) || (iVar1 == 1)) {
      return **(undefined4 **)(in_ECX + 0x1600);
    }
  }
  return 0;
}

