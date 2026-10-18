// FUN_00b14c90 @ 00b14c90 body=[[00b14c90, 00b14e20]]


/* WARNING: Removing unreachable block (ram,0x00b14d20) */
/* WARNING: Removing unreachable block (ram,0x00b14d26) */
/* WARNING: Removing unreachable block (ram,0x00b14d30) */
/* WARNING: Removing unreachable block (ram,0x00b14d36) */
/* WARNING: Removing unreachable block (ram,0x00b14db9) */
/* WARNING: Removing unreachable block (ram,0x00b14dcc) */
/* WARNING: Removing unreachable block (ram,0x00b14d13) */
/* WARNING: Removing unreachable block (ram,0x00b14d29) */
/* WARNING: Removing unreachable block (ram,0x00b14d2c) */
/* WARNING: Removing unreachable block (ram,0x00b14d39) */
/* WARNING: Removing unreachable block (ram,0x00b14d3c) */
/* WARNING: Removing unreachable block (ram,0x00b14d41) */
/* WARNING: Removing unreachable block (ram,0x00b14d56) */
/* WARNING: Removing unreachable block (ram,0x00b14d62) */
/* WARNING: Removing unreachable block (ram,0x00b14d66) */
/* WARNING: Removing unreachable block (ram,0x00b14d68) */
/* WARNING: Removing unreachable block (ram,0x00b14d86) */
/* WARNING: Removing unreachable block (ram,0x00b14d8e) */
/* WARNING: Removing unreachable block (ram,0x00b14d92) */
/* WARNING: Removing unreachable block (ram,0x00b14d9e) */
/* WARNING: Removing unreachable block (ram,0x00b14d9a) */
/* WARNING: Removing unreachable block (ram,0x00b14da0) */
/* WARNING: Removing unreachable block (ram,0x00b14d6e) */
/* WARNING: Removing unreachable block (ram,0x00b14da5) */
/* WARNING: Removing unreachable block (ram,0x00b14da9) */
/* WARNING: Removing unreachable block (ram,0x00b14de9) */

undefined4 * FUN_00b14c90(undefined4 *param_1)

{
  int *in_ECX;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39c84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*in_ECX == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_00b14b40(&local_18);
    local_4 = 2;
    FUN_00b137d0(*in_ECX,in_ECX[1] - local_14);
    FUN_00b00110(in_ECX);
    local_4 = local_4 & 0xffffff00;
    if (local_18 != 0) {
      (*(code *)PTR__free_00f01b10)(local_18);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

