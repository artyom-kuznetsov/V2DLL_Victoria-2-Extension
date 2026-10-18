// FUN_009503d0 @ 009503d0 body=[[009503d0, 00950671]]


undefined4 * FUN_009503d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(), iVar1 = DAT_012586dc, cVar2 != '\0'
     )) {
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
    iVar3 = *(int *)(*(int *)(iVar3 + 0xbcc) + 0x28c) + *(int *)(iVar3 + 0xea0);
    piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
    if (piVar7 != (int *)0x0) {
      do {
        iVar5 = *piVar7;
        piVar7 = (int *)piVar7[2];
        iVar8 = 0;
        iVar4 = 0;
        if (iVar5 < 0x8a2) {
          if (iVar5 == 0x8a1) {
            iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xb4);
            iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x104);
          }
          else if (iVar5 == 0x264) {
            iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xc4);
            iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x114);
          }
          else if (iVar5 == 0x6c2) {
            iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 200);
            iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x118);
          }
        }
        else if (iVar5 < 0xa30) {
          if (iVar5 == 0xa2f) {
            iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xbc);
            iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x10c);
          }
          else {
            switch(iVar5) {
            case 0x8a2:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0x98);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xe8);
              break;
            case 0x8a3:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0x8c);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xdc);
              break;
            case 0x8a4:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xb8);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x108);
              break;
            case 0x8a5:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xa4);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xf4);
              break;
            case 0x8a7:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0x90);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xe0);
              break;
            case 0x8a8:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xa8);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xf8);
              break;
            case 0x8a9:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xb0);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x100);
              break;
            case 0x8aa:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0x9c);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xec);
              break;
            case 0x8da:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xac);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xfc);
              break;
            case 0x942:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xa0);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xf0);
              break;
            case 0x975:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xcc);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x11c);
              break;
            case 0x976:
              iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xd0);
              iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x120);
            }
          }
        }
        else if (iVar5 == 0xa30) {
          iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xc0);
          iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0x110);
        }
        else if (iVar5 == 0xa38) {
          iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0x94);
          iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xe4);
        }
        else if (iVar5 == 0xa4c) {
          iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xd4);
          iVar4 = *(int *)(*(int *)(iVar1 + 0x30) + 0xd8);
        }
        uVar9 = __allmul(iVar4,iVar4 >> 0x1f,iVar3,iVar3 >> 0x1f);
        iVar5 = __alldiv(uVar9,1000,0);
        if (iVar5 < iVar8) {
          iVar5 = iVar8;
        }
        local_8 = local_8 + iVar5;
      } while (piVar7 != (int *)0x0);
    }
  }
  uVar6 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xc) + 0xf8) * (longlong)local_8,1000,0);
  *param_2 = uVar6;
  return param_2;
}

