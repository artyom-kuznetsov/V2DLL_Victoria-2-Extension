// FUN_009da9a0 @ 009da9a0 body=[[009da9a0, 009daa68] [009daa6c, 009daaca] [009daace, 009dab2c] [009dab30, 009dab91] [009dab95, 009dabb7]]


undefined1 * FUN_009da9a0(int param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b49849;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  FUN_00448aa0(param_1 + 0x14,0,0xffffffff);
  FUN_00448740(&DAT_00dfbfa4,2);
  bVar1 = (byte)(iVar3 % 0x1a >> 0x1f);
  local_14 = CONCAT31(local_14._1_3_,(((byte)(iVar3 % 0x1a) ^ bVar1) - bVar1) + 'A');
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 1;
  FUN_00448860(1,local_14);
  local_8 = 2;
  FUN_00448aa0(local_30,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  iVar2 = (iVar3 >> 4) % 0x1a;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  bVar1 = (byte)(iVar2 >> 0x1f);
  local_14 = CONCAT31(local_14._1_3_,(((byte)iVar2 ^ bVar1) - bVar1) + 'A');
  local_8 = 3;
  FUN_00448860(1,local_14);
  local_8 = 4;
  FUN_00448aa0(local_30,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  iVar2 = (iVar3 >> 8) % 0x1a;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  bVar1 = (byte)(iVar2 >> 0x1f);
  local_14 = CONCAT31(local_14._1_3_,(((byte)iVar2 ^ bVar1) - bVar1) + 'A');
  local_8 = 5;
  FUN_00448860(1,local_14);
  local_8 = 6;
  FUN_00448aa0(local_30,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  iVar3 = (iVar3 >> 0xc) % 0x1a;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  bVar1 = (byte)(iVar3 >> 0x1f);
  local_14 = CONCAT31(local_14._1_3_,(((byte)iVar3 ^ bVar1) - bVar1) + 'A');
  local_8 = 7;
  FUN_00448860(1,local_14);
  local_8 = 8;
  FUN_00448aa0(local_30,0,0xffffffff);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_00448740(&DAT_00defdfc,1);
  ExceptionList = local_10;
  return param_2;
}

