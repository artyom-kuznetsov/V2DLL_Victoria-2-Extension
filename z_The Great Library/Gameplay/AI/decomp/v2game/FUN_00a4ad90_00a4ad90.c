// FUN_00a4ad90 @ 00a4ad90 body=[[00a4ad90, 00a4b0a0] [00a4b0a4, 00a4b0ad] [00a4b0b1, 00a4b0c3]]


/* WARNING: Removing unreachable block (ram,0x00a4b0a8) */
/* WARNING: Removing unreachable block (ram,0x00a4b038) */
/* WARNING: Removing unreachable block (ram,0x00a4b040) */
/* WARNING: Removing unreachable block (ram,0x00a4b083) */
/* WARNING: Removing unreachable block (ram,0x00a4b09b) */

int * FUN_00a4ad90(int *param_1)

{
  int *local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a6e0;
  local_10 = ExceptionList;
  local_1c = (int *)0x0;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_007ea300();
  FUN_00423920();
  FUN_007ea300();
  FUN_00423920();
  FUN_007ea300();
  FUN_00423920();
  FUN_007ea300();
  FUN_00423920();
  FUN_007ea300();
  FUN_00423920();
  FUN_007ea300();
  FUN_00423920();
  (**(code **)(*param_1 + 0x68))(param_1,0,8,0x102,1,&local_1c,0);
  (**(code **)(*local_1c + 0x2c))(local_1c,0,0,local_18,0x800);
  (**(code **)(*local_1c + 0x30))(local_1c);
  ExceptionList = local_10;
  return local_1c;
}

