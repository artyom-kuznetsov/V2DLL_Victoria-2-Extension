// FUN_005fe270 @ 005fe270 body=[[005fe270, 005fe327]]


void FUN_005fe270(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_EAX;
  uint *puVar4;
  undefined4 *unaff_ESI;
  uint local_20;
  int local_1c;
  uint local_18 [2];
  uint local_10;
  uint local_c;
  
  FUN_005fda20(unaff_ESI,in_EAX,"repay_loan_window");
  iVar3 = DAT_012588e8;
  iVar1 = DAT_012587e4;
  *unaff_ESI = CRepayLoanDialog::vftable;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x29] = 0;
  local_10 = *(uint *)(iVar3 + 0xb5c);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + *(int *)(iVar3 + 0xb60) * 4);
  FUN_00523880();
  puVar4 = (uint *)(iVar1 + 0xe80);
  if (DAT_012586f2 == '\0') {
    puVar4 = (uint *)(iVar1 + 0xe78);
  }
  local_c = puVar4[1];
  local_10 = *puVar4;
  if (((int)local_c < local_1c) || (((int)local_c <= local_1c && (*puVar4 <= local_20)))) {
    puVar4 = &local_10;
  }
  else {
    puVar4 = local_18;
  }
  uVar2 = *puVar4;
  unaff_ESI[0x29] = puVar4[1];
  unaff_ESI[0x28] = uVar2;
  return;
}

