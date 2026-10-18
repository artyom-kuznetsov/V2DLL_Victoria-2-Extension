// PHYSFS_writeSBE64 @ 00b2afd0 body=[[00b2afd0, 00b2b064]]


undefined4 PHYSFS_writeSBE64(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
                    /* 0x72afd0  77  PHYSFS_writeSBE64
                       0x72afd0  83  PHYSFS_writeUBE64 */
  uVar3 = param_2 >> 0x10;
  uVar2 = param_2 & 0xff0000;
  uVar4 = param_2 & 0xff00;
  uVar1 = param_2 << 0x10;
  param_2 = (param_3 & 0xff0000 | param_3 >> 0x10) >> 8 | (param_3 & 0xff00 | param_3 << 0x10) << 8;
  param_3 = (uVar2 | uVar3) >> 8 | (uVar4 | uVar1) << 8;
  lVar5 = PHYSFS_write(param_1,&param_2,8,1);
  if (lVar5 != 1) {
    FUN_00b1f840(0);
    return 0;
  }
  return 1;
}

