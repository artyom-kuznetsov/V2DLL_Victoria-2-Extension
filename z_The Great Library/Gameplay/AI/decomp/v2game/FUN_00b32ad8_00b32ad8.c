// FUN_00b32ad8 @ 00b32ad8 body=[[00b32ad8, 00b32aed]]


uint FUN_00b32ad8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

