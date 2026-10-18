// FUN_00ada140 @ 00ada140 body=[[00ada140, 00ada3c7]]


void FUN_00ada140(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int in_ECX;
  int *local_1c;
  int *piStack_18;
  int local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_1c;
  local_1c = param_1;
  local_14 = param_2;
  cVar6 = (**(code **)(*param_1 + 0x6c))();
  if ((cVar6 != '\0') || (iVar7 = (**(code **)(*param_1 + 8))(&uStack_10,0xc), iVar7 == 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  if (*(int *)(param_2 + 0x1c) == 1) {
    uVar4 = (undefined1)uStack_10;
    uVar5 = uStack_10._1_1_;
    uStack_10._0_2_ = CONCAT11(uStack_10._2_1_,uStack_10._3_1_);
    uStack_10 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_10));
    uVar4 = (undefined1)uStack_c;
    uVar5 = uStack_c._1_1_;
    uStack_c._0_2_ = CONCAT11(uStack_c._2_1_,uStack_c._3_1_);
    uStack_c = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_c));
    uVar4 = (undefined1)uStack_8;
    uVar5 = uStack_8._1_1_;
    uStack_8._0_2_ = CONCAT11(uStack_8._2_1_,uStack_8._3_1_);
    uStack_8 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_8));
  }
  piStack_18 = (int *)FUN_00ad9c70(uStack_10,uStack_8);
  if (piStack_18 == (int *)0x0) {
    if (*(char *)(in_ECX + 0x34) != '\0') {
      FUN_00b15d30("Importer::ProcessChunk() - Unknown chunk (ID=%d  Size=%d bytes), skipping...",
                   uStack_10,uStack_c);
    }
    (**(code **)(*param_1 + 0x80))(uStack_c);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe0);
    return;
  }
  pcVar1 = *(char **)(param_2 + 0xc);
  iVar7 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_2 + 0x14);
  bVar3 = false;
  if ((pcVar1 != (char *)0x0) && (cVar6 = FUN_00ad86b0(&uStack_10), cVar6 != '\0')) {
    bVar3 = true;
  }
  if ((iVar7 != 0) && (cVar6 = FUN_00ad86b0(&uStack_10), cVar6 != '\0')) {
    bVar3 = true;
  }
  if (((iVar2 == 0) || (cVar6 = FUN_00ad86b0(&uStack_10), cVar6 == '\0')) && (!bVar3)) {
    if (pcVar1 != (char *)0x0) {
      if (((((((pcVar1[3] == '\0') && (uStack_10 == 2)) || ((pcVar1[2] == '\0' && (uStack_10 == 4)))
             ) || ((pcVar1[3] == '\0' && (uStack_10 == 2)))) ||
           ((pcVar1[4] == '\0' && (uStack_10 == 6)))) ||
          (((pcVar1[5] == '\0' && (uStack_10 == 7)) ||
           ((pcVar1[0xb] == '\0' && ((uStack_10 == 9 || (uStack_10 == 0xc)))))))) ||
         ((pcVar1[6] == '\0' && (uStack_10 == 8)))) {
        bVar3 = true;
      }
      if (((*pcVar1 == '\0') && (pcVar1[1] == '\0')) && (uStack_10 == 1)) {
        bVar3 = true;
      }
    }
    if ((iVar7 != 0) &&
       (((*(char *)(iVar7 + 1) == '\0' && (uStack_10 == 0x32)) ||
        ((*(char *)(iVar7 + 3) == '\0' && (uStack_10 == 0xc9)))))) {
      bVar3 = true;
    }
    if (((iVar2 == 0) ||
        (((*(char *)(iVar2 + 1) != '\0' || (uStack_10 != 0x32)) &&
         ((*(char *)(iVar2 + 3) != '\0' || (uStack_10 != 0x65)))))) && (!bVar3)) {
      (**(code **)(*piStack_18 + 4))(local_1c,local_14);
      __security_check_cookie(uStack_c ^ (uint)&stack0xffffffdc);
      return;
    }
  }
  (**(code **)(*local_1c + 0x80))(uStack_c);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe0);
  return;
}

