// FUN_00a81840 @ 00a81840 body=[[00a81840, 00a81ab8]]


void FUN_00a81840(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  undefined4 unaff_EBX;
  uint uVar8;
  uint uStack_258;
  int *piStack_254;
  int iStack_250;
  int *piStack_24c;
  int *piStack_248;
  int *piStack_244;
  int *piStack_240;
  undefined1 *puStack_23c;
  undefined **appuStack_1c4 [31];
  undefined1 local_148 [160];
  uint uStack_a8;
  void *pvStack_78;
  int iStack_40;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b53f06;
  pvStack_14 = ExceptionList;
  puStack_23c = local_148;
  piStack_240 = param_1;
  piStack_244 = (int *)0xa81879;
  ExceptionList = &pvStack_14;
  (**(code **)(*param_1 + 0x1c))();
  if (*(int *)(in_ECX + 0x1c) != 0) {
    piStack_244 = *(int **)(in_ECX + 8);
    puVar1 = (undefined4 *)(in_ECX + 8);
    if (piStack_244 != (int *)0x0) {
      piStack_248 = (int *)0xa81895;
      (**(code **)(*piStack_244 + 8))();
      *puVar1 = 0;
    }
    piStack_244 = *(int **)(in_ECX + 0x38);
    puVar2 = (undefined4 *)(in_ECX + 0x38);
    if (piStack_244 != (int *)0x0) {
      piStack_248 = (int *)0xa818ad;
      (**(code **)(*piStack_244 + 8))();
      *puVar2 = 0;
    }
    piStack_24c = (int *)(in_ECX + 0x30);
    iStack_250 = in_ECX + 0x34;
    piStack_254 = (int *)0x0;
    uStack_258 = 0;
    piStack_248 = puVar2;
    piStack_244 = puVar1;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x1c) + 100))
                      (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x28),0x4000220,
                       *(undefined4 *)(in_ECX + 0x18),0);
    if (iVar4 == -0x7789f4a8) {
      if (DAT_013f0974 == '\0') {
        FUN_009885d0();
        iStack_40 = 0;
        uVar5 = FUN_004015b0(&uStack_258,0x15c,3);
        iStack_40._0_1_ = 1;
        FUN_00987d50(uVar5,"To many influences!! Using software skinning instead!",0x35,0);
        FUN_00401280(uVar5);
        iStack_40 = (uint)iStack_40._1_3_ << 8;
        FUN_00987ac0(appuStack_1c4);
        appuStack_1c4[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_1c4);
        iStack_40 = 0xffffffff;
        FUN_00408ad0();
        DAT_013f0974 = '\x01';
      }
      *(undefined1 *)(in_ECX + 0x48) = 1;
      iVar4 = **(int **)(in_ECX + 0x28);
      uVar5 = (**(code **)(iVar4 + 0x18))(*(int **)(in_ECX + 0x28),param_1,puVar1);
      (**(code **)(iVar4 + 0x2c))(*(undefined4 *)(in_ECX + 0x28),0x220,uVar5);
      (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1,0,(uint *)(in_ECX + 0x30));
      FUN_00aaea59(*(undefined4 *)(in_ECX + 0x2c));
      lVar3 = (ulonglong)*(uint *)(in_ECX + 0x30) * 0x14;
      uVar5 = FUN_00aad56b(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
      *(undefined4 *)(in_ECX + 0x2c) = uVar5;
      (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1,uVar5,0);
      ExceptionList = pvStack_78;
      return;
    }
    iVar4 = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2);
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    if (*(int *)(in_ECX + 0x30) != 0) {
      do {
        uVar8 = 0;
        if (*(int *)(in_ECX + 0x34) != 0) {
          piVar6 = *(int **)(iVar4 + 0x14 + *(int *)(in_ECX + 0x4c) * 0x18);
          iVar7 = *(int *)(in_ECX + 0x34);
          do {
            if (*piVar6 != -1) {
              uVar8 = uVar8 + 1;
            }
            piVar6 = piVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          if (uStack_a8 < uVar8) break;
        }
        *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + 1;
      } while (*(uint *)(in_ECX + 0x4c) < *(uint *)(in_ECX + 0x30));
    }
    if (*(uint *)(in_ECX + 0x4c) < *(uint *)(in_ECX + 0x30)) {
      piVar6 = (int *)*puVar1;
      iVar4 = *piVar6;
      piStack_244 = (int *)&stack0xfffffdd0;
      piStack_248 = param_1;
      iStack_250 = 0xa81a7d;
      piStack_24c = piVar6;
      iStack_250 = (**(code **)(iVar4 + 0x18))();
      uStack_258 = 0xa81a86;
      piStack_254 = piVar6;
      uStack_258 = (**(code **)(*piVar6 + 0x24))();
      uStack_258 = uStack_258 | 0x18000;
      (**(code **)(iVar4 + 0x2c))(*puVar1);
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = unaff_EBX;
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

