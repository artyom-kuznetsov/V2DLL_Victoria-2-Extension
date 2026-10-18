// FUN_00482610 @ 00482610 body=[[00482610, 0048292b]]


/* WARNING: Removing unreachable block (ram,0x0048268c) */
/* WARNING: Removing unreachable block (ram,0x0048262c) */
/* WARNING: Removing unreachable block (ram,0x0048265f) */
/* WARNING: Removing unreachable block (ram,0x004826b9) */

void FUN_00482610(uint param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *unaff_EDI;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar1 = CONCAT44(param_2,param_1);
  lVar4 = FUN_00b31c36();
  if (lVar1 < lVar4) {
    uVar5 = FUN_00b31c36();
    *unaff_EDI = uVar5;
    return;
  }
  lVar4 = FUN_00b31c36();
  if (lVar1 < lVar4) {
    uVar5 = FUN_00b31c36();
    *unaff_EDI = uVar5;
    return;
  }
  lVar4 = FUN_00b31c36();
  if (lVar1 < lVar4) {
    uVar5 = FUN_00b31c36();
    *unaff_EDI = uVar5;
    return;
  }
  lVar4 = FUN_00b31c36();
  if (lVar1 < lVar4) {
    FUN_00408d50(0x3ea1cac1);
    return;
  }
  puVar3 = (uint *)FUN_00408d50(0x3de353f8);
  if ((param_2 <= (int)puVar3[1]) && ((param_2 < (int)puVar3[1] || (param_1 < *puVar3)))) {
    FUN_00408d50(0x3eaa7efa);
    return;
  }
  FUN_00408d50(0x3e000000);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(0x3eb4bc6a);
    return;
  }
  FUN_00408d50(0x3e116873);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(0x3ec10625);
    return;
  }
  FUN_00408d50(0x3e29fbe7);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(0x3ed0e560);
    return;
  }
  FUN_00408d50(DAT_00f141cc);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(0x3ee4dd2f);
    return;
  }
  FUN_00408d50(DAT_00f14a8c);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(DAT_00f17898);
    return;
  }
  FUN_00408d50(0x3eaa7efa);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(0x3f13b646);
    return;
  }
  FUN_00408d50(DAT_00f17898);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(0x3f333333);
    return;
  }
  FUN_00408d50(0x3f2a7efa);
  cVar2 = FUN_0043a5e0();
  if (cVar2 != '\0') {
    FUN_00408d50(0x3f50e560);
    return;
  }
  FUN_0048c080(param_1,param_2);
  return;
}

