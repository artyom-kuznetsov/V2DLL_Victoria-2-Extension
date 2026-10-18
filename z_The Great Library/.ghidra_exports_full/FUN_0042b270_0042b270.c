// FUN_0042b270 @ 0042b270 body=[[0042b270, 0042b405]]


/* WARNING: Removing unreachable block (ram,0x0042b2d9) */
/* WARNING: Removing unreachable block (ram,0x0042b2e9) */

void FUN_0042b270(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  int extraout_EDX;
  
  iVar3 = DAT_012587e4;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                             *(int *)(*(int *)(param_1 + 8) + 8) * 4) + 0x188);
    if (iVar1 != 0) {
      piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0x5c) * 4) + 0xe44);
      while (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        piVar2 = (int *)piVar2[2];
        *(undefined4 *)(iVar1 + 0x280) = 0;
      }
    }
    if ((*(int *)(*(int *)(param_1 + 8) + 0xc) != 0) && (cVar5 = FUN_0042b440(), cVar5 == '\0')) {
      FUN_00537060(*(undefined4 *)(*(int *)(iVar3 + 4) + *(int *)(extraout_EDX + 0x18) * 4));
      FUN_00537060(*(undefined4 *)
                    (*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 8) + 0x20) * 4));
      iVar3 = DAT_012587e4;
      FUN_00545be0(*(undefined4 *)
                    (*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 8) + 0x18) * 4));
      FUN_00545be0(*(undefined4 *)(*(int *)(iVar3 + 4) + *(int *)(*(int *)(param_1 + 8) + 0x20) * 4)
                  );
      FUN_004cb110();
      FUN_004cbfb0();
    }
  }
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    piVar2 = *(int **)(DAT_012588e8 + 0xb3c);
    do {
      if (piVar2 == (int *)0x0) {
        uVar4 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
        uVar6 = FUN_0046a890(*(undefined4 *)(DAT_012586f4 + 8));
        FUN_00457b00(uVar4,uVar6);
        break;
      }
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
    } while (*(char *)(iVar3 + 0xfd) == '\0');
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  iVar3 = DAT_012588e8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 0xb0c);
  return;
}

