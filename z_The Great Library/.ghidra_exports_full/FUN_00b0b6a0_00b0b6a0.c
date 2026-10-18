// FUN_00b0b6a0 @ 00b0b6a0 body=[[00b0b6a0, 00b0b78a]]


/* WARNING: Removing unreachable block (ram,0x00b0b6f4) */

undefined4 * FUN_00b0b6a0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b391a1;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if (*in_ECX != 0) {
    FUN_00b13660(in_ECX[1],0);
  }
  puVar2 = (undefined1 *)*param_2;
  local_4 = 1;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00ded94d;
  }
  piVar3 = (int *)FUN_00b13780(puVar2,param_2[1]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*piVar3 != 0) {
    FUN_00b13660(piVar3[1],0);
    if ((void *)*param_1 != (void *)0x0) {
      FID_conflict__memcpy((void *)*param_1,(void *)*piVar3,piVar3[1] + 1);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00b13650(uVar1);
  ExceptionList = local_c;
  return param_1;
}

