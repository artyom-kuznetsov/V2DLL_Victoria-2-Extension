// FUN_00b08f40 @ 00b08f40 body=[[00b08f40, 00b0902f]]


int FUN_00b08f40(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  undefined1 auStack_58 [68];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3904e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = (*(code *)PTR_FUN_00f01b08)
                    (0xb8,300,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffff9c);
  uStack_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00b08440(param_1,*(undefined4 *)(in_ECX[4] + 0x90),param_3);
  }
  uStack_4 = 0xffffffff;
  if (param_2 == (undefined1 *)0x0) {
    FUN_009befd0();
    param_2 = auStack_58;
  }
  FUN_00b08280(param_2);
  (**(code **)(**(int **)(iVar3 + 0x8c) + 0x14))
            (*(undefined4 *)(*(int *)(iVar3 + 0x90) + 0x1ac),iVar3);
  iVar2 = in_ECX[1];
  uVar4 = iVar2 + 1;
  in_ECX[1] = uVar4;
  if ((uint)in_ECX[2] < uVar4) {
    FUN_00aeb6c0(iVar2 + 2);
  }
  piVar1 = (int *)(*in_ECX + -4 + in_ECX[1] * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
  }
  ExceptionList = pvStack_14;
  return iVar3;
}

