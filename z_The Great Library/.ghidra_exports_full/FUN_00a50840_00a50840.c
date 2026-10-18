// FUN_00a50840 @ 00a50840 body=[[00a50840, 00a508f4]]


void FUN_00a50840(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int local_8;
  
  if (*(char *)(in_ECX + 0x128) == '\0') {
    *(undefined1 *)(in_ECX + 0x128) = 1;
    local_8 = 0;
    if (0 < (int)(*(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) & 0xfffffffcU)) {
      do {
        puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xe4) + local_8 * 4);
        puVar2 = (undefined4 *)param_1[1];
        if ((puVar1 < puVar2) && (puVar3 = (undefined4 *)*param_1, puVar3 <= puVar1)) {
          if (puVar2 == (undefined4 *)param_1[2]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[1] =
                 *(undefined4 *)(*param_1 + ((int)puVar1 - (int)puVar3 >> 2) * 4);
          }
        }
        else {
          if (puVar2 == (undefined4 *)param_1[2]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[1] = *puVar1;
          }
        }
        param_1[1] = param_1[1] + 4;
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) >> 2);
    }
  }
  return;
}

