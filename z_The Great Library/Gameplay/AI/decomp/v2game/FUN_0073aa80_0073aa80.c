// FUN_0073aa80 @ 0073aa80 body=[[0073aa80, 0073ab26] [0073ab2a, 0073ab39]]


void FUN_0073aa80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 *unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f078;
  local_10 = ExceptionList;
  uVar1 = in_ECX[1];
  uVar2 = *in_ECX;
  uVar3 = in_ECX[2];
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0(in_ECX + 3,0,0xffffffff);
  local_8 = 0;
  *in_ECX = *unaff_ESI;
  in_ECX[1] = unaff_ESI[1];
  in_ECX[2] = unaff_ESI[2];
  FUN_00408ed0(unaff_ESI + 3,0,0xffffffff);
  *unaff_ESI = uVar2;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar3;
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

