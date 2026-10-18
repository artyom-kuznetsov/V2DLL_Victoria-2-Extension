// FUN_008166b0 @ 008166b0 body=[[008166b0, 00816780] [00816784, 00816797]]


undefined4 * FUN_008166b0(undefined4 *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int unaff_EDI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61a10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,0);
  local_8 = 0;
  local_18 = 0x2d2d2d;
  param_1[0x51] = 0x2d2d2d;
  *param_1 = CShield3dObject::vftable;
  param_1[0x4f] = unaff_EDI;
  param_1[0x52] = 0;
  *(char *)(param_1 + 0x53) = param_2;
  param_1[0x54] = 0xffffffff;
  param_1[0x8d] = param_3;
  param_1[0x8e] = param_4;
  param_1[0x50] = **(undefined4 **)(unaff_EDI + 0x6bd6c);
  if (param_2 != '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("gfx/interface/flag_retreat.tga",0x1e);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = FUN_009bcbf0(local_34,1);
    param_1[0x54] = uVar1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

