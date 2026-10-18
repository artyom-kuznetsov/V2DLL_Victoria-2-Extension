// FUN_00b0fee0 @ 00b0fee0 body=[[00b0fee0, 00b0ffdf]]


void FUN_00b0fee0(int *param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39849;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if (param_1 != in_ECX) {
    uVar2 = 0;
    if (in_ECX[1] != 0) {
      do {
        FUN_00b13650(uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)in_ECX[1]);
    }
    in_ECX[1] = 0;
    *(short *)(in_ECX + 3) = (short)param_1[3];
    uVar1 = param_1[1];
    in_ECX[1] = uVar1;
    if ((uint)in_ECX[2] < uVar1) {
      FUN_00adfdb0(uVar1 + 1);
    }
    uVar1 = 0;
    if (in_ECX[1] != 0) {
      do {
        piVar4 = (int *)(*param_1 + uVar1 * 0xc);
        puVar3 = (undefined4 *)(*in_ECX + uVar1 * 0xc);
        local_4 = 0;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          if (*piVar4 != 0) {
            FUN_00b13660(piVar4[1],0);
            if ((void *)*puVar3 != (void *)0x0) {
              FID_conflict__memcpy((void *)*puVar3,(void *)*piVar4,piVar4[1] + 1);
            }
          }
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)in_ECX[1]);
    }
  }
  ExceptionList = local_c;
  return;
}

