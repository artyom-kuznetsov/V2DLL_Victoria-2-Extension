// FUN_00965240 @ 00965240 body=[[00965240, 009652e7]]


/* WARNING: Removing unreachable block (ram,0x009652a3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00965240(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  undefined4 local_1c;
  undefined4 local_18;
  longlong local_14;
  uint local_c;
  undefined4 local_8;
  
  local_14 = CONCAT44(DAT_013f1af4,DAT_013f1af0);
  if ((_DAT_013f1af8 & 1) == 0) {
    _DAT_013f1af8 = _DAT_013f1af8 | 1;
    local_14 = FUN_00b31c36();
  }
  DAT_013f1af4 = (undefined4)((ulonglong)local_14 >> 0x20);
  DAT_013f1af0 = (undefined4)local_14;
  local_1c = 0x8000;
  local_18 = 0;
  local_c = param_1;
  local_8 = param_2;
  if (local_14 < CONCAT44(param_2,param_1)) {
    puVar2 = &local_c;
  }
  else {
    puVar2 = (uint *)&local_14;
  }
  if (((int)puVar2[1] < 1) && (((int)puVar2[1] < 0 || (*puVar2 < 0x8000)))) {
    puVar3 = &param_1;
  }
  else {
    puVar3 = &local_1c;
  }
  uVar1 = puVar3[1];
  *(undefined4 *)(unaff_EDI + 0x128) = *puVar3;
  *(undefined4 *)(unaff_EDI + 300) = uVar1;
  return;
}

