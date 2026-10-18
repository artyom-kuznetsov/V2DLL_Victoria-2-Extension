// FUN_004500c0 @ 004500c0 body=[[004500c0, 004500fa] [00450100, 004501c0]]


void FUN_004500c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int in_EAX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int local_10;
  
  iVar8 = param_2[1] - *param_2 >> 3;
  local_10 = 0;
  if (iVar8 < 1) {
    *(undefined1 *)(param_1 + 0x3bb) = 1;
    return;
  }
  puVar2 = (uint *)(param_1 + 0x2d4 + in_EAX * 0x10);
  do {
    puVar6 = (undefined4 *)puVar2[1];
    puVar1 = (undefined4 *)(*param_2 + local_10 * 8);
    puVar3 = (undefined4 *)*puVar2;
    puVar5 = puVar3;
    if (puVar3 != puVar6) {
      do {
        if (puVar5[1] == puVar1[1]) break;
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar6);
    }
    if ((puVar5 < puVar3) || (puVar6 <= puVar5)) {
      if ((puVar1 < puVar6) && (puVar3 <= puVar1)) {
        iVar9 = (int)puVar1 - (int)puVar3 >> 3;
        if (puVar6 == (undefined4 *)puVar2[2]) {
          FUN_00810820();
        }
        puVar6 = (undefined4 *)puVar2[1];
        if (puVar6 != (undefined4 *)0x0) {
          uVar4 = *puVar2;
          *puVar6 = *(undefined4 *)(uVar4 + iVar9 * 8);
          uVar7 = *(undefined4 *)(uVar4 + 4 + iVar9 * 8);
LAB_00450183:
          puVar6[1] = uVar7;
        }
      }
      else {
        if (puVar6 == (undefined4 *)puVar2[2]) {
          FUN_00810820();
        }
        puVar6 = (undefined4 *)puVar2[1];
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar1;
          uVar7 = puVar1[1];
          goto LAB_00450183;
        }
      }
      puVar2[1] = puVar2[1] + 8;
    }
    local_10 = local_10 + 1;
    if (iVar8 <= local_10) {
      *(undefined1 *)(param_1 + 0x3bb) = 1;
      return;
    }
  } while( true );
}

