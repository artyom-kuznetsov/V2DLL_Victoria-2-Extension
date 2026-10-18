// FUN_0063ef30 @ 0063ef30 body=[[0063ef30, 0063f0a6]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063ef30(char param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0048f260();
  FUN_0048d920();
  FUN_0067e1c0(DAT_012588e8);
  if (param_1 != '\0') {
    FUN_0068b650();
  }
  DAT_00f0971c = 1;
  DAT_00f096cc = 1;
  DAT_00f09720 = 1;
  DAT_00f096c4 = 1;
  _DAT_00f09580 = 1;
  FUN_0048f260();
  FUN_0048d920();
  *(undefined1 *)(DAT_012588e8 + 0xd10) = 0;
  FUN_005ee5b0();
  FUN_005ee6e0(DAT_012588d4);
  if ((int)((double)((param_2 + -43800000) / 0x18) / 365.0) < 3) {
    param_2 = *(int *)(DAT_012586dc + 8);
  }
  *(int *)(DAT_012588e8 + 0xb0c) = param_2;
  FUN_005edf10(&DAT_01261ac4);
  FUN_005edf10(DAT_012588e8 + 0xb0c);
  iVar2 = DAT_012588e8;
  FUN_0068dfc0(DAT_012588e8);
  FUN_005f2000(iVar2 + 0xb0c);
  iVar2 = DAT_012588e8;
  for (puVar3 = *(undefined4 **)(DAT_012588e8 + 0xadc);
      (*(undefined4 **)(iVar2 + 0xadc) <= puVar3 && (puVar3 < *(undefined4 **)(iVar2 + 0xae0)));
      puVar3 = puVar3 + 1) {
    uVar1 = *puVar3;
    FUN_00521560(uVar1,0);
    FUN_00521fd0(uVar1);
    FUN_00520150(uVar1);
    FUN_0052fcd0(uVar1,0);
    FUN_00530c70(uVar1);
  }
  FUN_0068d250(DAT_012588e8,1);
  return;
}

