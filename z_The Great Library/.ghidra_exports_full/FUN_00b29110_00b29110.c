// FUN_00b29110 @ 00b29110 body=[[00b29110, 00b291b1]]


void FUN_00b29110(void)

{
  short sVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short local_208 [256];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  uVar6 = 0xff;
  psVar5 = local_208;
  uVar4 = 0x400;
  DVar2 = GetLastError();
  iVar3 = (*DAT_00f20bd4)(0x1200,0,DVar2,uVar4,psVar5,uVar6,uVar7);
  if (iVar3 == 0) {
    local_208[0] = 0;
  }
  psVar5 = local_208;
  sVar1 = local_208[0];
  do {
    if (sVar1 == 0) {
LAB_00b29184:
      PHYSFS_utf8FromUcs2(local_208,&DAT_00f20ac0,0xff,0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((*psVar5 == 10) || (*psVar5 == 0xd)) {
      *psVar5 = 0;
      goto LAB_00b29184;
    }
    psVar5 = psVar5 + 1;
    sVar1 = *psVar5;
  } while( true );
}

