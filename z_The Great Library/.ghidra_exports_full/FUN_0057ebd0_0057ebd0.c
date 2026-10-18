// FUN_0057ebd0 @ 0057ebd0 body=[[0057ebd0, 0057ec70] [0057ec74, 0057ece1]]


void FUN_0057ebd0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  local_18 = *(undefined4 *)(in_ECX + 0x3c);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0(in_ECX + 0x44,0,0xffffffff);
  local_8 = 0;
  iVar2 = *(int *)(iVar2 + 0x188);
  iVar1 = FUN_0045c080(iVar2,local_34);
  if (iVar1 == iVar2) {
    FUN_00a840b0();
  }
  else {
    FUN_0045bdc0();
  }
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    iVar2 = FUN_00ab0cbb(*(undefined4 *)(DAT_012588e8 + 0xb24),0,&CEU3Idler::RTTI_Type_Descriptor,
                         &CInGameIdler::RTTI_Type_Descriptor,0);
    piVar3 = (int *)FUN_00ab0cbb(*(undefined4 *)(*(int *)(iVar2 + 0xd80) + 0xc),0,
                                 &CCountryView::RTTI_Type_Descriptor,
                                 &CPoliticsView::RTTI_Type_Descriptor,0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x2c))();
    }
  }
  ExceptionList = local_10;
  return;
}

