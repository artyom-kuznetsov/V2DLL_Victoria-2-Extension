// FUN_00b0a9b0 @ 00b0a9b0 body=[[00b0a9b0, 00b0aad4]]


/* WARNING: Removing unreachable block (ram,0x00b0aa0f) */
/* WARNING: Removing unreachable block (ram,0x00b0aa5b) */
/* WARNING: Removing unreachable block (ram,0x00b0aa6e) */

undefined4 * FUN_00b0a9b0(undefined4 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int in_ECX;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3920c;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  if (*(int *)(in_ECX + 0x38) == 0) {
    if (*(int *)(in_ECX + 0x2c) != 0) {
      FUN_00b13660(*(undefined4 *)(in_ECX + 0x30),0);
    }
    puVar2 = *(undefined1 **)(DAT_00f209e0 + 0x18);
    local_4 = 1;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_00ded94d;
    }
    FUN_00b14950("$(MEDIAROOT)",puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_00b0a9b0(local_18);
    local_4 = 2;
    FUN_00b0b6a0(param_1,in_ECX + 0x2c);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00b13650(uVar1);
  ExceptionList = local_c;
  return param_1;
}

