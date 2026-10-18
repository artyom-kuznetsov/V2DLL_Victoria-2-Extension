// FUN_00a4fb80 @ 00a4fb80 body=[[00a4fb80, 00a4fc66] [00a4fc6a, 00a4fc79]]


void FUN_00a4fb80(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = 0;
  switch(param_2) {
  case 0x23:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0x8c,0);
    break;
  case 0x24:
    ExceptionList = &local_10;
    FUN_009a1750(local_2c,0);
    FUN_00a840b0();
    break;
  default:
    ExceptionList = &local_10;
    FUN_00a20b80(param_1,param_2);
    break;
  case 0x58:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0xc4,0);
    break;
  case 0x59:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0xa8,0);
    break;
  case 0x5c:
    ExceptionList = &local_10;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",in_ECX + 0x124);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

