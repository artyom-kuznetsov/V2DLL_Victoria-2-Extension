// FUN_00a388d0 @ 00a388d0 body=[[00a388d0, 00a38979] [00a3897d, 00a3899a] [00a3899e, 00a389b0]]


bool FUN_00a388d0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  LPSTR ***ppppCVar2;
  LPSTR **local_48 [4];
  DWORD local_38;
  uint local_34;
  LPSTR **local_2c [4];
  DWORD local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = (LPSTR **)((uint)local_48[0] & 0xffffff00);
  ExceptionList = &local_10;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (LPSTR **)((uint)local_2c[0] & 0xffffff00);
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  ppppCVar2 = (LPSTR ***)local_48[0];
  if (local_34 < 0x10) {
    ppppCVar2 = local_48;
  }
  CharLowerBuffA((LPSTR)ppppCVar2,local_38);
  ppppCVar2 = (LPSTR ***)local_2c[0];
  if (local_18 < 0x10) {
    ppppCVar2 = local_2c;
  }
  CharLowerBuffA((LPSTR)ppppCVar2,local_1c);
  cVar1 = FUN_0098ab20();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_1c = 0;
  local_2c[0] = (LPSTR **)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return cVar1 == '\0';
}

