// FUN_00a921f0 @ 00a921f0 body=[[00a921f0, 00a92234] [00a92240, 00a922bc] [00a922c0, 00a922f9] [00a92300, 00a923eb] [00a923f0, 00a9254c] [00a92550, 00a926a3]]


void FUN_00a921f0(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int local_814 [254];
  int aiStack_41c [262];
  
  puVar3 = param_3;
  if (3 < param_5) {
    pcVar13 = "        bucket sorting ...\n";
    iVar4 = FUN_00aaf1e2();
    _fprintf((FILE *)(iVar4 + 0x40),pcVar13);
  }
  piVar9 = aiStack_41c + 2;
  for (iVar4 = 0x101; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  iVar4 = 0;
  if (0 < param_4) {
    do {
      aiStack_41c[*(byte *)(iVar4 + param_2) + 2] = aiStack_41c[*(byte *)(iVar4 + param_2) + 2] + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_4);
  }
  piVar9 = aiStack_41c + 2;
  piVar11 = local_814;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar11 = piVar11 + 1;
  }
  iVar4 = 1;
  do {
    aiStack_41c[iVar4 + 2] = aiStack_41c[iVar4 + 2] + aiStack_41c[iVar4 + 1];
    aiStack_41c[iVar4 + 3] = aiStack_41c[iVar4 + 3] + aiStack_41c[iVar4 + 2];
    aiStack_41c[iVar4 + 4] = aiStack_41c[iVar4 + 4] + aiStack_41c[iVar4 + 3];
    aiStack_41c[iVar4 + 5] = aiStack_41c[iVar4 + 5] + aiStack_41c[iVar4 + 4];
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x101);
  iVar4 = 0;
  if (0 < param_4) {
    do {
      iVar6 = aiStack_41c[*(byte *)(iVar4 + param_2) + 2] + -1;
      aiStack_41c[*(byte *)(iVar4 + param_2) + 2] = iVar6;
      *(int *)(param_1 + iVar6 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_4);
  }
  iVar4 = ((int)(param_4 + (param_4 >> 0x1f & 0x1fU)) >> 5) + 2;
  puVar12 = param_3;
  if (0 < iVar4) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  }
  iVar4 = 0;
  do {
    iVar6 = aiStack_41c[iVar4 + 3];
    iVar5 = iVar4 + 4;
    param_3[aiStack_41c[iVar4 + 2] >> 5] =
         param_3[aiStack_41c[iVar4 + 2] >> 5] | 1 << ((byte)aiStack_41c[iVar4 + 2] & 0x1f);
    iVar7 = aiStack_41c[iVar5];
    param_3[iVar6 >> 5] = param_3[iVar6 >> 5] | 1 << ((byte)iVar6 & 0x1f);
    iVar4 = aiStack_41c[iVar4 + 5];
    param_3[iVar7 >> 5] = param_3[iVar7 >> 5] | 1 << ((byte)iVar7 & 0x1f);
    param_3[iVar4 >> 5] = param_3[iVar4 >> 5] | 1 << ((byte)iVar4 & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 < 0x100);
  param_3 = (undefined4 *)0x20;
  iVar4 = param_4;
  do {
    iVar7 = iVar4 >> 5;
    bVar1 = (byte)iVar4;
    iVar6 = iVar4 + 1;
    iVar4 = iVar4 + 2;
    puVar3[iVar7] = puVar3[iVar7] | 1 << (bVar1 & 0x1f);
    puVar3[iVar6 >> 5] = puVar3[iVar6 >> 5] & ~(1 << ((byte)iVar6 & 0x1f));
    param_3 = (undefined4 *)((int)param_3 + -1);
  } while (param_3 != (undefined4 *)0x0);
  aiStack_41c[0x105] = 1;
  do {
    iVar4 = aiStack_41c[0x105];
    if (3 < param_5) {
      pcVar13 = "        depth %6d has ";
      iVar6 = FUN_00aaf1e2("        depth %6d has ",aiStack_41c[0x105]);
      _fprintf((FILE *)(iVar6 + 0x40),pcVar13);
    }
    iVar6 = 0;
    param_3 = (undefined4 *)0x0;
    uVar10 = 1;
    if (0 < param_4) {
      do {
        if ((puVar3[iVar6 >> 5] & uVar10) != 0) {
          param_3 = (undefined4 *)iVar6;
        }
        iVar4 = *(int *)(param_1 + iVar6 * 4) - iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + param_4;
        }
        *(undefined4 **)(param_2 + iVar4 * 4) = param_3;
        iVar6 = iVar6 + 1;
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        iVar4 = aiStack_41c[0x105];
      } while (iVar6 < param_4);
    }
    param_3 = (undefined4 *)0x0;
    iVar4 = -1;
    while( true ) {
      uVar10 = iVar4 + 1;
      uVar8 = uVar10 & 0x1f;
      uVar2 = puVar3[(int)uVar10 >> 5] & 1 << (sbyte)uVar8;
      while ((uVar2 != 0 && (uVar8 != 0))) {
        uVar10 = uVar10 + 1;
        uVar8 = uVar10 & 0x1f;
        uVar2 = puVar3[(int)uVar10 >> 5] & 1 << (sbyte)uVar8;
      }
      uVar2 = puVar3[(int)uVar10 >> 5];
      if ((uVar2 & 1 << ((byte)uVar10 & 0x1f)) != 0) {
        while (uVar2 == 0xffffffff) {
          uVar10 = uVar10 + 0x20;
          uVar2 = puVar3[(int)uVar10 >> 5];
        }
        bVar1 = (byte)uVar10 & 0x1f;
        uVar8 = 1 << bVar1 | 1U >> 0x20 - bVar1;
        uVar2 = puVar3[(int)uVar10 >> 5] & 1 << ((byte)uVar10 & 0x1f);
        while (uVar2 != 0) {
          uVar10 = uVar10 + 1;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
          uVar2 = puVar3[(int)uVar10 >> 5] & uVar8;
        }
      }
      aiStack_41c[0x103] = uVar10 - 1;
      if (param_4 <= aiStack_41c[0x103]) break;
      uVar8 = uVar10 & 0x1f;
      uVar2 = puVar3[(int)uVar10 >> 5] & 1 << (sbyte)uVar8;
      while ((uVar2 == 0 && (uVar8 != 0))) {
        uVar10 = uVar10 + 1;
        uVar8 = uVar10 & 0x1f;
        uVar2 = puVar3[(int)uVar10 >> 5] & 1 << (sbyte)uVar8;
      }
      uVar2 = puVar3[(int)uVar10 >> 5];
      if ((uVar2 & 1 << ((byte)uVar10 & 0x1f)) == 0) {
        while (uVar2 == 0) {
          uVar10 = uVar10 + 0x20;
          uVar2 = puVar3[(int)uVar10 >> 5];
        }
        bVar1 = (byte)uVar10 & 0x1f;
        uVar8 = 1 << bVar1 | 1U >> 0x20 - bVar1;
        uVar2 = puVar3[(int)uVar10 >> 5] & 1 << ((byte)uVar10 & 0x1f);
        while (uVar2 == 0) {
          uVar10 = uVar10 + 1;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
          uVar2 = puVar3[(int)uVar10 >> 5] & uVar8;
        }
      }
      iVar4 = uVar10 - 1;
      if (param_4 <= iVar4) break;
      if (aiStack_41c[0x103] < iVar4) {
        param_3 = (undefined4 *)((int)param_3 + 1 + (iVar4 - aiStack_41c[0x103]));
        FUN_00a91f90(param_2);
        bVar1 = (byte)aiStack_41c[0x103] & 0x1f;
        uVar10 = 1 << bVar1 | 1U >> 0x20 - bVar1;
        aiStack_41c[0x104] = -1;
        for (; aiStack_41c[0x103] <= iVar4; aiStack_41c[0x103] = aiStack_41c[0x103] + 1) {
          iVar6 = *(int *)(param_2 + *(int *)(param_1 + aiStack_41c[0x103] * 4) * 4);
          if (aiStack_41c[0x104] != iVar6) {
            puVar3[aiStack_41c[0x103] >> 5] = puVar3[aiStack_41c[0x103] >> 5] | uVar10;
            aiStack_41c[0x104] = iVar6;
          }
          uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        }
      }
    }
    if (3 < param_5) {
      pcVar13 = "%6d unresolved strings\n";
      iVar4 = FUN_00aaf1e2("%6d unresolved strings\n",param_3);
      _fprintf((FILE *)(iVar4 + 0x40),pcVar13);
    }
    aiStack_41c[0x105] = aiStack_41c[0x105] * 2;
    if ((param_4 < aiStack_41c[0x105]) || (param_3 == (undefined4 *)0x0)) {
      if (3 < param_5) {
        pcVar13 = "        reconstructing block ...\n";
        iVar4 = FUN_00aaf1e2();
        _fprintf((FILE *)(iVar4 + 0x40),pcVar13);
      }
      iVar4 = 0;
      iVar6 = 0;
      if (0 < param_4) {
        piVar9 = local_814;
        do {
          iVar7 = *piVar9;
          while (iVar7 == 0) {
            iVar4 = iVar4 + 1;
            iVar7 = local_814[iVar4];
          }
          iVar7 = *(int *)(param_1 + iVar6 * 4);
          local_814[iVar4] = local_814[iVar4] + -1;
          piVar9 = local_814 + iVar4;
          iVar6 = iVar6 + 1;
          *(char *)(param_2 + iVar7) = (char)iVar4;
        } while (iVar6 < param_4);
        if (0xff < iVar4) {
          pcVar13 = 
          "\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
          ;
          iVar4 = FUN_00aaf1e2("\n\nbzip2/libbzip2: internal error number %d.\nThis is a bug in bzip2/libbzip2, %s.\nPlease report it to me at: jseward@bzip.org.  If this happened\nwhen you were using some program which uses libbzip2 as a\ncomponent, you should also report this bug to the author(s)\nof that program.  Please make an effort to report this bug;\ntimely and accurate bug reports eventually lead to higher\nquality software.  Thanks.  Julian Seward, 15 February 2005.\n\n"
                               ,0x3ed,"1.0.3, 15-Feb-2005");
          _fprintf((FILE *)(iVar4 + 0x40),pcVar13);
                    /* WARNING: Subroutine does not return */
          _exit(3);
        }
      }
      return;
    }
  } while( true );
}

