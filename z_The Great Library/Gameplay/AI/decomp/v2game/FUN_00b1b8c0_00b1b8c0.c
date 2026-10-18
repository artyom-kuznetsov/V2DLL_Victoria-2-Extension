// FUN_00b1b8c0 @ 00b1b8c0 body=[[00b1b8c0, 00b1ba65]]


void FUN_00b1b8c0(int param_1,uint param_2,int *param_3,undefined4 *param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_8;
  
  if (param_5 != '\0') {
    FUN_00b1b4f0();
    FUN_00b1add0(param_1,param_2);
    FUN_00b1b5e0();
  }
  uVar1 = FUN_00b1aef0(param_1,param_2);
  *param_4 = uVar1;
  iVar2 = (*(code *)PTR_FUN_00f01b08)(uVar1,0,4,0,0,0);
  *param_3 = iVar2;
  iVar5 = 0;
  bVar4 = 0;
  iVar2 = 0;
  uVar7 = 0;
  param_4 = (undefined4 *)0x0;
  if (param_2 != 0) {
    _param_5 = 3;
    do {
      uVar6 = (uint)*(byte *)(uVar7 + param_1);
      if ((((uVar6 == *(ushort *)(in_ECX + 0x22)) && (_param_5 < param_2)) &&
          (*(byte *)(uVar7 + 1 + param_1) == uVar6)) &&
         ((*(byte *)(uVar7 + 2 + param_1) == uVar6 && (*(byte *)(uVar7 + 3 + param_1) == uVar6)))) {
        uVar7 = uVar7 + 3;
        _param_5 = _param_5 + 3;
        uVar6 = 0x100;
      }
      uVar3 = (uint)*(byte *)(*(int *)(in_ECX + 0x10) + 1 + uVar6 * 8);
      uStack_8 = uVar3;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uStack_8 = uStack_8 - 1;
        if ((*(uint *)(*(int *)(in_ECX + 0x10) + 4 + uVar6 * 8) & 1 << ((byte)uStack_8 & 0x1f)) != 0
           ) {
          bVar4 = bVar4 | '\x01' << ((byte)iVar2 & 0x1f);
        }
        iVar2 = iVar2 + 1;
        if (iVar2 == 8) {
          *(byte *)(*param_3 + (int)param_4) = bVar4;
          param_4 = (undefined4 *)((int)param_4 + 1);
          bVar4 = 0;
          iVar2 = 0;
        }
        iVar5 = (int)param_4;
      }
      _param_5 = _param_5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
  }
  uVar7 = (uint)*(byte *)(*(int *)(in_ECX + 0x10) + 0x809);
  uVar6 = uVar7;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar6 = uVar6 - 1;
    if ((*(uint *)(*(int *)(in_ECX + 0x10) + 0x80c) & 1 << ((byte)uVar6 & 0x1f)) != 0) {
      bVar4 = bVar4 | '\x01' << ((byte)iVar2 & 0x1f);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 8) {
      *(byte *)(*param_3 + iVar5) = bVar4;
      iVar5 = iVar5 + 1;
      bVar4 = 0;
      iVar2 = 0;
    }
  }
  if (iVar2 != 0) {
    *(byte *)(*param_3 + iVar5) = bVar4;
  }
  return;
}

