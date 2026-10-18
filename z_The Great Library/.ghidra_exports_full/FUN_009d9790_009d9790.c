// FUN_009d9790 @ 009d9790 body=[[009d9790, 009d9941]]


/* WARNING: Removing unreachable block (ram,0x009d98a8) */
/* WARNING: Removing unreachable block (ram,0x009d98be) */
/* WARNING: Removing unreachable block (ram,0x009d98a2) */
/* WARNING: Removing unreachable block (ram,0x009d98b8) */
/* WARNING: Removing unreachable block (ram,0x009d98ce) */
/* WARNING: Removing unreachable block (ram,0x009d98e2) */
/* WARNING: Removing unreachable block (ram,0x009d98da) */
/* WARNING: Removing unreachable block (ram,0x009d98e9) */
/* WARNING: Removing unreachable block (ram,0x009d98fa) */
/* WARNING: Removing unreachable block (ram,0x009d9900) */

uint FUN_009d9790(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_fc [224];
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00b546a6;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  uVar1 = FUN_009d9cf0();
  if ((char)uVar1 == '\x01') {
    FUN_009885d0();
    local_14 = 0;
    FUN_004015b0(local_fc,0x76,0x101);
    local_14._0_1_ = 1;
    uVar2 = FUN_00987d20(0);
    uVar2 = FUN_009da180(uVar2);
    FUN_00401280(uVar2);
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_00401650();
    uVar1 = FUN_00408ad0();
  }
  ExceptionList = local_1c;
  return uVar1 & 0xffffff00;
}

