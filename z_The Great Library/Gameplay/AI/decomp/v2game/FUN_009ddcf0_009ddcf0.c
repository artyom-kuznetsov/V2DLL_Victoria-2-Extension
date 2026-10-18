// FUN_009ddcf0 @ 009ddcf0 body=[[009ddcf0, 009ddd93]]


void FUN_009ddcf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int *in_ECX;
  
  FUN_00408ed0(param_1,0,0xffffffff);
  FUN_00408ed0(param_2,0,0xffffffff);
  FUN_00408ed0(param_3,0,0xffffffff);
  *(undefined2 *)((int)in_ECX + 0x1ae) = (undefined2)param_5;
  in_ECX[0x6d] = param_7;
  *(short *)(in_ECX + 0x6b) = (short)param_4;
  in_ECX[0x6c] = param_6;
  (**(code **)(*in_ECX + 0xf0))
            (in_ECX[0x7d],in_ECX + 0x6f,in_ECX + 0x76,in_ECX + 0x61,param_4,param_5,param_6,param_7,
             param_8,param_9);
  return;
}

