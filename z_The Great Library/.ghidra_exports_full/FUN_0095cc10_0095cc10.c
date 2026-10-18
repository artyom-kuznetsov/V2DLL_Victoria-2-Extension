// FUN_0095cc10 @ 0095cc10 body=[[0095cc10, 0095ccbb] [0095ccbf, 0095cd9b] [0095cd9f, 0095cdc0] [0095cdc4, 0095ce00]]


void FUN_0095cc10(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  char local_9c [32];
  undefined1 local_7c [20];
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b78d00;
  local_10 = ExceptionList;
  iVar6 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  local_18 = 0;
  ExceptionList = &local_10;
  local_1c = iVar6;
  if (0 < iVar6) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x48) + (uint)*(byte *)(param_1 + 8 + local_18) * 8);
      iVar3 = piVar1[1];
      if ((-1 < iVar3) && ((0 < iVar3 || (*piVar1 != 0)))) {
        iVar6 = *(int *)(*(int *)(DAT_012587f0 + 0xc) + local_18 * 4);
        FUN_00448740(&DAT_00e35f18,3);
        uVar4 = FUN_005659c0(iVar6,local_7c);
        local_8 = 0;
        FUN_00448aa0(uVar4,0,0xffffffff);
        local_8 = 0xffffffff;
        if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00448740(&DAT_00dfcd24,4);
        uVar7 = (uint)*(byte *)(*(int *)(iVar6 + 8) + 0x288 + *(int *)(DAT_012588e8 + 0xbcc));
        iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x2c8);
        local_28 = *(undefined4 *)(iVar6 + uVar7 * 8);
        uStack_24 = *(undefined4 *)(iVar6 + uVar7 * 8 + 4);
        local_30 = 0xf;
        local_34 = 0;
        local_44 = local_44 & 0xffffff00;
        local_8 = 1;
        _sprintf(local_9c,"%.3f",(double)CONCAT44(uStack_24,local_28) * 3.0517578125e-05);
        pcVar5 = local_9c;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00409350(local_9c,(int)pcVar5 - (int)(local_9c + 1));
        local_8 = 2;
        uVar4 = FUN_0042c180(local_60);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00448aa0(uVar4,0,0xffffffff);
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44 = local_44 & 0xffffff00;
        FUN_00448740(&DAT_00defdfc,1);
        iVar6 = local_1c;
      }
      local_18 = local_18 + 1;
    } while (local_18 < iVar6);
  }
  ExceptionList = local_10;
  return;
}

