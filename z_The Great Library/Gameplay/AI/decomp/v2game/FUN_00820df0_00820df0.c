// FUN_00820df0 @ 00820df0  (requested 00820DF0, first bytes: 55 8B EC 83 E4 F8 83 EC)


void FUN_00820df0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4) + 0xce4);
  do {
    do {
      if (piVar4 == (int *)0x0) {
        FUN_005165c0();
        return;
      }
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      cVar5 = FUN_00911760(0);
      piVar4 = piVar1;
    } while (((cVar5 == '\0') || (cVar5 = (**(code **)(*piVar2 + 0x6c))(), cVar5 != '\0')) ||
            (piVar2[9] != 1));
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x34);
    iVar9 = piVar2[3];
    cVar5 = FUN_00911760(0);
    if (cVar5 == '\0') goto switchD_00820f69_caseD_899;
    if (DAT_012589a7 == '\0') {
      if ((iVar3 != iVar9) && (cVar5 = (**(code **)(*piVar2 + 0x6c))(), cVar5 != '\0')) {
        iVar9 = 100;
        goto LAB_00821039;
      }
LAB_00820ebb:
      iVar9 = (**(code **)(*piVar2 + 0x20))();
      if (iVar9 < 0x81f) {
        if (iVar9 == 0x81e) {
          uVar6 = FUN_0083de70(uVar8,iVar3,0);
          goto LAB_0082102b;
        }
        if (iVar9 == 0x332) {
          uVar6 = FUN_00841640(0,uVar8,iVar3);
          goto LAB_0082102b;
        }
        if (iVar9 != 0x38d) {
          if (iVar9 != 0x470) goto switchD_00820f69_caseD_899;
          if ((piVar2[0xb] < 0) || ((piVar2[0xb] < 1 && ((uint)piVar2[10] < 0x28001)))) {
            uVar6 = 0;
          }
          else {
            uVar6 = 100;
          }
          goto LAB_0082102b;
        }
      }
      else {
        if (0x9fa < iVar9) {
          if (iVar9 == 0x9fb) {
            uVar6 = FUN_00843b90(uVar8,iVar3);
          }
          else {
            if (iVar9 != 0xa02) goto switchD_00820f69_caseD_899;
            uVar6 = FUN_00843170(piVar2,0,uVar8,iVar3);
          }
          goto LAB_0082102b;
        }
        if (iVar9 == 0x9fa) {
          uVar6 = FUN_00843a10(0,uVar8,iVar3);
          goto LAB_0082102b;
        }
        switch(iVar9) {
        case 0x897:
        case 0x898:
          cVar5 = FUN_00911760(0);
          uVar6 = -(uint)(cVar5 != '\0') & 100;
          break;
        default:
          goto switchD_00820f69_caseD_899;
        case 0x8c6:
          uVar6 = FUN_008419c0(piVar2,0,uVar8,iVar3);
          break;
        case 0x8c7:
          uVar6 = FUN_00842a00(uVar8,iVar3);
          break;
        case 0x8c8:
          uVar6 = FUN_00842a50(0,0,uVar8,iVar3);
          break;
        case 0x8c9:
          uVar6 = FUN_008430d0(piVar2,uVar8,iVar3);
          break;
        case 0x8ca:
          uVar6 = FUN_008416b0(uVar8,iVar3);
          break;
        case 0x8cb:
          uVar6 = FUN_00841900(uVar8,iVar3);
          break;
        case 0x8d5:
          uVar6 = FUN_00844050(uVar8,iVar3);
          break;
        case 0x8d6:
          uVar6 = FUN_00844140(uVar8,iVar3);
        }
LAB_0082102b:
        if ((int)uVar6 < 0x32) {
switchD_00820f69_caseD_899:
          iVar9 = 0;
          goto LAB_00821039;
        }
      }
      iVar9 = 100;
    }
    else {
      if (iVar3 == iVar9) goto LAB_00820ebb;
      iVar9 = 100;
    }
LAB_00821039:
    iVar7 = FUN_00ab047b();
    iVar3 = DAT_012587e4;
    if (iVar7 % 100 < iVar9) {
      piVar2[9] = 3;
      piVar1 = *(int **)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(param_1 + 0x34) * 4) + 0xcdc);
      uVar8 = (**(code **)(*piVar2 + 0x18))();
      iVar9 = (**(code **)(*piVar1 + 0x44))();
      (**(code **)(**(int **)(iVar9 + 0x38) + 0x18))(uVar8);
    }
    else {
      piVar2[9] = 2;
      piVar1 = *(int **)(*(int *)(*(int *)(iVar3 + 4) + *(int *)(param_1 + 0x34) * 4) + 0xcdc);
      uVar8 = (**(code **)(*piVar2 + 0x18))();
      iVar9 = (**(code **)(*piVar1 + 0x44))();
      (**(code **)(**(int **)(iVar9 + 0x38) + 0x18))(uVar8);
    }
  } while( true );
}

