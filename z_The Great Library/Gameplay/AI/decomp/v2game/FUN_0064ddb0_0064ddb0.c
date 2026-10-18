// FUN_0064ddb0 @ 0064ddb0 body=[[0064ddb0, 0064deb4] [0064deb8, 0064e2e8] [0064e2f0, 0064e850]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0064ddb0(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int *in_ECX;
  char *pcVar9;
  bool bVar10;
  int iStack_f8;
  int iStack_f4;
  undefined1 **ppuStack_f0;
  undefined4 *******pppppppuStack_ec;
  int *piStack_dc;
  undefined1 *puStack_d8;
  int iStack_d4;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined4 *******apppppppuStack_bc [5];
  uint uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [76];
  void *pvStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bae218;
  pvStack_14 = ExceptionList;
  pppppppuStack_ec = (undefined4 *******)0x64dde0;
  ExceptionList = &pvStack_14;
  cVar3 = (**(code **)(*in_ECX + 0x144))();
  if (cVar3 == '\0') {
    ExceptionList = pvStack_14;
    return;
  }
  pbVar4 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar4 = *(byte **)param_1;
  }
  pcVar9 = "close_all";
  do {
    bVar1 = *pbVar4;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0064de22:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0064de29;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0064de22;
    pbVar4 = pbVar4 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0064de29:
  if (iVar5 == 0) {
    pppppppuStack_ec = (undefined4 *******)0x64de38;
    FUN_0066bc90();
    *(undefined1 *)(in_ECX + 0x744) = 1;
    pppppppuStack_ec = (undefined4 *******)0x64de4a;
    FUN_004cd940();
    pcVar2 = *(code **)(*in_ECX + 0x30);
    *(undefined1 *)(in_ECX + 0x744) = 0;
    pppppppuStack_ec = (undefined4 *******)0x64de5a;
    (*pcVar2)();
    pppppppuStack_ec = (undefined4 *******)0x11;
    ppuStack_f0 = (undefined1 **)0xe08fd0;
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    puStack_d8 = (undefined1 *)((uint)puStack_d8 & 0xffffff00);
    iStack_f4 = 0x64de7d;
    FUN_00409350();
    uStack_c = 0;
    pppppppuStack_ec = (undefined4 *******)&puStack_d8;
    ppuStack_f0 = (undefined1 **)0x64de96;
    iVar5 = (**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    uStack_c = 0xffffffff;
    if (0xf < uStack_c4) {
      pppppppuStack_ec = (undefined4 *******)puStack_d8;
                    /* WARNING: Subroutine does not return */
      ppuStack_f0 = (undefined1 **)&UNK_0064deb5;
      FUN_00aae91b();
    }
    if (*(char *)(iVar5 + 0x67) != '\0') {
      pppppppuStack_ec = (undefined4 *******)0x64dec3;
      FUN_0064f570();
    }
    pppppppuStack_ec = (undefined4 *******)0x64deca;
    cVar3 = FUN_0066bbf0();
    if (cVar3 == '\0') {
      ExceptionList = pvStack_14;
      return;
    }
    ppuStack_f0 = (undefined1 **)in_ECX[0x35f];
    pppppppuStack_ec = (undefined4 *******)0x1;
    iStack_f4 = 0x64dee0;
    FUN_0066bd60();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64df03;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64df16;
    cVar3 = (**(code **)(**(int **)in_ECX[0x360] + 0x1c))();
    if (cVar3 != '\0') {
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x0;
    ppuStack_f0 = (undefined1 **)0x0;
    iStack_f4 = 0x64df25;
    FUN_0066bd60();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64df48;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64df5c;
    cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + 0x14) + 0x1c))();
    if (cVar3 != '\0') {
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x0;
    ppuStack_f0 = (undefined1 **)0x5;
    iStack_f4 = 0x64df6c;
    FUN_0066bd60();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64df8f;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *(bool *)(*(int *)(in_ECX[0x360] + 0x1c) + 0x74) =
         *(char *)(*(int *)(in_ECX[0x360] + 0x1c) + 0x74) == '\0';
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64dfc9;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    *(bool *)(*(int *)(in_ECX[0x360] + 0x1c) + 0x75) =
         *(char *)(*(int *)(in_ECX[0x360] + 0x1c) + 0x75) == '\0';
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e003;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x3e8;
    puStack_d8 = *(undefined1 **)(DAT_012588e8 + 0xb5c);
    ppuStack_f0 = (undefined1 **)0x64e03a;
    FUN_0051b830();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e05d;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    ppuStack_f0 = (undefined1 **)0x1e0000;
    pppppppuStack_ec = (undefined4 *******)0x0;
    puStack_d8 = *(undefined1 **)(DAT_012588e8 + 0xb5c);
    iStack_f4 = 0x64e099;
    FUN_00539380();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e0bc;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    if (in_ECX[0x742] == 0) {
      ExceptionList = pvStack_14;
      return;
    }
    iVar5 = *(int *)(in_ECX[0x742] + 0x28);
    if (iVar5 == 0) {
      ExceptionList = pvStack_14;
      return;
    }
    *(int *)(iVar5 + 0x40) = param_4;
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e102;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64e116;
    FUN_00401320();
    uStack_c = 1;
    pppppppuStack_ec = apppppppuStack_bc[0];
    if (uStack_a8 < 0x10) {
      pppppppuStack_ec = apppppppuStack_bc;
    }
    ppuStack_f0 = &puStack_d8;
    iStack_f4 = DAT_012587e4;
    iStack_f8 = 0x64e140;
    FUN_0055c6c0();
    if ((iStack_d4 != 0) &&
       (iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + iStack_d4 * 4),
       0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU))) {
      pppppppuStack_ec = (undefined4 *******)0x64e183;
      iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      pppppppuStack_ec = *(undefined4 ********)(iVar5 + 0x6c);
      ppuStack_f0 = *(undefined1 ***)(DAT_012588e8 + 0xb60);
      iStack_f4 = *(int *)(DAT_012588e8 + 0xb5c);
      iStack_f8 = iStack_d4;
      FUN_007297a0(auStack_68,puStack_d8);
      uStack_c = CONCAT31(uStack_c._1_3_,2);
      pppppppuStack_ec = (undefined4 *******)0x64e1c1;
      FUN_00729850();
      pppppppuStack_ec = (undefined4 *******)DAT_012588e8;
      ppuStack_f0 = (undefined1 **)0x64e1cd;
      FUN_0068c040();
      pppppppuStack_ec = (undefined4 *******)0x64e1df;
      iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
      iVar5 = DAT_012588e8;
      *(undefined1 *)(*(int *)(iVar6 + 0x3648) + 0x3d) = 1;
      pppppppuStack_ec = (undefined4 *******)0x64e1fc;
      iVar5 = (**(code **)(**(int **)(iVar5 + 0xb24) + 0x38))();
      pppppppuStack_ec = *(undefined4 ********)(iVar5 + 0x3648);
      ppuStack_f0 = (undefined1 **)0x64e208;
      FUN_0081a450();
      pppppppuStack_ec = (undefined4 *******)0x64e218;
      cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + 0x14) + 0x1c))();
      if (cVar3 != '\0') {
        pppppppuStack_ec = (undefined4 *******)0x64e22c;
        (**(code **)(**(int **)(in_ECX[0x360] + 0x14) + 8))();
      }
      pppppppuStack_ec = (undefined4 *******)0x64e238;
      FUN_0064e860();
    }
    pppppppuStack_ec = (undefined4 *******)0x64e241;
    FUN_00408ad0();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e264;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64e26f;
    FUN_0064f570();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e292;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64e2a1;
    FUN_0066bc90();
    pppppppuStack_ec = (undefined4 *******)0x0;
    ppuStack_f0 = (undefined1 **)0x64e2ae;
    (**(code **)(*in_ECX + 0xa4))();
    ppuStack_f0 = (undefined1 **)0x64e2ce;
    FUN_004e6d30();
    iVar5 = DAT_012588e8;
    puStack_10 = (undefined1 *)0x3;
    while (piStack_dc != (int *)0x0) {
      ppuStack_f0 = (undefined1 **)*piStack_dc;
      piStack_dc = (int *)piStack_dc[2];
      if (*(int *)((int)ppuStack_f0 + 0xc4) == *(int *)(iVar5 + 0xb60)) {
        iStack_f4 = 0x64e310;
        (**(code **)(*in_ECX + 0x88))();
      }
    }
    ppuStack_f0 = (undefined1 **)0x64e31d;
    FUN_009a63f0();
    ExceptionList = pvStack_18;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e340;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x0;
    ppuStack_f0 = (undefined1 **)0x64e351;
    (**(code **)(*in_ECX + 0xa4))();
    ExceptionList = pvStack_18;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e374;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64e389;
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x64e398;
    FUN_0066bc90();
    pppppppuStack_ec = (undefined4 *******)0x0;
    ppuStack_f0 = (undefined1 **)0x64e3a5;
    (**(code **)(*in_ECX + 0xa4))();
    iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_4 * 4);
    if (iVar5 != 0) {
      ppuStack_f0 = (undefined1 **)(iVar5 + 8);
      iStack_f4 = 0x64e3cb;
      (**(code **)(*in_ECX + 0x88))();
      ExceptionList = pvStack_1c;
      return;
    }
    ppuStack_f0 = (undefined1 **)0x0;
    iStack_f4 = 0x64e3f1;
    (**(code **)(*in_ECX + 0x88))();
    ExceptionList = pvStack_1c;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e414;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64e42b;
    FUN_00640590();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e44e;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64e465;
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      pppppppuStack_ec = (undefined4 *******)0x64e470;
      FUN_0066c290();
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x64e493;
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      pppppppuStack_ec = (undefined4 *******)0x64e49e;
      FUN_0066c400();
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x64e4c1;
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      pppppppuStack_ec = (undefined4 *******)0x64e4cc;
      FUN_0066c6f0();
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x64e4ef;
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x64e4fe;
    FUN_0066c870();
    ExceptionList = pvStack_14;
    return;
  }
  pppppppuStack_ec = (undefined4 *******)0x64e521;
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    pppppppuStack_ec = (undefined4 *******)0x64e559;
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      pppppppuStack_ec = (undefined4 *******)0x64e5ff;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        *(undefined4 *)(DAT_012588e8 + 0xb28) = 4;
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e635;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        pppppppuStack_ec = (undefined4 *******)0x64e645;
        (**(code **)(*in_ECX + 0x160))();
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e668;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        *(undefined1 *)(in_ECX + 0x54e) = 1;
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e696;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        pppppppuStack_ec = (undefined4 *******)0x3;
        ppuStack_f0 = (undefined1 **)0x64e6a9;
        FUN_00702ed0();
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e6cc;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        pppppppuStack_ec = (undefined4 *******)0x0;
        ppuStack_f0 = (undefined1 **)0x64e6de;
        FUN_00702ed0();
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e701;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        pppppppuStack_ec = (undefined4 *******)0x64e719;
        cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + 0x1c) + 0x1c))();
        if (cVar3 == '\0') {
          ExceptionList = pvStack_14;
          return;
        }
        iVar5 = *(int *)(*(int *)(in_ECX[0x360] + 0x1c) + 0x70);
        if (iVar5 == 0) {
          ExceptionList = pvStack_14;
          return;
        }
        pppppppuStack_ec = (undefined4 *******)auStack_a0;
        ppuStack_f0 = (undefined1 **)0x64e742;
        pppppppuStack_ec = (undefined4 *******)FUN_009888f0();
        uStack_c = 6;
        ppuStack_f0 = (undefined1 **)0x64e75c;
        pppppppuStack_ec = (undefined4 *******)FUN_00988fa0();
        uStack_c = CONCAT31(uStack_c._1_3_,7);
        iStack_f4 = 0x64e76e;
        ppuStack_f0 = (undefined1 **)iVar5;
        FUN_00737520();
        pppppppuStack_ec = (undefined4 *******)0x64e777;
        FUN_00408ad0();
        pppppppuStack_ec = (undefined4 *******)0x64e780;
        FUN_00408ad0();
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e7a3;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        pppppppuStack_ec = (undefined4 *******)0x0;
        ppuStack_f0 = (undefined1 **)0x64e7b6;
        FUN_0061c0b0();
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e7d9;
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        pppppppuStack_ec = (undefined4 *******)0x64e7ed;
        cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + 0x18) + 0x1c))();
        if (cVar3 == '\0') {
          ExceptionList = pvStack_14;
          return;
        }
        pppppppuStack_ec = (undefined4 *******)0x0;
        ppuStack_f0 = (undefined1 **)0x64e800;
        FUN_00624f20();
        ExceptionList = pvStack_14;
        return;
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)0x64e829;
      iVar5 = FUN_00868080();
      if (iVar5 == 0) {
        ExceptionList = pvStack_14;
        return;
      }
      pppppppuStack_ec = (undefined4 *******)param_1;
      ppuStack_f0 = (undefined1 **)0x64e835;
      FUN_00868080();
      ppuStack_f0 = (undefined1 **)0x64e83a;
      FUN_00867670();
      ExceptionList = pvStack_14;
      return;
    }
    pppppppuStack_ec = (undefined4 *******)0x58;
    ppuStack_f0 = (undefined1 **)0x64e568;
    puVar7 = (undefined1 *)FUN_00aae9af();
    uStack_c = 5;
    puStack_d8 = puVar7;
    if (puVar7 == (undefined1 *)0x0) goto LAB_0064e5b1;
    pppppppuStack_ec = (undefined4 *******)0x1;
  }
  else {
    pppppppuStack_ec = (undefined4 *******)0x58;
    ppuStack_f0 = (undefined1 **)0x64e52c;
    puVar7 = (undefined1 *)FUN_00aae9af();
    uStack_c = 4;
    if (puVar7 == (undefined1 *)0x0) {
LAB_0064e5b1:
      uVar8 = 0;
      goto LAB_0064e5b3;
    }
    pppppppuStack_ec = (undefined4 *******)0x0;
    puStack_d8 = (undefined1 *)&iStack_f8;
  }
  ppuStack_f0 = (undefined1 **)0x0;
  iStack_f8 = 0;
  iStack_f4 = 0;
  uVar8 = FUN_0058c170(puVar7,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                       *(undefined4 *)(DAT_012588e8 + 0xb60),param_4);
LAB_0064e5b3:
  uStack_c = 0xffffffff;
  pppppppuStack_ec = (undefined4 *******)0x64e5d1;
  iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  ppuStack_f0 = (undefined1 **)0x64e5dc;
  pppppppuStack_ec = (undefined4 *******)uVar8;
  (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
  ExceptionList = pvStack_18;
  return;
}

