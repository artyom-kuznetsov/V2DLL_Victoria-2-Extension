// FUN_009aa260 @ 009aa260 body=[[009aa260, 009aa44d]]


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_009aa260(undefined4 *param_1,undefined4 *param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *local_14 [4];
  
  local_14[2] = &LAB_00b3a856;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_14[3] = (void *)0x1;
  puVar6 = (undefined4 *)param_2[1];
LAB_009aa2a6:
  do {
    if ((puVar6 < (undefined4 *)param_2[1]) || ((undefined4 *)param_2[2] <= puVar6)) break;
    local_14[0] = (void *)(**(code **)(*(int *)*puVar6 + 4))();
    ppvVar1 = (void **)param_1[2];
    if (local_14 < ppvVar1) {
      ppvVar2 = (void **)param_1[1];
      if (ppvVar2 <= local_14) {
        if (ppvVar1 == (void **)param_1[3]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[2] =
               *(undefined4 *)(param_1[1] + ((int)local_14 - (int)ppvVar2 >> 2) * 4);
        }
        param_1[2] = param_1[2] + 4;
        puVar6 = puVar6 + 1;
        goto LAB_009aa2a6;
      }
    }
    if (ppvVar1 == (void **)param_1[3]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[2] = local_14[0];
    }
    param_1[2] = param_1[2] + 4;
    puVar6 = puVar6 + 1;
  } while( true );
  puVar6 = (undefined4 *)param_2[5];
LAB_009aa330:
  do {
    if ((puVar6 < (undefined4 *)param_2[5]) || ((undefined4 *)param_2[6] <= puVar6)) {
      ExceptionList = local_14[1];
      return param_1;
    }
    pvVar3 = (void *)(**(code **)(*(int *)*puVar6 + 4))();
    ppvVar1 = (void **)param_1[6];
    local_14[0] = pvVar3;
    if ((local_14 < ppvVar1) && (ppvVar2 = (void **)param_1[5], ppvVar2 <= local_14)) {
      if (ppvVar1 == (void **)param_1[7]) {
        uVar4 = (int)ppvVar1 - (int)ppvVar2 >> 2;
        if (0x3ffffffe < uVar4) {
LAB_009aa42e:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar4 = uVar4 + 1;
        uVar5 = (int)param_1[7] - (int)ppvVar2 >> 2;
        if (uVar5 < uVar4) {
          if (0x3fffffff - (uVar5 >> 1) < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          FUN_004bf300(uVar5);
        }
      }
      if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[6] =
             *(undefined4 *)(param_1[5] + ((int)local_14 - (int)ppvVar2 >> 2) * 4);
        param_1[6] = param_1[6] + 4;
        puVar6 = puVar6 + 1;
        goto LAB_009aa330;
      }
    }
    else {
      if (ppvVar1 == (void **)param_1[7]) {
        uVar4 = (int)ppvVar1 - param_1[5] >> 2;
        if (0x3ffffffe < uVar4) goto LAB_009aa42e;
        uVar4 = uVar4 + 1;
        uVar5 = (int)param_1[7] - param_1[5] >> 2;
        if (uVar5 < uVar4) {
          if (0x3fffffff - (uVar5 >> 1) < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          FUN_004bf300(uVar5);
        }
      }
      if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[6] = pvVar3;
      }
    }
    param_1[6] = param_1[6] + 4;
    puVar6 = puVar6 + 1;
  } while( true );
}

