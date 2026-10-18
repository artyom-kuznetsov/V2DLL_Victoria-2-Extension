// FUN_00aaa630 @ 00aaa630 body=[[00aaa630, 00aaa6cc] [00aaa6d0, 00aaa715]]


void FUN_00aaa630(undefined4 param_1,char *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)param_2;
  if (*(int *)((int)param_2 + 0x18) == 0) {
    param_2 = "<unknown>";
  }
  else {
    puVar1 = (uint *)((int)param_2 + 0x1c);
    param_2 = (char *)((int)param_2 + 8);
    if (0xf < *puVar1) {
      param_2 = *(char **)param_2;
    }
  }
  if (in_ECX[0xb] != 0) {
    lua_pushstring(param_1,"Ambiguous, candidates:\n");
    iVar4 = 0;
    puVar2 = in_ECX;
    if (0 < (int)in_ECX[0xb]) {
      do {
        if (iVar4 != 0) {
          lua_pushstring(param_1,&DAT_00dee2cc);
        }
        (**(code **)(*(int *)puVar2[1] + 8))(param_1,param_2);
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < (int)in_ECX[0xb]);
    }
    lua_concat(param_1,in_ECX[0xb] * 2);
    return;
  }
  lua_pushstring(param_1,"No matching overload found, candidates:\n");
  iVar4 = 0;
  do {
    if (iVar4 != 0) {
      lua_pushstring(param_1,&DAT_00dee2cc);
    }
    (**(code **)(*piVar3 + 8))(param_1,param_2);
    piVar3 = (int *)piVar3[9];
    iVar4 = iVar4 + 1;
  } while (piVar3 != (int *)0x0);
  lua_concat(param_1,iVar4 * 2);
  return;
}

