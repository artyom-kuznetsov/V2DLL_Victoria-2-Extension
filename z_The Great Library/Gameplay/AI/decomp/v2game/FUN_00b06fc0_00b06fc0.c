// FUN_00b06fc0 @ 00b06fc0 body=[[00b06fc0, 00b07093]]


void FUN_00b06fc0(int param_1,char param_2)

{
  void *_Dst;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b38e18;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  if (param_2 != '\0') {
    piVar1 = *(int **)(*(int *)(in_ECX + 0x44) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      local_4 = 0;
      *(undefined2 *)(piVar1 + 1) = 0;
      if (*piVar1 != 0) {
        (*(code *)PTR__free_00f01b10)(*piVar1,uVar2);
      }
      *piVar1 = 0;
      if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar1[2])(1);
      }
      local_4 = 0xffffffff;
      if (*piVar1 != 0) {
        (*(code *)PTR__free_00f01b10)(*piVar1);
      }
      (*(code *)PTR__free_00f01b10)(piVar1);
    }
  }
  if ((1 < *(uint *)(in_ECX + 0x48)) &&
     (iVar3 = (*(uint *)(in_ECX + 0x48) - param_1) + -1, iVar3 != 0)) {
    _Dst = (void *)(*(int *)(in_ECX + 0x44) + param_1 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar3 * 4);
  }
  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + -1;
  ExceptionList = local_c;
  return;
}

