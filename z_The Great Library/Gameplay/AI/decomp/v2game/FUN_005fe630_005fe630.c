// FUN_005fe630 @ 005fe630 body=[[005fe630, 005fe699]]


void FUN_005fe630(void)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  undefined4 local_10 [3];
  
  FUN_005fda20(unaff_ESI,in_EAX,"take_loan_window");
  iVar1 = DAT_012587e4;
  *unaff_ESI = CTakeLoanDialog::vftable;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x29] = 0;
  local_10[0] = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  puVar2 = (undefined4 *)
           FUN_00522cf0(*(undefined4 *)(*(int *)(iVar1 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                        local_10);
  unaff_ESI[0x28] = *puVar2;
  unaff_ESI[0x29] = puVar2[1];
  return;
}

