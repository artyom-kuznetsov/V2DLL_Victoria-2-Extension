// FUN_009bcda0 @ 009bcda0 body=[[009bcda0, 009bce81] [009bce85, 009bce93]]


void FUN_009bcda0(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int unaff_EDI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  iVar6 = in_ECX * 0x2c + unaff_EDI;
  piVar5 = (int *)(iVar6 + 0x2c);
  ExceptionList = &local_10;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 != 0) {
    ExceptionList = pvVar3;
    return;
  }
  iVar1 = *(int *)(iVar6 + 0x28);
  iVar2 = *(int *)(iVar6 + 0x24);
  *(int *)(unaff_EDI + 0x6b6d8) = *(int *)(unaff_EDI + 0x6b6d8) + -1;
  *(int *)(unaff_EDI + 0x6b6dc) = *(int *)(unaff_EDI + 0x6b6dc) + iVar1 * iVar2 * -4;
  piVar5 = *(int **)(iVar6 + 4);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  *(undefined4 *)(iVar6 + 4) = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(iVar6 + 8,0,0xffffffff);
  local_8 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_14 = FUN_00462500(local_34);
  if ((local_14 == *(int *)(unaff_EDI + 0x6b6c8)) || (cVar4 = FUN_0098ab20(), cVar4 != '\0')) {
    local_18 = *(int *)(unaff_EDI + 0x6b6c8);
    piVar5 = &local_18;
  }
  else {
    piVar5 = &local_14;
  }
  if (*piVar5 != *(int *)(unaff_EDI + 0x6b6c8)) {
    FUN_00462830(unaff_EDI + 0x6b6c4,&local_18,*piVar5);
  }
  if (local_20 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

