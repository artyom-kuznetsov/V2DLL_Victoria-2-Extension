// FUN_00997280 @ 00997280 body=[[00997280, 009972ec] [009972f0, 009973af]]


void FUN_00997280(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int local_10;
  uint local_c;
  int *local_8;
  
  FUN_0099e260();
  while ((local_c < *(uint *)(local_10 + 4) && (local_8 != (int *)0x0))) {
    piVar3 = (int *)*local_8;
    if (((piVar3[0x14] == param_2) && ((char)piVar3[0x15] == '\0')) &&
       ((piVar3[0x14] == 0 || (piVar3[0x14] == param_2)))) {
      pcVar1 = *(code **)(*piVar3 + 0x18);
      *(undefined1 *)(piVar3 + 0x15) = 1;
      (*pcVar1)(param_1);
    }
    local_8 = (int *)local_8[1];
    if (local_8 == (int *)0x0) {
      uVar5 = *(uint *)(local_10 + 4);
      local_c = local_c + 1;
      if (local_c < uVar5) {
        piVar3 = (int *)(*(int *)(local_10 + 8) + local_c * 4);
        do {
          if (*piVar3 != 0) break;
          local_c = local_c + 1;
          piVar3 = piVar3 + 1;
        } while (local_c < uVar5);
        if (local_c < uVar5) {
          local_8 = *(int **)(*(int *)(local_10 + 8) + local_c * 4);
        }
      }
    }
  }
  uVar5 = 0;
  if (*(uint *)(param_1 + 0x6bcf4) != 0) {
    piVar3 = *(int **)(param_1 + 0x6bcf8);
    do {
      if (*piVar3 != 0) break;
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x6bcf4));
  }
  do {
    piVar3 = *(int **)(*(int *)(param_1 + 0x6bcf8) + uVar5 * 4);
    do {
      do {
        do {
          if ((*(uint *)(param_1 + 0x6bcf4) <= uVar5) || (piVar3 == (int *)0x0)) {
            return;
          }
          piVar4 = (int *)*piVar3;
          if (((piVar4[0x14] == param_2) && ((char)piVar4[0x15] == '\0')) &&
             ((piVar4[0x14] == 0 || (piVar4[0x14] == param_2)))) {
            pcVar1 = *(code **)(*piVar4 + 0x18);
            *(undefined1 *)(piVar4 + 0x15) = 1;
            (*pcVar1)(param_1);
            (**(code **)(*(int *)*piVar3 + 0x50))(param_1 + 0x6bd48);
          }
          piVar3 = (int *)piVar3[1];
        } while (piVar3 != (int *)0x0);
        uVar2 = *(uint *)(param_1 + 0x6bcf4);
        uVar5 = uVar5 + 1;
      } while (uVar2 <= uVar5);
      piVar4 = (int *)(*(int *)(param_1 + 0x6bcf8) + uVar5 * 4);
      do {
        if (*piVar4 != 0) break;
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar2);
    } while (uVar2 <= uVar5);
  } while( true );
}

