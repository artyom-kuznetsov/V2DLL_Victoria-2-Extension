// FUN_009368e0 @ 009368e0 body=[[009368e0, 00936a7e]]


void FUN_009368e0(int *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int *param_6,int *param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    piVar6 = (int *)param_1[2];
    iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *param_1 * 4);
    iVar3 = *param_2;
    if (param_9 == *(int *)(iVar3 + 4)) {
      iVar1 = param_2[1];
      if (iVar3 != iVar1) {
        do {
          if (*(int *)(iVar3 + 4) == *(int *)(iVar7 + 300)) break;
          iVar3 = iVar3 + 8;
        } while (iVar3 != iVar1);
        if (iVar3 != iVar1) goto LAB_00936950;
      }
    }
    else if (*(int *)(iVar7 + 300) == param_9) {
LAB_00936950:
      piVar4 = (int *)FUN_004b7a70();
      iVar3 = __alldiv((longlong)(param_3 * 1000) * (longlong)*piVar4,1000,0);
      *param_6 = *param_6 + iVar3;
    }
    param_1 = piVar6;
    if (*(char *)(iVar7 + 0x170) != '\0') {
      piVar6 = *(int **)(*(int *)(*(int *)(DAT_0125870c + 0x2238) +
                                 *(int *)(*(int *)(iVar7 + 0x5c) + 0xdc) * 4) + 0xec);
      bVar2 = false;
      if (piVar6 != (int *)0x0) {
        iVar7 = *param_2;
        do {
          iVar3 = *piVar6;
          piVar6 = (int *)piVar6[2];
          if (param_9 == *(int *)(iVar7 + 4)) {
            iVar1 = param_2[1];
            if (iVar7 != iVar1) {
              iVar5 = iVar7;
              do {
                if (*(int *)(iVar5 + 4) == *(int *)(iVar3 + 0xc4)) break;
                iVar5 = iVar5 + 8;
              } while (iVar5 != iVar1);
              if (iVar5 != iVar1) goto LAB_009369ec;
            }
          }
          else if (*(int *)(iVar3 + 0xc4) == param_9) {
LAB_009369ec:
            bVar2 = true;
          }
        } while (piVar6 != (int *)0x0);
        if (bVar2) {
          piVar6 = (int *)FUN_004b7a70();
          iVar7 = __alldiv((longlong)*piVar6 * (longlong)(param_3 * -1000),1000,0);
          if (iVar7 + 0x189373U < 0x39580e) {
            iVar7 = (iVar7 * 1000) / 4000;
          }
          else {
            uVar8 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
            iVar7 = __alldiv(uVar8,4000,0);
          }
          *param_7 = *param_7 + iVar7;
        }
      }
    }
  } while( true );
}

