// FUN_004014c0 @ 004014c0 body=[[004014c0, 0040157c]]


int * FUN_004014c0(int *param_1)

{
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d4de;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  local_8 = 2;
  if ((param_1[1] - *param_1 & 0xfffffff8U) == 0) {
    FUN_0043a750(unaff_EDI);
  }
  else {
    FUN_00630060(param_1[1],*unaff_EDI,unaff_EDI[1],param_1);
  }
  FUN_00408ed0(unaff_EDI + 4,0,0xffffffff);
  param_1[0xb] = unaff_EDI[0xb];
  param_1[0xc] = unaff_EDI[0xc];
  param_1[0xd] = unaff_EDI[0xd];
  FUN_00408ed0(unaff_EDI + 0xe,0,0xffffffff);
  param_1[0x15] = unaff_EDI[0x15];
  ExceptionList = local_10;
  return param_1;
}

