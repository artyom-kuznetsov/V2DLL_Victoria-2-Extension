// FUN_00a6dbe0 @ 00a6dbe0 body=[[00a6dbe0, 00a6dc51]]


void FUN_00a6dbe0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x260);
  *(undefined1 *)(in_ECX + 0x52) = 1;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x1f0) + 4))(iVar1);
    (**(code **)(*piVar2 + 0x30))();
  }
  for (iVar1 = *(int *)(in_ECX + 0x270); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x214) + 4))(iVar1);
    (**(code **)(*piVar2 + 0x30))();
  }
                    /* WARNING: Could not recover jumptable at 0x00a6dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x1bc) + 0x30))();
  return;
}

