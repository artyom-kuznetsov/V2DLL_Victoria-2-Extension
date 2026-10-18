// FUN_00852a90 @ 00852a90 body=[[00852a90, 00852bf0]]


undefined4 * FUN_00852a90(void)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  
  switch(in_EAX) {
  case 0:
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = unaff_ESI;
      puVar3[3] = 0;
      *puVar3 = CAIMoneyRequest::vftable;
      return puVar3;
    }
    break;
  case 1:
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      puVar3[2] = unaff_ESI;
      puVar3[3] = 0;
      *puVar3 = CAIManPowerRequest::vftable;
      return puVar3;
    }
    break;
  case 2:
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 2;
      puVar3[2] = unaff_ESI;
      puVar3[3] = 0;
      *puVar3 = CAIDiplomatRequest::vftable;
      return puVar3;
    }
    break;
  case 3:
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 3;
      puVar3[2] = unaff_ESI;
      puVar3[3] = 0;
      *puVar3 = CAIMerchantRequest::vftable;
      return puVar3;
    }
    break;
  case 4:
    iVar2 = FUN_00aae9af(0x18);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00849d60(0);
      return puVar3;
    }
    break;
  case 5:
    iVar2 = FUN_00aae9af(0x18);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00849da0(0,0);
      return puVar3;
    }
    break;
  case 6:
    puVar3 = (undefined4 *)FUN_00aae9af(0x14);
    uVar1 = DAT_00f092fc;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 6;
      puVar3[2] = unaff_ESI;
      puVar3[3] = uVar1;
      puVar3[4] = 0;
      *puVar3 = CAIBarrackRequest::vftable;
      return puVar3;
    }
    break;
  case 7:
    puVar3 = (undefined4 *)FUN_00aae9af(0x14);
    uVar1 = DAT_00f092fc;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 7;
      puVar3[2] = unaff_ESI;
      puVar3[3] = uVar1;
      puVar3[4] = 0;
      *puVar3 = CAIPortRequest::vftable;
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}

