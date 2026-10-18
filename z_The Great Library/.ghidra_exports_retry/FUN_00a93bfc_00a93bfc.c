// FUN_00a93bfc @ 00a93bfc  (requested 00A93BFC, first bytes: 8B FF 55 8B EC 8B 45 08)


char * FUN_00a93bfc(int param_1)

{
  if (param_1 < -0x7ff6eff5) {
    if (param_1 == -0x7ff6eff6) {
      return "CRYPT_E_NOT_DECRYPTED";
    }
    if (param_1 < -0x7ff8f9af) {
      if (param_1 == -0x7ff8f9b0) {
LAB_00a9b579:
        return "ERROR_INVALID_FIELD";
      }
      if (param_1 < -0x7ffbbfe1) {
        if (param_1 == -0x7ffbbfe2) {
          return "WBEMMOF_E_INVALID_FILE";
        }
        if (param_1 < -0x7ffbfe0f) {
          if (param_1 == -0x7ffbfe10) {
            return "CO_E_NOTINITIALIZED";
          }
          if (param_1 < -0x7ffd7742) {
            if (param_1 == -0x7ffd7743) {
              return "TYPE_E_BADMODULEKIND";
            }
            if (param_1 < -0x7ffefef0) {
              if (param_1 == -0x7ffefef1) {
                return "RPC_E_THREAD_NOT_INIT";
              }
              if (param_1 < -0x7fffbfd6) {
                if (param_1 == -0x7fffbfd7) {
                  return "CO_E_ASYNC_WORK_REJECTED";
                }
                if (param_1 < -0x7fffbfeb) {
                  if (param_1 == -0x7fffbfec) {
                    return "CO_E_BAD_SERVER_NAME";
                  }
                  if (param_1 < -0x7fffbff5) {
                    if (param_1 == -0x7fffbff6) {
                      return "CO_E_INIT_RPC_CHANNEL";
                    }
                    if (param_1 < -0x7fffbffa) {
                      if (param_1 == -0x7fffbffb) {
                        return "E_FAIL";
                      }
                      if (param_1 == -0x7ffffff6) {
                        return "E_PENDING";
                      }
                      if (param_1 == -0x7fffbfff) {
                        return "E_NOTIMPL";
                      }
                      if (param_1 == -0x7fffbffe) {
                        return "E_NOINTERFACE";
                      }
                      if (param_1 == -0x7fffbffd) {
                        return "E_POINTER";
                      }
                      if (param_1 == -0x7fffbffc) {
                        return "E_ABORT";
                      }
                    }
                    else {
                      if (param_1 == -0x7fffbffa) {
                        return "CO_E_INIT_TLS";
                      }
                      if (param_1 == -0x7fffbff9) {
                        return "CO_E_INIT_SHARED_ALLOCATOR";
                      }
                      if (param_1 == -0x7fffbff8) {
                        return "CO_E_INIT_MEMORY_ALLOCATOR";
                      }
                      if (param_1 == -0x7fffbff7) {
                        return "CO_E_INIT_CLASS_CACHE";
                      }
                    }
                  }
                  else {
                    switch(param_1) {
                    case -0x7fffbff5:
                      return "CO_E_INIT_TLS_SET_CHANNEL_CONTROL";
                    case -0x7fffbff4:
                      return "CO_E_INIT_TLS_CHANNEL_CONTROL";
                    case -0x7fffbff3:
                      return "CO_E_INIT_UNACCEPTED_USER_ALLOCATOR";
                    case -0x7fffbff2:
                      return "CO_E_INIT_SCM_MUTEX_EXISTS";
                    case -0x7fffbff1:
                      return "CO_E_INIT_SCM_FILE_MAPPING_EXISTS";
                    case -0x7fffbff0:
                      return "CO_E_INIT_SCM_MAP_VIEW_OF_FILE";
                    case -0x7fffbfef:
                      return "CO_E_INIT_SCM_EXEC_FAILURE";
                    case -0x7fffbfee:
                      return "CO_E_INIT_ONLY_SINGLE_THREADED";
                    case -0x7fffbfed:
                      return "CO_E_CANT_REMOTE";
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case -0x7fffbfeb:
                    return "CO_E_WRONG_SERVER_IDENTITY";
                  case -0x7fffbfea:
                    return "CO_E_OLE1DDE_DISABLED";
                  case -0x7fffbfe9:
                    return "CO_E_RUNAS_SYNTAX";
                  case -0x7fffbfe8:
                    return "CO_E_CREATEPROCESS_FAILURE";
                  case -0x7fffbfe7:
                    return "CO_E_RUNAS_CREATEPROCESS_FAILURE";
                  case -0x7fffbfe6:
                    return "CO_E_RUNAS_LOGON_FAILURE";
                  case -0x7fffbfe5:
                    return "CO_E_LAUNCH_PERMSSION_DENIED";
                  case -0x7fffbfe4:
                    return "CO_E_START_SERVICE_FAILURE";
                  case -0x7fffbfe3:
                    return "CO_E_REMOTE_COMMUNICATION_FAILURE";
                  case -0x7fffbfe2:
                    return "CO_E_SERVER_START_TIMEOUT";
                  case -0x7fffbfe1:
                    return "CO_E_CLSREG_INCONSISTENT";
                  case -0x7fffbfe0:
                    return "CO_E_IIDREG_INCONSISTENT";
                  case -0x7fffbfdf:
                    return "CO_E_NOT_SUPPORTED";
                  case -0x7fffbfde:
                    return "CO_E_RELOAD_DLL";
                  case -0x7fffbfdd:
                    return "CO_E_MSI_ERROR";
                  case -0x7fffbfdc:
                    return "CO_E_ATTEMPT_TO_CREATE_OUTSIDE_CLIENT_CONTEXT";
                  case -0x7fffbfdb:
                    return "CO_E_SERVER_PAUSED";
                  case -0x7fffbfda:
                    return "CO_E_SERVER_NOT_PAUSED";
                  case -0x7fffbfd9:
                    return "CO_E_CLASS_DISABLED";
                  case -0x7fffbfd8:
                    return "CO_E_CLRNOTAVAILABLE";
                  }
                }
              }
              else if (param_1 < -0x7ffefff1) {
                if (param_1 == -0x7ffefff2) {
                  return "RPC_E_SERVER_CANTUNMARSHAL_DATA";
                }
                if (param_1 < -0x7ffefffb) {
                  if (param_1 == -0x7ffefffc) {
                    return "RPC_E_CANTCALLOUT_INASYNCCALL";
                  }
                  if (param_1 < -0x7fffbfcc) {
                    if (param_1 == -0x7fffbfcd) {
                      return "CO_E_MALFORMED_SPN";
                    }
                    if (param_1 == -0x7fffbfd6) {
                      return "CO_E_SERVER_INIT_TIMEOUT";
                    }
                    if (param_1 == -0x7fffbfd5) {
                      return "CO_E_NO_SECCTX_IN_ACTIVATE";
                    }
                    if (param_1 == -0x7fffbfd0) {
                      return "CO_E_TRACKER_CONFIG";
                    }
                    if (param_1 == -0x7fffbfcf) {
                      return "CO_E_THREADPOOL_CONFIG";
                    }
                    if (param_1 == -0x7fffbfce) {
                      return "CO_E_SXS_CONFIG";
                    }
                  }
                  else {
                    if (param_1 == -0x7fff0001) {
                      return "E_UNEXPECTED";
                    }
                    if (param_1 == -0x7ffeffff) {
                      return "RPC_E_CALL_REJECTED";
                    }
                    if (param_1 == -0x7ffefffe) {
                      return "RPC_E_CALL_CANCELED";
                    }
                    if (param_1 == -0x7ffefffd) {
                      return "RPC_E_CANTPOST_INSENDCALL";
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case -0x7ffefffb:
                    return "RPC_E_CANTCALLOUT_INEXTERNALCALL";
                  case -0x7ffefffa:
                    return "RPC_E_CONNECTION_TERMINATED";
                  case -0x7ffefff9:
                    return "RPC_E_SERVER_DIED";
                  case -0x7ffefff8:
                    return "RPC_E_CLIENT_DIED";
                  case -0x7ffefff7:
                    return "RPC_E_INVALID_DATAPACKET";
                  case -0x7ffefff6:
                    return "RPC_E_CANTTRANSMIT_CALL";
                  case -0x7ffefff5:
                    return "RPC_E_CLIENT_CANTMARSHAL_DATA";
                  case -0x7ffefff4:
                    return "RPC_E_CLIENT_CANTUNMARSHAL_DATA";
                  case -0x7ffefff3:
                    return "RPC_E_SERVER_CANTMARSHAL_DATA";
                  }
                }
              }
              else if (param_1 < -0x7ffefefa) {
                if (param_1 == -0x7ffefefb) {
                  return "RPC_E_SERVERFAULT";
                }
                if (param_1 < -0x7ffefeff) {
                  if (param_1 == -0x7ffeff00) {
                    return "RPC_E_SYS_CALL_FAILED";
                  }
                  if (param_1 == -0x7ffefff1) {
                    return "RPC_E_INVALID_DATA";
                  }
                  if (param_1 == -0x7ffefff0) {
                    return "RPC_E_INVALID_PARAMETER";
                  }
                  if (param_1 == -0x7ffeffef) {
                    return "RPC_E_CANTCALLOUT_AGAIN";
                  }
                  if (param_1 == -0x7ffeffee) {
                    return "RPC_E_SERVER_DIED_DNE";
                  }
                }
                else {
                  if (param_1 == -0x7ffefeff) {
                    return "RPC_E_OUT_OF_RESOURCES";
                  }
                  if (param_1 == -0x7ffefefe) {
                    return "RPC_E_ATTEMPTED_MULTITHREAD";
                  }
                  if (param_1 == -0x7ffefefd) {
                    return "RPC_E_NOT_REGISTERED";
                  }
                  if (param_1 == -0x7ffefefc) {
                    return "RPC_E_FAULT";
                  }
                }
              }
              else {
                switch(param_1) {
                case -0x7ffefefa:
                  return "RPC_E_CHANGED_MODE";
                case -0x7ffefef9:
                  return "RPC_E_INVALIDMETHOD";
                case -0x7ffefef8:
                  return "RPC_E_DISCONNECTED";
                case -0x7ffefef7:
                  return "RPC_E_RETRY";
                case -0x7ffefef6:
                  return "RPC_E_SERVERCALL_RETRYLATER";
                case -0x7ffefef5:
                  return "RPC_E_SERVERCALL_REJECTED";
                case -0x7ffefef4:
                  return "RPC_E_INVALID_CALLDATA";
                case -0x7ffefef3:
                  return "RPC_E_CANTCALLOUT_ININPUTSYNCCALL";
                case -0x7ffefef2:
                  return "RPC_E_WRONG_THREAD";
                }
              }
            }
            else if (param_1 < -0x7ffe0000) {
              if (param_1 == -0x7ffe0001) {
                return "RPC_E_UNEXPECTED";
              }
              switch(param_1) {
              case -0x7ffefef0:
                return "RPC_E_VERSION_MISMATCH";
              case -0x7ffefeef:
                return "RPC_E_INVALID_HEADER";
              case -0x7ffefeee:
                return "RPC_E_INVALID_EXTENSION";
              case -0x7ffefeed:
                return "RPC_E_INVALID_IPID";
              case -0x7ffefeec:
                return "RPC_E_INVALID_OBJECT";
              case -0x7ffefeeb:
                return "RPC_S_CALLPENDING";
              case -0x7ffefeea:
                return "RPC_S_WAITONTIMER";
              case -0x7ffefee9:
                return "RPC_E_CALL_COMPLETE";
              case -0x7ffefee8:
                return "RPC_E_UNSECURE_CALL";
              case -0x7ffefee7:
                return "RPC_E_TOO_LATE";
              case -0x7ffefee6:
                return "RPC_E_NO_GOOD_SECURITY_PACKAGES";
              case -0x7ffefee5:
                return "RPC_E_ACCESS_DENIED";
              case -0x7ffefee4:
                return "RPC_E_REMOTE_DISABLED";
              case -0x7ffefee3:
                return "RPC_E_INVALID_OBJREF";
              case -0x7ffefee2:
                return "RPC_E_NO_CONTEXT";
              case -0x7ffefee1:
                return "RPC_E_TIMEOUT";
              case -0x7ffefee0:
                return "RPC_E_NO_SYNC";
              case -0x7ffefedf:
                return "RPC_E_FULLSIC_REQUIRED";
              case -0x7ffefede:
                return "RPC_E_INVALID_STD_NAME";
              case -0x7ffefedd:
                return "CO_E_FAILEDTOIMPERSONATE";
              case -0x7ffefedc:
                return "CO_E_FAILEDTOGETSECCTX";
              case -0x7ffefedb:
                return "CO_E_FAILEDTOOPENTHREADTOKEN";
              case -0x7ffefeda:
                return "CO_E_FAILEDTOGETTOKENINFO";
              case -0x7ffefed9:
                return "CO_E_TRUSTEEDOESNTMATCHCLIENT";
              case -0x7ffefed8:
                return "CO_E_FAILEDTOQUERYCLIENTBLANKET";
              case -0x7ffefed7:
                return "CO_E_FAILEDTOSETDACL";
              case -0x7ffefed6:
                return "CO_E_ACCESSCHECKFAILED";
              case -0x7ffefed5:
                return "CO_E_NETACCESSAPIFAILED";
              case -0x7ffefed4:
                return "CO_E_WRONGTRUSTEENAMESYNTAX";
              case -0x7ffefed3:
                return "CO_E_INVALIDSID";
              case -0x7ffefed2:
                return "CO_E_CONVERSIONFAILED";
              case -0x7ffefed1:
                return "CO_E_NOMATCHINGSIDFOUND";
              case -0x7ffefed0:
                return "CO_E_LOOKUPACCSIDFAILED";
              case -0x7ffefecf:
                return "CO_E_NOMATCHINGNAMEFOUND";
              case -0x7ffefece:
                return "CO_E_LOOKUPACCNAMEFAILED";
              case -0x7ffefecd:
                return "CO_E_SETSERLHNDLFAILED";
              case -0x7ffefecc:
                return "CO_E_FAILEDTOGETWINDIR";
              case -0x7ffefecb:
                return "CO_E_PATHTOOLONG";
              case -0x7ffefeca:
                return "CO_E_FAILEDTOGENUUID";
              case -0x7ffefec9:
                return "CO_E_FAILEDTOCREATEFILE";
              case -0x7ffefec8:
                return "CO_E_FAILEDTOCLOSEHANDLE";
              case -0x7ffefec7:
                return "CO_E_EXCEEDSYSACLLIMIT";
              case -0x7ffefec6:
                return "CO_E_ACESINWRONGORDER";
              case -0x7ffefec5:
                return "CO_E_INCOMPATIBLESTREAMVERSION";
              case -0x7ffefec4:
                return "CO_E_FAILEDTOOPENPROCESSTOKEN";
              case -0x7ffefec3:
                return "CO_E_DECODEFAILED";
              case -0x7ffefec1:
                return "CO_E_ACNOTINITIALIZED";
              case -0x7ffefec0:
                return "CO_E_CANCEL_DISABLED";
              }
            }
            else if (param_1 < -0x7ffd7fe9) {
              if (param_1 == -0x7ffd7fea) {
                return "TYPE_E_BUFFERTOOSMALL";
              }
              switch(param_1) {
              case -0x7ffdffff:
                return "DISP_E_UNKNOWNINTERFACE";
              case -0x7ffdfffd:
                return "DISP_E_MEMBERNOTFOUND";
              case -0x7ffdfffc:
                return "DISP_E_PARAMNOTFOUND";
              case -0x7ffdfffb:
                return "DISP_E_TYPEMISMATCH";
              case -0x7ffdfffa:
                return "DISP_E_UNKNOWNNAME";
              case -0x7ffdfff9:
                return "DISP_E_NONAMEDARGS";
              case -0x7ffdfff8:
                return "DISP_E_BADVARTYPE";
              case -0x7ffdfff7:
                return "DISP_E_EXCEPTION";
              case -0x7ffdfff6:
                return "DISP_E_OVERFLOW";
              case -0x7ffdfff5:
                return "DISP_E_BADINDEX";
              case -0x7ffdfff4:
                return "DISP_E_UNKNOWNLCID";
              case -0x7ffdfff3:
                return "DISP_E_ARRAYISLOCKED";
              case -0x7ffdfff2:
                return "DISP_E_BADPARAMCOUNT";
              case -0x7ffdfff1:
                return "DISP_E_PARAMNOTOPTIONAL";
              case -0x7ffdfff0:
                return "DISP_E_BADCALLEE";
              case -0x7ffdffef:
                return "DISP_E_NOTACOLLECTION";
              case -0x7ffdffee:
                return "DISP_E_DIVBYZERO";
              case -0x7ffdffed:
                return "DISP_E_BUFFERTOOSMALL";
              }
            }
            else {
              switch(param_1) {
              case -0x7ffd7fe9:
                return "TYPE_E_FIELDNOTFOUND";
              case -0x7ffd7fe8:
                return "TYPE_E_INVDATAREAD";
              case -0x7ffd7fe7:
                return "TYPE_E_UNSUPFORMAT";
              case -0x7ffd7fe4:
                return "TYPE_E_REGISTRYACCESS";
              case -0x7ffd7fe3:
                return "TYPE_E_LIBNOTREGISTERED";
              case -0x7ffd7fd9:
                return "TYPE_E_UNDEFINEDTYPE";
              case -0x7ffd7fd8:
                return "TYPE_E_QUALIFIEDNAMEDISALLOWED";
              case -0x7ffd7fd7:
                return "TYPE_E_INVALIDSTATE";
              case -0x7ffd7fd6:
                return "TYPE_E_WRONGTYPEKIND";
              case -0x7ffd7fd5:
                return "TYPE_E_ELEMENTNOTFOUND";
              case -0x7ffd7fd4:
                return "TYPE_E_AMBIGUOUSNAME";
              case -0x7ffd7fd3:
                return "TYPE_E_NAMECONFLICT";
              case -0x7ffd7fd2:
                return "TYPE_E_UNKNOWNLCID";
              case -0x7ffd7fd1:
                return "TYPE_E_DLLFUNCTIONNOTFOUND";
              }
            }
          }
          else if (param_1 < -0x7ffbff95) {
            if (param_1 == -0x7ffbff96) {
              return "DV_E_CLIPFORMAT";
            }
            if (param_1 < -0x7ffcfef9) {
              if (param_1 == -0x7ffcfefa) {
                return "STG_E_SHAREREQUIRED";
              }
              if (param_1 < -0x7ffcffe6) {
                if (param_1 == -0x7ffcffe7) {
                  return "STG_E_SEEKERROR";
                }
                if (param_1 < -0x7ffcfffe) {
                  if (param_1 == -0x7ffcffff) {
                    return "STG_E_INVALIDFUNCTION";
                  }
                  if (param_1 < -0x7ffd735d) {
                    if (param_1 == -0x7ffd735e) {
                      return "TYPE_E_IOERROR";
                    }
                    if (param_1 == -0x7ffd773b) {
                      return "TYPE_E_SIZETOOBIG";
                    }
                    if (param_1 == -0x7ffd773a) {
                      return "TYPE_E_DUPLICATEID";
                    }
                    if (param_1 == -0x7ffd7731) {
                      return "TYPE_E_INVALIDID";
                    }
                    if (param_1 == -0x7ffd7360) {
                      return "TYPE_E_TYPEMISMATCH";
                    }
                    if (param_1 == -0x7ffd735f) {
                      return "TYPE_E_OUTOFBOUNDS";
                    }
                  }
                  else {
                    if (param_1 == -0x7ffd735d) {
                      return "TYPE_E_CANTCREATETMPFILE";
                    }
                    if (param_1 == -0x7ffd63b6) {
                      return "TYPE_E_CANTLOADLIBRARY";
                    }
                    if (param_1 == -0x7ffd637d) {
                      return "TYPE_E_INCONSISTENTPROPFUNCS";
                    }
                    if (param_1 == -0x7ffd637c) {
                      return "TYPE_E_CIRCULARTYPE";
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case -0x7ffcfffe:
                    return "STG_E_FILENOTFOUND";
                  case -0x7ffcfffd:
                    return "STG_E_PATHNOTFOUND";
                  case -0x7ffcfffc:
                    return "STG_E_TOOMANYOPENFILES";
                  case -0x7ffcfffb:
                    return "STG_E_ACCESSDENIED";
                  case -0x7ffcfffa:
                    return "STG_E_INVALIDHANDLE";
                  case -0x7ffcfff8:
                    return "STG_E_INSUFFICIENTMEMORY";
                  case -0x7ffcfff7:
                    return "STG_E_INVALIDPOINTER";
                  case -0x7ffcffee:
                    return "STG_E_NOMOREFILES";
                  case -0x7ffcffed:
                    return "STG_E_DISKISWRITEPROTECTED";
                  }
                }
              }
              else if (param_1 < -0x7ffcff03) {
                if (param_1 == -0x7ffcff04) {
                  return "STG_E_INVALIDNAME";
                }
                if (param_1 < -0x7ffcffa8) {
                  if (param_1 == -0x7ffcffa9) {
                    return "STG_E_INVALIDPARAMETER";
                  }
                  if (param_1 == -0x7ffcffe3) {
                    return "STG_E_WRITEFAULT";
                  }
                  if (param_1 == -0x7ffcffe2) {
                    return "STG_E_READFAULT";
                  }
                  if (param_1 == -0x7ffcffe0) {
                    return "STG_E_SHAREVIOLATION";
                  }
                  if (param_1 == -0x7ffcffdf) {
                    return "STG_E_LOCKVIOLATION";
                  }
                  if (param_1 == -0x7ffcffb0) {
                    return "STG_E_FILEALREADYEXISTS";
                  }
                }
                else {
                  if (param_1 == -0x7ffcff90) {
                    return "STG_E_MEDIUMFULL";
                  }
                  if (param_1 == -0x7ffcff10) {
                    return "STG_E_PROPSETMISMATCHED";
                  }
                  if (param_1 == -0x7ffcff06) {
                    return "STG_E_ABNORMALAPIEXIT";
                  }
                  if (param_1 == -0x7ffcff05) {
                    return "STG_E_INVALIDHEADER";
                  }
                }
              }
              else {
                switch(param_1) {
                case -0x7ffcff03:
                  return "STG_E_UNKNOWN";
                case -0x7ffcff02:
                  return "STG_E_UNIMPLEMENTEDFUNCTION";
                case -0x7ffcff01:
                  return "STG_E_INVALIDFLAG";
                case -0x7ffcff00:
                  return "STG_E_INUSE";
                case -0x7ffcfeff:
                  return "STG_E_NOTCURRENT";
                case -0x7ffcfefe:
                  return "STG_E_REVERTED";
                case -0x7ffcfefd:
                  return "STG_E_CANTSAVE";
                case -0x7ffcfefc:
                  return "STG_E_OLDFORMAT";
                case -0x7ffcfefb:
                  return "STG_E_OLDDLL";
                }
              }
            }
            else if (param_1 < -0x7ffbfffa) {
              if (param_1 == -0x7ffbfffb) {
                return "OLE_E_NOTRUNNING";
              }
              if (param_1 < -0x7ffcfcf8) {
                if (param_1 == -0x7ffcfcf9) {
                  return "STG_E_CSS_KEY_NOT_PRESENT";
                }
                if (param_1 < -0x7ffcfeed) {
                  if (param_1 == -0x7ffcfeee) {
                    return "STG_E_NOTSIMPLEFORMAT";
                  }
                  if (param_1 == -0x7ffcfef9) {
                    return "STG_E_NOTFILEBASEDSTORAGE";
                  }
                  if (param_1 == -0x7ffcfef8) {
                    return "STG_E_EXTANTMARSHALLINGS";
                  }
                  if (param_1 == -0x7ffcfef7) {
                    return "STG_E_DOCFILECORRUPT";
                  }
                  if (param_1 == -0x7ffcfef0) {
                    return "STG_E_BADBASEADDRESS";
                  }
                  if (param_1 == -0x7ffcfeef) {
                    return "STG_E_DOCFILETOOLARGE";
                  }
                }
                else {
                  if (param_1 == -0x7ffcfdff) {
                    return "STG_E_INCOMPLETE";
                  }
                  if (param_1 == -0x7ffcfdfe) {
                    return "STG_E_TERMINATED";
                  }
                  if (param_1 == -0x7ffcfcfb) {
                    return "STG_E_STATUS_COPY_PROTECTION_FAILURE";
                  }
                  if (param_1 == -0x7ffcfcfa) {
                    return "STG_E_CSS_AUTHENTICATION_FAILURE";
                  }
                }
              }
              else if (param_1 < -0x7ffbffff) {
                if (param_1 == -0x7ffc0000) {
                  return "OLE_E_FIRST";
                }
                if (param_1 == -0x7ffcfcf8) {
                  return "STG_E_CSS_KEY_NOT_ESTABLISHED";
                }
                if (param_1 == -0x7ffcfcf7) {
                  return "STG_E_CSS_SCRAMBLED_SECTOR";
                }
                if (param_1 == -0x7ffcfcf6) {
                  return "STG_E_CSS_REGION_MISMATCH";
                }
                if (param_1 == -0x7ffcfcf5) {
                  return "STG_E_RESETS_EXHAUSTED";
                }
              }
              else {
                if (param_1 == -0x7ffbffff) {
                  return "OLE_E_ADVF";
                }
                if (param_1 == -0x7ffbfffe) {
                  return "OLE_E_ENUM_NOMORE";
                }
                if (param_1 == -0x7ffbfffd) {
                  return "OLE_E_ADVISENOTSUPPORTED";
                }
                if (param_1 == -0x7ffbfffc) {
                  return "OLE_E_NOCONNECTION";
                }
              }
            }
            else if (param_1 < -0x7ffbff9b) {
              if (param_1 == -0x7ffbff9c) {
                return "DV_E_FORMATETC";
              }
              switch(param_1) {
              case -0x7ffbfffa:
                return "OLE_E_NOCACHE";
              case -0x7ffbfff9:
                return "OLE_E_BLANK";
              case -0x7ffbfff8:
                return "OLE_E_CLASSDIFF";
              case -0x7ffbfff7:
                return "OLE_E_CANT_GETMONIKER";
              case -0x7ffbfff6:
                return "OLE_E_CANT_BINDTOSOURCE";
              case -0x7ffbfff5:
                return "OLE_E_STATIC";
              case -0x7ffbfff4:
                return "OLE_E_PROMPTSAVECANCELLED";
              case -0x7ffbfff3:
                return "OLE_E_INVALIDRECT";
              case -0x7ffbfff2:
                return "OLE_E_WRONGCOMPOBJ";
              case -0x7ffbfff1:
                return "OLE_E_INVALIDHWND";
              case -0x7ffbfff0:
                return "OLE_E_NOT_INPLACEACTIVE";
              case -0x7ffbffef:
                return "OLE_E_CANTCONVERT";
              case -0x7ffbffee:
                return "OLE_E_NOSTORAGE";
              }
            }
            else {
              if (param_1 == -0x7ffbff9b) {
                return "DV_E_DVTARGETDEVICE";
              }
              if (param_1 == -0x7ffbff9a) {
                return "DV_E_STGMEDIUM";
              }
              if (param_1 == -0x7ffbff99) {
                return "DV_E_STATDATA";
              }
              if (param_1 == -0x7ffbff98) {
                return "DV_E_LINDEX";
              }
              if (param_1 == -0x7ffbff97) {
                return "DV_E_TYMED";
              }
            }
          }
          else if (param_1 < -0x7ffbfe80) {
            if (param_1 == -0x7ffbfe81) {
              return "CACHE_E_LAST";
            }
            if (param_1 < -0x7ffbfead) {
              if (param_1 == -0x7ffbfeae) {
                return "REGDB_E_KEYMISSING";
              }
              if (param_1 < -0x7ffbfeed) {
                if (param_1 == -0x7ffbfeee) {
                  return "CLASS_E_NOTLICENSED";
                }
                if (param_1 < -0x7ffbfefe) {
                  if (param_1 == -0x7ffbfeff) {
                    return "DRAGDROP_E_ALREADYREGISTERED";
                  }
                  if (param_1 == -0x7ffbff95) {
                    return "DV_E_DVASPECT";
                  }
                  if (param_1 == -0x7ffbff94) {
                    return "DV_E_DVTARGETDEVICE_SIZE";
                  }
                  if (param_1 == -0x7ffbff93) {
                    return "DV_E_NOIVIEWOBJECT";
                  }
                  if (param_1 == -0x7ffbff01) {
                    return "OLE_E_LAST";
                  }
                  if (param_1 == -0x7ffbff00) {
                    return "DRAGDROP_E_FIRST";
                  }
                }
                else {
                  if (param_1 == -0x7ffbfefe) {
                    return "DRAGDROP_E_INVALIDHWND";
                  }
                  if (param_1 == -0x7ffbfef1) {
                    return "DRAGDROP_E_LAST";
                  }
                  if (param_1 == -0x7ffbfef0) {
                    return "CLASSFACTORY_E_FIRST";
                  }
                  if (param_1 == -0x7ffbfeef) {
                    return "CLASS_E_CLASSNOTAVAILABLE";
                  }
                }
              }
              else if (param_1 < -0x7ffbfec0) {
                if (param_1 == -0x7ffbfec1) {
                  return "DATA_E_LAST";
                }
                if (param_1 == -0x7ffbfee1) {
                  return "CLASSFACTORY_E_LAST";
                }
                if (param_1 == -0x7ffbfee0) {
                  return "MARSHAL_E_FIRST";
                }
                if (param_1 == -0x7ffbfed1) {
                  return "MARSHAL_E_LAST";
                }
                if (param_1 == -0x7ffbfed0) {
                  return "DATA_E_FIRST";
                }
              }
              else {
                if (param_1 == -0x7ffbfec0) {
                  return "VIEW_E_FIRST";
                }
                if (param_1 == -0x7ffbfeb1) {
                  return "VIEW_E_LAST";
                }
                if (param_1 == -0x7ffbfeb0) {
                  return "REGDB_E_FIRST";
                }
                if (param_1 == -0x7ffbfeaf) {
                  return "REGDB_E_WRITEREGDB";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ffbfead:
                return "REGDB_E_INVALIDVALUE";
              case -0x7ffbfeac:
                return "REGDB_E_CLASSNOTREG";
              case -0x7ffbfeab:
                return "REGDB_E_IIDNOTREG";
              case -0x7ffbfeaa:
                return "REGDB_E_BADTHREADINGMODEL";
              case -0x7ffbfea1:
                return "REGDB_E_LAST";
              case -0x7ffbfea0:
                return "CAT_E_FIRST";
              case -0x7ffbfe9f:
                return "CAT_E_LAST";
              case -0x7ffbfe9c:
                return "CS_E_FIRST";
              case -0x7ffbfe9b:
                return "CS_E_NOT_DELETABLE";
              case -0x7ffbfe9a:
                return "CS_E_CLASS_NOTFOUND";
              case -0x7ffbfe99:
                return "CS_E_INVALID_VERSION";
              case -0x7ffbfe98:
                return "CS_E_NO_CLASSSTORE";
              case -0x7ffbfe97:
                return "CS_E_OBJECT_NOTFOUND";
              case -0x7ffbfe96:
                return "CS_E_OBJECT_ALREADY_EXISTS";
              case -0x7ffbfe95:
                return "CS_E_INVALID_PATH";
              case -0x7ffbfe94:
                return "CS_E_NETWORK_ERROR";
              case -0x7ffbfe93:
                return "CS_E_ADMIN_LIMIT_EXCEEDED";
              case -0x7ffbfe92:
                return "CS_E_SCHEMA_MISMATCH";
              case -0x7ffbfe91:
                return "CS_E_LAST";
              case -0x7ffbfe90:
                return "CACHE_E_FIRST";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ffbfe80:
              return "OLEOBJ_E_FIRST";
            case -0x7ffbfe7f:
              return "OLEOBJ_E_INVALIDVERB";
            case -0x7ffbfe71:
              return "OLEOBJ_E_LAST";
            case -0x7ffbfe70:
              return "CLIENTSITE_E_FIRST";
            case -0x7ffbfe61:
              return "CLIENTSITE_E_LAST";
            case -0x7ffbfe60:
              return "INPLACE_E_NOTUNDOABLE";
            case -0x7ffbfe5f:
              return "INPLACE_E_NOTOOLSPACE";
            case -0x7ffbfe51:
              return "INPLACE_E_LAST";
            case -0x7ffbfe50:
              return "ENUM_E_FIRST";
            case -0x7ffbfe41:
              return "ENUM_E_LAST";
            case -0x7ffbfe40:
              return "CONVERT10_E_FIRST";
            case -0x7ffbfe3f:
              return "CONVERT10_E_OLESTREAM_PUT";
            case -0x7ffbfe3e:
              return "CONVERT10_E_OLESTREAM_FMT";
            case -0x7ffbfe3d:
              return "CONVERT10_E_OLESTREAM_BITMAP_TO_DIB";
            case -0x7ffbfe3c:
              return "CONVERT10_E_STG_FMT";
            case -0x7ffbfe3b:
              return "CONVERT10_E_STG_NO_STD_STREAM";
            case -0x7ffbfe3a:
              return "CONVERT10_E_STG_DIB_TO_BITMAP";
            case -0x7ffbfe31:
              return "CONVERT10_E_LAST";
            case -0x7ffbfe30:
              return "CLIPBRD_E_FIRST";
            case -0x7ffbfe2f:
              return "CLIPBRD_E_CANT_EMPTY";
            case -0x7ffbfe2e:
              return "CLIPBRD_E_CANT_SET";
            case -0x7ffbfe2d:
              return "CLIPBRD_E_BAD_DATA";
            case -0x7ffbfe2c:
              return "CLIPBRD_E_CANT_CLOSE";
            case -0x7ffbfe21:
              return "CLIPBRD_E_LAST";
            case -0x7ffbfe20:
              return "MK_E_FIRST";
            case -0x7ffbfe1f:
              return "MK_E_EXCEEDEDDEADLINE";
            case -0x7ffbfe1e:
              return "MK_E_NEEDGENERIC";
            case -0x7ffbfe1d:
              return "MK_E_UNAVAILABLE";
            case -0x7ffbfe1c:
              return "MK_E_SYNTAX";
            case -0x7ffbfe1b:
              return "MK_E_NOOBJECT";
            case -0x7ffbfe1a:
              return "MK_E_INVALIDEXTENSION";
            case -0x7ffbfe19:
              return "MK_E_INTERMEDIATEINTERFACENOTSUPPORTED";
            case -0x7ffbfe18:
              return "MK_E_NOTBINDABLE";
            case -0x7ffbfe17:
              return "MK_E_NOTBOUND";
            case -0x7ffbfe16:
              return "MK_E_CANTOPENFILE";
            case -0x7ffbfe15:
              return "MK_E_MUSTBOTHERUSER";
            case -0x7ffbfe14:
              return "MK_E_NOINVERSE";
            case -0x7ffbfe13:
              return "MK_E_NOSTORAGE";
            case -0x7ffbfe12:
              return "MK_E_NOPREFIX";
            case -0x7ffbfe11:
              return "MK_E_LAST";
            }
          }
        }
        else if (param_1 < -0x7ffbfce8) {
          if (param_1 == -0x7ffbfce9) {
            return "E_DEBUGGER_PRESENT";
          }
          if (param_1 + 0x7ffbfe0fU < 0x115) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)(param_1 + -0x7f5a0869)) {
            case 0:
              return "CO_E_ALREADYINITIALIZED";
            case 1:
              return "CO_E_CANTDETERMINECLASS";
            case 2:
              return "CO_E_CLASSSTRING";
            case 3:
              return "CO_E_IIDSTRING";
            case 4:
              return "CO_E_APPNOTFOUND";
            case 5:
              return "CO_E_APPSINGLEUSE";
            case 6:
              return "CO_E_ERRORINAPP";
            case 7:
              return "CO_E_DLLNOTFOUND";
            case 8:
              return "CO_E_ERRORINDLL";
            case 9:
              return "CO_E_WRONGOSFORAPP";
            case 10:
              return "CO_E_OBJNOTREG";
            case 0xb:
              return "CO_E_OBJISREG";
            case 0xc:
              return "CO_E_OBJNOTCONNECTED";
            case 0xd:
              return "CO_E_APPDIDNTREG";
            case 0xe:
              return "CO_E_RELEASED";
            case 0xf:
              return "DIERR_INSUFFICIENTPRIVS & VFW_E_INVALIDMEDIATYPE";
            case 0x10:
              return "DIERR_DEVICEFULL & VFW_E_INVALIDSUBTYPE & DMO_E_INVALIDSTREAMINDEX";
            case 0x11:
              return "DIERR_MOREDATA & VFW_E_NEED_OWNER & DMO_E_INVALIDTYPE";
            case 0x12:
              return "DIERR_NOTDOWNLOADED & VFW_E_ENUM_OUT_OF_SYNC & DMO_E_TYPE_NOT_SET";
            case 0x13:
              return "DIERR_HASEFFECTS & VFW_E_ALREADY_CONNECTED & DMO_E_NOTACCEPTING";
            case 0x14:
              return "DIERR_NOTEXCLUSIVEACQUIRED & VFW_E_FILTER_ACTIVE & DMO_E_TYPE_NOT_ACCEPTED";
            case 0x15:
              return "DIERR_INCOMPLETEEFFECT & VFW_E_NO_TYPES & DMO_E_NO_MORE_ITEMS";
            case 0x16:
              return "DIERR_NOTBUFFERED & VFW_E_NO_ACCEPTABLE_TYPES";
            case 0x17:
              return "DIERR_EFFECTPLAYING & VFW_E_INVALID_DIRECTION";
            case 0x18:
              return "DIERR_UNPLUGGED & VFW_E_NOT_CONNECTED";
            case 0x19:
              return "DIERR_REPORTFULL & VFW_E_NO_ALLOCATOR";
            case 0x1a:
              return "DIERR_MAPFILEFAIL & VFW_E_RUNTIME_ERROR";
            case 0x1b:
              return "VFW_E_BUFFER_NOTSET";
            case 0x1c:
              return "VFW_E_BUFFER_OVERFLOW";
            case 0x1d:
              return "VFW_E_BADALIGN";
            case 0x1e:
              return "VFW_E_ALREADY_COMMITTED";
            case 0x1f:
              return "VFW_E_BUFFERS_OUTSTANDING";
            case 0x20:
              return "VFW_E_NOT_COMMITTED";
            case 0x21:
              return "VFW_E_SIZENOTSET";
            case 0x22:
              return "VFW_E_NO_CLOCK";
            case 0x23:
              return "VFW_E_NO_SINK";
            case 0x24:
              return "VFW_E_NO_INTERFACE";
            case 0x25:
              return "VFW_E_NOT_FOUND";
            case 0x26:
              return "VFW_E_CANNOT_CONNECT";
            case 0x27:
              return "VFW_E_CANNOT_RENDER";
            case 0x28:
              return "VFW_E_CHANGING_FORMAT";
            case 0x29:
              return "VFW_E_NO_COLOR_KEY_SET";
            case 0x2a:
              return "VFW_E_NOT_OVERLAY_CONNECTION";
            case 0x2b:
              return "VFW_E_NOT_SAMPLE_CONNECTION";
            case 0x2c:
              return "VFW_E_PALETTE_SET";
            case 0x2d:
              return "VFW_E_COLOR_KEY_SET";
            case 0x2e:
              return "VFW_E_NO_COLOR_KEY_FOUND";
            case 0x2f:
              return "VFW_E_NO_PALETTE_AVAILABLE";
            case 0x30:
              return "VFW_E_NO_DISPLAY_PALETTE";
            case 0x31:
              return "VFW_E_TOO_MANY_COLORS";
            case 0x32:
              return "VFW_E_STATE_CHANGED";
            case 0x33:
              return "VFW_E_NOT_STOPPED";
            case 0x34:
              return "VFW_E_NOT_PAUSED";
            case 0x35:
              return "VFW_E_NOT_RUNNING";
            case 0x36:
              return "VFW_E_WRONG_STATE";
            case 0x37:
              return "VFW_E_START_TIME_AFTER_END";
            case 0x38:
              return "VFW_E_INVALID_RECT";
            case 0x39:
              return "VFW_E_TYPE_NOT_ACCEPTED";
            case 0x3a:
              return "VFW_E_SAMPLE_REJECTED";
            case 0x3b:
              return "VFW_E_SAMPLE_REJECTED_EOS";
            case 0x3c:
              return "VFW_E_DUPLICATE_NAME";
            case 0x3d:
              return "VFW_E_TIMEOUT";
            case 0x3e:
              return "VFW_E_INVALID_FILE_FORMAT";
            case 0x3f:
              return "VFW_E_ENUM_OUT_OF_RANGE";
            case 0x40:
              return "VFW_E_CIRCULAR_GRAPH";
            case 0x41:
              return "VFW_E_NOT_ALLOWED_TO_SAVE";
            case 0x42:
              return "VFW_E_TIME_ALREADY_PASSED";
            case 0x43:
              return "VFW_E_ALREADY_CANCELLED";
            case 0x44:
              return "VFW_E_CORRUPT_GRAPH_FILE";
            case 0x45:
              return "VFW_E_ADVISE_ALREADY_SET";
            case 0x46:
              return "VFW_E_NO_MODEX_AVAILABLE";
            case 0x47:
              return "VFW_E_NO_ADVISE_SET";
            case 0x48:
              return "VFW_E_NO_FULLSCREEN";
            case 0x49:
              return "VFW_E_IN_FULLSCREEN_MODE";
            case 0x4a:
              return "VFW_E_UNKNOWN_FILE_TYPE";
            case 0x4b:
              return "VFW_E_CANNOT_LOAD_SOURCE_FILTER";
            case 0x4c:
              return "VFW_E_FILE_TOO_SHORT";
            case 0x4d:
              return "VFW_E_INVALID_FILE_VERSION";
            case 0x4e:
              return "VFW_E_INVALID_CLSID";
            case 0x4f:
              return "VFW_E_INVALID_MEDIA_TYPE";
            case 0x50:
              return "VFW_E_SAMPLE_TIME_NOT_SET";
            case 0x51:
              return "VFW_E_MEDIA_TIME_NOT_SET";
            case 0x52:
              return "VFW_E_NO_TIME_FORMAT_SET";
            case 0x53:
              return "VFW_E_MONO_AUDIO_HW";
            case 0x54:
              return "VFW_E_NO_DECOMPRESSOR";
            case 0x55:
              return "VFW_E_NO_AUDIO_HARDWARE";
            case 0x56:
              return "VFW_E_RPZA";
            case 0x57:
              return "VFW_E_PROCESSOR_NOT_SUITABLE";
            case 0x58:
              return "VFW_E_UNSUPPORTED_AUDIO";
            case 0x59:
              return "VFW_E_UNSUPPORTED_VIDEO";
            case 0x5a:
              return "VFW_E_MPEG_NOT_CONSTRAINED";
            case 0x5b:
              return "VFW_E_NOT_IN_GRAPH";
            case 0x5c:
              return "VFW_E_NO_TIME_FORMAT";
            case 0x5d:
              return "VFW_E_READ_ONLY";
            case 0x5e:
              return "VFW_E_BUFFER_UNDERFLOW";
            case 0x5f:
              return "VFW_E_UNSUPPORTED_STREAM";
            case 0x60:
              return "VFW_E_NO_TRANSPORT";
            case 0x61:
              return "VFW_E_BAD_VIDEOCD";
            case 0x62:
              return "VFW_E_OUT_OF_VIDEO_MEMORY";
            case 99:
              return "VFW_E_VP_NEGOTIATION_FAILED";
            case 100:
              return "VFW_E_DDRAW_CAPS_NOT_SUITABLE";
            case 0x65:
              return "VFW_E_NO_VP_HARDWARE";
            case 0x66:
              return "VFW_E_NO_CAPTURE_HARDWARE";
            case 0x67:
              return "VFW_E_DVD_OPERATION_INHIBITED";
            case 0x68:
              return "VFW_E_DVD_INVALIDDOMAIN";
            case 0x69:
              return "VFW_E_DVD_NO_BUTTON";
            case 0x6a:
              return "VFW_E_DVD_GRAPHNOTREADY";
            case 0x6b:
              return "VFW_E_DVD_RENDERFAIL";
            case 0x6c:
              return "VFW_E_DVD_DECNOTENOUGH";
            case 0x6d:
              return "VFW_E_DDRAW_VERSION_NOT_SUITABLE";
            case 0x6e:
              return "VFW_E_COPYPROT_FAILED";
            case 0x6f:
              return "VFW_E_TIME_EXPIRED";
            case 0x70:
              return "VFW_E_DVD_WRONG_SPEED";
            case 0x71:
              return "VFW_E_DVD_MENU_DOES_NOT_EXIST";
            case 0x72:
              return "VFW_E_DVD_CMD_CANCELLED";
            case 0x73:
              return "VFW_E_DVD_STATE_WRONG_VERSION";
            case 0x74:
              return "VFW_E_DVD_STATE_CORRUPT";
            case 0x75:
              return "VFW_E_DVD_STATE_WRONG_DISC";
            case 0x76:
              return "VFW_E_DVD_INCOMPATIBLE_REGION";
            case 0x77:
              return "VFW_E_DVD_NO_ATTRIBUTES";
            case 0x78:
              return "VFW_E_DVD_NO_GOUP_PGC";
            case 0x79:
              return "VFW_E_DVD_LOW_PARENTAL_LEVEL";
            case 0x7a:
              return "VFW_E_DVD_NOT_IN_KARAOKE_MODE";
            case 0x7b:
              return "VFW_E_FRAME_STEP_UNSUPPORTED";
            case 0x7c:
              return "VFW_E_DVD_STREAM_DISABLED";
            case 0x7d:
              return "VFW_E_DVD_TITLE_UNKNOWN";
            case 0x7e:
              return "VFW_E_DVD_INVALID_DISC";
            case 0x7f:
              return "VFW_E_DVD_NO_RESUME_INFORMATION";
            case 0x80:
              return "VFW_E_PIN_ALREADY_BLOCKED_ON_THIS_THREAD";
            case 0x81:
              return "VFW_E_PIN_ALREADY_BLOCKED";
            case 0x82:
              return "VFW_E_CERTIFICATION_FAILURE";
            case 0x83:
              return "DIERR_DRIVERFIRST";
            case 0x84:
              return "DIERR_DRIVERFIRST+1";
            case 0x85:
              return "DIERR_DRIVERFIRST+2";
            case 0x86:
              return "DIERR_DRIVERFIRST+3";
            case 0x87:
              return "DIERR_DRIVERFIRST+4";
            case 0x88:
              return "DIERR_DRIVERFIRST+5";
            }
          }
        }
        else if (param_1 < -0x7ffbefaf) {
          if (param_1 == -0x7ffbefb0) {
            return "WBEM_E_CANNOT_CHANGE_INDEX_INHERITANCE";
          }
          if (param_1 < -0x7ffbefe5) {
            if (param_1 == -0x7ffbefe6) {
              return "WBEM_E_OVERRIDE_NOT_ALLOWED";
            }
            if (param_1 < -0x7ffbeffd) {
              if (param_1 == -0x7ffbeffe) {
                return "WBEM_E_NOT_FOUND";
              }
              if (param_1 < -0x7ffbfbf5) {
                if (param_1 == -0x7ffbfbf6) {
                  return "MS_E_NOTRUNNING";
                }
                switch(param_1) {
                case -0x7ffbfc0e:
                  return "VFW_E_BAD_KEY";
                case -0x7ffbfc01:
                  return "DIERR_DRIVERLAST";
                case -0x7ffbfc00:
                  return "DIERR_INVALIDCLASSINSTALLER";
                case -0x7ffbfbff:
                  return "DIERR_CANCELLED & MS_E_SAMPLEALLOC";
                case -0x7ffbfbfe:
                  return "DIERR_BADINF";
                case -0x7ffbfbfd:
                  return "MS_E_NOSTREAM";
                case -0x7ffbfbfc:
                  return "MS_E_NOSEEKING";
                case -0x7ffbfbfb:
                  return "MS_E_INCOMPATIBLE";
                case -0x7ffbfbfa:
                  return "MS_E_BUSY";
                case -0x7ffbfbf9:
                  return "MS_E_NOTINIT";
                case -0x7ffbfbf8:
                  return "MS_E_SOURCEALREADYDEFINED";
                case -0x7ffbfbf7:
                  return "MS_E_INVALIDSTREAMTYPE";
                }
              }
              else if (param_1 < -0x7ffbeffe) {
                if (param_1 == -0x7ffbefff) {
                  return "WBEM_E_FAILED";
                }
                switch(param_1) {
                case -0x7ffbf6ff:
                  return "DXUTERR_NODIRECT3D";
                case -0x7ffbf6fe:
                  return "DXUTERR_NOCOMPATIBLEDEVICES";
                case -0x7ffbf6fd:
                  return "DXUTERR_MEDIANOTFOUND";
                case -0x7ffbf6fc:
                  return "DXUTERR_NONZEROREFCOUNT";
                case -0x7ffbf6fb:
                  return "DXUTERR_CREATINGDEVICE";
                case -0x7ffbf6fa:
                  return "DXUTERR_RESETTINGDEVICE";
                case -0x7ffbf6f9:
                  return "DXUTERR_CREATINGDEVICEOBJECTS";
                case -0x7ffbf6f8:
                  return "DXUTERR_RESETTINGDEVICEOBJECTS";
                case -0x7ffbf6f7:
                  return "DXUTERR_INCORRECTVERSION";
                case -0x7ffbf6f6:
                  return "DXUTERR_DEVICEREMOVED";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ffbeffd:
                return "WBEM_E_ACCESS_DENIED";
              case -0x7ffbeffc:
                return "WBEM_E_PROVIDER_FAILURE";
              case -0x7ffbeffb:
                return "WBEM_E_TYPE_MISMATCH";
              case -0x7ffbeffa:
                return "WBEM_E_OUT_OF_MEMORY";
              case -0x7ffbeff9:
                return "WBEM_E_INVALID_CONTEXT";
              case -0x7ffbeff8:
                return "WBEM_E_INVALID_PARAMETER";
              case -0x7ffbeff7:
                return "WBEM_E_NOT_AVAILABLE";
              case -0x7ffbeff6:
                return "WBEM_E_CRITICAL_ERROR";
              case -0x7ffbeff5:
                return "WBEM_E_INVALID_STREAM";
              case -0x7ffbeff4:
                return "WBEM_E_NOT_SUPPORTED";
              case -0x7ffbeff3:
                return "WBEM_E_INVALID_SUPERCLASS";
              case -0x7ffbeff2:
                return "WBEM_E_INVALID_NAMESPACE";
              case -0x7ffbeff1:
                return "WBEM_E_INVALID_OBJECT";
              case -0x7ffbeff0:
                return "WBEM_E_INVALID_CLASS";
              case -0x7ffbefef:
                return "WBEM_E_PROVIDER_NOT_FOUND";
              case -0x7ffbefee:
                return "WBEM_E_INVALID_PROVIDER_REGISTRATION";
              case -0x7ffbefed:
                return "WBEM_E_PROVIDER_LOAD_FAILURE";
              case -0x7ffbefec:
                return "WBEM_E_INITIALIZATION_FAILURE";
              case -0x7ffbefeb:
                return "WBEM_E_TRANSPORT_FAILURE";
              case -0x7ffbefea:
                return "WBEM_E_INVALID_OPERATION";
              case -0x7ffbefe9:
                return "WBEM_E_INVALID_QUERY";
              case -0x7ffbefe8:
                return "WBEM_E_INVALID_QUERY_TYPE";
              case -0x7ffbefe7:
                return "WBEM_E_ALREADY_EXISTS";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ffbefe5:
              return "WBEM_E_PROPAGATED_QUALIFIER";
            case -0x7ffbefe4:
              return "WBEM_E_PROPAGATED_PROPERTY";
            case -0x7ffbefe3:
              return "WBEM_E_UNEXPECTED";
            case -0x7ffbefe2:
              return "WBEM_E_ILLEGAL_OPERATION";
            case -0x7ffbefe1:
              return "WBEM_E_CANNOT_BE_KEY";
            case -0x7ffbefe0:
              return "WBEM_E_INCOMPLETE_CLASS";
            case -0x7ffbefdf:
              return "WBEM_E_INVALID_SYNTAX";
            case -0x7ffbefde:
              return "WBEM_E_NONDECORATED_OBJECT";
            case -0x7ffbefdd:
              return "WBEM_E_READ_ONLY";
            case -0x7ffbefdc:
              return "WBEM_E_PROVIDER_NOT_CAPABLE";
            case -0x7ffbefdb:
              return "WBEM_E_CLASS_HAS_CHILDREN";
            case -0x7ffbefda:
              return "WBEM_E_CLASS_HAS_INSTANCES";
            case -0x7ffbefd9:
              return "WBEM_E_QUERY_NOT_IMPLEMENTED";
            case -0x7ffbefd8:
              return "WBEM_E_ILLEGAL_NULL";
            case -0x7ffbefd7:
              return "WBEM_E_INVALID_QUALIFIER_TYPE";
            case -0x7ffbefd6:
              return "WBEM_E_INVALID_PROPERTY_TYPE";
            case -0x7ffbefd5:
              return "WBEM_E_VALUE_OUT_OF_RANGE";
            case -0x7ffbefd4:
              return "WBEM_E_CANNOT_BE_SINGLETON";
            case -0x7ffbefd3:
              return "WBEM_E_INVALID_CIM_TYPE";
            case -0x7ffbefd2:
              return "WBEM_E_INVALID_METHOD";
            case -0x7ffbefd1:
              return "WBEM_E_INVALID_METHOD_PARAMETERS";
            case -0x7ffbefd0:
              return "WBEM_E_SYSTEM_PROPERTY";
            case -0x7ffbefcf:
              return "WBEM_E_INVALID_PROPERTY";
            case -0x7ffbefce:
              return "WBEM_E_CALL_CANCELLED";
            case -0x7ffbefcd:
              return "WBEM_E_SHUTTING_DOWN";
            case -0x7ffbefcc:
              return "WBEM_E_PROPAGATED_METHOD";
            case -0x7ffbefcb:
              return "WBEM_E_UNSUPPORTED_PARAMETER";
            case -0x7ffbefca:
              return "WBEM_E_MISSING_PARAMETER_ID";
            case -0x7ffbefc9:
              return "WBEM_E_INVALID_PARAMETER_ID";
            case -0x7ffbefc8:
              return "WBEM_E_NONCONSECUTIVE_PARAMETER_IDS";
            case -0x7ffbefc7:
              return "WBEM_E_PARAMETER_ID_ON_RETVAL";
            case -0x7ffbefc6:
              return "WBEM_E_INVALID_OBJECT_PATH";
            case -0x7ffbefc5:
              return "WBEM_E_OUT_OF_DISK_SPACE";
            case -0x7ffbefc4:
              return "WBEM_E_BUFFER_TOO_SMALL";
            case -0x7ffbefc3:
              return "WBEM_E_UNSUPPORTED_PUT_EXTENSION";
            case -0x7ffbefc2:
              return "WBEM_E_UNKNOWN_OBJECT_TYPE";
            case -0x7ffbefc1:
              return "WBEM_E_UNKNOWN_PACKET_TYPE";
            case -0x7ffbefc0:
              return "WBEM_E_MARSHAL_VERSION_MISMATCH";
            case -0x7ffbefbf:
              return "WBEM_E_MARSHAL_INVALID_SIGNATURE";
            case -0x7ffbefbe:
              return "WBEM_E_INVALID_QUALIFIER";
            case -0x7ffbefbd:
              return "WBEM_E_INVALID_DUPLICATE_PARAMETER";
            case -0x7ffbefbc:
              return "WBEM_E_TOO_MUCH_DATA";
            case -0x7ffbefbb:
              return "WBEM_E_SERVER_TOO_BUSY";
            case -0x7ffbefba:
              return "WBEM_E_INVALID_FLAVOR";
            case -0x7ffbefb9:
              return "WBEM_E_CIRCULAR_REFERENCE";
            case -0x7ffbefb8:
              return "WBEM_E_UNSUPPORTED_CLASS_UPDATE";
            case -0x7ffbefb7:
              return "WBEM_E_CANNOT_CHANGE_KEY_INHERITANCE";
            }
          }
        }
        else if (param_1 < -0x7ffbecf6) {
          if (param_1 == -0x7ffbecf7) {
            return "SCHED_E_TRIGGER_NOT_FOUND";
          }
          switch(param_1) {
          case -0x7ffbefaf:
            return "WBEM_E_TOO_MANY_PROPERTIES";
          case -0x7ffbefae:
            return "WBEM_E_UPDATE_TYPE_MISMATCH";
          case -0x7ffbefad:
            return "WBEM_E_UPDATE_OVERRIDE_NOT_ALLOWED";
          case -0x7ffbefac:
            return "WBEM_E_UPDATE_PROPAGATED_METHOD";
          case -0x7ffbefab:
            return "WBEM_E_METHOD_NOT_IMPLEMENTED";
          case -0x7ffbefaa:
            return "WBEM_E_METHOD_DISABLED";
          case -0x7ffbefa9:
            return "WBEM_E_REFRESHER_BUSY";
          case -0x7ffbefa8:
            return "WBEM_E_UNPARSABLE_QUERY";
          case -0x7ffbefa7:
            return "WBEM_E_NOT_EVENT_CLASS";
          case -0x7ffbefa6:
            return "WBEM_E_MISSING_GROUP_WITHIN";
          case -0x7ffbefa5:
            return "WBEM_E_MISSING_AGGREGATION_LIST";
          case -0x7ffbefa4:
            return "WBEM_E_PROPERTY_NOT_AN_OBJECT";
          case -0x7ffbefa3:
            return "WBEM_E_AGGREGATING_BY_OBJECT";
          case -0x7ffbefa1:
            return "WBEM_E_UNINTERPRETABLE_PROVIDER_QUERY";
          case -0x7ffbefa0:
            return "WBEM_E_BACKUP_RESTORE_WINMGMT_RUNNING";
          case -0x7ffbef9f:
            return "WBEM_E_QUEUE_OVERFLOW";
          case -0x7ffbef9e:
            return "WBEM_E_PRIVILEGE_NOT_HELD";
          case -0x7ffbef9d:
            return "WBEM_E_INVALID_OPERATOR";
          case -0x7ffbef9c:
            return "WBEM_E_LOCAL_CREDENTIALS";
          case -0x7ffbef9b:
            return "WBEM_E_CANNOT_BE_ABSTRACT";
          case -0x7ffbef9a:
            return "WBEM_E_AMENDED_OBJECT";
          case -0x7ffbef99:
            return "WBEM_E_CLIENT_TOO_SLOW";
          case -0x7ffbef98:
            return "WBEM_E_NULL_SECURITY_DESCRIPTOR";
          case -0x7ffbef97:
            return "WBEM_E_TIMED_OUT";
          case -0x7ffbef96:
            return "WBEM_E_INVALID_ASSOCIATION";
          case -0x7ffbef95:
            return "WBEM_E_AMBIGUOUS_OPERATION";
          case -0x7ffbef94:
            return "WBEM_E_QUOTA_VIOLATION";
          case -0x7ffbef93:
            return "WBEM_E_RESERVED_001";
          case -0x7ffbef92:
            return "WBEM_E_RESERVED_002";
          case -0x7ffbef91:
            return "WBEM_E_UNSUPPORTED_LOCALE";
          case -0x7ffbef90:
            return "WBEM_E_HANDLE_OUT_OF_DATE";
          case -0x7ffbef8f:
            return "WBEM_E_CONNECTION_FAILED";
          case -0x7ffbef8e:
            return "WBEM_E_INVALID_HANDLE_REQUEST";
          case -0x7ffbef8d:
            return "WBEM_E_PROPERTY_NAME_TOO_WIDE";
          case -0x7ffbef8c:
            return "WBEM_E_CLASS_NAME_TOO_WIDE";
          case -0x7ffbef8b:
            return "WBEM_E_METHOD_NAME_TOO_WIDE";
          case -0x7ffbef8a:
            return "WBEM_E_QUALIFIER_NAME_TOO_WIDE";
          case -0x7ffbef89:
            return "WBEM_E_RERUN_COMMAND";
          case -0x7ffbef88:
            return "WBEM_E_DATABASE_VER_MISMATCH";
          case -0x7ffbef87:
            return "WBEM_E_VETO_DELETE";
          case -0x7ffbef86:
            return "WBEM_E_VETO_PUT";
          case -0x7ffbef80:
            return "WBEM_E_INVALID_LOCALE";
          case -0x7ffbef7f:
            return "WBEM_E_PROVIDER_SUSPENDED";
          case -0x7ffbef7e:
            return "WBEM_E_SYNCHRONIZATION_REQUIRED";
          case -0x7ffbef7d:
            return "WBEM_E_NO_SCHEMA";
          case -0x7ffbef7c:
            return "WBEM_E_PROVIDER_ALREADY_REGISTERED";
          case -0x7ffbef7b:
            return "WBEM_E_PROVIDER_NOT_REGISTERED";
          case -0x7ffbef7a:
            return "WBEM_E_FATAL_TRANSPORT_ERROR";
          case -0x7ffbef79:
            return "WBEM_E_ENCRYPTED_CONNECTION_REQUIRED";
          case -0x7ffbef78:
            return "WBEM_E_PROVIDER_TIMED_OUT";
          case -0x7ffbef77:
            return "WBEM_E_NO_KEY";
          case -0x7ffbef76:
            return "WBEM_E_PROVIDER_DISABLED";
          }
        }
        else if (param_1 < -0x7ffbdffe) {
          if (param_1 == -0x7ffbdfff) {
            return "WBEMESS_E_REGISTRATION_TOO_BROAD";
          }
          switch(param_1) {
          case -0x7ffbecf6:
            return "SCHED_E_TASK_NOT_READY";
          case -0x7ffbecf5:
            return "SCHED_E_TASK_NOT_RUNNING";
          case -0x7ffbecf4:
            return "SCHED_E_SERVICE_NOT_INSTALLED";
          case -0x7ffbecf3:
            return "SCHED_E_CANNOT_OPEN_TASK";
          case -0x7ffbecf2:
            return "SCHED_E_INVALID_TASK";
          case -0x7ffbecf1:
            return "SCHED_E_ACCOUNT_INFORMATION_NOT_SET";
          case -0x7ffbecf0:
            return "SCHED_E_ACCOUNT_NAME_NOT_FOUND";
          case -0x7ffbecef:
            return "SCHED_E_ACCOUNT_DBASE_CORRUPT";
          case -0x7ffbecee:
            return "SCHED_E_NO_SECURITY_SERVICES";
          case -0x7ffbeced:
            return "SCHED_E_UNKNOWN_OBJECT_VERSION";
          case -0x7ffbecec:
            return "SCHED_E_UNSUPPORTED_ACCOUNT_OPTION";
          case -0x7ffbeceb:
            return "SCHED_E_SERVICE_NOT_RUNNING";
          }
        }
        else if (param_1 < -0x7ffbbff0) {
          if (param_1 == -0x7ffbbff1) {
            return "WBEMMOF_E_UNEXPECTED_ARRAY_INIT";
          }
          if (param_1 < -0x7ffbbff8) {
            if (param_1 == -0x7ffbbff9) {
              return "WBEMMOF_E_ILLEGAL_CONSTANT_VALUE";
            }
            if (param_1 == -0x7ffbdffe) {
              return "WBEMESS_E_REGISTRATION_TOO_PRECISE";
            }
            if (param_1 == -0x7ffbbfff) {
              return "WBEMMOF_E_EXPECTED_QUALIFIER_NAME";
            }
            if (param_1 == -0x7ffbbffe) {
              return "WBEMMOF_E_EXPECTED_SEMI";
            }
            if (param_1 == -0x7ffbbffd) {
              return "WBEMMOF_E_EXPECTED_OPEN_BRACE";
            }
            if (param_1 == -0x7ffbbffc) {
              return "WBEMMOF_E_EXPECTED_CLOSE_BRACE";
            }
            if (param_1 == -0x7ffbbffb) {
              return "WBEMMOF_E_EXPECTED_CLOSE_BRACKET";
            }
            if (param_1 == -0x7ffbbffa) {
              return "WBEMMOF_E_EXPECTED_CLOSE_PAREN";
            }
          }
          else {
            if (param_1 == -0x7ffbbff8) {
              return "WBEMMOF_E_EXPECTED_TYPE_IDENTIFIER";
            }
            if (param_1 == -0x7ffbbff7) {
              return "WBEMMOF_E_EXPECTED_OPEN_PAREN";
            }
            if (param_1 == -0x7ffbbff6) {
              return "WBEMMOF_E_UNRECOGNIZED_TOKEN";
            }
            if (param_1 == -0x7ffbbff5) {
              return "WBEMMOF_E_UNRECOGNIZED_TYPE";
            }
            if (param_1 == -0x7ffbbff4) {
              return "WBEMMOF_E_EXPECTED_PROPERTY_NAME";
            }
            if (param_1 == -0x7ffbbff3) {
              return "WBEMMOF_E_TYPEDEF_NOT_SUPPORTED";
            }
            if (param_1 == -0x7ffbbff2) {
              return "WBEMMOF_E_UNEXPECTED_ALIAS";
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7ffbbff0:
            return "WBEMMOF_E_INVALID_AMENDMENT_SYNTAX";
          case -0x7ffbbfef:
            return "WBEMMOF_E_INVALID_DUPLICATE_AMENDMENT";
          case -0x7ffbbfee:
            return "WBEMMOF_E_INVALID_PRAGMA";
          case -0x7ffbbfed:
            return "WBEMMOF_E_INVALID_NAMESPACE_SYNTAX";
          case -0x7ffbbfec:
            return "WBEMMOF_E_EXPECTED_CLASS_NAME";
          case -0x7ffbbfeb:
            return "WBEMMOF_E_TYPE_MISMATCH";
          case -0x7ffbbfea:
            return "WBEMMOF_E_EXPECTED_ALIAS_NAME";
          case -0x7ffbbfe9:
            return "WBEMMOF_E_INVALID_CLASS_DECLARATION";
          case -0x7ffbbfe8:
            return "WBEMMOF_E_INVALID_INSTANCE_DECLARATION";
          case -0x7ffbbfe7:
            return "WBEMMOF_E_EXPECTED_DOLLAR";
          case -0x7ffbbfe6:
            return "WBEMMOF_E_CIMTYPE_QUALIFIER";
          case -0x7ffbbfe5:
            return "WBEMMOF_E_DUPLICATE_PROPERTY";
          case -0x7ffbbfe4:
            return "WBEMMOF_E_INVALID_NAMESPACE_SPECIFICATION";
          case -0x7ffbbfe3:
            return "WBEMMOF_E_OUT_OF_RANGE";
          }
        }
      }
      else if (param_1 < -0x7ffb2fff) {
        if (param_1 == -0x7ffb3000) {
          return "XACT_E_FIRST";
        }
        switch(param_1) {
        case -0x7ffbbfe1:
          return "WBEMMOF_E_ALIASES_IN_EMBEDDED";
        case -0x7ffbbfe0:
          return "WBEMMOF_E_NULL_ARRAY_ELEM";
        case -0x7ffbbfdf:
          return "WBEMMOF_E_DUPLICATE_QUALIFIER";
        case -0x7ffbbfde:
          return "WBEMMOF_E_EXPECTED_FLAVOR_TYPE";
        case -0x7ffbbfdd:
          return "WBEMMOF_E_INCOMPATIBLE_FLAVOR_TYPES";
        case -0x7ffbbfdc:
          return "WBEMMOF_E_MULTIPLE_ALIASES";
        case -0x7ffbbfdb:
          return "WBEMMOF_E_INCOMPATIBLE_FLAVOR_TYPES2";
        case -0x7ffbbfda:
          return "WBEMMOF_E_NO_ARRAYS_RETURNED";
        case -0x7ffbbfd9:
          return "WBEMMOF_E_MUST_BE_IN_OR_OUT";
        case -0x7ffbbfd8:
          return "WBEMMOF_E_INVALID_FLAGS_SYNTAX";
        case -0x7ffbbfd7:
          return "WBEMMOF_E_EXPECTED_BRACE_OR_BAD_TYPE";
        case -0x7ffbbfd6:
          return "WBEMMOF_E_UNSUPPORTED_CIMV22_QUAL_VALUE";
        case -0x7ffbbfd5:
          return "WBEMMOF_E_UNSUPPORTED_CIMV22_DATA_TYPE";
        case -0x7ffbbfd4:
          return "WBEMMOF_E_INVALID_DELETEINSTANCE_SYNTAX";
        case -0x7ffbbfd3:
          return "WBEMMOF_E_INVALID_QUALIFIER_SYNTAX";
        case -0x7ffbbfd2:
          return "WBEMMOF_E_QUALIFIER_USED_OUTSIDE_SCOPE";
        case -0x7ffbbfd1:
          return "WBEMMOF_E_ERROR_CREATING_TEMP_FILE";
        case -0x7ffbbfd0:
          return "WBEMMOF_E_ERROR_INVALID_INCLUDE_FILE";
        case -0x7ffbbfcf:
          return "WBEMMOF_E_INVALID_DELETECLASS_SYNTAX";
        }
      }
      else if (param_1 < -0x7ffb2f7f) {
        if (param_1 == -0x7ffb2f80) {
          return "XACT_E_CLERKNOTFOUND";
        }
        switch(param_1) {
        case -0x7ffb2fff:
          return "XACT_E_CANTRETAIN";
        case -0x7ffb2ffe:
          return "XACT_E_COMMITFAILED";
        case -0x7ffb2ffd:
          return "XACT_E_COMMITPREVENTED";
        case -0x7ffb2ffc:
          return "XACT_E_HEURISTICABORT";
        case -0x7ffb2ffb:
          return "XACT_E_HEURISTICCOMMIT";
        case -0x7ffb2ffa:
          return "XACT_E_HEURISTICDAMAGE";
        case -0x7ffb2ff9:
          return "XACT_E_HEURISTICDANGER";
        case -0x7ffb2ff8:
          return "XACT_E_ISOLATIONLEVEL";
        case -0x7ffb2ff7:
          return "XACT_E_NOASYNC";
        case -0x7ffb2ff6:
          return "XACT_E_NOENLIST";
        case -0x7ffb2ff5:
          return "XACT_E_NOISORETAIN";
        case -0x7ffb2ff4:
          return "XACT_E_NORESOURCE";
        case -0x7ffb2ff3:
          return "XACT_E_NOTCURRENT";
        case -0x7ffb2ff2:
          return "XACT_E_NOTRANSACTION";
        case -0x7ffb2ff1:
          return "XACT_E_NOTSUPPORTED";
        case -0x7ffb2ff0:
          return "XACT_E_UNKNOWNRMGRID";
        case -0x7ffb2fef:
          return "XACT_E_WRONGSTATE";
        case -0x7ffb2fee:
          return "XACT_E_WRONGUOW";
        case -0x7ffb2fed:
          return "XACT_E_XTIONEXISTS";
        case -0x7ffb2fec:
          return "XACT_E_NOIMPORTOBJECT";
        case -0x7ffb2feb:
          return "XACT_E_INVALIDCOOKIE";
        case -0x7ffb2fea:
          return "XACT_E_INDOUBT";
        case -0x7ffb2fe9:
          return "XACT_E_NOTIMEOUT";
        case -0x7ffb2fe8:
          return "XACT_E_ALREADYINPROGRESS";
        case -0x7ffb2fe7:
          return "XACT_E_ABORTED";
        case -0x7ffb2fe6:
          return "XACT_E_LOGFULL";
        case -0x7ffb2fe5:
          return "XACT_E_TMNOTAVAILABLE";
        case -0x7ffb2fe4:
          return "XACT_E_CONNECTION_DOWN";
        case -0x7ffb2fe3:
          return "XACT_E_CONNECTION_DENIED";
        case -0x7ffb2fe2:
          return "XACT_E_REENLISTTIMEOUT";
        case -0x7ffb2fe1:
          return "XACT_E_TIP_CONNECT_FAILED";
        case -0x7ffb2fe0:
          return "XACT_E_TIP_PROTOCOL_ERROR";
        case -0x7ffb2fdf:
          return "XACT_E_TIP_PULL_FAILED";
        case -0x7ffb2fde:
          return "XACT_E_DEST_TMNOTAVAILABLE";
        case -0x7ffb2fdd:
          return "XACT_E_TIP_DISABLED";
        case -0x7ffb2fdc:
          return "XACT_E_NETWORK_TX_DISABLED";
        case -0x7ffb2fdb:
          return "XACT_E_PARTNER_NETWORK_TX_DISABLED";
        case -0x7ffb2fda:
          return "XACT_E_XA_TX_DISABLED";
        case -0x7ffb2fd9:
          return "XACT_E_UNABLE_TO_READ_DTC_CONFIG";
        case -0x7ffb2fd8:
          return "XACT_E_UNABLE_TO_LOAD_DTC_PROXY";
        case -0x7ffb2fd7:
          return "XACT_E_LAST";
        }
      }
      else if (param_1 < -0x7ff8fba2) {
        if (param_1 == -0x7ff8fba3) goto LAB_00a9aaa7;
        if (param_1 < -0x7ff8ff64) {
          if (param_1 == -0x7ff8ff65) {
LAB_00a9a3a9:
            return "ERROR_TOO_MANY_TCBS";
          }
          if (param_1 < -0x7ff8ffc3) {
            if (param_1 == -0x7ff8ffc4) goto LAB_00a9a095;
            if (param_1 < -0x7ff8fff5) {
              if (param_1 == -0x7ff8fff6) goto LAB_00a99f19;
              if (param_1 < -0x7ffb1fd9) {
                if (param_1 == -0x7ffb1fda) {
                  return "CONTEXT_E_NOJIT";
                }
                if (param_1 < -0x7ffb1ff9) {
                  if (param_1 == -0x7ffb1ffa) {
                    return "CONTEXT_E_SYNCH_TIMEOUT";
                  }
                  if (param_1 < -0x7ffb2f7a) {
                    if (param_1 == -0x7ffb2f7b) {
                      return "XACT_E_REPLAYREQUEST";
                    }
                    if (param_1 == -0x7ffb2f7f) {
                      return "XACT_E_CLERKEXISTS";
                    }
                    if (param_1 == -0x7ffb2f7e) {
                      return "XACT_E_RECOVERYINPROGRESS";
                    }
                    if (param_1 == -0x7ffb2f7d) {
                      return "XACT_E_TRANSACTIONCLOSED";
                    }
                    if (param_1 == -0x7ffb2f7c) {
                      return "XACT_E_INVALIDLSN";
                    }
                  }
                  else {
                    if (param_1 == -0x7ffb2000) {
                      return "CONTEXT_E_FIRST";
                    }
                    if (param_1 == -0x7ffb1ffe) {
                      return "CONTEXT_E_ABORTED";
                    }
                    if (param_1 == -0x7ffb1ffd) {
                      return "CONTEXT_E_ABORTING";
                    }
                    if (param_1 == -0x7ffb1ffc) {
                      return "CONTEXT_E_NOCONTEXT";
                    }
                  }
                }
                else if (param_1 < -0x7ffb1fdd) {
                  if (param_1 == -0x7ffb1fde) {
                    return "CO_E_ACTIVATIONFAILED_EVENTLOGGED";
                  }
                  if (param_1 == -0x7ffb1ff9) {
                    return "CONTEXT_E_OLDREF";
                  }
                  if (param_1 == -0x7ffb1ff4) {
                    return "CONTEXT_E_ROLENOTFOUND";
                  }
                  if (param_1 == -0x7ffb1ff1) {
                    return "CONTEXT_E_TMNOTAVAILABLE";
                  }
                  if (param_1 == -0x7ffb1fdf) {
                    return "CO_E_ACTIVATIONFAILED";
                  }
                }
                else {
                  if (param_1 == -0x7ffb1fdd) {
                    return "CO_E_ACTIVATIONFAILED_CATALOGERROR";
                  }
                  if (param_1 == -0x7ffb1fdc) {
                    return "CO_E_ACTIVATIONFAILED_TIMEOUT";
                  }
                  if (param_1 == -0x7ffb1fdb) {
                    return "CO_E_INITIALIZATIONFAILED";
                  }
                }
              }
              else if (param_1 < -0x7ff8fffe) {
                if (param_1 == -0x7ff8ffff) {
                  return "ERROR_INVALID_FUNCTION";
                }
                switch(param_1) {
                case -0x7ffb1fd9:
                  return "CONTEXT_E_NOTRANSACTION";
                case -0x7ffb1fd8:
                  return "CO_E_THREADINGMODEL_CHANGED";
                case -0x7ffb1fd7:
                  return "CO_E_NOIISINTRINSICS";
                case -0x7ffb1fd6:
                  return "CO_E_NOCOOKIES";
                case -0x7ffb1fd5:
                  return "CO_E_DBERROR";
                case -0x7ffb1fd4:
                  return "CO_E_NOTPOOLED";
                case -0x7ffb1fd3:
                  return "CO_E_NOTCONSTRUCTED";
                case -0x7ffb1fd2:
                  return "CO_E_NOSYNCHRONIZATION";
                case -0x7ffb1fd1:
                  return "CONTEXT_E_LAST";
                }
              }
              else {
                switch(param_1) {
                case -0x7ff8fffe:
                  goto LAB_00a99eb9;
                case -0x7ff8fffd:
                  goto LAB_00a99eaf;
                case -0x7ff8fffc:
                  goto LAB_00a99ea5;
                case -0x7ff8fffb:
                  return "E_ACCESSDENIED";
                case -0x7ff8fffa:
                  return "E_HANDLE";
                case -0x7ff8fff9:
                  goto LAB_00a99efb;
                case -0x7ff8fff8:
                  goto LAB_00a99f05;
                case -0x7ff8fff7:
                  goto LAB_00a99f0f;
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ff8fff5:
                goto LAB_00a99f23;
              case -0x7ff8fff4:
                goto LAB_00a99f2d;
              case -0x7ff8fff3:
                goto LAB_00a99f37;
              case -0x7ff8fff2:
                return "E_OUTOFMEMORY";
              case -0x7ff8fff1:
                goto LAB_00a99f4b;
              case -0x7ff8fff0:
                goto LAB_00a99f55;
              case -0x7ff8ffef:
                goto LAB_00a99f5f;
              case -0x7ff8ffee:
                goto LAB_00a99f69;
              case -0x7ff8ffed:
                goto LAB_00a99f73;
              case -0x7ff8ffec:
                goto LAB_00a99f7d;
              case -0x7ff8ffeb:
                goto LAB_00a99f87;
              case -0x7ff8ffea:
                goto LAB_00a99f91;
              case -0x7ff8ffe9:
                goto LAB_00a99f9b;
              case -0x7ff8ffe8:
                goto LAB_00a99fa5;
              case -0x7ff8ffe7:
                goto LAB_00a99faf;
              case -0x7ff8ffe6:
                goto LAB_00a99fb9;
              case -0x7ff8ffe5:
                goto LAB_00a99fc3;
              case -0x7ff8ffe4:
                goto LAB_00a99fcd;
              case -0x7ff8ffe3:
                goto LAB_00a99fd7;
              case -0x7ff8ffe2:
                goto LAB_00a99fe1;
              case -0x7ff8ffe1:
                goto LAB_00a99feb;
              case -0x7ff8ffe0:
                goto LAB_00a99ff5;
              case -0x7ff8ffdf:
                goto LAB_00a99fff;
              case -0x7ff8ffde:
                goto LAB_00a9a009;
              case -0x7ff8ffdc:
                goto LAB_00a9a013;
              case -0x7ff8ffda:
                goto LAB_00a9a01d;
              case -0x7ff8ffd9:
                goto LAB_00a9a027;
              case -0x7ff8ffce:
                goto LAB_00a9a031;
              case -0x7ff8ffcd:
                goto LAB_00a9a03b;
              case -0x7ff8ffcc:
                goto LAB_00a9a045;
              case -0x7ff8ffcb:
                goto LAB_00a9a04f;
              case -0x7ff8ffca:
                goto LAB_00a9a059;
              case -0x7ff8ffc9:
                goto LAB_00a9a063;
              case -0x7ff8ffc8:
                goto LAB_00a9a06d;
              case -0x7ff8ffc7:
                goto LAB_00a9a077;
              case -0x7ff8ffc6:
                goto LAB_00a9a081;
              case -0x7ff8ffc5:
                goto LAB_00a9a08b;
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ff8ffc3:
              goto LAB_00a9a09f;
            case -0x7ff8ffc2:
              goto LAB_00a9a0a9;
            case -0x7ff8ffc1:
              goto LAB_00a9a0b3;
            case -0x7ff8ffc0:
              goto LAB_00a9a0bd;
            case -0x7ff8ffbf:
              goto LAB_00a9a0c7;
            case -0x7ff8ffbe:
              goto LAB_00a9a0d1;
            case -0x7ff8ffbd:
              goto LAB_00a9a0db;
            case -0x7ff8ffbc:
              goto LAB_00a9a0e5;
            case -0x7ff8ffbb:
              goto LAB_00a9a0ef;
            case -0x7ff8ffba:
              goto LAB_00a9a0f9;
            case -0x7ff8ffb9:
              goto LAB_00a9a103;
            case -0x7ff8ffb8:
              goto LAB_00a9a10d;
            case -0x7ff8ffb0:
              goto LAB_00a9a117;
            case -0x7ff8ffae:
              goto LAB_00a9a121;
            case -0x7ff8ffad:
              goto LAB_00a9a12b;
            case -0x7ff8ffac:
              goto LAB_00a9a135;
            case -0x7ff8ffab:
              goto LAB_00a9a13f;
            case -0x7ff8ffaa:
              goto LAB_00a9a149;
            case -0x7ff8ffa9:
              return "E_INVALIDARG";
            case -0x7ff8ffa8:
              goto LAB_00a9a15d;
            case -0x7ff8ffa7:
              goto LAB_00a9a167;
            case -0x7ff8ff9c:
              goto LAB_00a9a171;
            case -0x7ff8ff9b:
              goto LAB_00a9a17b;
            case -0x7ff8ff9a:
              goto LAB_00a9a185;
            case -0x7ff8ff99:
              goto LAB_00a9a18f;
            case -0x7ff8ff98:
              goto LAB_00a9a199;
            case -0x7ff8ff97:
              goto LAB_00a9a1a3;
            case -0x7ff8ff96:
              goto LAB_00a9a1ad;
            case -0x7ff8ff95:
              goto LAB_00a9a1b7;
            case -0x7ff8ff94:
              goto LAB_00a9a1c1;
            case -0x7ff8ff93:
              goto LAB_00a9a1cb;
            case -0x7ff8ff92:
              goto LAB_00a9a1d5;
            case -0x7ff8ff91:
              goto LAB_00a9a1df;
            case -0x7ff8ff90:
              goto LAB_00a9a1e9;
            case -0x7ff8ff8f:
              goto LAB_00a9a1f3;
            case -0x7ff8ff8e:
              goto LAB_00a9a1fd;
            case -0x7ff8ff8b:
              goto LAB_00a9a207;
            case -0x7ff8ff8a:
              goto LAB_00a9a211;
            case -0x7ff8ff89:
              goto LAB_00a9a21b;
            case -0x7ff8ff88:
              goto LAB_00a9a225;
            case -0x7ff8ff87:
              goto LAB_00a9a22f;
            case -0x7ff8ff86:
              goto LAB_00a9a25f;
            case -0x7ff8ff85:
              goto LAB_00a9a269;
            case -0x7ff8ff84:
              goto LAB_00a9a273;
            case -0x7ff8ff83:
              goto LAB_00a9a27d;
            case -0x7ff8ff82:
              goto LAB_00a9a287;
            case -0x7ff8ff81:
              goto LAB_00a9a291;
            case -0x7ff8ff80:
              goto LAB_00a9a29b;
            case -0x7ff8ff7f:
              goto LAB_00a9a2a5;
            case -0x7ff8ff7e:
              goto LAB_00a9a2af;
            case -0x7ff8ff7d:
              goto LAB_00a9a2b9;
            case -0x7ff8ff7c:
              goto LAB_00a9a2c3;
            case -0x7ff8ff7b:
              goto LAB_00a9a2cd;
            case -0x7ff8ff7a:
              goto LAB_00a9a2d7;
            case -0x7ff8ff79:
              goto LAB_00a9a2e1;
            case -0x7ff8ff78:
              goto LAB_00a9a2eb;
            case -0x7ff8ff77:
              goto LAB_00a9a2f5;
            case -0x7ff8ff76:
              goto LAB_00a9a2ff;
            case -0x7ff8ff75:
              goto LAB_00a9a309;
            case -0x7ff8ff74:
              goto LAB_00a9a313;
            case -0x7ff8ff73:
              goto LAB_00a9a31d;
            case -0x7ff8ff72:
              goto LAB_00a9a327;
            case -0x7ff8ff71:
              goto LAB_00a9a331;
            case -0x7ff8ff70:
              goto LAB_00a9a33b;
            case -0x7ff8ff6f:
              goto LAB_00a9a345;
            case -0x7ff8ff6e:
              goto LAB_00a9a34f;
            case -0x7ff8ff6d:
              goto LAB_00a9a359;
            case -0x7ff8ff6c:
              goto LAB_00a9a363;
            case -0x7ff8ff6b:
              goto LAB_00a9a36d;
            case -0x7ff8ff6a:
              goto LAB_00a9a377;
            case -0x7ff8ff69:
              goto LAB_00a9a381;
            case -0x7ff8ff68:
              goto LAB_00a9a38b;
            case -0x7ff8ff67:
              goto LAB_00a9a395;
            case -0x7ff8ff66:
              goto LAB_00a9a39f;
            }
          }
        }
        else if (param_1 < -0x7ff8ff0f) {
          if (param_1 == -0x7ff8ff10) goto LAB_00a9a593;
          switch(param_1) {
          case -0x7ff8ff64:
            goto LAB_00a9a3b3;
          case -0x7ff8ff63:
            goto LAB_00a9a3bd;
          case -0x7ff8ff62:
            goto LAB_00a9a3c7;
          case -0x7ff8ff61:
            goto LAB_00a9a3d1;
          case -0x7ff8ff60:
            goto LAB_00a9a3db;
          case -0x7ff8ff5f:
            goto LAB_00a9a3e5;
          case -0x7ff8ff5e:
            goto LAB_00a9a3ef;
          case -0x7ff8ff5c:
            goto LAB_00a9a3f9;
          case -0x7ff8ff59:
            goto LAB_00a9a403;
          case -0x7ff8ff56:
            goto LAB_00a9a40d;
          case -0x7ff8ff53:
            goto LAB_00a9a417;
          case -0x7ff8ff52:
            goto LAB_00a9a421;
          case -0x7ff8ff4c:
            goto LAB_00a9a42b;
          case -0x7ff8ff4a:
            goto LAB_00a9a435;
          case -0x7ff8ff49:
            goto LAB_00a9a43f;
          case -0x7ff8ff46:
            goto LAB_00a9a449;
          case -0x7ff8ff45:
            goto LAB_00a9a453;
          case -0x7ff8ff44:
            goto LAB_00a9a45d;
          case -0x7ff8ff43:
            goto LAB_00a9a467;
          case -0x7ff8ff42:
            goto LAB_00a9a471;
          case -0x7ff8ff41:
            goto LAB_00a9a47b;
          case -0x7ff8ff40:
            goto LAB_00a9a485;
          case -0x7ff8ff3f:
            goto LAB_00a9a48f;
          case -0x7ff8ff3e:
            goto LAB_00a9a499;
          case -0x7ff8ff3d:
            goto LAB_00a9a4a3;
          case -0x7ff8ff3c:
            goto LAB_00a9a4ad;
          case -0x7ff8ff3b:
            goto LAB_00a9a4b7;
          case -0x7ff8ff3a:
            goto LAB_00a9a4c1;
          case -0x7ff8ff39:
            goto LAB_00a9a4cb;
          case -0x7ff8ff36:
            goto LAB_00a9a4e9;
          case -0x7ff8ff35:
            goto LAB_00a9a4f3;
          case -0x7ff8ff33:
            goto LAB_00a9a4fd;
          case -0x7ff8ff32:
            goto LAB_00a9a507;
          case -0x7ff8ff31:
            goto LAB_00a9a511;
          case -0x7ff8ff30:
            goto LAB_00a9a51b;
          case -0x7ff8ff2f:
            goto LAB_00a9a525;
          case -0x7ff8ff2e:
            goto LAB_00a9a52f;
          case -0x7ff8ff2c:
            goto LAB_00a9a539;
          case -0x7ff8ff2a:
            goto LAB_00a9a543;
          case -0x7ff8ff29:
            goto LAB_00a9a54d;
          case -0x7ff8ff28:
            goto LAB_00a9a557;
          case -0x7ff8ff1a:
            goto LAB_00a9a561;
          case -0x7ff8ff19:
            goto LAB_00a9a56b;
          case -0x7ff8ff18:
            goto LAB_00a9a575;
          case -0x7ff8ff17:
            goto LAB_00a9a57f;
          case -0x7ff8ff16:
            goto LAB_00a9a589;
          }
        }
        else if (param_1 < -0x7ff8fbe4) {
          if (param_1 == -0x7ff8fbe5) goto LAB_00a9a89c;
          if (param_1 < -0x7ff8fc1b) {
            if (param_1 == -0x7ff8fc1c) {
LAB_00a9a734:
              return "ERROR_IO_INCOMPLETE";
            }
            if (param_1 < -0x7ff8fed5) {
              if (param_1 == -0x7ff8fed6) {
LAB_00a9a695:
                return "ERROR_TOO_MANY_POSTS";
              }
              switch(param_1) {
              case -0x7ff8ff02:
                goto LAB_00a9a5f2;
              case -0x7ff8ff01:
                goto LAB_00a9a5fc;
              case -0x7ff8fefe:
                goto LAB_00a9a606;
              case -0x7ff8fefd:
                goto LAB_00a9a610;
              case -0x7ff8fef6:
                goto LAB_00a9a61a;
              case -0x7ff8fef5:
                goto LAB_00a9a624;
              case -0x7ff8feed:
                goto LAB_00a9a62e;
              case -0x7ff8feec:
                goto LAB_00a9a638;
              case -0x7ff8feeb:
                goto LAB_00a9a642;
              case -0x7ff8feea:
                goto LAB_00a9a64c;
              case -0x7ff8fee6:
                goto LAB_00a9a656;
              case -0x7ff8fee0:
                goto LAB_00a9a69f;
              }
            }
            else if (param_1 < -0x7ff8fe18) {
              if (param_1 == -0x7ff8fe19) {
LAB_00a9a6d1:
                return "ERROR_INVALID_ADDRESS";
              }
              if (param_1 == -0x7ff8fed5) {
LAB_00a9a68b:
                return "ERROR_PARTIAL_COPY";
              }
              if (param_1 == -0x7ff8fed4) {
LAB_00a9a681:
                return "ERROR_OPLOCK_NOT_GRANTED";
              }
              if (param_1 == -0x7ff8fed3) goto LAB_00a9a6a9;
              if (param_1 == -0x7ff8fed2) goto LAB_00a9a6e5;
              if (param_1 == -0x7ff8fed1) goto LAB_00a9a6db;
              if (param_1 == -0x7ff8fec3) goto LAB_00a963c7;
            }
            else {
              if (param_1 == -0x7ff8fdea) goto LAB_00a9a6ef;
              if (param_1 == -0x7ff8fde9) goto LAB_00a9a752;
              if (param_1 == -0x7ff8fde8) goto LAB_00a9a748;
              if (param_1 == -0x7ff8fc1e) goto LAB_00a9a73e;
              if (param_1 == -0x7ff8fc1d) goto LAB_00a96408;
            }
          }
          else {
            switch(param_1) {
            case -0x7ff8fc1b:
LAB_00a9a75c:
              return "ERROR_IO_PENDING";
            case -0x7ff8fc1a:
LAB_00a9a799:
              return "ERROR_NOACCESS";
            case -0x7ff8fc19:
LAB_00a9a78f:
              return "ERROR_SWAPERROR";
            case -0x7ff8fc17:
LAB_00a9a785:
              return "ERROR_STACK_OVERFLOW";
            case -0x7ff8fc16:
code_r0x00a9a77b:
              return "ERROR_INVALID_MESSAGE";
            case -0x7ff8fc15:
              goto LAB_00a9a7a3;
            case -0x7ff8fc14:
              goto LAB_00a9a7c2;
            case -0x7ff8fc13:
              goto LAB_00a9a7cc;
            case -0x7ff8fc12:
              goto LAB_00a9a7d6;
            case -0x7ff8fc11:
              goto LAB_00a9a7e0;
            case -0x7ff8fc10:
              goto LAB_00a9a7ea;
            case -0x7ff8fc0f:
              goto LAB_00a9a7f4;
            case -0x7ff8fc0e:
              goto LAB_00a9a7fe;
            case -0x7ff8fc0d:
              goto LAB_00a9a808;
            case -0x7ff8fc0c:
              goto LAB_00a9a812;
            case -0x7ff8fc0b:
              goto LAB_00a9a81c;
            case -0x7ff8fc0a:
              goto LAB_00a9a842;
            case -0x7ff8fc09:
              goto LAB_00a9a84c;
            case -0x7ff8fc08:
              goto LAB_00a9a856;
            case -0x7ff8fc07:
              goto LAB_00a9a860;
            case -0x7ff8fc06:
              goto LAB_00a9a86a;
            case -0x7ff8fc05:
              goto LAB_00a9a874;
            case -0x7ff8fc04:
              goto LAB_00a9a87e;
            case -0x7ff8fc03:
              goto LAB_00a9a888;
            case -0x7ff8fc02:
              goto LAB_00a9a892;
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7ff8fbe4:
            goto LAB_00a9a8a6;
          case -0x7ff8fbe3:
            goto LAB_00a9a8b0;
          case -0x7ff8fbe2:
            goto LAB_00a9a8ba;
          case -0x7ff8fbe1:
            goto LAB_00a9a8c4;
          case -0x7ff8fbe0:
            goto LAB_00a9a8ce;
          case -0x7ff8fbdf:
            goto LAB_00a9a8d8;
          case -0x7ff8fbde:
            goto LAB_00a9a8e2;
          case -0x7ff8fbdd:
            goto LAB_00a9a8ec;
          case -0x7ff8fbdc:
            goto LAB_00a9a8f6;
          case -0x7ff8fbdb:
            goto LAB_00a9a900;
          case -0x7ff8fbda:
            goto LAB_00a9a90a;
          case -0x7ff8fbd9:
            goto LAB_00a9a914;
          case -0x7ff8fbd8:
            goto LAB_00a9a91e;
          case -0x7ff8fbd7:
            goto LAB_00a9a928;
          case -0x7ff8fbd6:
            goto LAB_00a9a932;
          case -0x7ff8fbd5:
            goto LAB_00a9a93c;
          case -0x7ff8fbd4:
            goto LAB_00a9a946;
          case -0x7ff8fbd3:
            goto LAB_00a9a950;
          case -0x7ff8fbd2:
            goto LAB_00a9a95a;
          case -0x7ff8fbd1:
            goto LAB_00a9a964;
          case -0x7ff8fbd0:
            goto LAB_00a9a96e;
          case -0x7ff8fbcf:
            goto LAB_00a9a978;
          case -0x7ff8fbce:
            goto LAB_00a9a982;
          case -0x7ff8fbcd:
            goto LAB_00a9a98c;
          case -0x7ff8fbcc:
            goto LAB_00a9a996;
          case -0x7ff8fbcb:
            goto LAB_00a9a9a0;
          case -0x7ff8fbca:
            goto LAB_00a9a9aa;
          case -0x7ff8fbc9:
            goto LAB_00a9a9b4;
          case -0x7ff8fbc8:
            goto LAB_00a9a9be;
          case -0x7ff8fbc7:
            goto LAB_00a9a9c8;
          case -0x7ff8fbc6:
            goto LAB_00a9a9d2;
          case -0x7ff8fbc5:
            goto LAB_00a9a9f3;
          case -0x7ff8fbc4:
            goto LAB_00a9b58d;
          case -0x7ff8fbb4:
            goto LAB_00a9a9fd;
          case -0x7ff8fbb3:
            goto LAB_00a9aa07;
          case -0x7ff8fbb2:
            goto LAB_00a9aa11;
          case -0x7ff8fbb1:
            goto LAB_00a9aa1b;
          case -0x7ff8fbb0:
            goto LAB_00a9aa25;
          case -0x7ff8fbaf:
            goto LAB_00a9aa2f;
          case -0x7ff8fbae:
            goto LAB_00a9aa39;
          case -0x7ff8fbad:
            goto LAB_00a9aa43;
          case -0x7ff8fbac:
            goto LAB_00a9aa4d;
          case -0x7ff8fbab:
            goto LAB_00a9aa57;
          case -0x7ff8fbaa:
            goto LAB_00a9aa61;
          case -0x7ff8fba9:
            goto LAB_00a9aa6b;
          case -0x7ff8fba8:
            goto LAB_00a9aa75;
          case -0x7ff8fba7:
            goto LAB_00a9aa7f;
          case -0x7ff8fba6:
            goto LAB_00a9aa89;
          case -0x7ff8fba5:
            goto LAB_00a9aa93;
          case -0x7ff8fba4:
            goto LAB_00a9aa9d;
          }
        }
      }
      else {
        switch(param_1) {
        case -0x7ff8fba2:
          goto LAB_00a9aab1;
        case -0x7ff8fba1:
          goto LAB_00a9aabb;
        case -0x7ff8fba0:
          goto LAB_00a9aac5;
        case -0x7ff8fb9f:
          goto LAB_00a9aacf;
        case -0x7ff8fb9e:
          goto LAB_00a9aad9;
        case -0x7ff8fb9d:
          goto LAB_00a9aae3;
        case -0x7ff8fb9c:
          goto LAB_00a9aaed;
        case -0x7ff8fb9b:
          goto LAB_00a9aaf7;
        case -0x7ff8fb9a:
          goto LAB_00a9ab01;
        case -0x7ff8fb99:
          goto LAB_00a9ab0b;
        case -0x7ff8fb98:
          goto LAB_00a9ab15;
        case -0x7ff8fb97:
          goto LAB_00a9ab1f;
        case -0x7ff8fb96:
          goto LAB_00a9ab29;
        case -0x7ff8fb95:
          goto LAB_00a9ab33;
        case -0x7ff8fb94:
          goto LAB_00a9ab3d;
        case -0x7ff8fb8c:
          goto code_r0x00a9ab47;
        case -0x7ff8fb8b:
          goto code_r0x00a9ab51;
        case -0x7ff8fb8a:
          goto code_r0x00a9ab5b;
        case -0x7ff8fb82:
          goto LAB_00a9ab65;
        case -0x7ff8fb81:
          goto LAB_00a9ab6f;
        case -0x7ff8fb80:
          goto LAB_00a9ab79;
        case -0x7ff8fb7f:
          goto LAB_00a9ab83;
        case -0x7ff8fb7e:
          goto LAB_00a9ab8d;
        case -0x7ff8fb7d:
          goto LAB_00a9ab97;
        case -0x7ff8fb7c:
          goto LAB_00a9aba1;
        case -0x7ff8fb7b:
          goto LAB_00a9abab;
        case -0x7ff8fb7a:
          goto LAB_00a9abb5;
        case -0x7ff8fb79:
          goto LAB_00a9abbf;
        case -0x7ff8fb78:
          goto LAB_00a9abc9;
        case -0x7ff8fb77:
          goto LAB_00a9abd3;
        case -0x7ff8fb76:
          goto LAB_00a9abdd;
        case -0x7ff8fb75:
          goto LAB_00a9abe7;
        case -0x7ff8fb74:
          goto LAB_00a9abf1;
        case -0x7ff8fb73:
          goto LAB_00a9abfb;
        case -0x7ff8fb72:
          goto LAB_00a9ac05;
        case -0x7ff8fb71:
          goto LAB_00a9ac0f;
        case -0x7ff8fb70:
          goto LAB_00a9ac19;
        case -0x7ff8fb6f:
          goto LAB_00a9ac23;
        case -0x7ff8fb6e:
          goto LAB_00a9ac2d;
        case -0x7ff8fb6d:
          goto LAB_00a9ac37;
        case -0x7ff8fb6c:
          goto LAB_00a9ac41;
        case -0x7ff8fb6b:
          goto LAB_00a9ac4b;
        case -0x7ff8fb69:
          goto LAB_00a9ac55;
        case -0x7ff8fb68:
          goto LAB_00a9ac5f;
        case -0x7ff8fb67:
          goto LAB_00a9ac69;
        case -0x7ff8fb66:
          goto LAB_00a9ac73;
        case -0x7ff8fb65:
          goto LAB_00a9ac7d;
        case -0x7ff8fb64:
          goto LAB_00a9ac87;
        case -0x7ff8fb63:
          goto LAB_00a9b597;
        case -0x7ff8fb50:
          goto LAB_00a9ac91;
        case -0x7ff8fb4f:
          goto LAB_00a9ac9b;
        case -0x7ff8fb4e:
          goto LAB_00a9aca5;
        case -0x7ff8fb4d:
          goto LAB_00a9acaf;
        case -0x7ff8fb4c:
          goto LAB_00a9acb9;
        case -0x7ff8fb4b:
          goto LAB_00a9acc3;
        case -0x7ff8fb4a:
          goto LAB_00a9accd;
        case -0x7ff8fb49:
          goto LAB_00a9acd7;
        case -0x7ff8fb48:
          goto LAB_00a9ace1;
        case -0x7ff8fb47:
          goto LAB_00a9aceb;
        case -0x7ff8fb46:
          goto LAB_00a9acf5;
        case -0x7ff8fb45:
          goto LAB_00a9acff;
        case -0x7ff8fb44:
          goto LAB_00a9ad09;
        case -0x7ff8fb43:
          goto LAB_00a9ad13;
        case -0x7ff8fb42:
          goto LAB_00a9ad1d;
        case -0x7ff8fb41:
          goto LAB_00a9ad27;
        case -0x7ff8fb40:
          goto LAB_00a9ad31;
        case -0x7ff8fb3f:
          goto LAB_00a9ad3b;
        case -0x7ff8fb3e:
          goto LAB_00a9ad45;
        case -0x7ff8fb3d:
          goto LAB_00a9ad4f;
        case -0x7ff8fb3c:
          goto LAB_00a9ad59;
        case -0x7ff8fb3b:
          goto LAB_00a9ad63;
        case -0x7ff8fb3a:
          goto LAB_00a9ad6d;
        case -0x7ff8fb39:
          goto LAB_00a9ad77;
        case -0x7ff8fb38:
          goto LAB_00a9ad81;
        case -0x7ff8fb37:
          goto LAB_00a9ad8b;
        case -0x7ff8fb36:
          goto LAB_00a9ad95;
        case -0x7ff8fb35:
          goto LAB_00a9ad9f;
        case -0x7ff8fb34:
          goto LAB_00a9ada9;
        case -0x7ff8fb33:
          goto LAB_00a9adb3;
        case -0x7ff8fb32:
          goto LAB_00a9adbd;
        case -0x7ff8fb31:
          goto LAB_00a9adc7;
        case -0x7ff8fb30:
          goto LAB_00a9add1;
        case -0x7ff8fb2f:
          goto LAB_00a9addb;
        case -0x7ff8fb2e:
          goto LAB_00a9ade5;
        case -0x7ff8fb2d:
          goto LAB_00a9adef;
        case -0x7ff8fb2c:
          goto LAB_00a9adf9;
        case -0x7ff8fb2b:
          goto LAB_00a9ae03;
        case -0x7ff8fb2a:
          goto LAB_00a9ae0d;
        case -0x7ff8fb29:
          goto LAB_00a9ae17;
        case -0x7ff8fb28:
          goto LAB_00a9ae21;
        case -0x7ff8fb27:
          goto LAB_00a9ae2b;
        case -0x7ff8fb26:
          goto LAB_00a9ae35;
        case -0x7ff8fb25:
          goto LAB_00a9ae3f;
        case -0x7ff8fb24:
          goto LAB_00a9ae49;
        case -0x7ff8fb23:
          goto LAB_00a9ae53;
        case -0x7ff8fb22:
          goto LAB_00a9ae5d;
        case -0x7ff8fb21:
          goto LAB_00a9ae67;
        case -0x7ff8fb20:
          goto LAB_00a9ae71;
        case -0x7ff8fb1f:
          goto LAB_00a9ae7b;
        case -0x7ff8fb1e:
          goto LAB_00a9ae85;
        case -0x7ff8fb1d:
          goto LAB_00a9b5a1;
        case -0x7ff8fb1c:
          goto LAB_00a9b5ab;
        case -0x7ff8fb1b:
          goto LAB_00a9b5b5;
        case -0x7ff8fb1a:
          goto LAB_00a9b5bf;
        case -0x7ff8fb19:
          goto LAB_00a9b5c9;
        case -0x7ff8fb18:
          goto LAB_00a9b5d3;
        case -0x7ff8fb17:
          goto LAB_00a9b5dd;
        case -0x7ff8fb16:
          goto LAB_00a9b5e7;
        case -0x7ff8fb15:
          goto LAB_00a9b5f1;
        case -0x7ff8fb14:
          goto LAB_00a9b5fb;
        case -0x7ff8fb13:
          goto LAB_00a9b605;
        case -0x7ff8fb12:
          goto LAB_00a9b60f;
        case -0x7ff8fb11:
          goto LAB_00a9b619;
        case -0x7ff8fb10:
          goto LAB_00a9b623;
        case -0x7ff8fb0f:
          goto LAB_00a9b62d;
        case -0x7ff8fb09:
          goto code_r0x00a9b637;
        case -0x7ff8fb07:
          goto LAB_00a9b641;
        case -0x7ff8fb06:
          goto LAB_00a9b64b;
        case -0x7ff8fb05:
          goto LAB_00a9b655;
        case -0x7ff8fb04:
          goto LAB_00a9b65f;
        case -0x7ff8faec:
          goto LAB_00a9ae8f;
        case -0x7ff8faeb:
          goto LAB_00a9ae99;
        case -0x7ff8faea:
          goto LAB_00a9aea3;
        case -0x7ff8fae9:
          goto LAB_00a9aead;
        case -0x7ff8fae8:
          goto LAB_00a9aeb7;
        case -0x7ff8fae7:
          goto LAB_00a9aec1;
        case -0x7ff8fae6:
          goto LAB_00a9aecb;
        case -0x7ff8fae5:
          goto LAB_00a9aed5;
        case -0x7ff8fae4:
          goto LAB_00a9aedf;
        case -0x7ff8fae3:
          goto LAB_00a9aee9;
        case -0x7ff8fae2:
          goto LAB_00a9aef3;
        case -0x7ff8fae1:
          goto LAB_00a9aefd;
        case -0x7ff8fae0:
          goto LAB_00a9af07;
        case -0x7ff8fadf:
          goto LAB_00a9af11;
        case -0x7ff8fade:
          goto LAB_00a9af1b;
        case -0x7ff8fadd:
          goto LAB_00a9af25;
        case -0x7ff8fadc:
          goto LAB_00a9af2f;
        case -0x7ff8fadb:
          goto LAB_00a9af39;
        case -0x7ff8fada:
          goto LAB_00a9af43;
        case -0x7ff8fad9:
          goto LAB_00a9af4d;
        case -0x7ff8fad8:
          goto LAB_00a9af57;
        case -0x7ff8fad7:
          goto LAB_00a9af61;
        case -0x7ff8fad6:
          goto LAB_00a9af6b;
        case -0x7ff8fad5:
          goto LAB_00a9af75;
        case -0x7ff8fad4:
          goto LAB_00a9af7f;
        case -0x7ff8fad3:
          goto LAB_00a9af89;
        case -0x7ff8fad2:
          goto LAB_00a9af93;
        case -0x7ff8fad1:
          goto LAB_00a9af9d;
        case -0x7ff8fad0:
          goto LAB_00a9afa7;
        case -0x7ff8facf:
          goto LAB_00a9afb1;
        case -0x7ff8face:
          goto LAB_00a9afbb;
        case -0x7ff8facd:
          goto LAB_00a9afc5;
        case -0x7ff8facc:
          goto LAB_00a9afcf;
        case -0x7ff8facb:
          goto LAB_00a9afd9;
        case -0x7ff8faca:
          goto LAB_00a9afe3;
        case -0x7ff8fac9:
          goto LAB_00a9afed;
        case -0x7ff8fac8:
          goto LAB_00a9aff7;
        case -0x7ff8fac7:
          goto LAB_00a9b001;
        case -0x7ff8fac6:
          goto LAB_00a9b00b;
        case -0x7ff8fac4:
          goto LAB_00a9b015;
        case -0x7ff8fac3:
          goto LAB_00a9b01f;
        case -0x7ff8fac2:
          goto LAB_00a9b029;
        case -0x7ff8fac1:
          goto LAB_00a9b033;
        case -0x7ff8fac0:
          goto LAB_00a9b03d;
        case -0x7ff8fabf:
          goto LAB_00a9b047;
        case -0x7ff8fabe:
          goto LAB_00a9b051;
        case -0x7ff8fabd:
          goto LAB_00a9b05b;
        case -0x7ff8fabc:
          goto LAB_00a9b065;
        case -0x7ff8fabb:
          goto LAB_00a9b06f;
        case -0x7ff8faba:
          goto LAB_00a9b079;
        case -0x7ff8fab9:
          goto LAB_00a9b083;
        case -0x7ff8fab8:
          goto LAB_00a9b08d;
        case -0x7ff8fab7:
          goto LAB_00a9b097;
        case -0x7ff8fab6:
          goto LAB_00a9b0a1;
        case -0x7ff8fab5:
          goto LAB_00a9b0ab;
        case -0x7ff8fab4:
          goto LAB_00a9b0b5;
        case -0x7ff8fab3:
          goto LAB_00a9b0bf;
        case -0x7ff8fab2:
          goto LAB_00a9b0c9;
        case -0x7ff8fab1:
          goto LAB_00a9b0d3;
        case -0x7ff8fab0:
          goto LAB_00a9b0dd;
        case -0x7ff8faaf:
          goto LAB_00a9b0e7;
        case -0x7ff8faae:
          goto LAB_00a9b0f1;
        case -0x7ff8faad:
          goto LAB_00a9b0fb;
        case -0x7ff8faac:
          goto LAB_00a9b105;
        case -0x7ff8faab:
          goto LAB_00a9b10f;
        case -0x7ff8faaa:
          goto LAB_00a9b119;
        case -0x7ff8faa9:
          goto LAB_00a9b123;
        case -0x7ff8faa8:
          goto LAB_00a9b12d;
        case -0x7ff8faa7:
          goto LAB_00a9b137;
        case -0x7ff8faa6:
          goto LAB_00a9b141;
        case -0x7ff8faa5:
          goto LAB_00a9b14b;
        case -0x7ff8faa4:
          goto LAB_00a9b155;
        case -0x7ff8faa3:
          goto LAB_00a9b15f;
        case -0x7ff8faa2:
          goto LAB_00a9b169;
        case -0x7ff8faa1:
          goto LAB_00a9b173;
        case -0x7ff8faa0:
          goto LAB_00a9b17d;
        case -0x7ff8fa9f:
          goto LAB_00a9b187;
        case -0x7ff8fa9e:
          goto LAB_00a9b191;
        case -0x7ff8fa9d:
          goto LAB_00a9b19b;
        case -0x7ff8fa9c:
          goto LAB_00a9b1a5;
        case -0x7ff8fa9b:
          goto LAB_00a9b1af;
        case -0x7ff8fa9a:
          goto LAB_00a9b1b9;
        case -0x7ff8fa99:
          goto LAB_00a9b1c3;
        case -0x7ff8fa98:
          goto LAB_00a9b1cd;
        case -0x7ff8fa97:
          goto LAB_00a9b1d7;
        case -0x7ff8fa96:
          goto LAB_00a9b1e1;
        case -0x7ff8fa95:
          goto LAB_00a9b1eb;
        case -0x7ff8fa94:
          goto LAB_00a9b1f5;
        case -0x7ff8fa93:
          goto LAB_00a9b1ff;
        case -0x7ff8fa92:
          goto LAB_00a9b209;
        case -0x7ff8fa91:
          goto LAB_00a9b213;
        case -0x7ff8fa90:
          goto LAB_00a9b21d;
        case -0x7ff8fa8f:
          goto LAB_00a9b227;
        case -0x7ff8fa8e:
          goto LAB_00a9b231;
        case -0x7ff8fa8d:
          goto LAB_00a9b23b;
        case -0x7ff8fa8c:
          goto LAB_00a9b245;
        case -0x7ff8fa8b:
          goto LAB_00a9b24f;
        case -0x7ff8fa8a:
          goto LAB_00a9b259;
        case -0x7ff8fa89:
          goto LAB_00a9b669;
        case -0x7ff8fa88:
          goto LAB_00a9b263;
        case -0x7ff8fa87:
          goto LAB_00a9b26d;
        case -0x7ff8fa86:
          goto LAB_00a9b277;
        case -0x7ff8fa85:
          goto LAB_00a9b281;
        case -0x7ff8fa84:
          goto LAB_00a9b28b;
        case -0x7ff8fa83:
          goto LAB_00a9b295;
        case -0x7ff8fa82:
          goto LAB_00a9b29f;
        case -0x7ff8fa81:
          goto LAB_00a9b2a9;
        case -0x7ff8fa80:
          goto LAB_00a9b2b3;
        case -0x7ff8fa7f:
          goto LAB_00a9b2bd;
        case -0x7ff8fa7e:
          goto LAB_00a9b2c7;
        case -0x7ff8fa7d:
          goto LAB_00a9b2d1;
        case -0x7ff8fa7c:
          goto LAB_00a9b2db;
        case -0x7ff8fa7b:
          goto LAB_00a9b2e5;
        case -0x7ff8fa7a:
          goto LAB_00a9b2ef;
        case -0x7ff8fa79:
          goto LAB_00a9b2f9;
        case -0x7ff8fa78:
          goto LAB_00a9b303;
        case -0x7ff8fa77:
          goto LAB_00a9b30d;
        case -0x7ff8fa76:
          goto LAB_00a9b317;
        case -0x7ff8fa75:
          goto LAB_00a9b321;
        case -0x7ff8fa74:
          goto LAB_00a9b32b;
        case -0x7ff8fa73:
          goto LAB_00a9b335;
        case -0x7ff8fa72:
          goto LAB_00a9b33f;
        case -0x7ff8fa71:
          goto LAB_00a9b349;
        case -0x7ff8fa70:
          goto LAB_00a9b353;
        case -0x7ff8fa6f:
          goto LAB_00a9b35d;
        case -0x7ff8fa6e:
          goto LAB_00a9b367;
        case -0x7ff8fa6d:
          goto LAB_00a9b371;
        case -0x7ff8fa6c:
          goto LAB_00a9b37b;
        case -0x7ff8fa6b:
          goto LAB_00a9b385;
        case -0x7ff8fa6a:
          goto LAB_00a9b38f;
        case -0x7ff8fa69:
          goto LAB_00a9b399;
        case -0x7ff8fa68:
          goto LAB_00a9b3a3;
        case -0x7ff8fa67:
          goto LAB_00a9b3ad;
        case -0x7ff8fa66:
          goto LAB_00a9b3b7;
        case -0x7ff8fa65:
          goto LAB_00a9b3c1;
        case -0x7ff8fa64:
          goto LAB_00a9b3cb;
        case -0x7ff8fa63:
          goto LAB_00a9b3d5;
        case -0x7ff8fa62:
          goto LAB_00a9b3df;
        case -0x7ff8fa61:
          goto LAB_00a9b3e9;
        case -0x7ff8fa60:
          goto LAB_00a9b3f3;
        case -0x7ff8fa5f:
          goto LAB_00a9b3fd;
        case -0x7ff8fa5e:
          goto LAB_00a9b407;
        case -0x7ff8fa5d:
          goto LAB_00a9b411;
        case -0x7ff8fa5c:
          goto LAB_00a9b41b;
        case -0x7ff8fa5b:
          goto LAB_00a9b425;
        case -0x7ff8fa5a:
          goto LAB_00a9b42f;
        case -0x7ff8fa59:
          goto LAB_00a9b439;
        case -0x7ff8fa58:
          goto LAB_00a9b443;
        case -0x7ff8fa57:
          goto LAB_00a9b44d;
        case -0x7ff8fa56:
          goto LAB_00a9b457;
        case -0x7ff8fa55:
          goto LAB_00a9b461;
        case -0x7ff8fa54:
          goto LAB_00a9b46b;
        case -0x7ff8fa53:
          goto LAB_00a9b475;
        case -0x7ff8fa52:
          goto LAB_00a9b47f;
        case -0x7ff8fa51:
          goto LAB_00a9b489;
        case -0x7ff8fa50:
          goto LAB_00a9b493;
        case -0x7ff8fa4f:
          goto LAB_00a9b49d;
        case -0x7ff8fa4e:
          goto LAB_00a9b4a7;
        case -0x7ff8fa4d:
          goto LAB_00a9b4b1;
        case -0x7ff8fa4c:
          goto LAB_00a9b4bb;
        case -0x7ff8fa4b:
          goto LAB_00a9b4c5;
        case -0x7ff8fa24:
          goto LAB_00a9b4cf;
        case -0x7ff8fa23:
          goto LAB_00a9b4d9;
        case -0x7ff8fa22:
          goto LAB_00a9b4e3;
        case -0x7ff8fa21:
          goto LAB_00a9b4ed;
        case -0x7ff8f9bf:
          goto LAB_00a9b673;
        case -0x7ff8f9be:
          goto LAB_00a9b4f7;
        case -0x7ff8f9bd:
          goto LAB_00a9b501;
        case -0x7ff8f9bc:
          goto LAB_00a9b50b;
        case -0x7ff8f9bb:
          goto LAB_00a9b515;
        case -0x7ff8f9ba:
          goto LAB_00a9b51f;
        case -0x7ff8f9b9:
          goto LAB_00a9b529;
        case -0x7ff8f9b8:
          goto LAB_00a9b533;
        case -0x7ff8f9b7:
          goto LAB_00a9b53d;
        case -0x7ff8f9b6:
          goto LAB_00a9b547;
        case -0x7ff8f9b5:
          goto LAB_00a9b551;
        case -0x7ff8f9b4:
          goto LAB_00a9b55b;
        case -0x7ff8f9b3:
          goto LAB_00a9b67d;
        case -0x7ff8f9b2:
          goto LAB_00a9b565;
        case -0x7ff8f9b1:
          goto LAB_00a9b56f;
        }
      }
    }
    else if (param_1 < -0x7ff8f735) {
      if (param_1 == -0x7ff8f736) {
LAB_00a9bf28:
        return "ERROR_NOT_CONNECTED";
      }
      if (param_1 + 0x7ff8f9afU < 0x24a) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + -0x7f5cf775)) {
        case 0:
LAB_00a9b583:
          return "ERROR_DEVICE_REMOVED";
        case 1:
LAB_00a9b687:
          return "ERROR_INSTALL_ALREADY_RUNNING";
        case 2:
LAB_00a9b691:
          return "ERROR_INSTALL_PACKAGE_OPEN_FAILED";
        case 3:
LAB_00a9b69b:
          return "ERROR_INSTALL_PACKAGE_INVALID";
        case 4:
LAB_00a9b6a5:
          return "ERROR_INSTALL_UI_FAILURE";
        case 5:
LAB_00a9b6af:
          return "ERROR_INSTALL_LOG_FAILURE";
        case 6:
LAB_00a9b6b9:
          return "ERROR_INSTALL_LANGUAGE_UNSUPPORTED";
        case 7:
LAB_00a9b6c3:
          return "ERROR_INSTALL_TRANSFORM_FAILURE";
        case 8:
LAB_00a9b6cd:
          return "ERROR_INSTALL_PACKAGE_REJECTED";
        case 9:
LAB_00a9b6d7:
          return "ERROR_FUNCTION_NOT_CALLED";
        case 10:
          goto LAB_00a9b6e1;
        case 0xb:
          goto LAB_00a9b713;
        case 0xc:
          goto LAB_00a9b71d;
        case 0xd:
          goto LAB_00a9b727;
        case 0xe:
          goto LAB_00a9b731;
        case 0xf:
          goto LAB_00a9b73b;
        case 0x10:
          goto LAB_00a9b745;
        case 0x11:
          goto LAB_00a9b74f;
        case 0x12:
          goto LAB_00a9b759;
        case 0x13:
          goto LAB_00a9b763;
        case 0x14:
          goto LAB_00a9b76d;
        case 0x15:
          goto LAB_00a9b777;
        case 0x16:
          goto LAB_00a9b781;
        case 0x17:
          goto LAB_00a9b78b;
        case 0x18:
          goto LAB_00a9b795;
        case 0x19:
          goto LAB_00a9b79f;
        case 0x1a:
          goto LAB_00a9b7a9;
        case 0x1b:
          goto LAB_00a9b7b3;
        case 0x1c:
          goto LAB_00a9b7bd;
        case 0x1d:
LAB_00a9b7f8:
          return "RPC_S_WRONG_KIND_OF_BINDING";
        case 0x1e:
LAB_00a9b802:
          return "RPC_S_INVALID_BINDING";
        case 0x1f:
LAB_00a9b80c:
          return "RPC_S_PROTSEQ_NOT_SUPPORTED";
        case 0x20:
LAB_00a9b816:
          return "RPC_S_INVALID_RPC_PROTSEQ";
        case 0x21:
LAB_00a9b820:
          return "RPC_S_INVALID_STRING_UUID";
        case 0x22:
LAB_00a9b82a:
          return "RPC_S_INVALID_ENDPOINT_FORMAT";
        case 0x23:
LAB_00a9b834:
          return "RPC_S_INVALID_NET_ADDR";
        case 0x24:
LAB_00a9b83e:
          return "RPC_S_NO_ENDPOINT_FOUND";
        case 0x25:
LAB_00a9b848:
          return "RPC_S_INVALID_TIMEOUT";
        case 0x26:
LAB_00a9b852:
          return "RPC_S_OBJECT_NOT_FOUND";
        case 0x27:
LAB_00a9b85c:
          return "RPC_S_ALREADY_REGISTERED";
        case 0x28:
LAB_00a9b866:
          return "RPC_S_TYPE_ALREADY_REGISTERED";
        case 0x29:
LAB_00a9b870:
          return "RPC_S_ALREADY_LISTENING";
        case 0x2a:
LAB_00a9b87a:
          return "RPC_S_NO_PROTSEQS_REGISTERED";
        case 0x2b:
LAB_00a9b884:
          return "RPC_S_NOT_LISTENING";
        case 0x2c:
LAB_00a9b88e:
          return "RPC_S_UNKNOWN_MGR_TYPE";
        case 0x2d:
LAB_00a9b898:
          return "RPC_S_UNKNOWN_IF";
        case 0x2e:
LAB_00a9b8a2:
          return "RPC_S_NO_BINDINGS";
        case 0x2f:
LAB_00a9b8ac:
          return "RPC_S_NO_PROTSEQS";
        case 0x30:
LAB_00a9b8b6:
          return "RPC_S_CANT_CREATE_ENDPOINT";
        case 0x31:
LAB_00a9b8c0:
          return "RPC_S_OUT_OF_RESOURCES";
        case 0x32:
LAB_00a9b8ca:
          return "RPC_S_SERVER_UNAVAILABLE";
        case 0x33:
LAB_00a9b8d4:
          return "RPC_S_SERVER_TOO_BUSY";
        case 0x34:
LAB_00a9b8de:
          return "RPC_S_INVALID_NETWORK_OPTIONS";
        case 0x35:
LAB_00a9b8e8:
          return "RPC_S_NO_CALL_ACTIVE";
        case 0x36:
LAB_00a9b8f2:
          return "RPC_S_CALL_FAILED";
        case 0x37:
LAB_00a9b8fc:
          return "RPC_S_CALL_FAILED_DNE";
        case 0x38:
LAB_00a9b906:
          return "RPC_S_PROTOCOL_ERROR";
        case 0x39:
LAB_00a9b910:
          return "RPC_S_UNSUPPORTED_TRANS_SYN";
        case 0x3a:
LAB_00a9b91a:
          return "RPC_S_UNSUPPORTED_TYPE";
        case 0x3b:
LAB_00a9b924:
          return "RPC_S_INVALID_TAG";
        case 0x3c:
LAB_00a9b92e:
          return "RPC_S_INVALID_BOUND";
        case 0x3d:
LAB_00a9b938:
          return "RPC_S_NO_ENTRY_NAME";
        case 0x3e:
LAB_00a9b942:
          return "RPC_S_INVALID_NAME_SYNTAX";
        case 0x3f:
LAB_00a9b94c:
          return "RPC_S_UNSUPPORTED_NAME_SYNTAX";
        case 0x40:
LAB_00a9b956:
          return "RPC_S_UUID_NO_ADDRESS";
        case 0x41:
LAB_00a9b960:
          return "RPC_S_DUPLICATE_ENDPOINT";
        case 0x42:
LAB_00a9b96a:
          return "RPC_S_UNKNOWN_AUTHN_TYPE";
        case 0x43:
LAB_00a9b974:
          return "RPC_S_MAX_CALLS_TOO_SMALL";
        case 0x44:
LAB_00a9b97e:
          return "RPC_S_STRING_TOO_LONG";
        case 0x45:
LAB_00a9b988:
          return "RPC_S_PROTSEQ_NOT_FOUND";
        case 0x46:
LAB_00a9b992:
          return "RPC_S_PROCNUM_OUT_OF_RANGE";
        case 0x47:
LAB_00a9b99c:
          return "RPC_S_BINDING_HAS_NO_AUTH";
        case 0x48:
LAB_00a9b9a6:
          return "RPC_S_UNKNOWN_AUTHN_SERVICE";
        case 0x49:
LAB_00a9b9b0:
          return "RPC_S_UNKNOWN_AUTHN_LEVEL";
        case 0x4a:
LAB_00a9b9ba:
          return "RPC_S_INVALID_AUTH_IDENTITY";
        case 0x4b:
LAB_00a9b9c4:
          return "RPC_S_UNKNOWN_AUTHZ_SERVICE";
        case 0x4c:
LAB_00a9b9ce:
          return "EPT_S_INVALID_ENTRY";
        case 0x4d:
LAB_00a9b9d8:
          return "EPT_S_CANT_PERFORM_OP";
        case 0x4e:
LAB_00a9b9e2:
          return "EPT_S_NOT_REGISTERED";
        case 0x4f:
LAB_00a9b9ec:
          return "RPC_S_NOTHING_TO_EXPORT";
        case 0x50:
LAB_00a9b9f6:
          return "RPC_S_INCOMPLETE_NAME";
        case 0x51:
LAB_00a9ba00:
          return "RPC_S_INVALID_VERS_OPTION";
        case 0x52:
LAB_00a9ba0a:
          return "RPC_S_NO_MORE_MEMBERS";
        case 0x53:
LAB_00a9ba14:
          return "RPC_S_NOT_ALL_OBJS_UNEXPORTED";
        case 0x54:
LAB_00a9ba1e:
          return "RPC_S_INTERFACE_NOT_FOUND";
        case 0x55:
LAB_00a9ba28:
          return "RPC_S_ENTRY_ALREADY_EXISTS";
        case 0x56:
LAB_00a9ba32:
          return "RPC_S_ENTRY_NOT_FOUND";
        case 0x57:
LAB_00a9ba3c:
          return "RPC_S_NAME_SERVICE_UNAVAILABLE";
        case 0x58:
LAB_00a9ba46:
          return "RPC_S_INVALID_NAF_ID";
        case 0x59:
LAB_00a9ba50:
          return "RPC_S_CANNOT_SUPPORT";
        case 0x5a:
LAB_00a9ba5a:
          return "RPC_S_NO_CONTEXT_AVAILABLE";
        case 0x5b:
LAB_00a9ba64:
          return "RPC_S_INTERNAL_ERROR";
        case 0x5c:
LAB_00a9ba6e:
          return "RPC_S_ZERO_DIVIDE";
        case 0x5d:
LAB_00a9ba78:
          return "RPC_S_ADDRESS_ERROR";
        case 0x5e:
LAB_00a9ba82:
          return "RPC_S_FP_DIV_ZERO";
        case 0x5f:
LAB_00a9ba8c:
          return "RPC_S_FP_UNDERFLOW";
        case 0x60:
LAB_00a9ba96:
          return "RPC_S_FP_OVERFLOW";
        case 0x61:
LAB_00a9baa0:
          return "RPC_X_NO_MORE_ENTRIES";
        case 0x62:
LAB_00a9baaa:
          return "RPC_X_SS_CHAR_TRANS_OPEN_FAIL";
        case 99:
LAB_00a9bab4:
          return "RPC_X_SS_CHAR_TRANS_SHORT_FILE";
        case 100:
LAB_00a9babe:
          return "RPC_X_SS_IN_NULL_CONTEXT";
        case 0x65:
LAB_00a9bac8:
          return "RPC_X_SS_CONTEXT_DAMAGED";
        case 0x66:
LAB_00a9bad2:
          return "RPC_X_SS_HANDLES_MISMATCH";
        case 0x67:
LAB_00a9badc:
          return "RPC_X_SS_CANNOT_GET_CALL_HANDLE";
        case 0x68:
LAB_00a9bae6:
          return "RPC_X_NULL_REF_POINTER";
        case 0x69:
LAB_00a9baf0:
          return "RPC_X_ENUM_VALUE_OUT_OF_RANGE";
        case 0x6a:
LAB_00a9bafa:
          return "RPC_X_BYTE_COUNT_TOO_SMALL";
        case 0x6b:
LAB_00a9bb04:
          return "RPC_X_BAD_STUB_DATA";
        case 0x6c:
LAB_00a9bb0e:
          return "ERROR_INVALID_USER_BUFFER";
        case 0x6d:
LAB_00a9bb18:
          return "ERROR_UNRECOGNIZED_MEDIA";
        case 0x6e:
LAB_00a9bb22:
          return "ERROR_NO_TRUST_LSA_SECRET";
        case 0x6f:
LAB_00a9bb2c:
          return "ERROR_NO_TRUST_SAM_ACCOUNT";
        case 0x70:
LAB_00a9bb36:
          return "ERROR_TRUSTED_DOMAIN_FAILURE";
        case 0x71:
LAB_00a9bb40:
          return "ERROR_TRUSTED_RELATIONSHIP_FAILURE";
        case 0x72:
LAB_00a9bb4a:
          return "ERROR_TRUST_FAILURE";
        case 0x73:
LAB_00a9bb54:
          return "RPC_S_CALL_IN_PROGRESS";
        case 0x74:
LAB_00a9bb5e:
          return "ERROR_NETLOGON_NOT_STARTED";
        case 0x75:
LAB_00a9bb68:
          return "ERROR_ACCOUNT_EXPIRED";
        case 0x76:
LAB_00a9bb72:
          return "ERROR_REDIRECTOR_HAS_OPEN_HANDLES";
        case 0x77:
LAB_00a9bb7c:
          return "ERROR_PRINTER_DRIVER_ALREADY_INSTALLED";
        case 0x78:
LAB_00a9bb86:
          return "ERROR_UNKNOWN_PORT";
        case 0x79:
LAB_00a9bb90:
          return "ERROR_UNKNOWN_PRINTER_DRIVER";
        case 0x7a:
LAB_00a9bb9a:
          return "ERROR_UNKNOWN_PRINTPROCESSOR";
        case 0x7b:
LAB_00a9bba4:
          return "ERROR_INVALID_SEPARATOR_FILE";
        case 0x7c:
LAB_00a9bbae:
          return "ERROR_INVALID_PRIORITY";
        case 0x7d:
LAB_00a9bbb8:
          return "ERROR_INVALID_PRINTER_NAME";
        case 0x7e:
LAB_00a9bbc2:
          return "ERROR_PRINTER_ALREADY_EXISTS";
        case 0x7f:
LAB_00a9bbcc:
          return "ERROR_INVALID_PRINTER_COMMAND";
        case 0x80:
LAB_00a9bbd6:
          return "ERROR_INVALID_DATATYPE";
        case 0x81:
LAB_00a9bbe0:
          return "ERROR_INVALID_ENVIRONMENT";
        case 0x82:
LAB_00a9bbea:
          return "RPC_S_NO_MORE_BINDINGS";
        case 0x83:
LAB_00a9bbf4:
          return "ERROR_NOLOGON_INTERDOMAIN_TRUST_ACCOUNT";
        case 0x84:
LAB_00a9bbfe:
          return "ERROR_NOLOGON_WORKSTATION_TRUST_ACCOUNT";
        case 0x85:
LAB_00a9bc08:
          return "ERROR_NOLOGON_SERVER_TRUST_ACCOUNT";
        case 0x86:
LAB_00a9bc12:
          return "ERROR_DOMAIN_TRUST_INCONSISTENT";
        case 0x87:
LAB_00a9bc1c:
          return "ERROR_SERVER_HAS_OPEN_HANDLES";
        case 0x88:
LAB_00a9bc26:
          return "ERROR_RESOURCE_DATA_NOT_FOUND";
        case 0x89:
LAB_00a9bc30:
          return "ERROR_RESOURCE_TYPE_NOT_FOUND";
        case 0x8a:
LAB_00a9bc3a:
          return "ERROR_RESOURCE_NAME_NOT_FOUND";
        case 0x8b:
LAB_00a9bc44:
          return "ERROR_RESOURCE_LANG_NOT_FOUND";
        case 0x8c:
LAB_00a9bc4e:
          return "ERROR_NOT_ENOUGH_QUOTA";
        case 0x8d:
LAB_00a9bc58:
          return "RPC_S_NO_INTERFACES";
        case 0x8e:
LAB_00a9bc62:
          return "RPC_S_CALL_CANCELLED";
        case 0x8f:
LAB_00a9bc6c:
          return "RPC_S_BINDING_INCOMPLETE";
        case 0x90:
LAB_00a9bc76:
          return "RPC_S_COMM_FAILURE";
        case 0x91:
LAB_00a9bc80:
          return "RPC_S_UNSUPPORTED_AUTHN_LEVEL";
        case 0x92:
LAB_00a9bc8a:
          return "RPC_S_NO_PRINC_NAME";
        case 0x93:
LAB_00a9bc94:
          return "RPC_S_NOT_RPC_ERROR";
        case 0x94:
LAB_00a9bc9e:
          return "RPC_S_UUID_LOCAL_ONLY";
        case 0x95:
LAB_00a9bca8:
          return "RPC_S_SEC_PKG_ERROR";
        case 0x96:
LAB_00a9bcb2:
          return "RPC_S_NOT_CANCELLED";
        case 0x97:
LAB_00a9bcbc:
          return "RPC_X_INVALID_ES_ACTION";
        case 0x98:
LAB_00a9bcc6:
          return "RPC_X_WRONG_ES_VERSION";
        case 0x99:
LAB_00a9bcd0:
          return "RPC_X_WRONG_STUB_VERSION";
        case 0x9a:
LAB_00a9bcda:
          return "RPC_X_INVALID_PIPE_OBJECT";
        case 0x9b:
LAB_00a9bce4:
          return "RPC_X_WRONG_PIPE_ORDER";
        case 0x9c:
LAB_00a9bcee:
          return "RPC_X_WRONG_PIPE_VERSION";
        case 0x9d:
LAB_00a9bcf8:
          return "RPC_S_GROUP_MEMBER_NOT_FOUND";
        case 0x9e:
LAB_00a9bd02:
          return "EPT_S_CANT_CREATE";
        case 0x9f:
LAB_00a9bd0c:
          return "RPC_S_INVALID_OBJECT";
        case 0xa0:
LAB_00a9bd16:
          return "ERROR_INVALID_TIME";
        case 0xa1:
LAB_00a9bd20:
          return "ERROR_INVALID_FORM_NAME";
        case 0xa2:
LAB_00a9bd2a:
          return "ERROR_INVALID_FORM_SIZE";
        case 0xa3:
LAB_00a9bd34:
          return "ERROR_ALREADY_WAITING";
        case 0xa4:
LAB_00a9bd3e:
          return "ERROR_PRINTER_DELETED";
        case 0xa5:
LAB_00a9bd48:
          return "ERROR_INVALID_PRINTER_STATE";
        case 0xa6:
LAB_00a9bd52:
          return "ERROR_PASSWORD_MUST_CHANGE";
        case 0xa7:
LAB_00a9bd5c:
          return "ERROR_DOMAIN_CONTROLLER_NOT_FOUND";
        case 0xa8:
LAB_00a9bd66:
          return "ERROR_ACCOUNT_LOCKED_OUT";
        case 0xa9:
LAB_00a9bd70:
          return "OR_INVALID_OXID";
        case 0xaa:
LAB_00a9bd7a:
          return "OR_INVALID_OID";
        case 0xab:
LAB_00a9bd84:
          return "OR_INVALID_SET";
        case 0xac:
LAB_00a9bd8e:
          return "RPC_S_SEND_INCOMPLETE";
        case 0xad:
LAB_00a9bd98:
          return "RPC_S_INVALID_ASYNC_HANDLE";
        case 0xae:
LAB_00a9bda2:
          return "RPC_S_INVALID_ASYNC_CALL";
        case 0xaf:
LAB_00a9bdac:
          return "RPC_X_PIPE_CLOSED";
        case 0xb0:
LAB_00a9bdb6:
          return "RPC_X_PIPE_DISCIPLINE_ERROR";
        case 0xb1:
LAB_00a9bdc0:
          return "RPC_X_PIPE_EMPTY";
        case 0xb2:
LAB_00a9bdca:
          return "ERROR_NO_SITENAME";
        case 0xb3:
LAB_00a9bdd4:
          return "ERROR_CANT_ACCESS_FILE";
        case 0xb4:
LAB_00a9bdde:
          return "ERROR_CANT_RESOLVE_FILENAME";
        case 0xb5:
LAB_00a9beba:
          return "RPC_S_ENTRY_TYPE_MISMATCH";
        case 0xb6:
LAB_00a9bec4:
          return "RPC_S_NOT_ALL_OBJS_EXPORTED";
        case 0xb7:
LAB_00a9bece:
          return "RPC_S_INTERFACE_NOT_EXPORTED";
        case 0xb8:
LAB_00a9bed8:
          return "RPC_S_PROFILE_NOT_ADDED";
        case 0xb9:
LAB_00a9bee2:
          return "RPC_S_PRF_ELT_NOT_ADDED";
        case 0xba:
LAB_00a9beec:
          return "RPC_S_PRF_ELT_NOT_REMOVED";
        case 0xbb:
LAB_00a9bef6:
          return "RPC_S_GRP_ELT_NOT_ADDED";
        case 0xbc:
LAB_00a9bf00:
          return "RPC_S_GRP_ELT_NOT_REMOVED";
        case 0xbd:
LAB_00a9bf0a:
          return "ERROR_KM_DRIVER_BLOCKED";
        case 0xbe:
LAB_00a9bf14:
          return "ERROR_CONTEXT_EXPIRED";
        case 0xbf:
LAB_00a9bde8:
          return "ERROR_INVALID_PIXEL_FORMAT";
        case 0xc0:
LAB_00a9bdf2:
          return "ERROR_BAD_DRIVER";
        case 0xc1:
LAB_00a9bdfc:
          return "ERROR_INVALID_WINDOW_STYLE";
        case 0xc2:
LAB_00a9be06:
          return "ERROR_METAFILE_NOT_SUPPORTED";
        case 0xc3:
LAB_00a9be10:
          return "ERROR_TRANSFORM_NOT_SUPPORTED";
        case 0xc4:
LAB_00a9be1a:
          return "ERROR_CLIPPING_NOT_SUPPORTED";
        case 0xc5:
LAB_00a9be24:
          return "ERROR_INVALID_CMM";
        case 0xc6:
LAB_00a9be2e:
          return "ERROR_INVALID_PROFILE";
        case 199:
LAB_00a9be38:
          return "ERROR_TAG_NOT_FOUND";
        case 200:
LAB_00a9be42:
          return "ERROR_TAG_NOT_PRESENT";
        case 0xc9:
LAB_00a9be4c:
          return "ERROR_DUPLICATE_TAG";
        case 0xca:
LAB_00a9be56:
          return "ERROR_PROFILE_NOT_ASSOCIATED_WITH_DEVICE";
        case 0xcb:
LAB_00a9be60:
          return "ERROR_PROFILE_NOT_FOUND";
        case 0xcc:
LAB_00a9be6a:
          return "ERROR_INVALID_COLORSPACE";
        case 0xcd:
LAB_00a9be74:
          return "ERROR_ICM_NOT_ENABLED";
        case 0xce:
LAB_00a9be7e:
          return "ERROR_DELETING_ICM_XFORM";
        case 0xcf:
LAB_00a9be88:
          return "ERROR_INVALID_TRANSFORM";
        case 0xd0:
LAB_00a9be92:
          return "ERROR_COLORSPACE_MISMATCH";
        case 0xd1:
LAB_00a9be9c:
          return "ERROR_INVALID_COLORINDEX";
        case 0xd2:
LAB_00a9bea6:
          return "ERROR_CONNECTED_OTHER_PASSWORD";
        case 0xd3:
LAB_00a9bf1e:
          return "ERROR_CONNECTED_OTHER_PASSWORD_DEFAULT";
        case 0xd4:
LAB_00a9beb0:
          return "ERROR_BAD_USERNAME";
        }
      }
    }
    else if (param_1 < -0x7ff8deac) {
      if (param_1 == -0x7ff8dead) {
LAB_00a9d8a2:
        return "ERROR_DS_CANT_START";
      }
      if (param_1 < -0x7ff8dfea) {
        if (param_1 == -0x7ff8dfeb) {
LAB_00a9cdaf:
          return "ERROR_DS_CANT_ON_NON_LEAF";
        }
        if (param_1 < -0x7ff8ec46) {
          if (param_1 == -0x7ff8ec47) {
LAB_00a9c699:
            return "ERROR_CLUSTER_INVALID_NETWORK_PROVIDER";
          }
          if (param_1 < -0x7ff8ef17) {
            if (param_1 == -0x7ff8ef18) {
LAB_00a9c31b:
              return "ERROR_TRANSPORT_FULL";
            }
            if (param_1 < -0x7ff8ef8f) {
              if (param_1 == -0x7ff8ef90) {
LAB_00a9c1a1:
                return "ERROR_WMI_SERVER_UNAVAILABLE";
              }
              if (param_1 < -0x7ff8f439) {
                if (param_1 == -0x7ff8f43a) {
LAB_00a9c0a7:
                  return "ERROR_PRINTER_DRIVER_BLOCKED";
                }
                if (param_1 < -0x7ff8f442) {
                  if (param_1 == -0x7ff8f443) {
LAB_00a9c038:
                    return "ERROR_PRINT_PROCESSOR_ALREADY_INSTALLED";
                  }
                  if (param_1 < -0x7ff8f446) {
                    if (param_1 == -0x7ff8f447) {
LAB_00a9bfff:
                      return "ERROR_PRINTER_DRIVER_IN_USE";
                    }
                    if (param_1 == -0x7ff8f69f) {
LAB_00a9bff5:
                      return "ERROR_OPEN_FILES";
                    }
                    if (param_1 == -0x7ff8f69e) {
LAB_00a9bfeb:
                      return "ERROR_ACTIVE_CONNECTIONS";
                    }
                    if (param_1 == -0x7ff8f69c) {
LAB_00a9bfe1:
                      return "ERROR_DEVICE_IN_USE";
                    }
                    if (param_1 == -0x7ff8f448) {
LAB_00a9bfd7:
                      return "ERROR_UNKNOWN_PRINT_MONITOR";
                    }
                  }
                  else {
                    if (param_1 == -0x7ff8f446) {
LAB_00a9c02e:
                      return "ERROR_SPOOL_FILE_NOT_FOUND";
                    }
                    if (param_1 == -0x7ff8f445) {
LAB_00a9c024:
                      return "ERROR_SPL_NO_STARTDOC";
                    }
                    if (param_1 == -0x7ff8f444) {
LAB_00a9c01a:
                      return "ERROR_SPL_NO_ADDJOB";
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case -0x7ff8f442:
LAB_00a9c057:
                    return "ERROR_PRINT_MONITOR_ALREADY_INSTALLED";
                  case -0x7ff8f441:
LAB_00a9c061:
                    return "ERROR_INVALID_PRINT_MONITOR";
                  case -0x7ff8f440:
LAB_00a9c06b:
                    return "ERROR_PRINT_MONITOR_IN_USE";
                  case -0x7ff8f43f:
LAB_00a9c075:
                    return "ERROR_PRINTER_HAS_JOBS_QUEUED";
                  case -0x7ff8f43e:
LAB_00a9c07f:
                    return "ERROR_SUCCESS_REBOOT_REQUIRED";
                  case -0x7ff8f43d:
LAB_00a9c089:
                    return "ERROR_SUCCESS_RESTART_REQUIRED";
                  case -0x7ff8f43c:
LAB_00a9c093:
                    return "ERROR_PRINTER_NOT_FOUND";
                  case -0x7ff8f43b:
LAB_00a9c09d:
                    return "ERROR_PRINTER_DRIVER_WARNED";
                  }
                }
              }
              else if (param_1 < -0x7ff8ef97) {
                if (param_1 == -0x7ff8ef98) {
LAB_00a9c146:
                  return "ERROR_WMI_GUID_NOT_FOUND";
                }
                if (param_1 < -0x7ff8f05b) {
                  if (param_1 == -0x7ff8f05c) {
LAB_00a9c10b:
                    return "ERROR_FULL_BACKUP";
                  }
                  if (param_1 == -0x7ff8f060) {
LAB_00a9c101:
                    return "ERROR_WINS_INTERNAL";
                  }
                  if (param_1 == -0x7ff8f05f) {
LAB_00a9c0f7:
                    return "ERROR_CAN_NOT_DEL_LOCAL_WINS";
                  }
                  if (param_1 == -0x7ff8f05e) {
LAB_00a9c0ed:
                    return "ERROR_STATIC_INIT";
                  }
                  if (param_1 == -0x7ff8f05d) {
LAB_00a9c0e3:
                    return "ERROR_INC_BACKUP";
                  }
                }
                else {
                  if (param_1 == -0x7ff8f05b) {
LAB_00a9c13c:
                    return "ERROR_REC_NON_EXISTENT";
                  }
                  if (param_1 == -0x7ff8f05a) {
LAB_00a9c132:
                    return "ERROR_RPL_NOT_ALLOWED";
                  }
                  if (param_1 == -0x7ff8effc) {
LAB_00a9c128:
                    return "ERROR_DHCP_ADDRESS_CONFLICT";
                  }
                }
              }
              else {
                if (param_1 == -0x7ff8ef97) {
LAB_00a9c165:
                  return "ERROR_WMI_INSTANCE_NOT_FOUND";
                }
                if (param_1 == -0x7ff8ef96) {
LAB_00a9c16f:
                  return "ERROR_WMI_ITEMID_NOT_FOUND";
                }
                if (param_1 == -0x7ff8ef95) goto LAB_00a9c179;
                if (param_1 == -0x7ff8ef94) goto LAB_00a9c183;
                if (param_1 == -0x7ff8ef93) goto LAB_00a9c18d;
                if (param_1 == -0x7ff8ef92) goto LAB_00a9c197;
                if (param_1 == -0x7ff8ef91) goto code_r0x00a9663a;
              }
            }
            else {
              switch(param_1) {
              case -0x7ff8ef8f:
LAB_00a9c1ab:
                return "ERROR_WMI_DP_FAILED";
              case -0x7ff8ef8e:
LAB_00a9c1d1:
                return "ERROR_WMI_INVALID_MOF";
              case -0x7ff8ef8d:
LAB_00a9c1db:
                return "ERROR_WMI_INVALID_REGINFO";
              case -0x7ff8ef8c:
LAB_00a9c1e5:
                return "ERROR_WMI_ALREADY_DISABLED";
              case -0x7ff8ef8b:
LAB_00a9c1ef:
                return "ERROR_WMI_READ_ONLY";
              case -0x7ff8ef8a:
LAB_00a9c1f9:
                return "ERROR_WMI_SET_FAILURE";
              case -0x7ff8ef34:
LAB_00a9c203:
                return "ERROR_INVALID_MEDIA";
              case -0x7ff8ef33:
LAB_00a9c20d:
                return "ERROR_INVALID_LIBRARY";
              case -0x7ff8ef32:
LAB_00a9c217:
                return "ERROR_INVALID_MEDIA_POOL";
              case -0x7ff8ef31:
LAB_00a9c221:
                return "ERROR_DRIVE_MEDIA_MISMATCH";
              case -0x7ff8ef30:
LAB_00a9c22b:
                return "ERROR_MEDIA_OFFLINE";
              case -0x7ff8ef2f:
LAB_00a9c235:
                return "ERROR_LIBRARY_OFFLINE";
              case -0x7ff8ef2e:
LAB_00a9c23f:
                return "ERROR_EMPTY";
              case -0x7ff8ef2d:
LAB_00a9c249:
                return "ERROR_NOT_EMPTY";
              case -0x7ff8ef2c:
LAB_00a9c253:
                return "ERROR_MEDIA_UNAVAILABLE";
              case -0x7ff8ef2b:
LAB_00a9c25d:
                return "ERROR_RESOURCE_DISABLED";
              case -0x7ff8ef2a:
LAB_00a9c267:
                return "ERROR_INVALID_CLEANER";
              case -0x7ff8ef29:
LAB_00a9c271:
                return "ERROR_UNABLE_TO_CLEAN";
              case -0x7ff8ef28:
LAB_00a9c27b:
                return "ERROR_OBJECT_NOT_FOUND";
              case -0x7ff8ef27:
LAB_00a9c285:
                return "ERROR_DATABASE_FAILURE";
              case -0x7ff8ef26:
LAB_00a9c28f:
                return "ERROR_DATABASE_FULL";
              case -0x7ff8ef25:
LAB_00a9c299:
                return "ERROR_MEDIA_INCOMPATIBLE";
              case -0x7ff8ef24:
LAB_00a9c2a3:
                return "ERROR_RESOURCE_NOT_PRESENT";
              case -0x7ff8ef23:
LAB_00a9c2ad:
                return "ERROR_INVALID_OPERATION";
              case -0x7ff8ef22:
LAB_00a9c2b7:
                return "ERROR_MEDIA_NOT_AVAILABLE";
              case -0x7ff8ef21:
LAB_00a9c2c1:
                return "ERROR_DEVICE_NOT_AVAILABLE";
              case -0x7ff8ef20:
LAB_00a9c2cb:
                return "ERROR_REQUEST_REFUSED";
              case -0x7ff8ef1f:
LAB_00a9c2d5:
                return "ERROR_INVALID_DRIVE_OBJECT";
              case -0x7ff8ef1e:
LAB_00a9c2df:
                return "ERROR_LIBRARY_FULL";
              case -0x7ff8ef1d:
LAB_00a9c2e9:
                return "ERROR_MEDIUM_NOT_ACCESSIBLE";
              case -0x7ff8ef1c:
LAB_00a9c2f3:
                return "ERROR_UNABLE_TO_LOAD_MEDIUM";
              case -0x7ff8ef1b:
LAB_00a9c2fd:
                return "ERROR_UNABLE_TO_INVENTORY_DRIVE";
              case -0x7ff8ef1a:
LAB_00a9c307:
                return "ERROR_UNABLE_TO_INVENTORY_SLOT";
              case -0x7ff8ef19:
LAB_00a9c311:
                return "ERROR_UNABLE_TO_INVENTORY_TRANSPORT";
              }
            }
          }
          else if (param_1 < -0x7ff8eed9) {
            if (param_1 == -0x7ff8eeda) {
LAB_00a9c3ea:
              return "ERROR_NOT_A_REPARSE_POINT";
            }
            switch(param_1) {
            case -0x7ff8ef17:
              goto LAB_00a9c325;
            case -0x7ff8ef16:
LAB_00a9c35e:
              return "ERROR_UNABLE_TO_EJECT_MOUNTED_MEDIA";
            case -0x7ff8ef15:
LAB_00a9c368:
              return "ERROR_CLEANER_SLOT_SET";
            case -0x7ff8ef14:
LAB_00a9c372:
              return "ERROR_CLEANER_SLOT_NOT_SET";
            case -0x7ff8ef13:
LAB_00a9c37c:
              return "ERROR_CLEANER_CARTRIDGE_SPENT";
            case -0x7ff8ef12:
LAB_00a9c386:
              return "ERROR_UNEXPECTED_OMID";
            case -0x7ff8ef11:
LAB_00a9c390:
              return "ERROR_CANT_DELETE_LAST_ITEM";
            case -0x7ff8ef10:
LAB_00a9c39a:
              return "ERROR_MESSAGE_EXCEEDS_MAX_SIZE";
            case -0x7ff8ef0f:
LAB_00a9c3c2:
              return "ERROR_VOLUME_CONTAINS_SYS_FILES";
            case -0x7ff8ef0e:
LAB_00a9c3cc:
              return "ERROR_INDIGENOUS_TYPE";
            case -0x7ff8ef0d:
LAB_00a9c3d6:
              return "ERROR_NO_SUPPORTING_DRIVES";
            case -0x7ff8ef0c:
LAB_00a9c3e0:
              return "ERROR_CLEANER_CARTRIDGE_INSTALLED";
            case -0x7ff8ef02:
LAB_00a9c3a4:
              return "ERROR_FILE_OFFLINE";
            case -0x7ff8ef01:
LAB_00a9c3ae:
              return "ERROR_REMOTE_STORAGE_NOT_ACTIVE";
            case -0x7ff8ef00:
LAB_00a9c3b8:
              return "ERROR_REMOTE_STORAGE_MEDIA_ERROR";
            }
          }
          else if (param_1 < -0x7ff8ec61) {
            if (param_1 == -0x7ff8ec62) {
LAB_00a9c576:
              return "ERROR_CLUSTER_SHUTTING_DOWN";
            }
            if (param_1 < -0x7ff8ec6e) {
              if (param_1 == -0x7ff8ec6f) {
LAB_00a9c4df:
                return "ERROR_CANT_EVICT_ACTIVE_NODE";
              }
              if (param_1 < -0x7ff8ec75) {
                if (param_1 == -0x7ff8ec76) {
LAB_00a9c47f:
                  return "ERROR_DEPENDENCY_NOT_FOUND";
                }
                if (param_1 == -0x7ff8eed9) {
LAB_00a9c475:
                  return "ERROR_REPARSE_ATTRIBUTE_CONFLICT";
                }
                if (param_1 == -0x7ff8eed8) {
LAB_00a9c46b:
                  return "ERROR_INVALID_REPARSE_DATA";
                }
                if (param_1 == -0x7ff8eed7) {
LAB_00a9c461:
                  return "ERROR_REPARSE_TAG_INVALID";
                }
                if (param_1 == -0x7ff8eed6) {
LAB_00a9c457:
                  return "ERROR_REPARSE_TAG_MISMATCH";
                }
                if (param_1 == -0x7ff8ee6c) {
LAB_00a9c44d:
                  return "ERROR_VOLUME_NOT_SIS_ENABLED";
                }
                if (param_1 == -0x7ff8ec77) {
LAB_00a9c443:
                  return "ERROR_DEPENDENT_RESOURCE_EXISTS";
                }
              }
              else {
                if (param_1 == -0x7ff8ec75) {
LAB_00a9c4d5:
                  return "ERROR_DEPENDENCY_ALREADY_EXISTS";
                }
                if (param_1 == -0x7ff8ec74) {
LAB_00a9c4cb:
                  return "ERROR_RESOURCE_NOT_ONLINE";
                }
                if (param_1 == -0x7ff8ec73) {
LAB_00a9c4c1:
                  return "ERROR_HOST_NODE_NOT_AVAILABLE";
                }
                if (param_1 == -0x7ff8ec72) {
LAB_00a9c4b7:
                  return "ERROR_RESOURCE_NOT_AVAILABLE";
                }
                if (param_1 == -0x7ff8ec71) {
LAB_00a9c4ad:
                  return "ERROR_RESOURCE_NOT_FOUND";
                }
                if (param_1 == -0x7ff8ec70) {
LAB_00a9c4a3:
                  return "ERROR_SHUTDOWN_CLUSTER";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ff8ec6e:
LAB_00a9c4fe:
                return "ERROR_OBJECT_ALREADY_EXISTS";
              case -0x7ff8ec6d:
LAB_00a9c508:
                return "ERROR_OBJECT_IN_LIST";
              case -0x7ff8ec6c:
LAB_00a9c512:
                return "ERROR_GROUP_NOT_AVAILABLE";
              case -0x7ff8ec6b:
LAB_00a9c51c:
                return "ERROR_GROUP_NOT_FOUND";
              case -0x7ff8ec6a:
LAB_00a9c526:
                return "ERROR_GROUP_NOT_ONLINE";
              case -0x7ff8ec69:
LAB_00a9c530:
                return "ERROR_HOST_NODE_NOT_RESOURCE_OWNER";
              case -0x7ff8ec68:
LAB_00a9c53a:
                return "ERROR_HOST_NODE_NOT_GROUP_OWNER";
              case -0x7ff8ec67:
LAB_00a9c544:
                return "ERROR_RESMON_CREATE_FAILED";
              case -0x7ff8ec66:
LAB_00a9c54e:
                return "ERROR_RESMON_ONLINE_FAILED";
              case -0x7ff8ec65:
LAB_00a9c558:
                return "ERROR_RESOURCE_ONLINE";
              case -0x7ff8ec64:
LAB_00a9c562:
                return "ERROR_QUORUM_RESOURCE";
              case -0x7ff8ec63:
LAB_00a9c56c:
                return "ERROR_NOT_QUORUM_CAPABLE";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ff8ec61:
LAB_00a9c580:
              return "ERROR_INVALID_STATE";
            case -0x7ff8ec60:
LAB_00a9c59f:
              return "ERROR_RESOURCE_PROPERTIES_STORED";
            case -0x7ff8ec5f:
LAB_00a9c5a9:
              return "ERROR_NOT_QUORUM_CLASS";
            case -0x7ff8ec5e:
LAB_00a9c5b3:
              return "ERROR_CORE_RESOURCE";
            case -0x7ff8ec5d:
LAB_00a9c5bd:
              return "ERROR_QUORUM_RESOURCE_ONLINE_FAILED";
            case -0x7ff8ec5c:
LAB_00a9c5c7:
              return "ERROR_QUORUMLOG_OPEN_FAILED";
            case -0x7ff8ec5b:
LAB_00a9c5d1:
              return "ERROR_CLUSTERLOG_CORRUPT";
            case -0x7ff8ec5a:
LAB_00a9c5db:
              return "ERROR_CLUSTERLOG_RECORD_EXCEEDS_MAXSIZE";
            case -0x7ff8ec59:
LAB_00a9c5e5:
              return "ERROR_CLUSTERLOG_EXCEEDS_MAXSIZE";
            case -0x7ff8ec58:
LAB_00a9c5ef:
              return "ERROR_CLUSTERLOG_CHKPOINT_NOT_FOUND";
            case -0x7ff8ec57:
LAB_00a9c5f9:
              return "ERROR_CLUSTERLOG_NOT_ENOUGH_SPACE";
            case -0x7ff8ec56:
LAB_00a9c603:
              return "ERROR_QUORUM_OWNER_ALIVE";
            case -0x7ff8ec55:
LAB_00a9c60d:
              return "ERROR_NETWORK_NOT_AVAILABLE";
            case -0x7ff8ec54:
LAB_00a9c617:
              return "ERROR_NODE_NOT_AVAILABLE";
            case -0x7ff8ec53:
LAB_00a9c621:
              return "ERROR_ALL_NODES_NOT_AVAILABLE";
            case -0x7ff8ec52:
LAB_00a9c62b:
              return "ERROR_RESOURCE_FAILED";
            case -0x7ff8ec51:
LAB_00a9c635:
              return "ERROR_CLUSTER_INVALID_NODE";
            case -0x7ff8ec50:
LAB_00a9c63f:
              return "ERROR_CLUSTER_NODE_EXISTS";
            case -0x7ff8ec4f:
LAB_00a9c649:
              return "ERROR_CLUSTER_JOIN_IN_PROGRESS";
            case -0x7ff8ec4e:
LAB_00a9c653:
              return "ERROR_CLUSTER_NODE_NOT_FOUND";
            case -0x7ff8ec4d:
LAB_00a9c65d:
              return "ERROR_CLUSTER_LOCAL_NODE_NOT_FOUND";
            case -0x7ff8ec4c:
LAB_00a9c667:
              return "ERROR_CLUSTER_NETWORK_EXISTS";
            case -0x7ff8ec4b:
LAB_00a9c671:
              return "ERROR_CLUSTER_NETWORK_NOT_FOUND";
            case -0x7ff8ec4a:
LAB_00a9c67b:
              return "ERROR_CLUSTER_NETINTERFACE_EXISTS";
            case -0x7ff8ec49:
LAB_00a9c685:
              return "ERROR_CLUSTER_NETINTERFACE_NOT_FOUND";
            case -0x7ff8ec48:
LAB_00a9c68f:
              return "ERROR_CLUSTER_INVALID_REQUEST";
            }
          }
        }
        else if (param_1 < -0x7ff8e8fd) {
          if (param_1 == -0x7ff8e8fe) {
LAB_00a9c851:
            return "ERROR_CLUSTER_MEMBERSHIP_INVALID_STATE";
          }
          switch(param_1) {
          case -0x7ff8ec46:
            goto LAB_00a9c6a3;
          case -0x7ff8ec45:
LAB_00a9c6d5:
            return "ERROR_CLUSTER_NODE_UNREACHABLE";
          case -0x7ff8ec44:
LAB_00a9c6df:
            return "ERROR_CLUSTER_NODE_NOT_MEMBER";
          case -0x7ff8ec43:
LAB_00a9c6e9:
            return "ERROR_CLUSTER_JOIN_NOT_IN_PROGRESS";
          case -0x7ff8ec42:
LAB_00a9c6f3:
            return "ERROR_CLUSTER_INVALID_NETWORK";
          case -0x7ff8ec40:
LAB_00a9c6fd:
            return "ERROR_CLUSTER_NODE_UP";
          case -0x7ff8ec3f:
LAB_00a9c707:
            return "ERROR_CLUSTER_IPADDR_IN_USE";
          case -0x7ff8ec3e:
LAB_00a9c711:
            return "ERROR_CLUSTER_NODE_NOT_PAUSED";
          case -0x7ff8ec3d:
LAB_00a9c71b:
            return "ERROR_CLUSTER_NO_SECURITY_CONTEXT";
          case -0x7ff8ec3c:
LAB_00a9c725:
            return "ERROR_CLUSTER_NETWORK_NOT_INTERNAL";
          case -0x7ff8ec3b:
LAB_00a9c72f:
            return "ERROR_CLUSTER_NODE_ALREADY_UP";
          case -0x7ff8ec3a:
LAB_00a9c739:
            return "ERROR_CLUSTER_NODE_ALREADY_DOWN";
          case -0x7ff8ec39:
LAB_00a9c743:
            return "ERROR_CLUSTER_NETWORK_ALREADY_ONLINE";
          case -0x7ff8ec38:
LAB_00a9c74d:
            return "ERROR_CLUSTER_NETWORK_ALREADY_OFFLINE";
          case -0x7ff8ec37:
LAB_00a9c757:
            return "ERROR_CLUSTER_NODE_ALREADY_MEMBER";
          case -0x7ff8ec36:
LAB_00a9c761:
            return "ERROR_CLUSTER_LAST_INTERNAL_NETWORK";
          case -0x7ff8ec35:
LAB_00a9c76b:
            return "ERROR_CLUSTER_NETWORK_HAS_DEPENDENTS";
          case -0x7ff8ec34:
LAB_00a9c775:
            return "ERROR_INVALID_OPERATION_ON_QUORUM";
          case -0x7ff8ec33:
LAB_00a9c77f:
            return "ERROR_DEPENDENCY_NOT_ALLOWED";
          case -0x7ff8ec32:
LAB_00a9c789:
            return "ERROR_CLUSTER_NODE_PAUSED";
          case -0x7ff8ec31:
LAB_00a9c793:
            return "ERROR_NODE_CANT_HOST_RESOURCE";
          case -0x7ff8ec30:
LAB_00a9c79d:
            return "ERROR_CLUSTER_NODE_NOT_READY";
          case -0x7ff8ec2f:
LAB_00a9c7a7:
            return "ERROR_CLUSTER_NODE_SHUTTING_DOWN";
          case -0x7ff8ec2e:
LAB_00a9c7b1:
            return "ERROR_CLUSTER_JOIN_ABORTED";
          case -0x7ff8ec2d:
LAB_00a9c7bb:
            return "ERROR_CLUSTER_INCOMPATIBLE_VERSIONS";
          case -0x7ff8ec2c:
LAB_00a9c7c5:
            return "ERROR_CLUSTER_MAXNUM_OF_RESOURCES_EXCEEDED";
          case -0x7ff8ec2b:
LAB_00a9c7cf:
            return "ERROR_CLUSTER_SYSTEM_CONFIG_CHANGED";
          case -0x7ff8ec2a:
LAB_00a9c7d9:
            return "ERROR_CLUSTER_RESOURCE_TYPE_NOT_FOUND";
          case -0x7ff8ec29:
LAB_00a9c7e3:
            return "ERROR_CLUSTER_RESTYPE_NOT_SUPPORTED";
          case -0x7ff8ec28:
LAB_00a9c7ed:
            return "ERROR_CLUSTER_RESNAME_NOT_FOUND";
          case -0x7ff8ec27:
LAB_00a9c7f7:
            return "ERROR_CLUSTER_NO_RPC_PACKAGES_REGISTERED";
          case -0x7ff8ec26:
LAB_00a9c801:
            return "ERROR_CLUSTER_OWNER_NOT_IN_PREFLIST";
          case -0x7ff8ec25:
LAB_00a9c80b:
            return "ERROR_CLUSTER_DATABASE_SEQMISMATCH";
          case -0x7ff8ec24:
LAB_00a9c815:
            return "ERROR_RESMON_INVALID_STATE";
          case -0x7ff8ec23:
LAB_00a9c81f:
            return "ERROR_CLUSTER_GUM_NOT_LOCKER";
          case -0x7ff8ec22:
LAB_00a9c829:
            return "ERROR_QUORUM_DISK_NOT_FOUND";
          case -0x7ff8ec21:
LAB_00a9c833:
            return "ERROR_DATABASE_BACKUP_CORRUPT";
          case -0x7ff8ec20:
LAB_00a9c83d:
            return "ERROR_CLUSTER_NODE_ALREADY_HAS_DFS_ROOT";
          case -0x7ff8ec1f:
LAB_00a9c847:
            return "ERROR_RESOURCE_PROPERTY_UNCHANGEABLE";
          }
        }
        else if (param_1 < -0x7ff8e88f) {
          if (param_1 == -0x7ff8e890) {
LAB_00a9c8e3:
            return "ERROR_ENCRYPTION_FAILED";
          }
          switch(param_1) {
          case -0x7ff8e8fd:
LAB_00a9c87f:
            return "ERROR_CLUSTER_QUORUMLOG_NOT_FOUND";
          case -0x7ff8e8fc:
LAB_00a9c889:
            return "ERROR_CLUSTER_MEMBERSHIP_HALT";
          case -0x7ff8e8fb:
LAB_00a9c893:
            return "ERROR_CLUSTER_INSTANCE_ID_MISMATCH";
          case -0x7ff8e8fa:
LAB_00a9c89d:
            return "ERROR_CLUSTER_NETWORK_NOT_FOUND_FOR_IP";
          case -0x7ff8e8f9:
LAB_00a9c8a7:
            return "ERROR_CLUSTER_PROPERTY_DATA_TYPE_MISMATCH";
          case -0x7ff8e8f8:
LAB_00a9c8b1:
            return "ERROR_CLUSTER_EVICT_WITHOUT_CLEANUP";
          case -0x7ff8e8f7:
LAB_00a9c8bb:
            return "ERROR_CLUSTER_PARAMETER_MISMATCH";
          case -0x7ff8e8f6:
LAB_00a9c8c5:
            return "ERROR_NODE_CANNOT_BE_CLUSTERED";
          case -0x7ff8e8f5:
LAB_00a9c8cf:
            return "ERROR_CLUSTER_WRONG_OS_VERSION";
          case -0x7ff8e8f4:
LAB_00a9c8d9:
            return "ERROR_CLUSTER_CANT_CREATE_DUP_CLUSTER_NAME";
          }
        }
        else if (param_1 < -0x7ff8e819) {
          if (param_1 == -0x7ff8e81a) {
LAB_00a9c9b5:
            return "ERROR_NO_BROWSER_SERVERS_FOUND";
          }
          switch(param_1) {
          case -0x7ff8e88f:
LAB_00a9c915:
            return "ERROR_DECRYPTION_FAILED";
          case -0x7ff8e88e:
LAB_00a9c91f:
            return "ERROR_FILE_ENCRYPTED";
          case -0x7ff8e88d:
LAB_00a9c929:
            return "ERROR_NO_RECOVERY_POLICY";
          case -0x7ff8e88c:
LAB_00a9c933:
            return "ERROR_NO_EFS";
          case -0x7ff8e88b:
LAB_00a9c93d:
            return "ERROR_WRONG_EFS";
          case -0x7ff8e88a:
LAB_00a9c947:
            return "ERROR_NO_USER_KEYS";
          case -0x7ff8e889:
LAB_00a9c951:
            return "ERROR_FILE_NOT_ENCRYPTED";
          case -0x7ff8e888:
LAB_00a9c95b:
            return "ERROR_NOT_EXPORT_FORMAT";
          case -0x7ff8e887:
LAB_00a9c965:
            return "ERROR_FILE_READ_ONLY";
          case -0x7ff8e886:
LAB_00a9c96f:
            return "ERROR_DIR_EFS_DISALLOWED";
          case -0x7ff8e885:
LAB_00a9c979:
            return "ERROR_EFS_SERVER_NOT_TRUSTED";
          case -0x7ff8e884:
LAB_00a9c983:
            return "ERROR_BAD_RECOVERY_POLICY";
          case -0x7ff8e883:
LAB_00a9c98d:
            return "ERROR_EFS_ALG_BLOB_TOO_BIG";
          case -0x7ff8e882:
LAB_00a9c997:
            return "ERROR_VOLUME_NOT_SUPPORT_EFS";
          case -0x7ff8e881:
LAB_00a9c9a1:
            return "ERROR_EFS_DISABLED";
          case -0x7ff8e880:
LAB_00a9c9ab:
            return "ERROR_EFS_VERSION_NOT_SUPPORT";
          }
        }
        else if (param_1 < -0x7ff8e471) {
          if (param_1 == -0x7ff8e472) {
LAB_00a9cbb4:
            return "ERROR_CTX_LICENSE_NOT_AVAILABLE";
          }
          if (param_1 < -0x7ff8e496) {
            if (param_1 == -0x7ff8e497) {
LAB_00a9cae4:
              return "ERROR_CTX_TD_ERROR";
            }
            if (param_1 < -0x7ff8e49f) {
              if (param_1 == -0x7ff8e4a0) {
LAB_00a9ca61:
                return "ERROR_CTX_NO_OUTBUF";
              }
              if (param_1 < -0x7ff8e4a3) {
                if (param_1 == -0x7ff8e4a4) {
LAB_00a9ca3f:
                  return "ERROR_CTX_WD_NOT_FOUND";
                }
                if (param_1 == -0x7ff8e7c8) {
LAB_00a9ca35:
                  return "SCHED_E_SERVICE_NOT_LOCALSYSTEM";
                }
                if (param_1 == -0x7ff8e4a7) {
LAB_00a9ca2b:
                  return "ERROR_CTX_WINSTATION_NAME_INVALID";
                }
                if (param_1 == -0x7ff8e4a6) {
LAB_00a9ca21:
                  return "ERROR_CTX_INVALID_PD";
                }
                if (param_1 == -0x7ff8e4a5) {
LAB_00a9ca17:
                  return "ERROR_CTX_PD_NOT_FOUND";
                }
              }
              else {
                if (param_1 == -0x7ff8e4a3) {
LAB_00a9ca75:
                  return "ERROR_CTX_CANNOT_MAKE_EVENTLOG_ENTRY";
                }
                if (param_1 == -0x7ff8e4a2) {
LAB_00a9ca6b:
                  return "ERROR_CTX_SERVICE_NAME_COLLISION";
                }
                if (param_1 == -0x7ff8e4a1) {
LAB_00a96874:
                  return "ERROR_CTX_CLOSE_PENDING";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ff8e49f:
LAB_00a9ca7f:
                return "ERROR_CTX_MODEM_INF_NOT_FOUND";
              case -0x7ff8e49e:
LAB_00a9ca9e:
                return "ERROR_CTX_INVALID_MODEMNAME";
              case -0x7ff8e49d:
LAB_00a9caa8:
                return "ERROR_CTX_MODEM_RESPONSE_ERROR";
              case -0x7ff8e49c:
LAB_00a9cab2:
                return "ERROR_CTX_MODEM_RESPONSE_TIMEOUT";
              case -0x7ff8e49b:
LAB_00a9cabc:
                return "ERROR_CTX_MODEM_RESPONSE_NO_CARRIER";
              case -0x7ff8e49a:
LAB_00a9cac6:
                return "ERROR_CTX_MODEM_RESPONSE_NO_DIALTONE";
              case -0x7ff8e499:
LAB_00a9cad0:
                return "ERROR_CTX_MODEM_RESPONSE_BUSY";
              case -0x7ff8e498:
LAB_00a9cada:
                return "ERROR_CTX_MODEM_RESPONSE_VOICE";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ff8e492:
LAB_00a9caee:
              return "ERROR_CTX_WINSTATION_NOT_FOUND";
            case -0x7ff8e491:
LAB_00a9cb14:
              return "ERROR_CTX_WINSTATION_ALREADY_EXISTS";
            case -0x7ff8e490:
LAB_00a9cb1e:
              return "ERROR_CTX_WINSTATION_BUSY";
            case -0x7ff8e48f:
LAB_00a9cb28:
              return "ERROR_CTX_BAD_VIDEO_MODE";
            case -0x7ff8e485:
LAB_00a9cb32:
              return "ERROR_CTX_GRAPHICS_INVALID";
            case -0x7ff8e483:
LAB_00a9cb3c:
              return "ERROR_CTX_LOGON_DISABLED";
            case -0x7ff8e482:
LAB_00a9cb46:
              return "ERROR_CTX_NOT_CONSOLE";
            case -0x7ff8e480:
LAB_00a9cb50:
              return "ERROR_CTX_CLIENT_QUERY_TIMEOUT";
            case -0x7ff8e47f:
LAB_00a9cb5a:
              return "ERROR_CTX_CONSOLE_DISCONNECT";
            case -0x7ff8e47e:
LAB_00a9cb64:
              return "ERROR_CTX_CONSOLE_CONNECT";
            case -0x7ff8e47c:
LAB_00a9cb6e:
              return "ERROR_CTX_SHADOW_DENIED";
            case -0x7ff8e47b:
LAB_00a9cb78:
              return "ERROR_CTX_WINSTATION_ACCESS_DENIED";
            case -0x7ff8e477:
LAB_00a9cb82:
              return "ERROR_CTX_INVALID_WD";
            case -0x7ff8e476:
LAB_00a9cb8c:
              return "ERROR_CTX_SHADOW_INVALID";
            case -0x7ff8e475:
LAB_00a9cb96:
              return "ERROR_CTX_SHADOW_DISABLED";
            case -0x7ff8e474:
LAB_00a9cba0:
              return "ERROR_CTX_CLIENT_LICENSE_IN_USE";
            case -0x7ff8e473:
LAB_00a9cbaa:
              return "ERROR_CTX_CLIENT_LICENSE_NOT_SET";
            }
          }
        }
        else if (param_1 < -0x7ff8e0b1) {
          if (param_1 == -0x7ff8e0b2) {
LAB_00a9ccc5:
            return "FRS_ERR_SYSVOL_POPULATE_TIMEOUT";
          }
          if (param_1 < -0x7ff8e0ba) {
            if (param_1 == -0x7ff8e0bb) {
LAB_00a9cc4c:
              return "FRS_ERR_INTERNAL";
            }
            if (param_1 < -0x7ff8e0be) {
              if (param_1 == -0x7ff8e0bf) {
LAB_00a9cc0f:
                return "FRS_ERR_INVALID_API_SEQUENCE";
              }
              if (param_1 == -0x7ff8e471) goto LAB_00a9cbbe;
              if (param_1 == -0x7ff8e470) {
LAB_00a9cc23:
                return "ERROR_CTX_LICENSE_EXPIRED";
              }
              if (param_1 == -0x7ff8e46f) {
LAB_00a9cc19:
                return "ERROR_CTX_SHADOW_NOT_RUNNING";
              }
              if (param_1 == -0x7ff8e46e) {
LAB_00a9690a:
                return "ERROR_CTX_SHADOW_ENDED_BY_MODE_CHANGE";
              }
            }
            else {
              if (param_1 == -0x7ff8e0be) {
LAB_00a9cc2d:
                return "FRS_ERR_STARTING_SERVICE";
              }
              if (param_1 == -0x7ff8e0bd) {
LAB_00a9cc56:
                return "FRS_ERR_STOPPING_SERVICE";
              }
              if (param_1 == -0x7ff8e0bc) {
LAB_00a96935:
                return "FRS_ERR_INTERNAL_API";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ff8e0ba:
LAB_00a9cc60:
              return "FRS_ERR_SERVICE_COMM";
            case -0x7ff8e0b9:
LAB_00a9cc7f:
              return "FRS_ERR_INSUFFICIENT_PRIV";
            case -0x7ff8e0b8:
LAB_00a9cc89:
              return "FRS_ERR_AUTHENTICATION";
            case -0x7ff8e0b7:
LAB_00a9cc93:
              return "FRS_ERR_PARENT_INSUFFICIENT_PRIV";
            case -0x7ff8e0b6:
LAB_00a9cc9d:
              return "FRS_ERR_PARENT_AUTHENTICATION";
            case -0x7ff8e0b5:
LAB_00a9cca7:
              return "FRS_ERR_CHILD_TO_PARENT_COMM";
            case -0x7ff8e0b4:
LAB_00a9ccb1:
              return "FRS_ERR_PARENT_TO_CHILD_COMM";
            case -0x7ff8e0b3:
LAB_00a9ccbb:
              return "FRS_ERR_SYSVOL_POPULATE";
            }
          }
        }
        else if (param_1 < -0x7ff8dff2) {
          if (param_1 == -0x7ff8dff3) {
LAB_00a9cd4a:
            return "ERROR_DS_ATTRIBUTE_OR_VALUE_EXISTS";
          }
          if (param_1 < -0x7ff8dff6) {
            if (param_1 == -0x7ff8dff7) {
LAB_00a9cd0d:
              return "ERROR_DS_MEMBERSHIP_EVALUATED_LOCALLY";
            }
            if (param_1 == -0x7ff8e0b1) goto LAB_00a9cccf;
            if (param_1 == -0x7ff8e0b0) {
LAB_00a9cd21:
              return "FRS_ERR_SYSVOL_DEMOTE";
            }
            if (param_1 == -0x7ff8e0af) {
LAB_00a9cd17:
              return "FRS_ERR_INVALID_SERVICE_PARAMETER";
            }
            if (param_1 == -0x7ff8dff8) {
LAB_00a9699c:
              return "ERROR_DS_NOT_INSTALLED";
            }
          }
          else {
            if (param_1 == -0x7ff8dff6) {
LAB_00a9cd2b:
              return "ERROR_DS_NO_ATTRIBUTE_OR_VALUE";
            }
            if (param_1 == -0x7ff8dff5) {
LAB_00a9cd54:
              return "ERROR_DS_INVALID_ATTRIBUTE_SYNTAX";
            }
            if (param_1 == -0x7ff8dff4) {
LAB_00a969c7:
              return "ERROR_DS_ATTRIBUTE_TYPE_UNDEFINED";
            }
          }
        }
        else {
          if (param_1 == -0x7ff8dff2) {
LAB_00a9cd5e:
            return "ERROR_DS_BUSY";
          }
          if (param_1 == -0x7ff8dff1) {
LAB_00a9cd7d:
            return "ERROR_DS_UNAVAILABLE";
          }
          if (param_1 == -0x7ff8dff0) goto LAB_00a9cd87;
          if (param_1 == -0x7ff8dfef) goto LAB_00a9cd91;
          if (param_1 == -0x7ff8dfee) goto LAB_00a9cd9b;
          if (param_1 == -0x7ff8dfed) goto LAB_00a9cda5;
          if (param_1 == -0x7ff8dfec) goto code_r0x00a96a1e;
        }
      }
      else {
        switch(param_1) {
        case -0x7ff8dfea:
LAB_00a9cdb9:
          return "ERROR_DS_CANT_ON_RDN";
        case -0x7ff8dfe9:
LAB_00a9cdc3:
          return "ERROR_DS_CANT_MOD_OBJ_CLASS";
        case -0x7ff8dfe8:
LAB_00a9cde4:
          return "ERROR_DS_CROSS_DOM_MOVE_ERROR";
        case -0x7ff8dfe7:
LAB_00a9cdee:
          return "ERROR_DS_GC_NOT_AVAILABLE";
        case -0x7ff8dfe6:
LAB_00a9cdf8:
          return "ERROR_SHARED_POLICY";
        case -0x7ff8dfe5:
LAB_00a9ce02:
          return "ERROR_POLICY_OBJECT_NOT_FOUND";
        case -0x7ff8dfe4:
LAB_00a9ce0c:
          return "ERROR_POLICY_ONLY_IN_DS";
        case -0x7ff8dfe3:
LAB_00a9ce16:
          return "ERROR_PROMOTION_ACTIVE";
        case -0x7ff8dfe2:
LAB_00a9ce20:
          return "ERROR_NO_PROMOTION_ACTIVE";
        case -0x7ff8dfe0:
LAB_00a9ce2a:
          return "ERROR_DS_OPERATIONS_ERROR";
        case -0x7ff8dfdf:
LAB_00a9ce34:
          return "ERROR_DS_PROTOCOL_ERROR";
        case -0x7ff8dfde:
LAB_00a9ce3e:
          return "ERROR_DS_TIMELIMIT_EXCEEDED";
        case -0x7ff8dfdd:
LAB_00a9ce48:
          return "ERROR_DS_SIZELIMIT_EXCEEDED";
        case -0x7ff8dfdc:
LAB_00a9ce52:
          return "ERROR_DS_ADMIN_LIMIT_EXCEEDED";
        case -0x7ff8dfdb:
LAB_00a9ce5c:
          return "ERROR_DS_COMPARE_FALSE";
        case -0x7ff8dfda:
LAB_00a9ce66:
          return "ERROR_DS_COMPARE_TRUE";
        case -0x7ff8dfd9:
LAB_00a9ce70:
          return "ERROR_DS_AUTH_METHOD_NOT_SUPPORTED";
        case -0x7ff8dfd8:
LAB_00a9ce7a:
          return "ERROR_DS_STRONG_AUTH_REQUIRED";
        case -0x7ff8dfd7:
LAB_00a9ce84:
          return "ERROR_DS_INAPPROPRIATE_AUTH";
        case -0x7ff8dfd6:
LAB_00a9ce8e:
          return "ERROR_DS_AUTH_UNKNOWN";
        case -0x7ff8dfd5:
LAB_00a9ce98:
          return "ERROR_DS_REFERRAL";
        case -0x7ff8dfd4:
LAB_00a9cea2:
          return "ERROR_DS_UNAVAILABLE_CRIT_EXTENSION";
        case -0x7ff8dfd3:
LAB_00a9ceac:
          return "ERROR_DS_CONFIDENTIALITY_REQUIRED";
        case -0x7ff8dfd2:
LAB_00a9ceb6:
          return "ERROR_DS_INAPPROPRIATE_MATCHING";
        case -0x7ff8dfd1:
LAB_00a9cec0:
          return "ERROR_DS_CONSTRAINT_VIOLATION";
        case -0x7ff8dfd0:
LAB_00a9ceca:
          return "ERROR_DS_NO_SUCH_OBJECT";
        case -0x7ff8dfcf:
LAB_00a9ced4:
          return "ERROR_DS_ALIAS_PROBLEM";
        case -0x7ff8dfce:
LAB_00a9cede:
          return "ERROR_DS_INVALID_DN_SYNTAX";
        case -0x7ff8dfcd:
LAB_00a9cee8:
          return "ERROR_DS_IS_LEAF";
        case -0x7ff8dfcc:
LAB_00a9cef2:
          return "ERROR_DS_ALIAS_DEREF_PROBLEM";
        case -0x7ff8dfcb:
LAB_00a9cefc:
          return "ERROR_DS_UNWILLING_TO_PERFORM";
        case -0x7ff8dfca:
LAB_00a9cf06:
          return "ERROR_DS_LOOP_DETECT";
        case -0x7ff8dfc9:
LAB_00a9cf10:
          return "ERROR_DS_NAMING_VIOLATION";
        case -0x7ff8dfc8:
LAB_00a9cf1a:
          return "ERROR_DS_OBJECT_RESULTS_TOO_LARGE";
        case -0x7ff8dfc7:
LAB_00a9cf24:
          return "ERROR_DS_AFFECTS_MULTIPLE_DSAS";
        case -0x7ff8dfc6:
LAB_00a9cf2e:
          return "ERROR_DS_SERVER_DOWN";
        case -0x7ff8dfc5:
LAB_00a9cf38:
          return "ERROR_DS_LOCAL_ERROR";
        case -0x7ff8dfc4:
LAB_00a9cf42:
          return "ERROR_DS_ENCODING_ERROR";
        case -0x7ff8dfc3:
LAB_00a9cf4c:
          return "ERROR_DS_DECODING_ERROR";
        case -0x7ff8dfc2:
LAB_00a9cf56:
          return "ERROR_DS_FILTER_UNKNOWN";
        case -0x7ff8dfc1:
LAB_00a9cf60:
          return "ERROR_DS_PARAM_ERROR";
        case -0x7ff8dfc0:
LAB_00a9cf6a:
          return "ERROR_DS_NOT_SUPPORTED";
        case -0x7ff8dfbf:
LAB_00a9cf74:
          return "ERROR_DS_NO_RESULTS_RETURNED";
        case -0x7ff8dfbe:
LAB_00a9cf7e:
          return "ERROR_DS_CONTROL_NOT_FOUND";
        case -0x7ff8dfbd:
LAB_00a9cf88:
          return "ERROR_DS_CLIENT_LOOP";
        case -0x7ff8dfbc:
LAB_00a9cf92:
          return "ERROR_DS_REFERRAL_LIMIT_EXCEEDED";
        case -0x7ff8dfbb:
LAB_00a9d672:
          return "ERROR_DS_SORT_CONTROL_MISSING";
        case -0x7ff8dfba:
LAB_00a9d67c:
          return "ERROR_DS_OFFSET_RANGE_ERROR";
        case -0x7ff8df93:
LAB_00a9cf9c:
          return "ERROR_DS_ROOT_MUST_BE_NC";
        case -0x7ff8df92:
LAB_00a9cfa6:
          return "ERROR_DS_ADD_REPLICA_INHIBITED";
        case -0x7ff8df91:
LAB_00a9cfb0:
          return "ERROR_DS_ATT_NOT_DEF_IN_SCHEMA";
        case -0x7ff8df90:
LAB_00a9cfba:
          return "ERROR_DS_MAX_OBJ_SIZE_EXCEEDED";
        case -0x7ff8df8f:
LAB_00a9cfc4:
          return "ERROR_DS_OBJ_STRING_NAME_EXISTS";
        case -0x7ff8df8e:
LAB_00a9cfce:
          return "ERROR_DS_NO_RDN_DEFINED_IN_SCHEMA";
        case -0x7ff8df8d:
LAB_00a9cfd8:
          return "ERROR_DS_RDN_DOESNT_MATCH_SCHEMA";
        case -0x7ff8df8c:
LAB_00a9cfe2:
          return "ERROR_DS_NO_REQUESTED_ATTS_FOUND";
        case -0x7ff8df8b:
LAB_00a9cfec:
          return "ERROR_DS_USER_BUFFER_TO_SMALL";
        case -0x7ff8df8a:
LAB_00a9cff6:
          return "ERROR_DS_ATT_IS_NOT_ON_OBJ";
        case -0x7ff8df89:
LAB_00a9d000:
          return "ERROR_DS_ILLEGAL_MOD_OPERATION";
        case -0x7ff8df88:
LAB_00a9d00a:
          return "ERROR_DS_OBJ_TOO_LARGE";
        case -0x7ff8df87:
LAB_00a9d014:
          return "ERROR_DS_BAD_INSTANCE_TYPE";
        case -0x7ff8df86:
LAB_00a9d01e:
          return "ERROR_DS_MASTERDSA_REQUIRED";
        case -0x7ff8df85:
LAB_00a9d028:
          return "ERROR_DS_OBJECT_CLASS_REQUIRED";
        case -0x7ff8df84:
LAB_00a9d032:
          return "ERROR_DS_MISSING_REQUIRED_ATT";
        case -0x7ff8df83:
LAB_00a9d03c:
          return "ERROR_DS_ATT_NOT_DEF_FOR_CLASS";
        case -0x7ff8df82:
LAB_00a9d046:
          return "ERROR_DS_ATT_ALREADY_EXISTS";
        case -0x7ff8df80:
LAB_00a9d050:
          return "ERROR_DS_CANT_ADD_ATT_VALUES";
        case -0x7ff8df7f:
LAB_00a9d05a:
          return "ERROR_DS_SINGLE_VALUE_CONSTRAINT";
        case -0x7ff8df7e:
LAB_00a9d064:
          return "ERROR_DS_RANGE_CONSTRAINT";
        case -0x7ff8df7d:
LAB_00a9d06e:
          return "ERROR_DS_ATT_VAL_ALREADY_EXISTS";
        case -0x7ff8df7c:
LAB_00a9d078:
          return "ERROR_DS_CANT_REM_MISSING_ATT";
        case -0x7ff8df7b:
LAB_00a9d082:
          return "ERROR_DS_CANT_REM_MISSING_ATT_VAL";
        case -0x7ff8df7a:
LAB_00a9d08c:
          return "ERROR_DS_ROOT_CANT_BE_SUBREF";
        case -0x7ff8df79:
LAB_00a9d096:
          return "ERROR_DS_NO_CHAINING";
        case -0x7ff8df78:
LAB_00a9d0a0:
          return "ERROR_DS_NO_CHAINED_EVAL";
        case -0x7ff8df77:
LAB_00a9d0aa:
          return "ERROR_DS_NO_PARENT_OBJECT";
        case -0x7ff8df76:
LAB_00a9d0b4:
          return "ERROR_DS_PARENT_IS_AN_ALIAS";
        case -0x7ff8df75:
LAB_00a9d0be:
          return "ERROR_DS_CANT_MIX_MASTER_AND_REPS";
        case -0x7ff8df74:
LAB_00a9d0c8:
          return "ERROR_DS_CHILDREN_EXIST";
        case -0x7ff8df73:
LAB_00a9d0d2:
          return "ERROR_DS_OBJ_NOT_FOUND";
        case -0x7ff8df72:
LAB_00a9d0dc:
          return "ERROR_DS_ALIASED_OBJ_MISSING";
        case -0x7ff8df71:
LAB_00a9d0e6:
          return "ERROR_DS_BAD_NAME_SYNTAX";
        case -0x7ff8df70:
LAB_00a9d0f0:
          return "ERROR_DS_ALIAS_POINTS_TO_ALIAS";
        case -0x7ff8df6f:
LAB_00a9d0fa:
          return "ERROR_DS_CANT_DEREF_ALIAS";
        case -0x7ff8df6e:
LAB_00a9d104:
          return "ERROR_DS_OUT_OF_SCOPE";
        case -0x7ff8df6d:
LAB_00a9d686:
          return "ERROR_DS_OBJECT_BEING_REMOVED";
        case -0x7ff8df6c:
LAB_00a9d10e:
          return "ERROR_DS_CANT_DELETE_DSA_OBJ";
        case -0x7ff8df6b:
LAB_00a9d118:
          return "ERROR_DS_GENERIC_ERROR";
        case -0x7ff8df6a:
LAB_00a9d122:
          return "ERROR_DS_DSA_MUST_BE_INT_MASTER";
        case -0x7ff8df69:
LAB_00a9d12c:
          return "ERROR_DS_CLASS_NOT_DSA";
        case -0x7ff8df68:
LAB_00a9d136:
          return "ERROR_DS_INSUFF_ACCESS_RIGHTS";
        case -0x7ff8df67:
LAB_00a9d140:
          return "ERROR_DS_ILLEGAL_SUPERIOR";
        case -0x7ff8df66:
LAB_00a9d14a:
          return "ERROR_DS_ATTRIBUTE_OWNED_BY_SAM";
        case -0x7ff8df65:
LAB_00a9d154:
          return "ERROR_DS_NAME_TOO_MANY_PARTS";
        case -0x7ff8df64:
LAB_00a9d15e:
          return "ERROR_DS_NAME_TOO_LONG";
        case -0x7ff8df63:
LAB_00a9d168:
          return "ERROR_DS_NAME_VALUE_TOO_LONG";
        case -0x7ff8df62:
LAB_00a9d172:
          return "ERROR_DS_NAME_UNPARSEABLE";
        case -0x7ff8df61:
LAB_00a9d17c:
          return "ERROR_DS_NAME_TYPE_UNKNOWN";
        case -0x7ff8df60:
LAB_00a9d186:
          return "ERROR_DS_NOT_AN_OBJECT";
        case -0x7ff8df5f:
LAB_00a9d190:
          return "ERROR_DS_SEC_DESC_TOO_SHORT";
        case -0x7ff8df5e:
LAB_00a9d19a:
          return "ERROR_DS_SEC_DESC_INVALID";
        case -0x7ff8df5d:
LAB_00a9d1a4:
          return "ERROR_DS_NO_DELETED_NAME";
        case -0x7ff8df5c:
LAB_00a9d1ae:
          return "ERROR_DS_SUBREF_MUST_HAVE_PARENT";
        case -0x7ff8df5b:
LAB_00a9d1b8:
          return "ERROR_DS_NCNAME_MUST_BE_NC";
        case -0x7ff8df5a:
LAB_00a9d1c2:
          return "ERROR_DS_CANT_ADD_SYSTEM_ONLY";
        case -0x7ff8df59:
LAB_00a9d1cc:
          return "ERROR_DS_CLASS_MUST_BE_CONCRETE";
        case -0x7ff8df58:
LAB_00a9d1d6:
          return "ERROR_DS_INVALID_DMD";
        case -0x7ff8df57:
LAB_00a9d1e0:
          return "ERROR_DS_OBJ_GUID_EXISTS";
        case -0x7ff8df56:
LAB_00a9d1ea:
          return "ERROR_DS_NOT_ON_BACKLINK";
        case -0x7ff8df55:
LAB_00a9d1f4:
          return "ERROR_DS_NO_CROSSREF_FOR_NC";
        case -0x7ff8df54:
LAB_00a9d1fe:
          return "ERROR_DS_SHUTTING_DOWN";
        case -0x7ff8df53:
LAB_00a9d208:
          return "ERROR_DS_UNKNOWN_OPERATION";
        case -0x7ff8df52:
LAB_00a9d212:
          return "ERROR_DS_INVALID_ROLE_OWNER";
        case -0x7ff8df51:
LAB_00a9d21c:
          return "ERROR_DS_COULDNT_CONTACT_FSMO";
        case -0x7ff8df50:
LAB_00a9d226:
          return "ERROR_DS_CROSS_NC_DN_RENAME";
        case -0x7ff8df4f:
LAB_00a9d230:
          return "ERROR_DS_CANT_MOD_SYSTEM_ONLY";
        case -0x7ff8df4e:
LAB_00a9d23a:
          return "ERROR_DS_REPLICATOR_ONLY";
        case -0x7ff8df4d:
LAB_00a9d244:
          return "ERROR_DS_OBJ_CLASS_NOT_DEFINED";
        case -0x7ff8df4c:
LAB_00a9d24e:
          return "ERROR_DS_OBJ_CLASS_NOT_SUBCLASS";
        case -0x7ff8df4b:
LAB_00a9d258:
          return "ERROR_DS_NAME_REFERENCE_INVALID";
        case -0x7ff8df4a:
LAB_00a9d262:
          return "ERROR_DS_CROSS_REF_EXISTS";
        case -0x7ff8df49:
LAB_00a9d26c:
          return "ERROR_DS_CANT_DEL_MASTER_CROSSREF";
        case -0x7ff8df48:
LAB_00a9d276:
          return "ERROR_DS_SUBTREE_NOTIFY_NOT_NC_HEAD";
        case -0x7ff8df47:
LAB_00a9d280:
          return "ERROR_DS_NOTIFY_FILTER_TOO_COMPLEX";
        case -0x7ff8df46:
LAB_00a9d28a:
          return "ERROR_DS_DUP_RDN";
        case -0x7ff8df45:
LAB_00a9d294:
          return "ERROR_DS_DUP_OID";
        case -0x7ff8df44:
LAB_00a9d29e:
          return "ERROR_DS_DUP_MAPI_ID";
        case -0x7ff8df43:
LAB_00a9d2a8:
          return "ERROR_DS_DUP_SCHEMA_ID_GUID";
        case -0x7ff8df42:
LAB_00a9d2b2:
          return "ERROR_DS_DUP_LDAP_DISPLAY_NAME";
        case -0x7ff8df41:
LAB_00a9d2bc:
          return "ERROR_DS_SEMANTIC_ATT_TEST";
        case -0x7ff8df40:
LAB_00a9d2c6:
          return "ERROR_DS_SYNTAX_MISMATCH";
        case -0x7ff8df3f:
LAB_00a9d2d0:
          return "ERROR_DS_EXISTS_IN_MUST_HAVE";
        case -0x7ff8df3e:
LAB_00a9d2da:
          return "ERROR_DS_EXISTS_IN_MAY_HAVE";
        case -0x7ff8df3d:
LAB_00a9d2e4:
          return "ERROR_DS_NONEXISTENT_MAY_HAVE";
        case -0x7ff8df3c:
LAB_00a9d2ee:
          return "ERROR_DS_NONEXISTENT_MUST_HAVE";
        case -0x7ff8df3b:
LAB_00a9d2f8:
          return "ERROR_DS_AUX_CLS_TEST_FAIL";
        case -0x7ff8df3a:
LAB_00a9d302:
          return "ERROR_DS_NONEXISTENT_POSS_SUP";
        case -0x7ff8df39:
LAB_00a9d30c:
          return "ERROR_DS_SUB_CLS_TEST_FAIL";
        case -0x7ff8df38:
LAB_00a9d316:
          return "ERROR_DS_BAD_RDN_ATT_ID_SYNTAX";
        case -0x7ff8df37:
LAB_00a9d320:
          return "ERROR_DS_EXISTS_IN_AUX_CLS";
        case -0x7ff8df36:
LAB_00a9d32a:
          return "ERROR_DS_EXISTS_IN_SUB_CLS";
        case -0x7ff8df35:
LAB_00a9d334:
          return "ERROR_DS_EXISTS_IN_POSS_SUP";
        case -0x7ff8df34:
LAB_00a9d33e:
          return "ERROR_DS_RECALCSCHEMA_FAILED";
        case -0x7ff8df33:
LAB_00a9d348:
          return "ERROR_DS_TREE_DELETE_NOT_FINISHED";
        case -0x7ff8df32:
LAB_00a9d352:
          return "ERROR_DS_CANT_DELETE";
        case -0x7ff8df31:
LAB_00a9d35c:
          return "ERROR_DS_ATT_SCHEMA_REQ_ID";
        case -0x7ff8df30:
LAB_00a9d366:
          return "ERROR_DS_BAD_ATT_SCHEMA_SYNTAX";
        case -0x7ff8df2f:
LAB_00a9d370:
          return "ERROR_DS_CANT_CACHE_ATT";
        case -0x7ff8df2e:
LAB_00a9d37a:
          return "ERROR_DS_CANT_CACHE_CLASS";
        case -0x7ff8df2d:
LAB_00a9d384:
          return "ERROR_DS_CANT_REMOVE_ATT_CACHE";
        case -0x7ff8df2c:
LAB_00a9d38e:
          return "ERROR_DS_CANT_REMOVE_CLASS_CACHE";
        case -0x7ff8df2b:
LAB_00a9d398:
          return "ERROR_DS_CANT_RETRIEVE_DN";
        case -0x7ff8df2a:
LAB_00a9d3a2:
          return "ERROR_DS_MISSING_SUPREF";
        case -0x7ff8df29:
LAB_00a9d3ac:
          return "ERROR_DS_CANT_RETRIEVE_INSTANCE";
        case -0x7ff8df28:
LAB_00a9d3b6:
          return "ERROR_DS_CODE_INCONSISTENCY";
        case -0x7ff8df27:
LAB_00a9d3c0:
          return "ERROR_DS_DATABASE_ERROR";
        case -0x7ff8df26:
LAB_00a9d3ca:
          return "ERROR_DS_GOVERNSID_MISSING";
        case -0x7ff8df25:
LAB_00a9d3d4:
          return "ERROR_DS_MISSING_EXPECTED_ATT";
        case -0x7ff8df24:
LAB_00a9d3de:
          return "ERROR_DS_NCNAME_MISSING_CR_REF";
        case -0x7ff8df23:
LAB_00a9d3e8:
          return "ERROR_DS_SECURITY_CHECKING_ERROR";
        case -0x7ff8df22:
LAB_00a9d3f2:
          return "ERROR_DS_SCHEMA_NOT_LOADED";
        case -0x7ff8df21:
LAB_00a9d3fc:
          return "ERROR_DS_SCHEMA_ALLOC_FAILED";
        case -0x7ff8df20:
LAB_00a9d406:
          return "ERROR_DS_ATT_SCHEMA_REQ_SYNTAX";
        case -0x7ff8df1f:
LAB_00a9d410:
          return "ERROR_DS_GCVERIFY_ERROR";
        case -0x7ff8df1e:
LAB_00a9d41a:
          return "ERROR_DS_DRA_SCHEMA_MISMATCH";
        case -0x7ff8df1d:
LAB_00a9d424:
          return "ERROR_DS_CANT_FIND_DSA_OBJ";
        case -0x7ff8df1c:
LAB_00a9d42e:
          return "ERROR_DS_CANT_FIND_EXPECTED_NC";
        case -0x7ff8df1b:
LAB_00a9d438:
          return "ERROR_DS_CANT_FIND_NC_IN_CACHE";
        case -0x7ff8df1a:
LAB_00a9d442:
          return "ERROR_DS_CANT_RETRIEVE_CHILD";
        case -0x7ff8df19:
LAB_00a9d44c:
          return "ERROR_DS_SECURITY_ILLEGAL_MODIFY";
        case -0x7ff8df18:
LAB_00a9d456:
          return "ERROR_DS_CANT_REPLACE_HIDDEN_REC";
        case -0x7ff8df17:
LAB_00a9d460:
          return "ERROR_DS_BAD_HIERARCHY_FILE";
        case -0x7ff8df16:
LAB_00a9d46a:
          return "ERROR_DS_BUILD_HIERARCHY_TABLE_FAILED";
        case -0x7ff8df15:
LAB_00a9d474:
          return "ERROR_DS_CONFIG_PARAM_MISSING";
        case -0x7ff8df14:
LAB_00a9d47e:
          return "ERROR_DS_COUNTING_AB_INDICES_FAILED";
        case -0x7ff8df13:
LAB_00a9d488:
          return "ERROR_DS_HIERARCHY_TABLE_MALLOC_FAILED";
        case -0x7ff8df12:
LAB_00a9d492:
          return "ERROR_DS_INTERNAL_FAILURE";
        case -0x7ff8df11:
LAB_00a9d49c:
          return "ERROR_DS_UNKNOWN_ERROR";
        case -0x7ff8df10:
LAB_00a9d4a6:
          return "ERROR_DS_ROOT_REQUIRES_CLASS_TOP";
        case -0x7ff8df0f:
LAB_00a9d4b0:
          return "ERROR_DS_REFUSING_FSMO_ROLES";
        case -0x7ff8df0e:
LAB_00a9d4ba:
          return "ERROR_DS_MISSING_FSMO_SETTINGS";
        case -0x7ff8df0d:
LAB_00a9d4c4:
          return "ERROR_DS_UNABLE_TO_SURRENDER_ROLES";
        case -0x7ff8df0c:
LAB_00a9d4ce:
          return "ERROR_DS_DRA_GENERIC";
        case -0x7ff8df0b:
LAB_00a9d4d8:
          return "ERROR_DS_DRA_INVALID_PARAMETER";
        case -0x7ff8df0a:
LAB_00a9d4e2:
          return "ERROR_DS_DRA_BUSY";
        case -0x7ff8df09:
LAB_00a9d4ec:
          return "ERROR_DS_DRA_BAD_DN";
        case -0x7ff8df08:
LAB_00a9d4f6:
          return "ERROR_DS_DRA_BAD_NC";
        case -0x7ff8df07:
LAB_00a9d500:
          return "ERROR_DS_DRA_DN_EXISTS";
        case -0x7ff8df06:
LAB_00a9d50a:
          return "ERROR_DS_DRA_INTERNAL_ERROR";
        case -0x7ff8df05:
LAB_00a9d514:
          return "ERROR_DS_DRA_INCONSISTENT_DIT";
        case -0x7ff8df04:
LAB_00a9d51e:
          return "ERROR_DS_DRA_CONNECTION_FAILED";
        case -0x7ff8df03:
LAB_00a9d528:
          return "ERROR_DS_DRA_BAD_INSTANCE_TYPE";
        case -0x7ff8df02:
LAB_00a9d532:
          return "ERROR_DS_DRA_OUT_OF_MEM";
        case -0x7ff8df01:
LAB_00a9d53c:
          return "ERROR_DS_DRA_MAIL_PROBLEM";
        case -0x7ff8df00:
LAB_00a9d546:
          return "ERROR_DS_DRA_REF_ALREADY_EXISTS";
        case -0x7ff8deff:
LAB_00a9d550:
          return "ERROR_DS_DRA_REF_NOT_FOUND";
        case -0x7ff8defe:
LAB_00a9d55a:
          return "ERROR_DS_DRA_OBJ_IS_REP_SOURCE";
        case -0x7ff8defd:
LAB_00a9d564:
          return "ERROR_DS_DRA_DB_ERROR";
        case -0x7ff8defc:
LAB_00a9d56e:
          return "ERROR_DS_DRA_NO_REPLICA";
        case -0x7ff8defb:
LAB_00a9d578:
          return "ERROR_DS_DRA_ACCESS_DENIED";
        case -0x7ff8defa:
LAB_00a9d582:
          return "ERROR_DS_DRA_NOT_SUPPORTED";
        case -0x7ff8def9:
LAB_00a9d58c:
          return "ERROR_DS_DRA_RPC_CANCELLED";
        case -0x7ff8def8:
LAB_00a9d596:
          return "ERROR_DS_DRA_SOURCE_DISABLED";
        case -0x7ff8def7:
LAB_00a9d5a0:
          return "ERROR_DS_DRA_SINK_DISABLED";
        case -0x7ff8def6:
LAB_00a9d5aa:
          return "ERROR_DS_DRA_NAME_COLLISION";
        case -0x7ff8def5:
LAB_00a9d5b4:
          return "ERROR_DS_DRA_SOURCE_REINSTALLED";
        case -0x7ff8def4:
LAB_00a9d5be:
          return "ERROR_DS_DRA_MISSING_PARENT";
        case -0x7ff8def3:
LAB_00a9d5c8:
          return "ERROR_DS_DRA_PREEMPTED";
        case -0x7ff8def2:
LAB_00a9d5d2:
          return "ERROR_DS_DRA_ABANDON_SYNC";
        case -0x7ff8def1:
LAB_00a9d5dc:
          return "ERROR_DS_DRA_SHUTDOWN";
        case -0x7ff8def0:
LAB_00a9d5e6:
          return "ERROR_DS_DRA_INCOMPATIBLE_PARTIAL_SET";
        case -0x7ff8deef:
LAB_00a9d5f0:
          return "ERROR_DS_DRA_SOURCE_IS_PARTIAL_REPLICA";
        case -0x7ff8deee:
LAB_00a9d5fa:
          return "ERROR_DS_DRA_EXTN_CONNECTION_FAILED";
        case -0x7ff8deed:
LAB_00a9d604:
          return "ERROR_DS_INSTALL_SCHEMA_MISMATCH";
        case -0x7ff8deec:
LAB_00a9d60e:
          return "ERROR_DS_DUP_LINK_ID";
        case -0x7ff8deeb:
LAB_00a9d618:
          return "ERROR_DS_NAME_ERROR_RESOLVING";
        case -0x7ff8deea:
LAB_00a9d622:
          return "ERROR_DS_NAME_ERROR_NOT_FOUND";
        case -0x7ff8dee9:
LAB_00a9d62c:
          return "ERROR_DS_NAME_ERROR_NOT_UNIQUE";
        case -0x7ff8dee8:
LAB_00a9d636:
          return "ERROR_DS_NAME_ERROR_NO_MAPPING";
        case -0x7ff8dee7:
LAB_00a9d640:
          return "ERROR_DS_NAME_ERROR_DOMAIN_ONLY";
        case -0x7ff8dee6:
LAB_00a9d64a:
          return "ERROR_DS_NAME_ERROR_NO_SYNTACTICAL_MAPPING";
        case -0x7ff8dee5:
LAB_00a9d654:
          return "ERROR_DS_CONSTRUCTED_ATT_MOD";
        case -0x7ff8dee4:
LAB_00a9d65e:
          return "ERROR_DS_WRONG_OM_OBJ_CLASS";
        case -0x7ff8dee3:
LAB_00a9d668:
          return "ERROR_DS_DRA_REPL_PENDING";
        case -0x7ff8dee2:
LAB_00a9d690:
          return "ERROR_DS_DS_REQUIRED";
        case -0x7ff8dee1:
LAB_00a9d69a:
          return "ERROR_DS_INVALID_LDAP_DISPLAY_NAME";
        case -0x7ff8dee0:
LAB_00a9d6a4:
          return "ERROR_DS_NON_BASE_SEARCH";
        case -0x7ff8dedf:
LAB_00a9d6ae:
          return "ERROR_DS_CANT_RETRIEVE_ATTS";
        case -0x7ff8dede:
LAB_00a9d6b8:
          return "ERROR_DS_BACKLINK_WITHOUT_LINK";
        case -0x7ff8dedd:
LAB_00a9d6c2:
          return "ERROR_DS_EPOCH_MISMATCH";
        case -0x7ff8dedc:
LAB_00a9d6cc:
          return "ERROR_DS_SRC_NAME_MISMATCH";
        case -0x7ff8dedb:
LAB_00a9d6d6:
          return "ERROR_DS_SRC_AND_DST_NC_IDENTICAL";
        case -0x7ff8deda:
LAB_00a9d6e0:
          return "ERROR_DS_DST_NC_MISMATCH";
        case -0x7ff8ded9:
LAB_00a9d6ea:
          return "ERROR_DS_NOT_AUTHORITIVE_FOR_DST_NC";
        case -0x7ff8ded8:
LAB_00a9d6f4:
          return "ERROR_DS_SRC_GUID_MISMATCH";
        case -0x7ff8ded7:
LAB_00a9d6fe:
          return "ERROR_DS_CANT_MOVE_DELETED_OBJECT";
        case -0x7ff8ded6:
LAB_00a9d708:
          return "ERROR_DS_PDC_OPERATION_IN_PROGRESS";
        case -0x7ff8ded5:
LAB_00a9d712:
          return "ERROR_DS_CROSS_DOMAIN_CLEANUP_REQD";
        case -0x7ff8ded4:
LAB_00a9d71c:
          return "ERROR_DS_ILLEGAL_XDOM_MOVE_OPERATION";
        case -0x7ff8ded3:
LAB_00a9d726:
          return "ERROR_DS_CANT_WITH_ACCT_GROUP_MEMBERSHPS";
        case -0x7ff8ded2:
LAB_00a9d730:
          return "ERROR_DS_NC_MUST_HAVE_NC_PARENT";
        case -0x7ff8ded1:
LAB_00a9d73a:
          return "ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE";
        case -0x7ff8ded0:
LAB_00a9d744:
          return "ERROR_DS_DST_DOMAIN_NOT_NATIVE";
        case -0x7ff8decf:
LAB_00a9d74e:
          return "ERROR_DS_MISSING_INFRASTRUCTURE_CONTAINER";
        case -0x7ff8dece:
LAB_00a9d758:
          return "ERROR_DS_CANT_MOVE_ACCOUNT_GROUP";
        case -0x7ff8decd:
LAB_00a9d762:
          return "ERROR_DS_CANT_MOVE_RESOURCE_GROUP";
        case -0x7ff8decc:
LAB_00a9d76c:
          return "ERROR_DS_INVALID_SEARCH_FLAG";
        case -0x7ff8decb:
LAB_00a9d776:
          return "ERROR_DS_NO_TREE_DELETE_ABOVE_NC";
        case -0x7ff8deca:
LAB_00a9d780:
          return "ERROR_DS_COULDNT_LOCK_TREE_FOR_DELETE";
        case -0x7ff8dec9:
LAB_00a9d78a:
          return "ERROR_DS_COULDNT_IDENTIFY_OBJECTS_FOR_TREE_DELETE";
        case -0x7ff8dec8:
LAB_00a9d794:
          return "ERROR_DS_SAM_INIT_FAILURE";
        case -0x7ff8dec7:
LAB_00a9d79e:
          return "ERROR_DS_SENSITIVE_GROUP_VIOLATION";
        case -0x7ff8dec6:
LAB_00a9d7a8:
          return "ERROR_DS_CANT_MOD_PRIMARYGROUPID";
        case -0x7ff8dec5:
LAB_00a9d7b2:
          return "ERROR_DS_ILLEGAL_BASE_SCHEMA_MOD";
        case -0x7ff8dec4:
LAB_00a9d7bc:
          return "ERROR_DS_NONSAFE_SCHEMA_CHANGE";
        case -0x7ff8dec3:
LAB_00a9d7c6:
          return "ERROR_DS_SCHEMA_UPDATE_DISALLOWED";
        case -0x7ff8dec2:
LAB_00a9d7d0:
          return "ERROR_DS_CANT_CREATE_UNDER_SCHEMA";
        case -0x7ff8dec1:
LAB_00a9d7da:
          return "ERROR_DS_INSTALL_NO_SRC_SCH_VERSION";
        case -0x7ff8dec0:
LAB_00a9d7e4:
          return "ERROR_DS_INSTALL_NO_SCH_VERSION_IN_INIFILE";
        case -0x7ff8debf:
LAB_00a9d7ee:
          return "ERROR_DS_INVALID_GROUP_TYPE";
        case -0x7ff8debe:
LAB_00a9d7f8:
          return "ERROR_DS_NO_NEST_GLOBALGROUP_IN_MIXEDDOMAIN";
        case -0x7ff8debd:
LAB_00a9d802:
          return "ERROR_DS_NO_NEST_LOCALGROUP_IN_MIXEDDOMAIN";
        case -0x7ff8debc:
LAB_00a9d80c:
          return "ERROR_DS_GLOBAL_CANT_HAVE_LOCAL_MEMBER";
        case -0x7ff8debb:
LAB_00a9d816:
          return "ERROR_DS_GLOBAL_CANT_HAVE_UNIVERSAL_MEMBER";
        case -0x7ff8deba:
LAB_00a9d820:
          return "ERROR_DS_UNIVERSAL_CANT_HAVE_LOCAL_MEMBER";
        case -0x7ff8deb9:
LAB_00a9d82a:
          return "ERROR_DS_GLOBAL_CANT_HAVE_CROSSDOMAIN_MEMBER";
        case -0x7ff8deb8:
LAB_00a9d834:
          return "ERROR_DS_LOCAL_CANT_HAVE_CROSSDOMAIN_LOCAL_MEMBER";
        case -0x7ff8deb7:
LAB_00a9d83e:
          return "ERROR_DS_HAVE_PRIMARY_MEMBERS";
        case -0x7ff8deb6:
LAB_00a9d848:
          return "ERROR_DS_STRING_SD_CONVERSION_FAILED";
        case -0x7ff8deb5:
LAB_00a9d852:
          return "ERROR_DS_NAMING_MASTER_GC";
        case -0x7ff8deb4:
LAB_00a9d85c:
          return "ERROR_DS_DNS_LOOKUP_FAILURE";
        case -0x7ff8deb3:
LAB_00a9d866:
          return "ERROR_DS_COULDNT_UPDATE_SPNS";
        case -0x7ff8deb2:
LAB_00a9d870:
          return "ERROR_DS_CANT_RETRIEVE_SD";
        case -0x7ff8deb1:
LAB_00a9d87a:
          return "ERROR_DS_KEY_NOT_UNIQUE";
        case -0x7ff8deb0:
LAB_00a9d884:
          return "ERROR_DS_WRONG_LINKED_ATT_SYNTAX";
        case -0x7ff8deaf:
LAB_00a9d88e:
          return "ERROR_DS_SAM_NEED_BOOTKEY_PASSWORD";
        case -0x7ff8deae:
LAB_00a9d898:
          return "ERROR_DS_SAM_NEED_BOOTKEY_FLOPPY";
        }
      }
    }
    else if (param_1 < -0x7ff8dcd7) {
      if (param_1 == -0x7ff8dcd8) {
LAB_00a9db90:
        return "DNS_ERROR_RESPONSE_CODES_BASE";
      }
      switch(param_1) {
      case -0x7ff8deac:
LAB_00a9d8ac:
        return "ERROR_DS_INIT_FAILURE";
      case -0x7ff8deab:
LAB_00a9d8b6:
        return "ERROR_DS_NO_PKT_PRIVACY_ON_CONNECTION";
      case -0x7ff8deaa:
LAB_00a9d8c0:
        return "ERROR_DS_SOURCE_DOMAIN_IN_FOREST";
      case -0x7ff8dea9:
LAB_00a9d8ca:
        return "ERROR_DS_DESTINATION_DOMAIN_NOT_IN_FOREST";
      case -0x7ff8dea8:
        goto LAB_00a9d8d4;
      case -0x7ff8dea7:
LAB_00a9d906:
        return "ERROR_DS_CANT_FIND_DC_FOR_SRC_DOMAIN";
      case -0x7ff8dea6:
LAB_00a9d910:
        return "ERROR_DS_SRC_OBJ_NOT_GROUP_OR_USER";
      case -0x7ff8dea5:
LAB_00a9d91a:
        return "ERROR_DS_SRC_SID_EXISTS_IN_FOREST";
      case -0x7ff8dea4:
LAB_00a9d924:
        return "ERROR_DS_SRC_AND_DST_OBJECT_CLASS_MISMATCH";
      case -0x7ff8dea3:
LAB_00a9d92e:
        return "ERROR_SAM_INIT_FAILURE";
      case -0x7ff8dea2:
LAB_00a9d938:
        return "ERROR_DS_DRA_SCHEMA_INFO_SHIP";
      case -0x7ff8dea1:
LAB_00a9d942:
        return "ERROR_DS_DRA_SCHEMA_CONFLICT";
      case -0x7ff8dea0:
LAB_00a9d94c:
        return "ERROR_DS_DRA_EARLIER_SCHEMA_CONFLICT";
      case -0x7ff8de9f:
LAB_00a9d956:
        return "ERROR_DS_DRA_OBJ_NC_MISMATCH";
      case -0x7ff8de9e:
LAB_00a9d960:
        return "ERROR_DS_NC_STILL_HAS_DSAS";
      case -0x7ff8de9d:
LAB_00a9d96a:
        return "ERROR_DS_GC_REQUIRED";
      case -0x7ff8de9c:
LAB_00a9d974:
        return "ERROR_DS_LOCAL_MEMBER_OF_LOCAL_ONLY";
      case -0x7ff8de9b:
LAB_00a9d97e:
        return "ERROR_DS_NO_FPO_IN_UNIVERSAL_GROUPS";
      case -0x7ff8de9a:
LAB_00a9d988:
        return "ERROR_DS_CANT_ADD_TO_GC";
      case -0x7ff8de99:
LAB_00a9d992:
        return "ERROR_DS_NO_CHECKPOINT_WITH_PDC";
      case -0x7ff8de98:
LAB_00a9d99c:
        return "ERROR_DS_SOURCE_AUDITING_NOT_ENABLED";
      case -0x7ff8de97:
LAB_00a9d9a6:
        return "ERROR_DS_CANT_CREATE_IN_NONDOMAIN_NC";
      case -0x7ff8de96:
LAB_00a9d9b0:
        return "ERROR_DS_INVALID_NAME_FOR_SPN";
      case -0x7ff8de95:
LAB_00a9d9ba:
        return "ERROR_DS_FILTER_USES_CONTRUCTED_ATTRS";
      case -0x7ff8de94:
LAB_00a9d9c4:
        return "ERROR_DS_UNICODEPWD_NOT_IN_QUOTES";
      case -0x7ff8de93:
LAB_00a9d9ce:
        return "ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED";
      case -0x7ff8de92:
LAB_00a9d9d8:
        return "ERROR_DS_MUST_BE_RUN_ON_DST_DC";
      case -0x7ff8de91:
LAB_00a9d9e2:
        return "ERROR_DS_SRC_DC_MUST_BE_SP4_OR_GREATER";
      case -0x7ff8de90:
LAB_00a9d9ec:
        return "ERROR_DS_CANT_TREE_DELETE_CRITICAL_OBJ";
      case -0x7ff8de8f:
LAB_00a9d9f6:
        return "ERROR_DS_INIT_FAILURE_CONSOLE";
      case -0x7ff8de8e:
LAB_00a9da00:
        return "ERROR_DS_SAM_INIT_FAILURE_CONSOLE";
      case -0x7ff8de8d:
LAB_00a9da0a:
        return "ERROR_DS_FOREST_VERSION_TOO_HIGH";
      case -0x7ff8de8c:
LAB_00a9da14:
        return "ERROR_DS_DOMAIN_VERSION_TOO_HIGH";
      case -0x7ff8de8b:
LAB_00a9da1e:
        return "ERROR_DS_FOREST_VERSION_TOO_LOW";
      case -0x7ff8de8a:
LAB_00a9da28:
        return "ERROR_DS_DOMAIN_VERSION_TOO_LOW";
      case -0x7ff8de89:
LAB_00a9da32:
        return "ERROR_DS_INCOMPATIBLE_VERSION";
      case -0x7ff8de88:
LAB_00a9da3c:
        return "ERROR_DS_LOW_DSA_VERSION";
      case -0x7ff8de87:
LAB_00a9da46:
        return "ERROR_DS_NO_BEHAVIOR_VERSION_IN_MIXEDDOMAIN";
      case -0x7ff8de86:
LAB_00a9da50:
        return "ERROR_DS_NOT_SUPPORTED_SORT_ORDER";
      case -0x7ff8de85:
LAB_00a9da5a:
        return "ERROR_DS_NAME_NOT_UNIQUE";
      case -0x7ff8de84:
LAB_00a9da64:
        return "ERROR_DS_MACHINE_ACCOUNT_CREATED_PRENT4";
      case -0x7ff8de83:
LAB_00a9da6e:
        return "ERROR_DS_OUT_OF_VERSION_STORE";
      case -0x7ff8de82:
LAB_00a9da78:
        return "ERROR_DS_INCOMPATIBLE_CONTROLS_USED";
      case -0x7ff8de81:
LAB_00a9da82:
        return "ERROR_DS_NO_REF_DOMAIN";
      case -0x7ff8de80:
LAB_00a9da8c:
        return "ERROR_DS_RESERVED_LINK_ID";
      case -0x7ff8de7f:
LAB_00a9da96:
        return "ERROR_DS_LINK_ID_NOT_AVAILABLE";
      case -0x7ff8de7e:
LAB_00a9daa0:
        return "ERROR_DS_AG_CANT_HAVE_UNIVERSAL_MEMBER";
      case -0x7ff8de7d:
LAB_00a9daaa:
        return "ERROR_DS_MODIFYDN_DISALLOWED_BY_INSTANCE_TYPE";
      case -0x7ff8de7c:
LAB_00a9dab4:
        return "ERROR_DS_NO_OBJECT_MOVE_IN_SCHEMA_NC";
      case -0x7ff8de7b:
LAB_00a9dabe:
        return "ERROR_DS_MODIFYDN_DISALLOWED_BY_FLAG";
      case -0x7ff8de7a:
LAB_00a9dac8:
        return "ERROR_DS_MODIFYDN_WRONG_GRANDPARENT";
      case -0x7ff8de79:
LAB_00a9dad2:
        return "ERROR_DS_NAME_ERROR_TRUST_REFERRAL";
      case -0x7ff8de78:
LAB_00a9dadc:
        return "ERROR_NOT_SUPPORTED_ON_STANDARD_SERVER";
      case -0x7ff8de77:
LAB_00a9dae6:
        return "ERROR_DS_CANT_ACCESS_REMOTE_PART_OF_AD";
      case -0x7ff8de76:
LAB_00a9daf0:
        return "ERROR_DS_CR_IMPOSSIBLE_TO_VALIDATE_V2";
      case -0x7ff8de75:
LAB_00a9dafa:
        return "ERROR_DS_THREAD_LIMIT_EXCEEDED";
      case -0x7ff8de74:
LAB_00a9db04:
        return "ERROR_DS_NOT_CLOSEST";
      case -0x7ff8de73:
LAB_00a9db0e:
        return "ERROR_DS_CANT_DERIVE_SPN_WITHOUT_SERVER_REF";
      case -0x7ff8de72:
LAB_00a9db18:
        return "ERROR_DS_SINGLE_USER_MODE_FAILED";
      case -0x7ff8de71:
LAB_00a9db22:
        return "ERROR_DS_NTDSCRIPT_SYNTAX_ERROR";
      case -0x7ff8de70:
LAB_00a9db2c:
        return "ERROR_DS_NTDSCRIPT_PROCESS_ERROR";
      case -0x7ff8de6f:
LAB_00a9db36:
        return "ERROR_DS_DIFFERENT_REPL_EPOCHS";
      case -0x7ff8de6e:
LAB_00a9db40:
        return "ERROR_DS_DRS_EXTENSIONS_CHANGED";
      case -0x7ff8de6d:
LAB_00a9db4a:
        return "ERROR_DS_REPLICA_SET_CHANGE_NOT_ALLOWED_ON_DISABLED_CR";
      case -0x7ff8de6c:
LAB_00a9db54:
        return "ERROR_DS_NO_MSDS_INTID";
      case -0x7ff8de6b:
LAB_00a9db5e:
        return "ERROR_DS_DUP_MSDS_INTID";
      case -0x7ff8de6a:
LAB_00a9db68:
        return "ERROR_DS_EXISTS_IN_RDNATTID";
      case -0x7ff8de69:
LAB_00a9db72:
        return "ERROR_DS_AUTHORIZATION_FAILED";
      case -0x7ff8de68:
LAB_00a9db7c:
        return "ERROR_DS_INVALID_SCRIPT";
      case -0x7ff8de67:
LAB_00a9db86:
        return "ERROR_DS_REMOTE_CROSSREF_OP_FAILED";
      }
    }
    else if (param_1 < -0x7ff8dae3) {
      if (param_1 == -0x7ff8dae4) {
LAB_00a9dc44:
        return "DNS_ERROR_PACKET_FMT_BASE";
      }
      switch(param_1) {
      case -0x7ff8dcd7:
LAB_00a9dbc2:
        return "DNS_ERROR_RCODE_FORMAT_ERROR";
      case -0x7ff8dcd6:
LAB_00a9dbcc:
        return "DNS_ERROR_RCODE_SERVER_FAILURE";
      case -0x7ff8dcd5:
LAB_00a9dbd6:
        return "DNS_ERROR_RCODE_NAME_ERROR";
      case -0x7ff8dcd4:
LAB_00a9dbe0:
        return "DNS_ERROR_RCODE_NOT_IMPLEMENTED";
      case -0x7ff8dcd3:
LAB_00a9dbea:
        return "DNS_ERROR_RCODE_REFUSED";
      case -0x7ff8dcd2:
LAB_00a9dbf4:
        return "DNS_ERROR_RCODE_YXDOMAIN";
      case -0x7ff8dcd1:
LAB_00a9dbfe:
        return "DNS_ERROR_RCODE_YXRRSET";
      case -0x7ff8dcd0:
LAB_00a9dc08:
        return "DNS_ERROR_RCODE_NXRRSET";
      case -0x7ff8dccf:
LAB_00a9dc12:
        return "DNS_ERROR_RCODE_NOTAUTH";
      case -0x7ff8dcce:
LAB_00a9dc1c:
        return "DNS_ERROR_RCODE_NOTZONE";
      case -0x7ff8dcc8:
code_r0x00a9dc26:
        return "DNS_ERROR_RCODE_BADSIG";
      case -0x7ff8dcc7:
code_r0x00a9dc30:
        return "DNS_ERROR_RCODE_BADKEY";
      case -0x7ff8dcc6:
code_r0x00a9dc3a:
        return "DNS_ERROR_RCODE_BADTIME";
      }
    }
    else if (param_1 < -0x7ff8c9e9) {
      if (param_1 == -0x7ff8c9ea) {
LAB_00a9e65d:
        return "ERROR_IPSEC_IKE_INVALID_COOKIE";
      }
      if (param_1 < -0x7ff8d8ab) {
        if (param_1 == -0x7ff8d8ac) {
LAB_00a9e0b6:
          return "WSAEUSERS";
        }
        if (param_1 < -0x7ff8da0c) {
          if (param_1 == -0x7ff8da0d) {
LAB_00a9deb8:
            return "DNS_WARNING_PTR_CREATE_FAILED";
          }
          switch(param_1) {
          case -0x7ff8dae3:
LAB_00a9dc92:
            return "DNS_INFO_NO_RECORDS";
          case -0x7ff8dae2:
LAB_00a9dc9c:
            return "DNS_ERROR_BAD_PACKET";
          case -0x7ff8dae1:
LAB_00a9dca6:
            return "DNS_ERROR_NO_PACKET";
          case -0x7ff8dae0:
LAB_00a9dcb0:
            return "DNS_ERROR_RCODE";
          case -0x7ff8dadf:
LAB_00a9dcba:
            return "DNS_ERROR_UNSECURE_PACKET";
          case -0x7ff8dab2:
LAB_00a9dcc4:
            return "DNS_ERROR_GENERAL_API_BASE";
          case -0x7ff8dab1:
LAB_00a9dcce:
            return "DNS_ERROR_INVALID_TYPE";
          case -0x7ff8dab0:
LAB_00a9dcd8:
            return "DNS_ERROR_INVALID_IP_ADDRESS";
          case -0x7ff8daaf:
LAB_00a9dce2:
            return "DNS_ERROR_INVALID_PROPERTY";
          case -0x7ff8daae:
LAB_00a9dcec:
            return "DNS_ERROR_TRY_AGAIN_LATER";
          case -0x7ff8daad:
LAB_00a9dcf6:
            return "DNS_ERROR_NOT_UNIQUE";
          case -0x7ff8daac:
LAB_00a9dd00:
            return "DNS_ERROR_NON_RFC_NAME";
          case -0x7ff8daab:
LAB_00a9dd0a:
            return "DNS_STATUS_FQDN";
          case -0x7ff8daaa:
LAB_00a9dd14:
            return "DNS_STATUS_DOTTED_NAME";
          case -0x7ff8daa9:
LAB_00a9dd1e:
            return "DNS_STATUS_SINGLE_PART_NAME";
          case -0x7ff8da80:
LAB_00a9dd28:
            return "DNS_ERROR_ZONE_BASE";
          case -0x7ff8da7f:
LAB_00a9dd32:
            return "DNS_ERROR_ZONE_DOES_NOT_EXIST";
          case -0x7ff8da7e:
LAB_00a9dd3c:
            return "DNS_ERROR_NO_ZONE_INFO";
          case -0x7ff8da7d:
LAB_00a9dd46:
            return "DNS_ERROR_INVALID_ZONE_OPERATION";
          case -0x7ff8da7c:
LAB_00a9dd50:
            return "DNS_ERROR_ZONE_CONFIGURATION_ERROR";
          case -0x7ff8da7b:
LAB_00a9dd5a:
            return "DNS_ERROR_ZONE_HAS_NO_SOA_RECORD";
          case -0x7ff8da7a:
LAB_00a9dd64:
            return "DNS_ERROR_ZONE_HAS_NO_NS_RECORDS";
          case -0x7ff8da79:
LAB_00a9dd6e:
            return "DNS_ERROR_ZONE_LOCKED";
          case -0x7ff8da78:
LAB_00a9dd78:
            return "DNS_ERROR_ZONE_CREATION_FAILED";
          case -0x7ff8da77:
LAB_00a9dd82:
            return "DNS_ERROR_ZONE_ALREADY_EXISTS";
          case -0x7ff8da76:
LAB_00a9dd8c:
            return "DNS_ERROR_AUTOZONE_ALREADY_EXISTS";
          case -0x7ff8da75:
LAB_00a9dd96:
            return "DNS_ERROR_INVALID_ZONE_TYPE";
          case -0x7ff8da74:
LAB_00a9dda0:
            return "DNS_ERROR_SECONDARY_REQUIRES_MASTER_IP";
          case -0x7ff8da73:
LAB_00a9ddaa:
            return "DNS_ERROR_ZONE_NOT_SECONDARY";
          case -0x7ff8da72:
LAB_00a9ddb4:
            return "DNS_ERROR_NEED_SECONDARY_ADDRESSES";
          case -0x7ff8da71:
LAB_00a9ddbe:
            return "DNS_ERROR_WINS_INIT_FAILED";
          case -0x7ff8da70:
LAB_00a9ddc8:
            return "DNS_ERROR_NEED_WINS_SERVERS";
          case -0x7ff8da6f:
LAB_00a9ddd2:
            return "DNS_ERROR_NBSTAT_INIT_FAILED";
          case -0x7ff8da6e:
LAB_00a9dddc:
            return "DNS_ERROR_SOA_DELETE_INVALID";
          case -0x7ff8da6d:
LAB_00a9e0d4:
            return "DNS_ERROR_FORWARDER_ALREADY_EXISTS";
          case -0x7ff8da6c:
LAB_00a9e0de:
            return "DNS_ERROR_ZONE_REQUIRES_MASTER_IP";
          case -0x7ff8da6b:
LAB_00a9e0e8:
            return "DNS_ERROR_ZONE_IS_SHUTDOWN";
          case -0x7ff8da4e:
LAB_00a9dde6:
            return "DNS_ERROR_DATAFILE_BASE";
          case -0x7ff8da4d:
LAB_00a9ddf0:
            return "DNS_ERROR_PRIMARY_REQUIRES_DATAFILE";
          case -0x7ff8da4c:
LAB_00a9ddfa:
            return "DNS_ERROR_INVALID_DATAFILE_NAME";
          case -0x7ff8da4b:
LAB_00a9de04:
            return "DNS_ERROR_DATAFILE_OPEN_FAILURE";
          case -0x7ff8da4a:
LAB_00a9de0e:
            return "DNS_ERROR_FILE_WRITEBACK_FAILED";
          case -0x7ff8da49:
LAB_00a9de18:
            return "DNS_ERROR_DATAFILE_PARSING";
          case -0x7ff8da1c:
LAB_00a9de22:
            return "DNS_ERROR_DATABASE_BASE";
          case -0x7ff8da1b:
LAB_00a9de2c:
            return "DNS_ERROR_RECORD_DOES_NOT_EXIST";
          case -0x7ff8da1a:
LAB_00a9de36:
            return "DNS_ERROR_RECORD_FORMAT";
          case -0x7ff8da19:
LAB_00a9de40:
            return "DNS_ERROR_NODE_CREATION_FAILED";
          case -0x7ff8da18:
LAB_00a9de4a:
            return "DNS_ERROR_UNKNOWN_RECORD_TYPE";
          case -0x7ff8da17:
LAB_00a9de54:
            return "DNS_ERROR_RECORD_TIMED_OUT";
          case -0x7ff8da16:
LAB_00a9de5e:
            return "DNS_ERROR_NAME_NOT_IN_ZONE";
          case -0x7ff8da15:
LAB_00a9de68:
            return "DNS_ERROR_CNAME_LOOP";
          case -0x7ff8da14:
LAB_00a9de72:
            return "DNS_ERROR_NODE_IS_CNAME";
          case -0x7ff8da13:
LAB_00a9de7c:
            return "DNS_ERROR_CNAME_COLLISION";
          case -0x7ff8da12:
LAB_00a9de86:
            return "DNS_ERROR_RECORD_ONLY_AT_ZONE_ROOT";
          case -0x7ff8da11:
LAB_00a9de90:
            return "DNS_ERROR_RECORD_ALREADY_EXISTS";
          case -0x7ff8da10:
LAB_00a9de9a:
            return "DNS_ERROR_SECONDARY_DATA";
          case -0x7ff8da0f:
LAB_00a9dea4:
            return "DNS_ERROR_NO_CREATE_CACHE_DATA";
          case -0x7ff8da0e:
LAB_00a9deae:
            return "DNS_ERROR_NAME_DOES_NOT_EXIST";
          }
        }
        else if (param_1 < -0x7ff8d8c8) {
          if (param_1 == -0x7ff8d8c9) {
LAB_00a9df94:
            return "WSAEDESTADDRREQ";
          }
          if (param_1 < -0x7ff8d952) {
            if (param_1 == -0x7ff8d953) goto LAB_00a9e0f2;
            if (param_1 < -0x7ff8d9e6) {
              if (param_1 == -0x7ff8d9e7) goto LAB_00a9defe;
              if (param_1 == -0x7ff8da0c) goto LAB_00a9dec2;
              if (param_1 == -0x7ff8da0b) goto LAB_00a9decc;
              if (param_1 == -0x7ff8da0a) goto LAB_00a9ded6;
              if (param_1 == -0x7ff8da09) goto LAB_00a9dee0;
              if (param_1 == -0x7ff8d9ea) goto LAB_00a9deea;
              if (param_1 == -0x7ff8d9e9) goto LAB_00a9def4;
              if (param_1 == -0x7ff8d9e8) goto code_r0x00a96b5c;
            }
            else {
              if (param_1 == -0x7ff8d9b8) goto LAB_00a9df08;
              if (param_1 == -0x7ff8d9b7) goto LAB_00a9df12;
              if (param_1 == -0x7ff8d986) goto LAB_00a9df1c;
              if (param_1 == -0x7ff8d985) goto LAB_00a9df26;
              if (param_1 == -0x7ff8d984) goto LAB_00a9df30;
              if (param_1 == -0x7ff8d954) goto code_r0x00a96ba8;
            }
          }
          else if (param_1 < -0x7ff8d8e1) {
            if (param_1 == -0x7ff8d8e2) goto LAB_00a9df58;
            if (param_1 == -0x7ff8d952) goto LAB_00a9e0fc;
            if (param_1 == -0x7ff8d951) goto LAB_00a9e106;
            if (param_1 == -0x7ff8d950) goto LAB_00a9e110;
            if (param_1 == -0x7ff8d8f0) goto LAB_00a9df3a;
            if (param_1 == -0x7ff8d8ec) goto LAB_00a9df44;
            if (param_1 == -0x7ff8d8e7) goto LAB_00a9df4e;
            if (param_1 == -0x7ff8d8e3) goto code_r0x00a96c0e;
          }
          else {
            if (param_1 == -0x7ff8d8da) goto LAB_00a9df62;
            if (param_1 == -0x7ff8d8d8) goto LAB_00a9df6c;
            if (param_1 == -0x7ff8d8cd) goto LAB_00a9df76;
            if (param_1 == -0x7ff8d8cc) goto LAB_00a9df80;
            if (param_1 == -0x7ff8d8cb) goto LAB_00a9df8a;
            if (param_1 == -0x7ff8d8ca) goto code_r0x00a96c5a;
          }
        }
        else {
          switch(param_1) {
          case -0x7ff8d8c8:
LAB_00a9df9e:
            return "WSAEMSGSIZE";
          case -0x7ff8d8c7:
LAB_00a9dfa8:
            return "WSAEPROTOTYPE";
          case -0x7ff8d8c6:
LAB_00a9dfb2:
            return "WSAENOPROTOOPT";
          case -0x7ff8d8c5:
LAB_00a9dfbc:
            return "WSAEPROTONOSUPPORT";
          case -0x7ff8d8c4:
LAB_00a9dfc6:
            return "WSAESOCKTNOSUPPORT";
          case -0x7ff8d8c3:
LAB_00a9dfd0:
            return "WSAEOPNOTSUPP";
          case -0x7ff8d8c2:
LAB_00a9dfda:
            return "WSAEPFNOSUPPORT";
          case -0x7ff8d8c1:
LAB_00a9dfe4:
            return "WSAEAFNOSUPPORT";
          case -0x7ff8d8c0:
LAB_00a9dfee:
            return "WSAEADDRINUSE";
          case -0x7ff8d8bf:
LAB_00a9dff8:
            return "WSAEADDRNOTAVAIL";
          case -0x7ff8d8be:
LAB_00a9e002:
            return "WSAENETDOWN";
          case -0x7ff8d8bd:
LAB_00a9e00c:
            return "WSAENETUNREACH";
          case -0x7ff8d8bc:
LAB_00a9e016:
            return "WSAENETRESET";
          case -0x7ff8d8bb:
LAB_00a9e020:
            return "WSAECONNABORTED";
          case -0x7ff8d8ba:
LAB_00a9e02a:
            return "WSAECONNRESET";
          case -0x7ff8d8b9:
LAB_00a9e034:
            return "WSAENOBUFS";
          case -0x7ff8d8b8:
LAB_00a9e03e:
            return "WSAEISCONN";
          case -0x7ff8d8b7:
LAB_00a9e048:
            return "WSAENOTCONN";
          case -0x7ff8d8b6:
LAB_00a9e052:
            return "WSAESHUTDOWN";
          case -0x7ff8d8b5:
LAB_00a9e05c:
            return "WSAETOOMANYREFS";
          case -0x7ff8d8b4:
LAB_00a9e066:
            return "WSAETIMEDOUT";
          case -0x7ff8d8b3:
LAB_00a9e070:
            return "WSAECONNREFUSED";
          case -0x7ff8d8b2:
LAB_00a9e07a:
            return "WSAELOOP";
          case -0x7ff8d8b1:
LAB_00a9e084:
            return "WSAENAMETOOLONG";
          case -0x7ff8d8b0:
LAB_00a9e08e:
            return "WSAEHOSTDOWN";
          case -0x7ff8d8af:
LAB_00a9e098:
            return "WSAEHOSTUNREACH";
          case -0x7ff8d8ae:
LAB_00a9e0a2:
            return "WSAENOTEMPTY";
          case -0x7ff8d8ad:
LAB_00a9e0ac:
            return "WSAEPROCLIM";
          }
        }
      }
      else if (param_1 < -0x7ff8cd2e) {
        if (param_1 == -0x7ff8cd2f) {
LAB_00a9e3d6:
          return "ERROR_IPSEC_TRANSPORT_FILTER_NOT_FOUND";
        }
        if (param_1 < -0x7ff8d4fb) {
          if (param_1 == -0x7ff8d4fc) {
LAB_00a9e277:
            return "WSA_QOS_BAD_STYLE";
          }
          if (param_1 < -0x7ff8d882) {
            if (param_1 == -0x7ff8d883) {
LAB_00a9e1e0:
              return "WSATYPE_NOT_FOUND";
            }
            switch(param_1) {
            case -0x7ff8d8ab:
              goto LAB_00a9e0c0;
            case -0x7ff8d8aa:
              goto LAB_00a9e0ca;
            case -0x7ff8d8a9:
              goto LAB_00a9e11a;
            case -0x7ff8d895:
LAB_00a9e172:
              return "WSASYSNOTREADY";
            case -0x7ff8d894:
LAB_00a9e17c:
              return "WSAVERNOTSUPPORTED";
            case -0x7ff8d893:
LAB_00a9e186:
              return "WSANOTINITIALISED";
            case -0x7ff8d88b:
LAB_00a9e190:
              return "WSAEDISCON";
            case -0x7ff8d88a:
LAB_00a9e19a:
              return "WSAENOMORE";
            case -0x7ff8d889:
LAB_00a9e1a4:
              return "WSAECANCELLED";
            case -0x7ff8d888:
LAB_00a9e1ae:
              return "WSAEINVALIDPROCTABLE";
            case -0x7ff8d887:
LAB_00a9e1b8:
              return "WSAEINVALIDPROVIDER";
            case -0x7ff8d886:
LAB_00a9e1c2:
              return "WSAEPROVIDERFAILEDINIT";
            case -0x7ff8d885:
LAB_00a9e1cc:
              return "WSASYSCALLFAILURE";
            case -0x7ff8d884:
LAB_00a9e1d6:
              return "WSASERVICE_NOT_FOUND";
            }
          }
          else if (param_1 < -0x7ff8d502) {
            if (param_1 == -0x7ff8d503) {
LAB_00a9e23b:
              return "WSA_QOS_RECEIVERS";
            }
            if (param_1 == -0x7ff8d882) {
LAB_00a9e1ea:
              return "WSA_E_NO_MORE";
            }
            if (param_1 == -0x7ff8d881) goto LAB_00a9e1f4;
            if (param_1 == -0x7ff8d880) goto LAB_00a9e1fe;
            if (param_1 == -0x7ff8d507) goto LAB_00a9e21d;
            if (param_1 == -0x7ff8d506) goto LAB_00a9e227;
            if (param_1 == -0x7ff8d505) goto LAB_00a9e231;
            if (param_1 == -0x7ff8d504) goto code_r0x00a96d26;
          }
          else {
            if (param_1 == -0x7ff8d502) {
LAB_00a9e245:
              return "WSA_QOS_SENDERS";
            }
            if (param_1 == -0x7ff8d501) goto LAB_00a9e24f;
            if (param_1 == -0x7ff8d500) goto LAB_00a9e259;
            if (param_1 == -0x7ff8d4ff) goto LAB_00a9e263;
            if (param_1 == -0x7ff8d4fe) goto LAB_00a9e26d;
            if (param_1 == -0x7ff8d4fd) goto code_r0x00a96d72;
          }
        }
        else if (param_1 < -0x7ff8cd37) {
          if (param_1 == -0x7ff8cd38) {
LAB_00a9e367:
            return "ERROR_IPSEC_QM_POLICY_EXISTS";
          }
          switch(param_1) {
          case -0x7ff8d4fb:
LAB_00a9e281:
            return "WSA_QOS_BAD_OBJECT";
          case -0x7ff8d4fa:
LAB_00a9e28b:
            return "WSA_QOS_TRAFFIC_CTRL_ERROR";
          case -0x7ff8d4f9:
            goto LAB_00a9e295;
          case -0x7ff8d4f8:
LAB_00a9e2c7:
            return "WSA_QOS_ESERVICETYPE";
          case -0x7ff8d4f7:
LAB_00a9e2d1:
            return "WSA_QOS_EFLOWSPEC";
          case -0x7ff8d4f6:
LAB_00a9e2db:
            return "WSA_QOS_EPROVSPECBUF";
          case -0x7ff8d4f5:
LAB_00a9e2e5:
            return "WSA_QOS_EFILTERSTYLE";
          case -0x7ff8d4f4:
LAB_00a9e2ef:
            return "WSA_QOS_EFILTERTYPE";
          case -0x7ff8d4f3:
LAB_00a9e2f9:
            return "WSA_QOS_EFILTERCOUNT";
          case -0x7ff8d4f2:
LAB_00a9e303:
            return "WSA_QOS_EOBJLENGTH";
          case -0x7ff8d4f1:
LAB_00a9e30d:
            return "WSA_QOS_EFLOWCOUNT";
          case -0x7ff8d4f0:
LAB_00a9e317:
            return "WSA_QOS_EUNKOWNPSOBJ";
          case -0x7ff8d4ef:
LAB_00a9e321:
            return "WSA_QOS_EPOLICYOBJ";
          case -0x7ff8d4ee:
LAB_00a9e32b:
            return "WSA_QOS_EFLOWDESC";
          case -0x7ff8d4ed:
LAB_00a9e335:
            return "WSA_QOS_EPSFLOWSPEC";
          case -0x7ff8d4ec:
LAB_00a9e33f:
            return "WSA_QOS_EPSFILTERSPEC";
          case -0x7ff8d4eb:
LAB_00a9e349:
            return "WSA_QOS_ESDMODEOBJ";
          case -0x7ff8d4ea:
LAB_00a9e353:
            return "WSA_QOS_ESHAPERATEOBJ";
          case -0x7ff8d4e9:
LAB_00a9e35d:
            return "WSA_QOS_RESERVED_PETYPE";
          }
        }
        else {
          switch(param_1) {
          case -0x7ff8cd37:
LAB_00a9e386:
            return "ERROR_IPSEC_QM_POLICY_NOT_FOUND";
          case -0x7ff8cd36:
LAB_00a9e390:
            return "ERROR_IPSEC_QM_POLICY_IN_USE";
          case -0x7ff8cd35:
LAB_00a9e39a:
            return "ERROR_IPSEC_MM_POLICY_EXISTS";
          case -0x7ff8cd34:
LAB_00a9e3a4:
            return "ERROR_IPSEC_MM_POLICY_NOT_FOUND";
          case -0x7ff8cd33:
LAB_00a9e3ae:
            return "ERROR_IPSEC_MM_POLICY_IN_USE";
          case -0x7ff8cd32:
LAB_00a9e3b8:
            return "ERROR_IPSEC_MM_FILTER_EXISTS";
          case -0x7ff8cd31:
LAB_00a9e3c2:
            return "ERROR_IPSEC_MM_FILTER_NOT_FOUND";
          case -0x7ff8cd30:
LAB_00a9e3cc:
            return "ERROR_IPSEC_TRANSPORT_FILTER_EXISTS";
          }
        }
      }
      else if (param_1 < -0x7ff8ca17) {
        if (param_1 == -0x7ff8ca18) {
LAB_00a9e490:
          return "ERROR_IPSEC_IKE_NEG_STATUS_BEGIN";
        }
        switch(param_1) {
        case -0x7ff8cd2e:
LAB_00a9e3e0:
          return "ERROR_IPSEC_MM_AUTH_EXISTS";
        case -0x7ff8cd2d:
LAB_00a9e3ea:
          return "ERROR_IPSEC_MM_AUTH_NOT_FOUND";
        case -0x7ff8cd2c:
LAB_00a9e3f4:
          return "ERROR_IPSEC_MM_AUTH_IN_USE";
        case -0x7ff8cd2b:
          goto LAB_00a9e3fe;
        case -0x7ff8cd2a:
LAB_00a9e42c:
          return "ERROR_IPSEC_DEFAULT_MM_AUTH_NOT_FOUND";
        case -0x7ff8cd29:
LAB_00a9e436:
          return "ERROR_IPSEC_DEFAULT_QM_POLICY_NOT_FOUND";
        case -0x7ff8cd28:
LAB_00a9e440:
          return "ERROR_IPSEC_TUNNEL_FILTER_EXISTS";
        case -0x7ff8cd27:
LAB_00a9e44a:
          return "ERROR_IPSEC_TUNNEL_FILTER_NOT_FOUND";
        case -0x7ff8cd26:
LAB_00a9e454:
          return "ERROR_IPSEC_MM_FILTER_PENDING_DELETION";
        case -0x7ff8cd25:
LAB_00a9e45e:
          return "ERROR_IPSEC_TRANSPORT_FILTER_PENDING_DELETION";
        case -0x7ff8cd24:
LAB_00a9e468:
          return "ERROR_IPSEC_TUNNEL_FILTER_PENDING_DELETION";
        case -0x7ff8cd23:
LAB_00a9e472:
          return "ERROR_IPSEC_MM_POLICY_PENDING_DELETION";
        case -0x7ff8cd22:
LAB_00a9e47c:
          return "ERROR_IPSEC_MM_AUTH_PENDING_DELETION";
        case -0x7ff8cd21:
LAB_00a9e486:
          return "ERROR_IPSEC_QM_POLICY_PENDING_DELETION";
        }
      }
      else {
        switch(param_1) {
        case -0x7ff8ca17:
LAB_00a9e4af:
          return "ERROR_IPSEC_IKE_AUTH_FAIL";
        case -0x7ff8ca16:
LAB_00a9e4b9:
          return "ERROR_IPSEC_IKE_ATTRIB_FAIL";
        case -0x7ff8ca15:
LAB_00a9e4c3:
          return "ERROR_IPSEC_IKE_NEGOTIATION_PENDING";
        case -0x7ff8ca14:
LAB_00a9e4cd:
          return "ERROR_IPSEC_IKE_GENERAL_PROCESSING_ERROR";
        case -0x7ff8ca13:
LAB_00a9e4d7:
          return "ERROR_IPSEC_IKE_TIMED_OUT";
        case -0x7ff8ca12:
LAB_00a9e4e1:
          return "ERROR_IPSEC_IKE_NO_CERT";
        case -0x7ff8ca11:
LAB_00a9e4eb:
          return "ERROR_IPSEC_IKE_SA_DELETED";
        case -0x7ff8ca10:
LAB_00a9e4f5:
          return "ERROR_IPSEC_IKE_SA_REAPED";
        case -0x7ff8ca0f:
LAB_00a9e4ff:
          return "ERROR_IPSEC_IKE_MM_ACQUIRE_DROP";
        case -0x7ff8ca0e:
LAB_00a9e509:
          return "ERROR_IPSEC_IKE_QM_ACQUIRE_DROP";
        case -0x7ff8ca0d:
LAB_00a9e513:
          return "ERROR_IPSEC_IKE_QUEUE_DROP_MM";
        case -0x7ff8ca0c:
LAB_00a9e51d:
          return "ERROR_IPSEC_IKE_QUEUE_DROP_NO_MM";
        case -0x7ff8ca0b:
LAB_00a9e527:
          return "ERROR_IPSEC_IKE_DROP_NO_RESPONSE";
        case -0x7ff8ca0a:
LAB_00a9e531:
          return "ERROR_IPSEC_IKE_MM_DELAY_DROP";
        case -0x7ff8ca09:
LAB_00a9e53b:
          return "ERROR_IPSEC_IKE_QM_DELAY_DROP";
        case -0x7ff8ca08:
LAB_00a9e545:
          return "ERROR_IPSEC_IKE_ERROR";
        case -0x7ff8ca07:
LAB_00a9e54f:
          return "ERROR_IPSEC_IKE_CRL_FAILED";
        case -0x7ff8ca06:
LAB_00a9e559:
          return "ERROR_IPSEC_IKE_INVALID_KEY_USAGE";
        case -0x7ff8ca05:
LAB_00a9e563:
          return "ERROR_IPSEC_IKE_INVALID_CERT_TYPE";
        case -0x7ff8ca04:
LAB_00a9e56d:
          return "ERROR_IPSEC_IKE_NO_PRIVATE_KEY";
        case -0x7ff8ca02:
code_r0x00a9e577:
          return "ERROR_IPSEC_IKE_DH_FAIL";
        case -0x7ff8ca00:
LAB_00a9e581:
          return "ERROR_IPSEC_IKE_INVALID_HEADER";
        case -0x7ff8c9ff:
LAB_00a9e58b:
          return "ERROR_IPSEC_IKE_NO_POLICY";
        case -0x7ff8c9fe:
LAB_00a9e595:
          return "ERROR_IPSEC_IKE_INVALID_SIGNATURE";
        case -0x7ff8c9fd:
LAB_00a9e59f:
          return "ERROR_IPSEC_IKE_KERBEROS_ERROR";
        case -0x7ff8c9fc:
LAB_00a9e5a9:
          return "ERROR_IPSEC_IKE_NO_PUBLIC_KEY";
        case -0x7ff8c9fb:
LAB_00a9e5b3:
          return "ERROR_IPSEC_IKE_PROCESS_ERR";
        case -0x7ff8c9fa:
LAB_00a9e5bd:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_SA";
        case -0x7ff8c9f9:
LAB_00a9e5c7:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_PROP";
        case -0x7ff8c9f8:
LAB_00a9e5d1:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_TRANS";
        case -0x7ff8c9f7:
LAB_00a9e5db:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_KE";
        case -0x7ff8c9f6:
LAB_00a9e5e5:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_ID";
        case -0x7ff8c9f5:
LAB_00a9e5ef:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_CERT";
        case -0x7ff8c9f4:
LAB_00a9e5f9:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_CERT_REQ";
        case -0x7ff8c9f3:
LAB_00a9e603:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_HASH";
        case -0x7ff8c9f2:
LAB_00a9e60d:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_SIG";
        case -0x7ff8c9f1:
LAB_00a9e617:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_NONCE";
        case -0x7ff8c9f0:
LAB_00a9e621:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_NOTIFY";
        case -0x7ff8c9ef:
LAB_00a9e62b:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_DELETE";
        case -0x7ff8c9ee:
LAB_00a9e635:
          return "ERROR_IPSEC_IKE_PROCESS_ERR_VENDOR";
        case -0x7ff8c9ed:
LAB_00a9e63f:
          return "ERROR_IPSEC_IKE_INVALID_PAYLOAD";
        case -0x7ff8c9ec:
LAB_00a9e649:
          return "ERROR_IPSEC_IKE_LOAD_SOFT_SA";
        case -0x7ff8c9eb:
LAB_00a9e653:
          return "ERROR_IPSEC_IKE_SOFT_SA_TORN_DOWN";
        }
      }
    }
    else if (param_1 < -0x7ff8c9b6) {
      if (param_1 == -0x7ff8c9b7) {
LAB_00a9e7f7:
        return "ERROR_IPSEC_IKE_NEG_STATUS_END";
      }
      switch(param_1) {
      case -0x7ff8c9e9:
LAB_00a9e667:
        return "ERROR_IPSEC_IKE_NO_PEER_CERT";
      case -0x7ff8c9e8:
LAB_00a9e671:
        return "ERROR_IPSEC_IKE_PEER_CRL_FAILED";
      case -0x7ff8c9e7:
LAB_00a9e67b:
        return "ERROR_IPSEC_IKE_POLICY_CHANGE";
      case -0x7ff8c9e6:
LAB_00a9e685:
        return "ERROR_IPSEC_IKE_NO_MM_POLICY";
      case -0x7ff8c9e5:
        goto LAB_00a9e68f;
      case -0x7ff8c9e4:
LAB_00a9e6c1:
        return "ERROR_IPSEC_IKE_SECLOADFAIL";
      case -0x7ff8c9e3:
LAB_00a9e6cb:
        return "ERROR_IPSEC_IKE_FAILSSPINIT";
      case -0x7ff8c9e2:
LAB_00a9e6d5:
        return "ERROR_IPSEC_IKE_FAILQUERYSSP";
      case -0x7ff8c9e1:
LAB_00a9e6df:
        return "ERROR_IPSEC_IKE_SRVACQFAIL";
      case -0x7ff8c9e0:
LAB_00a9e6e9:
        return "ERROR_IPSEC_IKE_SRVQUERYCRED";
      case -0x7ff8c9df:
LAB_00a9e6f3:
        return "ERROR_IPSEC_IKE_GETSPIFAIL";
      case -0x7ff8c9de:
LAB_00a9e6fd:
        return "ERROR_IPSEC_IKE_INVALID_FILTER";
      case -0x7ff8c9dd:
LAB_00a9e707:
        return "ERROR_IPSEC_IKE_OUT_OF_MEMORY";
      case -0x7ff8c9dc:
LAB_00a9e711:
        return "ERROR_IPSEC_IKE_ADD_UPDATE_KEY_FAILED";
      case -0x7ff8c9db:
LAB_00a9e71b:
        return "ERROR_IPSEC_IKE_INVALID_POLICY";
      case -0x7ff8c9da:
LAB_00a9e725:
        return "ERROR_IPSEC_IKE_UNKNOWN_DOI";
      case -0x7ff8c9d9:
LAB_00a9e72f:
        return "ERROR_IPSEC_IKE_INVALID_SITUATION";
      case -0x7ff8c9d8:
LAB_00a9e739:
        return "ERROR_IPSEC_IKE_DH_FAILURE";
      case -0x7ff8c9d7:
LAB_00a9e743:
        return "ERROR_IPSEC_IKE_INVALID_GROUP";
      case -0x7ff8c9d6:
LAB_00a9e74d:
        return "ERROR_IPSEC_IKE_ENCRYPT";
      case -0x7ff8c9d5:
LAB_00a9e757:
        return "ERROR_IPSEC_IKE_DECRYPT";
      case -0x7ff8c9d4:
LAB_00a9e761:
        return "ERROR_IPSEC_IKE_POLICY_MATCH";
      case -0x7ff8c9d3:
LAB_00a9e76b:
        return "ERROR_IPSEC_IKE_UNSUPPORTED_ID";
      case -0x7ff8c9d2:
LAB_00a9e775:
        return "ERROR_IPSEC_IKE_INVALID_HASH";
      case -0x7ff8c9d1:
LAB_00a9e77f:
        return "ERROR_IPSEC_IKE_INVALID_HASH_ALG";
      case -0x7ff8c9d0:
LAB_00a9e789:
        return "ERROR_IPSEC_IKE_INVALID_HASH_SIZE";
      case -0x7ff8c9cf:
LAB_00a9e793:
        return "ERROR_IPSEC_IKE_INVALID_ENCRYPT_ALG";
      case -0x7ff8c9ce:
LAB_00a9e79d:
        return "ERROR_IPSEC_IKE_INVALID_AUTH_ALG";
      case -0x7ff8c9cd:
LAB_00a9e7a7:
        return "ERROR_IPSEC_IKE_INVALID_SIG";
      case -0x7ff8c9cc:
LAB_00a9e7b1:
        return "ERROR_IPSEC_IKE_LOAD_FAILED";
      case -0x7ff8c9cb:
LAB_00a9e7bb:
        return "ERROR_IPSEC_IKE_RPC_DELETE";
      case -0x7ff8c9ca:
LAB_00a9e7c5:
        return "ERROR_IPSEC_IKE_BENIGN_REINIT";
      case -0x7ff8c9c9:
LAB_00a9e7cf:
        return "ERROR_IPSEC_IKE_INVALID_RESPONDER_LIFETIME_NOTIFY";
      case -0x7ff8c9c7:
code_r0x00a9e7d9:
        return "ERROR_IPSEC_IKE_INVALID_CERT_KEYLEN";
      case -0x7ff8c9c6:
code_r0x00a9e7e3:
        return "ERROR_IPSEC_IKE_MM_LIMIT";
      case -0x7ff8c9c5:
code_r0x00a9e7ed:
        return "ERROR_IPSEC_IKE_NEGOTIATION_DISABLED";
      }
    }
    else if (param_1 < -0x7ff7fffe) {
      if (param_1 == -0x7ff7ffff) {
        return "CO_E_CLASS_CREATE_FAILED";
      }
      switch(param_1) {
      case -0x7ff8c950:
LAB_00a9e829:
        return "ERROR_SXS_SECTION_NOT_FOUND";
      case -0x7ff8c94f:
LAB_00a9e833:
        return "ERROR_SXS_CANT_GEN_ACTCTX";
      case -0x7ff8c94e:
LAB_00a9e83d:
        return "ERROR_SXS_INVALID_ACTCTXDATA_FORMAT";
      case -0x7ff8c94d:
LAB_00a9e847:
        return "ERROR_SXS_ASSEMBLY_NOT_FOUND";
      case -0x7ff8c94c:
LAB_00a9e851:
        return "ERROR_SXS_MANIFEST_FORMAT_ERROR";
      case -0x7ff8c94b:
LAB_00a9e85b:
        return "ERROR_SXS_MANIFEST_PARSE_ERROR";
      case -0x7ff8c94a:
LAB_00a9e865:
        return "ERROR_SXS_ACTIVATION_CONTEXT_DISABLED";
      case -0x7ff8c949:
LAB_00a9e86f:
        return "ERROR_SXS_KEY_NOT_FOUND";
      case -0x7ff8c948:
LAB_00a9e879:
        return "ERROR_SXS_VERSION_CONFLICT";
      case -0x7ff8c947:
LAB_00a9e883:
        return "ERROR_SXS_WRONG_SECTION_TYPE";
      case -0x7ff8c946:
LAB_00a9e88d:
        return "ERROR_SXS_THREAD_QUERIES_DISABLED";
      case -0x7ff8c945:
LAB_00a9e897:
        return "ERROR_SXS_PROCESS_DEFAULT_ALREADY_SET";
      case -0x7ff8c944:
LAB_00a9e8a1:
        return "ERROR_SXS_UNKNOWN_ENCODING_GROUP";
      case -0x7ff8c943:
LAB_00a9e8ab:
        return "ERROR_SXS_UNKNOWN_ENCODING";
      case -0x7ff8c942:
LAB_00a9e8b5:
        return "ERROR_SXS_INVALID_XML_NAMESPACE_URI";
      case -0x7ff8c941:
LAB_00a9e8bf:
        return "ERROR_SXS_ROOT_MANIFEST_DEPENDENCY_NOT_INSTALLED";
      case -0x7ff8c940:
LAB_00a9e8c9:
        return "ERROR_SXS_LEAF_MANIFEST_DEPENDENCY_NOT_INSTALLED";
      case -0x7ff8c93f:
LAB_00a9e8d3:
        return "ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE";
      case -0x7ff8c93e:
LAB_00a9e8dd:
        return "ERROR_SXS_MANIFEST_MISSING_REQUIRED_DEFAULT_NAMESPACE";
      case -0x7ff8c93d:
LAB_00a9e8e7:
        return "ERROR_SXS_MANIFEST_INVALID_REQUIRED_DEFAULT_NAMESPACE";
      case -0x7ff8c93c:
LAB_00a9e8f1:
        return "ERROR_SXS_PRIVATE_MANIFEST_CROSS_PATH_WITH_REPARSE_POINT";
      case -0x7ff8c93b:
LAB_00a9e8fb:
        return "ERROR_SXS_DUPLICATE_DLL_NAME";
      case -0x7ff8c93a:
LAB_00a9e905:
        return "ERROR_SXS_DUPLICATE_WINDOWCLASS_NAME";
      case -0x7ff8c939:
LAB_00a9e90f:
        return "ERROR_SXS_DUPLICATE_CLSID";
      case -0x7ff8c938:
LAB_00a9e919:
        return "ERROR_SXS_DUPLICATE_IID";
      case -0x7ff8c937:
LAB_00a9e923:
        return "ERROR_SXS_DUPLICATE_TLBID";
      case -0x7ff8c936:
LAB_00a9e92d:
        return "ERROR_SXS_DUPLICATE_PROGID";
      case -0x7ff8c935:
LAB_00a9e937:
        return "ERROR_SXS_DUPLICATE_ASSEMBLY_NAME";
      case -0x7ff8c934:
LAB_00a9e941:
        return "ERROR_SXS_FILE_HASH_MISMATCH";
      case -0x7ff8c933:
LAB_00a9e94b:
        return "ERROR_SXS_POLICY_PARSE_ERROR";
      case -0x7ff8c932:
LAB_00a9e955:
        return "ERROR_SXS_XML_E_MISSINGQUOTE";
      case -0x7ff8c931:
LAB_00a9e95f:
        return "ERROR_SXS_XML_E_COMMENTSYNTAX";
      case -0x7ff8c930:
LAB_00a9e969:
        return "ERROR_SXS_XML_E_BADSTARTNAMECHAR";
      case -0x7ff8c92f:
LAB_00a9e973:
        return "ERROR_SXS_XML_E_BADNAMECHAR";
      case -0x7ff8c92e:
LAB_00a9e97d:
        return "ERROR_SXS_XML_E_BADCHARINSTRING";
      case -0x7ff8c92d:
LAB_00a9e987:
        return "ERROR_SXS_XML_E_XMLDECLSYNTAX";
      case -0x7ff8c92c:
LAB_00a9e991:
        return "ERROR_SXS_XML_E_BADCHARDATA";
      case -0x7ff8c92b:
LAB_00a9e99b:
        return "ERROR_SXS_XML_E_MISSINGWHITESPACE";
      case -0x7ff8c92a:
LAB_00a9e9a5:
        return "ERROR_SXS_XML_E_EXPECTINGTAGEND";
      case -0x7ff8c929:
LAB_00a9e9af:
        return "ERROR_SXS_XML_E_MISSINGSEMICOLON";
      case -0x7ff8c928:
LAB_00a9e9b9:
        return "ERROR_SXS_XML_E_UNBALANCEDPAREN";
      case -0x7ff8c927:
LAB_00a9e9c3:
        return "ERROR_SXS_XML_E_INTERNALERROR";
      case -0x7ff8c926:
LAB_00a9e9cd:
        return "ERROR_SXS_XML_E_UNEXPECTED_WHITESPACE";
      case -0x7ff8c925:
LAB_00a9e9d7:
        return "ERROR_SXS_XML_E_INCOMPLETE_ENCODING";
      case -0x7ff8c924:
LAB_00a9e9e1:
        return "ERROR_SXS_XML_E_MISSING_PAREN";
      case -0x7ff8c923:
LAB_00a9e9eb:
        return "ERROR_SXS_XML_E_EXPECTINGCLOSEQUOTE";
      case -0x7ff8c922:
LAB_00a9e9f5:
        return "ERROR_SXS_XML_E_MULTIPLE_COLONS";
      case -0x7ff8c921:
LAB_00a9e9ff:
        return "ERROR_SXS_XML_E_INVALID_DECIMAL";
      case -0x7ff8c920:
LAB_00a9ea09:
        return "ERROR_SXS_XML_E_INVALID_HEXIDECIMAL";
      case -0x7ff8c91f:
LAB_00a9ea13:
        return "ERROR_SXS_XML_E_INVALID_UNICODE";
      case -0x7ff8c91e:
LAB_00a9ea1d:
        return "ERROR_SXS_XML_E_WHITESPACEORQUESTIONMARK";
      case -0x7ff8c91d:
LAB_00a9ea27:
        return "ERROR_SXS_XML_E_UNEXPECTEDENDTAG";
      case -0x7ff8c91c:
LAB_00a9ea31:
        return "ERROR_SXS_XML_E_UNCLOSEDTAG";
      case -0x7ff8c91b:
LAB_00a9ea3b:
        return "ERROR_SXS_XML_E_DUPLICATEATTRIBUTE";
      case -0x7ff8c91a:
LAB_00a9ea45:
        return "ERROR_SXS_XML_E_MULTIPLEROOTS";
      case -0x7ff8c919:
LAB_00a9ea4f:
        return "ERROR_SXS_XML_E_INVALIDATROOTLEVEL";
      case -0x7ff8c918:
LAB_00a9ea59:
        return "ERROR_SXS_XML_E_BADXMLDECL";
      case -0x7ff8c917:
LAB_00a9ea63:
        return "ERROR_SXS_XML_E_MISSINGROOT";
      case -0x7ff8c916:
LAB_00a9ea6d:
        return "ERROR_SXS_XML_E_UNEXPECTEDEOF";
      case -0x7ff8c915:
LAB_00a9ea77:
        return "ERROR_SXS_XML_E_BADPEREFINSUBSET";
      case -0x7ff8c914:
LAB_00a9ea81:
        return "ERROR_SXS_XML_E_UNCLOSEDSTARTTAG";
      case -0x7ff8c913:
LAB_00a9ea8b:
        return "ERROR_SXS_XML_E_UNCLOSEDENDTAG";
      case -0x7ff8c912:
LAB_00a9ea95:
        return "ERROR_SXS_XML_E_UNCLOSEDSTRING";
      case -0x7ff8c911:
LAB_00a9ea9f:
        return "ERROR_SXS_XML_E_UNCLOSEDCOMMENT";
      case -0x7ff8c910:
LAB_00a9eaa9:
        return "ERROR_SXS_XML_E_UNCLOSEDDECL";
      case -0x7ff8c90f:
LAB_00a9eab3:
        return "ERROR_SXS_XML_E_UNCLOSEDCDATA";
      case -0x7ff8c90e:
LAB_00a9eabd:
        return "ERROR_SXS_XML_E_RESERVEDNAMESPACE";
      case -0x7ff8c90d:
LAB_00a9eac7:
        return "ERROR_SXS_XML_E_INVALIDENCODING";
      case -0x7ff8c90c:
LAB_00a9ead1:
        return "ERROR_SXS_XML_E_INVALIDSWITCH";
      case -0x7ff8c90b:
LAB_00a9eadb:
        return "ERROR_SXS_XML_E_BADXMLCASE";
      case -0x7ff8c90a:
LAB_00a9eae5:
        return "ERROR_SXS_XML_E_INVALID_STANDALONE";
      case -0x7ff8c909:
LAB_00a9eaef:
        return "ERROR_SXS_XML_E_UNEXPECTED_STANDALONE";
      case -0x7ff8c908:
LAB_00a9eaf9:
        return "ERROR_SXS_XML_E_INVALID_VERSION";
      case -0x7ff8c907:
LAB_00a9eb03:
        return "ERROR_SXS_XML_E_MISSINGEQUALS";
      case -0x7ff8c906:
LAB_00a9eb0d:
        return "ERROR_SXS_PROTECTION_RECOVERY_FAILED";
      case -0x7ff8c905:
LAB_00a9eb17:
        return "ERROR_SXS_PROTECTION_PUBLIC_KEY_TOO_SHORT";
      case -0x7ff8c904:
LAB_00a9eb21:
        return "ERROR_SXS_PROTECTION_CATALOG_NOT_VALID";
      case -0x7ff8c903:
LAB_00a9eb2b:
        return "ERROR_SXS_UNTRANSLATABLE_HRESULT";
      case -0x7ff8c902:
LAB_00a9eb35:
        return "ERROR_SXS_PROTECTION_CATALOG_FILE_MISSING";
      case -0x7ff8c901:
LAB_00a9eb3f:
        return "ERROR_SXS_MISSING_ASSEMBLY_IDENTITY_ATTRIBUTE";
      case -0x7ff8c900:
LAB_00a9eb49:
        return "ERROR_SXS_INVALID_ASSEMBLY_IDENTITY_ATTRIBUTE_NAME";
      }
    }
    else if (param_1 < -0x7ff6fffe) {
      if (param_1 == -0x7ff6ffff) {
        return "NTE_BAD_UID";
      }
      switch(param_1) {
      case -0x7ff7fffe:
        return "CO_E_SCM_ERROR";
      case -0x7ff7fffd:
        return "CO_E_SCM_RPC_FAILURE";
      case -0x7ff7fffc:
        return "CO_E_BAD_PATH";
      case -0x7ff7fffb:
        return "CO_E_SERVER_EXEC_FAILURE";
      case -0x7ff7fffa:
        return "CO_E_OBJSRV_RPC_FAILURE";
      case -0x7ff7fff9:
        return "MK_E_NO_NORMALIZED";
      case -0x7ff7fff8:
        return "CO_E_SERVER_STOPPING";
      case -0x7ff7fff7:
        return "MEM_E_INVALID_ROOT";
      case -0x7ff7fff0:
        return "MEM_E_INVALID_LINK";
      case -0x7ff7ffef:
        return "MEM_E_INVALID_SIZE";
      }
    }
    else if (param_1 < -0x7ff6fcff) {
      if (param_1 == -0x7ff6fd00) {
        return "SEC_E_INSUFFICIENT_MEMORY";
      }
      switch(param_1) {
      case -0x7ff6fffe:
        return "NTE_BAD_HASH";
      case -0x7ff6fffd:
        return "NTE_BAD_KEY";
      case -0x7ff6fffc:
        return "NTE_BAD_LEN";
      case -0x7ff6fffb:
        return "NTE_BAD_DATA";
      case -0x7ff6fffa:
        return "NTE_BAD_SIGNATURE";
      case -0x7ff6fff9:
        return "NTE_BAD_VER";
      case -0x7ff6fff8:
        return "NTE_BAD_ALGID";
      case -0x7ff6fff7:
        return "NTE_BAD_FLAGS";
      case -0x7ff6fff6:
        return "NTE_BAD_TYPE";
      case -0x7ff6fff5:
        return "NTE_BAD_KEY_STATE";
      case -0x7ff6fff4:
        return "NTE_BAD_HASH_STATE";
      case -0x7ff6fff3:
        return "NTE_NO_KEY";
      case -0x7ff6fff2:
        return "NTE_NO_MEMORY";
      case -0x7ff6fff1:
        return "NTE_EXISTS";
      case -0x7ff6fff0:
        return "NTE_PERM";
      case -0x7ff6ffef:
        return "NTE_NOT_FOUND";
      case -0x7ff6ffee:
        return "NTE_DOUBLE_ENCRYPT";
      case -0x7ff6ffed:
        return "NTE_BAD_PROVIDER";
      case -0x7ff6ffec:
        return "NTE_BAD_PROV_TYPE";
      case -0x7ff6ffeb:
        return "NTE_BAD_PUBLIC_KEY";
      case -0x7ff6ffea:
        return "NTE_BAD_KEYSET";
      case -0x7ff6ffe9:
        return "NTE_PROV_TYPE_NOT_DEF";
      case -0x7ff6ffe8:
        return "NTE_PROV_TYPE_ENTRY_BAD";
      case -0x7ff6ffe7:
        return "NTE_KEYSET_NOT_DEF";
      case -0x7ff6ffe6:
        return "NTE_KEYSET_ENTRY_BAD";
      case -0x7ff6ffe5:
        return "NTE_PROV_TYPE_NO_MATCH";
      case -0x7ff6ffe4:
        return "NTE_SIGNATURE_FILE_BAD";
      case -0x7ff6ffe3:
        return "NTE_PROVIDER_DLL_FAIL";
      case -0x7ff6ffe2:
        return "NTE_PROV_DLL_NOT_FOUND";
      case -0x7ff6ffe1:
        return "NTE_BAD_KEYSET_PARAM";
      case -0x7ff6ffe0:
        return "NTE_FAIL";
      case -0x7ff6ffdf:
        return "NTE_SYS_ERR";
      case -0x7ff6ffde:
        return "NTE_SILENT_CONTEXT";
      case -0x7ff6ffdd:
        return "NTE_TOKEN_KEYSET_STORAGE_FULL";
      case -0x7ff6ffdc:
        return "NTE_TEMPORARY_PROFILE";
      case -0x7ff6ffdb:
        return "NTE_FIXEDPARAMETER";
      }
    }
    else if (param_1 < -0x7ff6effe) {
      if (param_1 == -0x7ff6efff) {
        return "CRYPT_E_MSG_ERROR";
      }
      switch(param_1) {
      case -0x7ff6fcff:
        return "SEC_E_INVALID_HANDLE";
      case -0x7ff6fcfe:
        return "SEC_E_UNSUPPORTED_FUNCTION";
      case -0x7ff6fcfd:
        return "SEC_E_TARGET_UNKNOWN";
      case -0x7ff6fcfc:
        return "SEC_E_INTERNAL_ERROR";
      case -0x7ff6fcfb:
        return "SEC_E_SECPKG_NOT_FOUND";
      case -0x7ff6fcfa:
        return "SEC_E_NOT_OWNER";
      case -0x7ff6fcf9:
        return "SEC_E_CANNOT_INSTALL";
      case -0x7ff6fcf8:
        return "SEC_E_INVALID_TOKEN";
      case -0x7ff6fcf7:
        return "SEC_E_CANNOT_PACK";
      case -0x7ff6fcf6:
        return "SEC_E_QOP_NOT_SUPPORTED";
      case -0x7ff6fcf5:
        return "SEC_E_NO_IMPERSONATION";
      case -0x7ff6fcf4:
        return "SEC_E_LOGON_DENIED";
      case -0x7ff6fcf3:
        return "SEC_E_UNKNOWN_CREDENTIALS";
      case -0x7ff6fcf2:
        return "SEC_E_NO_CREDENTIALS";
      case -0x7ff6fcf1:
        return "SEC_E_MESSAGE_ALTERED";
      case -0x7ff6fcf0:
        return "SEC_E_OUT_OF_SEQUENCE";
      case -0x7ff6fcef:
        return "SEC_E_NO_AUTHENTICATING_AUTHORITY";
      case -0x7ff6fcea:
        return "SEC_E_BAD_PKGID";
      case -0x7ff6fce9:
        return "SEC_E_CONTEXT_EXPIRED";
      case -0x7ff6fce8:
        return "SEC_E_INCOMPLETE_MESSAGE";
      case -0x7ff6fce0:
        return "SEC_E_INCOMPLETE_CREDENTIALS";
      case -0x7ff6fcdf:
        return "SEC_E_BUFFER_TOO_SMALL";
      case -0x7ff6fcde:
        return "SEC_E_WRONG_PRINCIPAL";
      case -0x7ff6fcdc:
        return "SEC_E_TIME_SKEW";
      case -0x7ff6fcdb:
        return "SEC_E_UNTRUSTED_ROOT";
      case -0x7ff6fcda:
        return "SEC_E_ILLEGAL_MESSAGE";
      case -0x7ff6fcd9:
        return "SEC_E_CERT_UNKNOWN";
      case -0x7ff6fcd8:
        return "SEC_E_CERT_EXPIRED";
      case -0x7ff6fcd7:
        return "SEC_E_ENCRYPT_FAILURE";
      case -0x7ff6fcd0:
        return "SEC_E_DECRYPT_FAILURE";
      case -0x7ff6fccf:
        return "SEC_E_ALGORITHM_MISMATCH";
      case -0x7ff6fcce:
        return "SEC_E_SECURITY_QOS_FAILED";
      case -0x7ff6fccd:
        return "SEC_E_UNFINISHED_CONTEXT_DELETED";
      case -0x7ff6fccc:
        return "SEC_E_NO_TGT_REPLY";
      case -0x7ff6fccb:
        return "SEC_E_NO_IP_ADDRESSES";
      case -0x7ff6fcca:
        return "SEC_E_WRONG_CREDENTIAL_HANDLE";
      case -0x7ff6fcc9:
        return "SEC_E_CRYPTO_SYSTEM_INVALID";
      case -0x7ff6fcc8:
        return "SEC_E_MAX_REFERRALS_EXCEEDED";
      case -0x7ff6fcc7:
        return "SEC_E_MUST_BE_KDC";
      case -0x7ff6fcc6:
        return "SEC_E_STRONG_CRYPTO_NOT_SUPPORTED";
      case -0x7ff6fcc5:
        return "SEC_E_TOO_MANY_PRINCIPALS";
      case -0x7ff6fcc4:
        return "SEC_E_NO_PA_DATA";
      case -0x7ff6fcc3:
        return "SEC_E_PKINIT_NAME_MISMATCH";
      case -0x7ff6fcc2:
        return "SEC_E_SMARTCARD_LOGON_REQUIRED";
      case -0x7ff6fcc1:
        return "SEC_E_SHUTDOWN_IN_PROGRESS";
      case -0x7ff6fcc0:
        return "SEC_E_KDC_INVALID_REQUEST";
      case -0x7ff6fcbf:
        return "SEC_E_KDC_UNABLE_TO_REFER";
      case -0x7ff6fcbe:
        return "SEC_E_KDC_UNKNOWN_ETYPE";
      case -0x7ff6fcbd:
        return "SEC_E_UNSUPPORTED_PREAUTH";
      case -0x7ff6fcbb:
        return "SEC_E_DELEGATION_REQUIRED";
      case -0x7ff6fcba:
        return "SEC_E_BAD_BINDINGS";
      case -0x7ff6fcb9:
        return "SEC_E_MULTIPLE_ACCOUNTS";
      case -0x7ff6fcb8:
        return "SEC_E_NO_KERB_KEY";
      case -0x7ff6fcaf:
        return "SEC_E_SMARTCARD_CERT_REVOKED";
      case -0x7ff6fcae:
        return "SEC_E_ISSUING_CA_UNTRUSTED";
      case -0x7ff6fcad:
        return "SEC_E_REVOCATION_OFFLINE_C";
      case -0x7ff6fcac:
        return "SEC_E_PKINIT_CLIENT_FAILURE";
      case -0x7ff6fcab:
        return "SEC_E_SMARTCARD_CERT_EXPIRED";
      }
    }
    else {
      switch(param_1) {
      case -0x7ff6effe:
        return "CRYPT_E_UNKNOWN_ALGO";
      case -0x7ff6effd:
        return "CRYPT_E_OID_FORMAT";
      case -0x7ff6effc:
        return "CRYPT_E_INVALID_MSG_TYPE";
      case -0x7ff6effb:
        return "CRYPT_E_UNEXPECTED_ENCODING";
      case -0x7ff6effa:
        return "CRYPT_E_AUTH_ATTR_MISSING";
      case -0x7ff6eff9:
        return "CRYPT_E_HASH_VALUE";
      case -0x7ff6eff8:
        return "CRYPT_E_INVALID_INDEX";
      case -0x7ff6eff7:
        return "CRYPT_E_ALREADY_DECRYPTED";
      }
    }
  }
  else if (param_1 < 0x65c) {
    if (param_1 == 0x65b) {
LAB_00a9b6e1:
      return "ERROR_FUNCTION_FAILED";
    }
    if (param_1 < -0x7785fff4) {
      if (param_1 == -0x7785fff5) {
        return "DXGI_ERROR_FRAME_STATISTICS_DISJOINT";
      }
      if (param_1 < -0x7fefff93) {
        if (param_1 == -0x7fefff94) {
          return "SCARD_W_CHV_BLOCKED";
        }
        if (param_1 < -0x7ff68ff5) {
          if (param_1 == -0x7ff68ff6) {
            return "MSSIPOTF_E_TABLE_PADBYTES";
          }
          if (param_1 < -0x7ff6cfd5) {
            if (param_1 == -0x7ff6cfd6) {
              return "OSS_BERDER_DLL_NOT_LINKED";
            }
            if (param_1 < -0x7ff6cffe) {
              if (param_1 == -0x7ff6cfff) {
                return "OSS_MORE_BUF";
              }
              if (param_1 < -0x7ff6dff1) {
                if (param_1 == -0x7ff6dff2) {
                  return "CRYPT_E_NO_SIGNER";
                }
                if (param_1 < -0x7ff6dffb) {
                  if (param_1 == -0x7ff6dffc) {
                    return "CRYPT_E_NOT_FOUND";
                  }
                  if (param_1 < -0x7ff6efef) {
                    if (param_1 == -0x7ff6eff0) {
                      return "CRYPT_E_STREAM_MSG_NOT_READY";
                    }
                    if (param_1 == -0x7ff6eff5) {
                      return "CRYPT_E_RECIPIENT_NOT_FOUND";
                    }
                    if (param_1 == -0x7ff6eff4) {
                      return "CRYPT_E_CONTROL_TYPE";
                    }
                    if (param_1 == -0x7ff6eff3) {
                      return "CRYPT_E_ISSUER_SERIALNUMBER";
                    }
                    if (param_1 == -0x7ff6eff2) {
                      return "CRYPT_E_SIGNER_NOT_FOUND";
                    }
                    if (param_1 == -0x7ff6eff1) {
                      return "CRYPT_E_ATTRIBUTES_MISSING";
                    }
                  }
                  else {
                    if (param_1 == -0x7ff6efef) {
                      return "CRYPT_E_STREAM_INSUFFICIENT_DATA";
                    }
                    if (param_1 == -0x7ff6dfff) {
                      return "CRYPT_E_BAD_LEN";
                    }
                    if (param_1 == -0x7ff6dffe) {
                      return "CRYPT_E_BAD_ENCODE";
                    }
                    if (param_1 == -0x7ff6dffd) {
                      return "CRYPT_E_FILE_ERROR";
                    }
                  }
                }
                else {
                  switch(param_1) {
                  case -0x7ff6dffb:
                    return "CRYPT_E_EXISTS";
                  case -0x7ff6dffa:
                    return "CRYPT_E_NO_PROVIDER";
                  case -0x7ff6dff9:
                    return "CRYPT_E_SELF_SIGNED";
                  case -0x7ff6dff8:
                    return "CRYPT_E_DELETED_PREV";
                  case -0x7ff6dff7:
                    return "CRYPT_E_NO_MATCH";
                  case -0x7ff6dff6:
                    return "CRYPT_E_UNEXPECTED_MSG_TYPE";
                  case -0x7ff6dff5:
                    return "CRYPT_E_NO_KEY_PROPERTY";
                  case -0x7ff6dff4:
                    return "CRYPT_E_NO_DECRYPT_CERT";
                  case -0x7ff6dff3:
                    return "CRYPT_E_BAD_MSG";
                  }
                }
              }
              else if (param_1 < -0x7ff6cfff) {
                if (param_1 == -0x7ff6d000) {
                  return "CRYPT_E_OSS_ERROR";
                }
                switch(param_1) {
                case -0x7ff6dff1:
                  return "CRYPT_E_PENDING_CLOSE";
                case -0x7ff6dff0:
                  return "CRYPT_E_REVOKED";
                case -0x7ff6dfef:
                  return "CRYPT_E_NO_REVOCATION_DLL";
                case -0x7ff6dfee:
                  return "CRYPT_E_NO_REVOCATION_CHECK";
                case -0x7ff6dfed:
                  return "CRYPT_E_REVOCATION_OFFLINE";
                case -0x7ff6dfec:
                  return "CRYPT_E_NOT_IN_REVOCATION_DATABASE";
                case -0x7ff6dfe0:
                  return "CRYPT_E_INVALID_NUMERIC_STRING";
                case -0x7ff6dfdf:
                  return "CRYPT_E_INVALID_PRINTABLE_STRING";
                case -0x7ff6dfde:
                  return "CRYPT_E_INVALID_IA5_STRING";
                case -0x7ff6dfdd:
                  return "CRYPT_E_INVALID_X500_STRING";
                case -0x7ff6dfdc:
                  return "CRYPT_E_NOT_CHAR_STRING";
                case -0x7ff6dfdb:
                  return "CRYPT_E_FILERESIZED";
                case -0x7ff6dfda:
                  return "CRYPT_E_SECURITY_SETTINGS";
                case -0x7ff6dfd9:
                  return "CRYPT_E_NO_VERIFY_USAGE_DLL";
                case -0x7ff6dfd8:
                  return "CRYPT_E_NO_VERIFY_USAGE_CHECK";
                case -0x7ff6dfd7:
                  return "CRYPT_E_VERIFY_USAGE_OFFLINE";
                case -0x7ff6dfd6:
                  return "CRYPT_E_NOT_IN_CTL";
                case -0x7ff6dfd5:
                  return "CRYPT_E_NO_TRUSTED_SIGNER";
                case -0x7ff6dfd4:
                  return "CRYPT_E_MISSING_PUBKEY_PARA";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ff6cffe:
                return "OSS_NEGATIVE_UINTEGER";
              case -0x7ff6cffd:
                return "OSS_PDU_RANGE";
              case -0x7ff6cffc:
                return "OSS_MORE_INPUT";
              case -0x7ff6cffb:
                return "OSS_DATA_ERROR";
              case -0x7ff6cffa:
                return "OSS_BAD_ARG";
              case -0x7ff6cff9:
                return "OSS_BAD_VERSION";
              case -0x7ff6cff8:
                return "OSS_OUT_MEMORY";
              case -0x7ff6cff7:
                return "OSS_PDU_MISMATCH";
              case -0x7ff6cff6:
                return "OSS_LIMITED";
              case -0x7ff6cff5:
                return "OSS_BAD_PTR";
              case -0x7ff6cff4:
                return "OSS_BAD_TIME";
              case -0x7ff6cff3:
                return "OSS_INDEFINITE_NOT_SUPPORTED";
              case -0x7ff6cff2:
                return "OSS_MEM_ERROR";
              case -0x7ff6cff1:
                return "OSS_BAD_TABLE";
              case -0x7ff6cff0:
                return "OSS_TOO_LONG";
              case -0x7ff6cfef:
                return "OSS_CONSTRAINT_VIOLATED";
              case -0x7ff6cfee:
                return "OSS_FATAL_ERROR";
              case -0x7ff6cfed:
                return "OSS_ACCESS_SERIALIZATION_ERROR";
              case -0x7ff6cfec:
                return "OSS_NULL_TBL";
              case -0x7ff6cfeb:
                return "OSS_NULL_FCN";
              case -0x7ff6cfea:
                return "OSS_BAD_ENCRULES";
              case -0x7ff6cfe9:
                return "OSS_UNAVAIL_ENCRULES";
              case -0x7ff6cfe8:
                return "OSS_CANT_OPEN_TRACE_WINDOW";
              case -0x7ff6cfe7:
                return "OSS_UNIMPLEMENTED";
              case -0x7ff6cfe6:
                return "OSS_OID_DLL_NOT_LINKED";
              case -0x7ff6cfe5:
                return "OSS_CANT_OPEN_TRACE_FILE";
              case -0x7ff6cfe4:
                return "OSS_TRACE_FILE_ALREADY_OPEN";
              case -0x7ff6cfe3:
                return "OSS_TABLE_MISMATCH";
              case -0x7ff6cfe2:
                return "OSS_TYPE_NOT_SUPPORTED";
              case -0x7ff6cfe1:
                return "OSS_REAL_DLL_NOT_LINKED";
              case -0x7ff6cfe0:
                return "OSS_REAL_CODE_NOT_LINKED";
              case -0x7ff6cfdf:
                return "OSS_OUT_OF_RANGE";
              case -0x7ff6cfde:
                return "OSS_COPIER_DLL_NOT_LINKED";
              case -0x7ff6cfdd:
                return "OSS_CONSTRAINT_DLL_NOT_LINKED";
              case -0x7ff6cfdc:
                return "OSS_COMPARATOR_DLL_NOT_LINKED";
              case -0x7ff6cfdb:
                return "OSS_COMPARATOR_CODE_NOT_LINKED";
              case -0x7ff6cfda:
                return "OSS_MEM_MGR_DLL_NOT_LINKED";
              case -0x7ff6cfd9:
                return "OSS_PDV_DLL_NOT_LINKED";
              case -0x7ff6cfd8:
                return "OSS_PDV_CODE_NOT_LINKED";
              case -0x7ff6cfd7:
                return "OSS_API_DLL_NOT_LINKED";
              }
            }
          }
          else if (param_1 < -0x7ff6b7ff) {
            if (param_1 == -0x7ff6b800) {
              return "CERTSRV_E_UNSUPPORTED_CERT_TYPE";
            }
            if (param_1 < -0x7ff6cecb) {
              if (param_1 == -0x7ff6cecc) {
                return "CRYPT_E_ASN1_NYI";
              }
              if (param_1 < -0x7ff6cef9) {
                if (param_1 == -0x7ff6cefa) {
                  return "CRYPT_E_ASN1_MEMORY";
                }
                if (param_1 < -0x7ff6cefe) {
                  if (param_1 == -0x7ff6ceff) {
                    return "CRYPT_E_ASN1_INTERNAL";
                  }
                  if (param_1 == -0x7ff6cfd5) {
                    return "OSS_PER_DLL_NOT_LINKED";
                  }
                  if (param_1 == -0x7ff6cfd4) {
                    return "OSS_OPEN_TYPE_ERROR";
                  }
                  if (param_1 == -0x7ff6cfd3) {
                    return "OSS_MUTEX_NOT_CREATED";
                  }
                  if (param_1 == -0x7ff6cfd2) {
                    return "OSS_CANT_CLOSE_TRACE_FILE";
                  }
                  if (param_1 == -0x7ff6cf00) {
                    return "CRYPT_E_ASN1_ERROR";
                  }
                }
                else {
                  if (param_1 == -0x7ff6cefe) {
                    return "CRYPT_E_ASN1_EOD";
                  }
                  if (param_1 == -0x7ff6cefd) {
                    return "CRYPT_E_ASN1_CORRUPT";
                  }
                  if (param_1 == -0x7ff6cefc) {
                    return "CRYPT_E_ASN1_LARGE";
                  }
                  if (param_1 == -0x7ff6cefb) {
                    return "CRYPT_E_ASN1_CONSTRAINT";
                  }
                }
              }
              else if (param_1 < -0x7ff6cef4) {
                if (param_1 == -0x7ff6cef5) {
                  return "CRYPT_E_ASN1_BADTAG";
                }
                if (param_1 == -0x7ff6cef9) {
                  return "CRYPT_E_ASN1_OVERFLOW";
                }
                if (param_1 == -0x7ff6cef8) {
                  return "CRYPT_E_ASN1_BADPDU";
                }
                if (param_1 == -0x7ff6cef7) {
                  return "CRYPT_E_ASN1_BADARGS";
                }
                if (param_1 == -0x7ff6cef6) {
                  return "CRYPT_E_ASN1_BADREAL";
                }
              }
              else {
                if (param_1 == -0x7ff6cef4) {
                  return "CRYPT_E_ASN1_CHOICE";
                }
                if (param_1 == -0x7ff6cef3) {
                  return "CRYPT_E_ASN1_RULE";
                }
                if (param_1 == -0x7ff6cef2) {
                  return "CRYPT_E_ASN1_UTF8";
                }
                if (param_1 == -0x7ff6cecd) {
                  return "CRYPT_E_ASN1_PDU_TYPE";
                }
              }
            }
            else if (param_1 < -0x7ff6bff6) {
              if (param_1 == -0x7ff6bff7) {
                return "CERTSRV_E_RESTRICTEDOFFICER";
              }
              if (param_1 < -0x7ff6bffb) {
                if (param_1 == -0x7ff6bffc) {
                  return "CERTSRV_E_PROPERTY_EMPTY";
                }
                if (param_1 == -0x7ff6cdff) {
                  return "CRYPT_E_ASN1_EXTENDED";
                }
                if (param_1 == -0x7ff6cdfe) {
                  return "CRYPT_E_ASN1_NOEOD";
                }
                if (param_1 == -0x7ff6bfff) {
                  return "CERTSRV_E_BAD_REQUESTSUBJECT";
                }
                if (param_1 == -0x7ff6bffe) {
                  return "CERTSRV_E_NO_REQUEST";
                }
                if (param_1 == -0x7ff6bffd) {
                  return "CERTSRV_E_BAD_REQUESTSTATUS";
                }
              }
              else {
                if (param_1 == -0x7ff6bffb) {
                  return "CERTSRV_E_INVALID_CA_CERTIFICATE";
                }
                if (param_1 == -0x7ff6bffa) {
                  return "CERTSRV_E_SERVER_SUSPENDED";
                }
                if (param_1 == -0x7ff6bff9) {
                  return "CERTSRV_E_ENCODING_LENGTH";
                }
                if (param_1 == -0x7ff6bff8) {
                  return "CERTSRV_E_ROLECONFLICT";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ff6bff6:
                return "CERTSRV_E_KEY_ARCHIVAL_NOT_CONFIGURED";
              case -0x7ff6bff5:
                return "CERTSRV_E_NO_VALID_KRA";
              case -0x7ff6bff4:
                return "CERTSRV_E_BAD_REQUEST_KEY_ARCHIVAL";
              case -0x7ff6bff3:
                return "CERTSRV_E_NO_CAADMIN_DEFINED";
              case -0x7ff6bff2:
                return "CERTSRV_E_BAD_RENEWAL_CERT_ATTRIBUTE";
              case -0x7ff6bff1:
                return "CERTSRV_E_NO_DB_SESSIONS";
              case -0x7ff6bff0:
                return "CERTSRV_E_ALIGNMENT_FAULT";
              case -0x7ff6bfef:
                return "CERTSRV_E_ENROLL_DENIED";
              case -0x7ff6bfee:
                return "CERTSRV_E_TEMPLATE_DENIED";
              }
            }
          }
          else if (param_1 < -0x7ff6afff) {
            if (param_1 == -0x7ff6b000) {
              return "XENROLL_E_KEY_NOT_EXPORTABLE";
            }
            switch(param_1) {
            case -0x7ff6b7ff:
              return "CERTSRV_E_NO_CERT_TYPE";
            case -0x7ff6b7fe:
              return "CERTSRV_E_TEMPLATE_CONFLICT";
            case -0x7ff6b7fd:
              return "CERTSRV_E_SUBJECT_ALT_NAME_REQUIRED";
            case -0x7ff6b7fc:
              return "CERTSRV_E_ARCHIVED_KEY_REQUIRED";
            case -0x7ff6b7fb:
              return "CERTSRV_E_SMIME_REQUIRED";
            case -0x7ff6b7fa:
              return "CERTSRV_E_BAD_RENEWAL_SUBJECT";
            case -0x7ff6b7f9:
              return "CERTSRV_E_BAD_TEMPLATE_VERSION";
            case -0x7ff6b7f8:
              return "CERTSRV_E_TEMPLATE_POLICY_REQUIRED";
            case -0x7ff6b7f7:
              return "CERTSRV_E_SIGNATURE_POLICY_REQUIRED";
            case -0x7ff6b7f6:
              return "CERTSRV_E_SIGNATURE_COUNT";
            case -0x7ff6b7f5:
              return "CERTSRV_E_SIGNATURE_REJECTED";
            case -0x7ff6b7f4:
              return "CERTSRV_E_ISSUANCE_POLICY_REQUIRED";
            case -0x7ff6b7f3:
              return "CERTSRV_E_SUBJECT_UPN_REQUIRED";
            case -0x7ff6b7f2:
              return "CERTSRV_E_SUBJECT_DIRECTORY_GUID_REQUIRED";
            case -0x7ff6b7f1:
              return "CERTSRV_E_SUBJECT_DNS_REQUIRED";
            case -0x7ff6b7f0:
              return "CERTSRV_E_ARCHIVED_KEY_UNEXPECTED";
            case -0x7ff6b7ef:
              return "CERTSRV_E_KEY_LENGTH";
            }
          }
          else if (param_1 < -0x7ff69fe6) {
            if (param_1 == -0x7ff69fe7) {
              return "TRUST_E_BASIC_CONSTRAINTS";
            }
            if (param_1 < -0x7ff69ffe) {
              if (param_1 == -0x7ff69fff) {
                return "TRUST_E_SYSTEM_ERROR";
              }
              if (param_1 == -0x7ff6afff) {
                return "XENROLL_E_CANNOT_ADD_ROOT_CERT";
              }
              if (param_1 == -0x7ff6affe) {
                return "XENROLL_E_RESPONSE_KA_HASH_NOT_FOUND";
              }
              if (param_1 == -0x7ff6affd) {
                return "XENROLL_E_RESPONSE_UNEXPECTED_KA_HASH";
              }
              if (param_1 == -0x7ff6affc) {
                return "XENROLL_E_RESPONSE_KA_HASH_MISMATCH";
              }
              if (param_1 == -0x7ff6affb) {
                return "XENROLL_E_KEYSPEC_SMIME_MISMATCH";
              }
            }
            else {
              if (param_1 == -0x7ff69ffe) {
                return "TRUST_E_NO_SIGNER_CERT";
              }
              if (param_1 == -0x7ff69ffd) {
                return "TRUST_E_COUNTER_SIGNER";
              }
              if (param_1 == -0x7ff69ffc) {
                return "TRUST_E_CERT_SIGNATURE";
              }
              if (param_1 == -0x7ff69ffb) {
                return "TRUST_E_TIME_STAMP";
              }
              if (param_1 == -0x7ff69ff0) {
                return "TRUST_E_BAD_DIGEST";
              }
            }
          }
          else if (param_1 < -0x7ff68ffa) {
            if (param_1 == -0x7ff68ffb) {
              return "MSSIPOTF_E_BAD_OFFSET_TABLE";
            }
            if (param_1 == -0x7ff69fe2) {
              return "TRUST_E_FINANCIAL_CRITERIA";
            }
            if (param_1 == -0x7ff68fff) {
              return "MSSIPOTF_E_OUTOFMEMRANGE";
            }
            if (param_1 == -0x7ff68ffe) {
              return "MSSIPOTF_E_CANTGETOBJECT";
            }
            if (param_1 == -0x7ff68ffd) {
              return "MSSIPOTF_E_NOHEADTABLE";
            }
            if (param_1 == -0x7ff68ffc) {
              return "MSSIPOTF_E_BAD_MAGICNUMBER";
            }
          }
          else {
            if (param_1 == -0x7ff68ffa) {
              return "MSSIPOTF_E_TABLE_TAGORDER";
            }
            if (param_1 == -0x7ff68ff9) {
              return "MSSIPOTF_E_TABLE_LONGWORD";
            }
            if (param_1 == -0x7ff68ff8) {
              return "MSSIPOTF_E_BAD_FIRST_TABLE_PLACEMENT";
            }
            if (param_1 == -0x7ff68ff7) {
              return "MSSIPOTF_E_TABLES_OVERLAP";
            }
          }
        }
        else if (param_1 < -0x7ff4fffe) {
          if (param_1 == -0x7ff4ffff) {
            return "TRUST_E_PROVIDER_UNKNOWN";
          }
          switch(param_1) {
          case -0x7ff68ff5:
            return "MSSIPOTF_E_FILETOOSMALL";
          case -0x7ff68ff4:
            return "MSSIPOTF_E_TABLE_CHECKSUM";
          case -0x7ff68ff3:
            return "MSSIPOTF_E_FILE_CHECKSUM";
          case -0x7ff68ff0:
            return "MSSIPOTF_E_FAILED_POLICY";
          case -0x7ff68fef:
            return "MSSIPOTF_E_FAILED_HINTS_CHECK";
          case -0x7ff68fee:
            return "MSSIPOTF_E_NOT_OPENTYPE";
          case -0x7ff68fed:
            return "MSSIPOTF_E_FILE";
          case -0x7ff68fec:
            return "MSSIPOTF_E_CRYPT";
          case -0x7ff68feb:
            return "MSSIPOTF_E_BADVERSION";
          case -0x7ff68fea:
            return "MSSIPOTF_E_DSIG_STRUCTURE";
          case -0x7ff68fe9:
            return "MSSIPOTF_E_PCONST_CHECK";
          case -0x7ff68fe8:
            return "MSSIPOTF_E_STRUCTURE";
          }
        }
        else if (param_1 < -0x7ff4feff) {
          if (param_1 == -0x7ff4ff00) {
            return "TRUST_E_NOSIGNATURE";
          }
          switch(param_1) {
          case -0x7ff4fffe:
            return "TRUST_E_ACTION_UNKNOWN";
          case -0x7ff4fffd:
            return "TRUST_E_SUBJECT_FORM_UNKNOWN";
          case -0x7ff4fffc:
            return "TRUST_E_SUBJECT_NOT_TRUSTED";
          case -0x7ff4fffb:
            return "DIGSIG_E_ENCODE";
          case -0x7ff4fffa:
            return "DIGSIG_E_DECODE";
          case -0x7ff4fff9:
            return "DIGSIG_E_EXTENSIBILITY";
          case -0x7ff4fff8:
            return "DIGSIG_E_CRYPTO";
          case -0x7ff4fff7:
            return "PERSIST_E_SIZEDEFINITE";
          case -0x7ff4fff6:
            return "PERSIST_E_SIZEINDEFINITE";
          case -0x7ff4fff5:
            return "PERSIST_E_NOTSELFSIZING";
          }
        }
        else if (param_1 < -0x7ff0ffff) {
          if (param_1 == -0x7ff10000) {
            return "SPAPI_E_EXPECTED_SECTION_NAME";
          }
          switch(param_1) {
          case -0x7ff4feff:
            return "CERT_E_EXPIRED";
          case -0x7ff4fefe:
            return "CERT_E_VALIDITYPERIODNESTING";
          case -0x7ff4fefd:
            return "CERT_E_ROLE";
          case -0x7ff4fefc:
            return "CERT_E_PATHLENCONST";
          case -0x7ff4fefb:
            return "CERT_E_CRITICAL";
          case -0x7ff4fefa:
            return "CERT_E_PURPOSE";
          case -0x7ff4fef9:
            return "CERT_E_ISSUERCHAINING";
          case -0x7ff4fef8:
            return "CERT_E_MALFORMED";
          case -0x7ff4fef7:
            return "CERT_E_UNTRUSTEDROOT";
          case -0x7ff4fef6:
            return "CERT_E_CHAINING";
          case -0x7ff4fef5:
            return "TRUST_E_FAIL";
          case -0x7ff4fef4:
            return "CERT_E_REVOKED";
          case -0x7ff4fef3:
            return "CERT_E_UNTRUSTEDTESTROOT";
          case -0x7ff4fef2:
            return "CERT_E_REVOCATION_FAILURE";
          case -0x7ff4fef1:
            return "CERT_E_CN_NO_MATCH";
          case -0x7ff4fef0:
            return "CERT_E_WRONG_USAGE";
          case -0x7ff4feef:
            return "TRUST_E_EXPLICIT_DISTRUST";
          case -0x7ff4feee:
            return "CERT_E_UNTRUSTEDCA";
          case -0x7ff4feed:
            return "CERT_E_INVALID_POLICY";
          case -0x7ff4feec:
            return "CERT_E_INVALID_NAME";
          }
        }
        else if (param_1 < -0x7ff0fdca) {
          if (param_1 == -0x7ff0fdcb) {
            return "SPAPI_E_IN_WOW64";
          }
          if (param_1 < -0x7ff0fde8) {
            if (param_1 == -0x7ff0fde9) {
              return "SPAPI_E_BAD_SERVICE_INSTALLSECT";
            }
            if (param_1 < -0x7ff0fdf7) {
              if (param_1 == -0x7ff0fdf8) {
                return "SPAPI_E_DEVINFO_NOT_REGISTERED";
              }
              if (param_1 < -0x7ff0fdff) {
                if (param_1 == -0x7ff0fe00) {
                  return "SPAPI_E_NO_ASSOCIATED_CLASS";
                }
                if (param_1 == -0x7ff0ffff) {
                  return "SPAPI_E_BAD_SECTION_NAME_LINE";
                }
                if (param_1 == -0x7ff0fffe) {
                  return "SPAPI_E_SECTION_NAME_TOO_LONG";
                }
                if (param_1 == -0x7ff0fffd) {
                  return "SPAPI_E_GENERAL_SYNTAX";
                }
                if (param_1 == -0x7ff0ff00) {
                  return "SPAPI_E_WRONG_INF_STYLE";
                }
                if (param_1 == -0x7ff0feff) {
                  return "SPAPI_E_SECTION_NOT_FOUND";
                }
                if (param_1 == -0x7ff0fefe) {
                  return "SPAPI_E_LINE_NOT_FOUND";
                }
                if (param_1 == -0x7ff0fefd) {
                  return "SPAPI_E_NO_BACKUP";
                }
              }
              else {
                if (param_1 == -0x7ff0fdff) {
                  return "SPAPI_E_CLASS_MISMATCH";
                }
                if (param_1 == -0x7ff0fdfe) {
                  return "SPAPI_E_DUPLICATE_FOUND";
                }
                if (param_1 == -0x7ff0fdfd) {
                  return "SPAPI_E_NO_DRIVER_SELECTED";
                }
                if (param_1 == -0x7ff0fdfc) {
                  return "SPAPI_E_KEY_DOES_NOT_EXIST";
                }
                if (param_1 == -0x7ff0fdfb) {
                  return "SPAPI_E_INVALID_DEVINST_NAME";
                }
                if (param_1 == -0x7ff0fdfa) {
                  return "SPAPI_E_INVALID_CLASS";
                }
                if (param_1 == -0x7ff0fdf9) {
                  return "SPAPI_E_DEVINST_ALREADY_EXISTS";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7ff0fdf7:
                return "SPAPI_E_INVALID_REG_PROPERTY";
              case -0x7ff0fdf6:
                return "SPAPI_E_NO_INF";
              case -0x7ff0fdf5:
                return "SPAPI_E_NO_SUCH_DEVINST";
              case -0x7ff0fdf4:
                return "SPAPI_E_CANT_LOAD_CLASS_ICON";
              case -0x7ff0fdf3:
                return "SPAPI_E_INVALID_CLASS_INSTALLER";
              case -0x7ff0fdf2:
                return "SPAPI_E_DI_DO_DEFAULT";
              case -0x7ff0fdf1:
                return "SPAPI_E_DI_NOFILECOPY";
              case -0x7ff0fdf0:
                return "SPAPI_E_INVALID_HWPROFILE";
              case -0x7ff0fdef:
                return "SPAPI_E_NO_DEVICE_SELECTED";
              case -0x7ff0fdee:
                return "SPAPI_E_DEVINFO_LIST_LOCKED";
              case -0x7ff0fded:
                return "SPAPI_E_DEVINFO_DATA_LOCKED";
              case -0x7ff0fdec:
                return "SPAPI_E_DI_BAD_PATH";
              case -0x7ff0fdeb:
                return "SPAPI_E_NO_CLASSINSTALL_PARAMS";
              case -0x7ff0fdea:
                return "SPAPI_E_FILEQUEUE_LOCKED";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7ff0fde8:
              return "SPAPI_E_NO_CLASS_DRIVER_LIST";
            case -0x7ff0fde7:
              return "SPAPI_E_NO_ASSOCIATED_SERVICE";
            case -0x7ff0fde6:
              return "SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE";
            case -0x7ff0fde5:
              return "SPAPI_E_DEVICE_INTERFACE_ACTIVE";
            case -0x7ff0fde4:
              return "SPAPI_E_DEVICE_INTERFACE_REMOVED";
            case -0x7ff0fde3:
              return "SPAPI_E_BAD_INTERFACE_INSTALLSECT";
            case -0x7ff0fde2:
              return "SPAPI_E_NO_SUCH_INTERFACE_CLASS";
            case -0x7ff0fde1:
              return "SPAPI_E_INVALID_REFERENCE_STRING";
            case -0x7ff0fde0:
              return "SPAPI_E_INVALID_MACHINENAME";
            case -0x7ff0fddf:
              return "SPAPI_E_REMOTE_COMM_FAILURE";
            case -0x7ff0fdde:
              return "SPAPI_E_MACHINE_UNAVAILABLE";
            case -0x7ff0fddd:
              return "SPAPI_E_NO_CONFIGMGR_SERVICES";
            case -0x7ff0fddc:
              return "SPAPI_E_INVALID_PROPPAGE_PROVIDER";
            case -0x7ff0fddb:
              return "SPAPI_E_NO_SUCH_DEVICE_INTERFACE";
            case -0x7ff0fdda:
              return "SPAPI_E_DI_POSTPROCESSING_REQUIRED";
            case -0x7ff0fdd9:
              return "SPAPI_E_INVALID_COINSTALLER";
            case -0x7ff0fdd8:
              return "SPAPI_E_NO_COMPAT_DRIVERS";
            case -0x7ff0fdd7:
              return "SPAPI_E_NO_DEVICE_ICON";
            case -0x7ff0fdd6:
              return "SPAPI_E_INVALID_INF_LOGCONFIG";
            case -0x7ff0fdd5:
              return "SPAPI_E_DI_DONT_INSTALL";
            case -0x7ff0fdd4:
              return "SPAPI_E_INVALID_FILTER_DRIVER";
            case -0x7ff0fdd3:
              return "SPAPI_E_NON_WINDOWS_NT_DRIVER";
            case -0x7ff0fdd2:
              return "SPAPI_E_NON_WINDOWS_DRIVER";
            case -0x7ff0fdd1:
              return "SPAPI_E_NO_CATALOG_FOR_OEM_INF";
            case -0x7ff0fdd0:
              return "SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE";
            case -0x7ff0fdcf:
              return "SPAPI_E_NOT_DISABLEABLE";
            case -0x7ff0fdce:
              return "SPAPI_E_CANT_REMOVE_DEVINST";
            case -0x7ff0fdcd:
              return "SPAPI_E_INVALID_TARGET";
            case -0x7ff0fdcc:
              return "SPAPI_E_DRIVER_NONNATIVE";
            }
          }
        }
        else if (param_1 < -0x7fefffe5) {
          if (param_1 == -0x7fefffe6) {
            return "SCARD_E_READER_UNSUPPORTED";
          }
          if (param_1 < -0x7feffff4) {
            if (param_1 == -0x7feffff5) {
              return "SCARD_E_SHARING_VIOLATION";
            }
            if (param_1 < -0x7feffffb) {
              if (param_1 == -0x7feffffc) {
                return "SCARD_E_INVALID_PARAMETER";
              }
              if (param_1 == -0x7ff0fdca) {
                return "SPAPI_E_SET_SYSTEM_RESTORE_POINT";
              }
              if (param_1 == -0x7ff0fdc9) {
                return "SPAPI_E_INCORRECTLY_COPIED_INF";
              }
              if (param_1 == -0x7ff0fdc8) {
                return "SPAPI_E_SCE_DISABLED";
              }
              if (param_1 == -0x7ff0f000) {
                return "SPAPI_E_ERROR_NOT_INSTALLED";
              }
              if (param_1 == -0x7fefffff) {
                return "SCARD_F_INTERNAL_ERROR";
              }
              if (param_1 == -0x7feffffe) {
                return "SCARD_E_CANCELLED";
              }
              if (param_1 == -0x7feffffd) {
                return "SCARD_E_INVALID_HANDLE";
              }
            }
            else {
              if (param_1 == -0x7feffffb) {
                return "SCARD_E_INVALID_TARGET";
              }
              if (param_1 == -0x7feffffa) {
                return "SCARD_E_NO_MEMORY";
              }
              if (param_1 == -0x7feffff9) {
                return "SCARD_F_WAITED_TOO_LONG";
              }
              if (param_1 == -0x7feffff8) {
                return "SCARD_E_INSUFFICIENT_BUFFER";
              }
              if (param_1 == -0x7feffff7) {
                return "SCARD_E_UNKNOWN_READER";
              }
              if (param_1 == -0x7feffff6) {
                return "SCARD_E_TIMEOUT";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7feffff4:
              return "SCARD_E_NO_SMARTCARD";
            case -0x7feffff3:
              return "SCARD_E_UNKNOWN_CARD";
            case -0x7feffff2:
              return "SCARD_E_CANT_DISPOSE";
            case -0x7feffff1:
              return "SCARD_E_PROTO_MISMATCH";
            case -0x7feffff0:
              return "SCARD_E_NOT_READY";
            case -0x7fefffef:
              return "SCARD_E_INVALID_VALUE";
            case -0x7fefffee:
              return "SCARD_E_SYSTEM_CANCELLED";
            case -0x7fefffed:
              return "SCARD_F_COMM_ERROR";
            case -0x7fefffec:
              return "SCARD_F_UNKNOWN_ERROR";
            case -0x7fefffeb:
              return "SCARD_E_INVALID_ATR";
            case -0x7fefffea:
              return "SCARD_E_NOT_TRANSACTED";
            case -0x7fefffe9:
              return "SCARD_E_READER_UNAVAILABLE";
            case -0x7fefffe8:
              return "SCARD_P_SHUTDOWN";
            case -0x7fefffe7:
              return "SCARD_E_PCI_TOO_SMALL";
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7fefffe5:
            return "SCARD_E_DUPLICATE_READER";
          case -0x7fefffe4:
            return "SCARD_E_CARD_UNSUPPORTED";
          case -0x7fefffe3:
            return "SCARD_E_NO_SERVICE";
          case -0x7fefffe2:
            return "SCARD_E_SERVICE_STOPPED";
          case -0x7fefffe1:
            return "SCARD_E_UNEXPECTED";
          case -0x7fefffe0:
            return "SCARD_E_ICC_INSTALLATION";
          case -0x7fefffdf:
            return "SCARD_E_ICC_CREATEORDER";
          case -0x7fefffde:
            return "SCARD_E_UNSUPPORTED_FEATURE";
          case -0x7fefffdd:
            return "SCARD_E_DIR_NOT_FOUND";
          case -0x7fefffdc:
            return "SCARD_E_FILE_NOT_FOUND";
          case -0x7fefffdb:
            return "SCARD_E_NO_DIR";
          case -0x7fefffda:
            return "SCARD_E_NO_FILE";
          case -0x7fefffd9:
            return "SCARD_E_NO_ACCESS";
          case -0x7fefffd8:
            return "SCARD_E_WRITE_TOO_MANY";
          case -0x7fefffd7:
            return "SCARD_E_BAD_SEEK";
          case -0x7fefffd6:
            return "SCARD_E_INVALID_CHV";
          case -0x7fefffd5:
            return "SCARD_E_UNKNOWN_RES_MNG";
          case -0x7fefffd4:
            return "SCARD_E_NO_SUCH_CERTIFICATE";
          case -0x7fefffd3:
            return "SCARD_E_CERTIFICATE_UNAVAILABLE";
          case -0x7fefffd2:
            return "SCARD_E_NO_READERS_AVAILABLE";
          case -0x7fefffd1:
            return "SCARD_E_COMM_DATA_LOST";
          case -0x7fefffd0:
            return "SCARD_E_NO_KEY_CONTAINER";
          case -0x7fefff9b:
            return "SCARD_W_UNSUPPORTED_CARD";
          case -0x7fefff9a:
            return "SCARD_W_UNRESPONSIVE_CARD";
          case -0x7fefff99:
            return "SCARD_W_UNPOWERED_CARD";
          case -0x7fefff98:
            return "SCARD_W_RESET_CARD";
          case -0x7fefff97:
            return "SCARD_W_REMOVED_CARD";
          case -0x7fefff96:
            return "SCARD_W_SECURITY_VIOLATION";
          case -0x7fefff95:
            return "SCARD_W_WRONG_CHV";
          }
        }
      }
      else if (param_1 < -0x7789fe4c) {
        if (param_1 == -0x7789fe4d) {
          return "DDERR_CANTLOCKSURFACE";
        }
        if (param_1 < -0x7feef9fe) {
          if (param_1 == -0x7feef9ff) {
            return "COMQC_E_NO_QUEUEABLE_INTERFACES";
          }
          if (param_1 < -0x7feefbcb) {
            if (param_1 == -0x7feefbcc) {
              return "COMADMIN_E_COMPFILE_NOREGISTRAR";
            }
            if (param_1 < -0x7feefbe7) {
              if (param_1 == -0x7feefbe8) {
                return "COMADMIN_E_CLSIDORIIDMISMATCH";
              }
              if (param_1 < -0x7feefbf5) {
                if (param_1 == -0x7feefbf6) {
                  return "COMADMIN_E_BADPATH";
                }
                if (param_1 < -0x7feefbfc) {
                  if (param_1 == -0x7feefbfd) {
                    return "COMADMIN_E_KEYMISSING";
                  }
                  if (param_1 == -0x7fefff93) {
                    return "SCARD_W_EOF";
                  }
                  if (param_1 == -0x7fefff92) {
                    return "SCARD_W_CANCELLED_BY_USER";
                  }
                  if (param_1 == -0x7fefff91) {
                    return "SCARD_W_CARD_NOT_AUTHENTICATED";
                  }
                  if (param_1 == -0x7feefbff) {
                    return "COMADMIN_E_OBJECTERRORS";
                  }
                  if (param_1 == -0x7feefbfe) {
                    return "COMADMIN_E_OBJECTINVALID";
                  }
                }
                else {
                  if (param_1 == -0x7feefbfc) {
                    return "COMADMIN_E_ALREADYINSTALLED";
                  }
                  if (param_1 == -0x7feefbf9) {
                    return "COMADMIN_E_APP_FILE_WRITEFAIL";
                  }
                  if (param_1 == -0x7feefbf8) {
                    return "COMADMIN_E_APP_FILE_READFAIL";
                  }
                  if (param_1 == -0x7feefbf7) {
                    return "COMADMIN_E_APP_FILE_VERSION";
                  }
                }
              }
              else {
                switch(param_1) {
                case -0x7feefbf5:
                  return "COMADMIN_E_APPLICATIONEXISTS";
                case -0x7feefbf4:
                  return "COMADMIN_E_ROLEEXISTS";
                case -0x7feefbf3:
                  return "COMADMIN_E_CANTCOPYFILE";
                case -0x7feefbf1:
                  return "COMADMIN_E_NOUSER";
                case -0x7feefbf0:
                  return "COMADMIN_E_INVALIDUSERIDS";
                case -0x7feefbef:
                  return "COMADMIN_E_NOREGISTRYCLSID";
                case -0x7feefbee:
                  return "COMADMIN_E_BADREGISTRYPROGID";
                case -0x7feefbed:
                  return "COMADMIN_E_AUTHENTICATIONLEVEL";
                case -0x7feefbec:
                  return "COMADMIN_E_USERPASSWDNOTVALID";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7feefbe7:
                return "COMADMIN_E_REMOTEINTERFACE";
              case -0x7feefbe6:
                return "COMADMIN_E_DLLREGISTERSERVER";
              case -0x7feefbe5:
                return "COMADMIN_E_NOSERVERSHARE";
              case -0x7feefbe3:
                return "COMADMIN_E_DLLLOADFAILED";
              case -0x7feefbe2:
                return "COMADMIN_E_BADREGISTRYLIBID";
              case -0x7feefbe1:
                return "COMADMIN_E_APPDIRNOTFOUND";
              case -0x7feefbdd:
                return "COMADMIN_E_REGISTRARFAILED";
              case -0x7feefbdc:
                return "COMADMIN_E_COMPFILE_DOESNOTEXIST";
              case -0x7feefbdb:
                return "COMADMIN_E_COMPFILE_LOADDLLFAIL";
              case -0x7feefbda:
                return "COMADMIN_E_COMPFILE_GETCLASSOBJ";
              case -0x7feefbd9:
                return "COMADMIN_E_COMPFILE_CLASSNOTAVAIL";
              case -0x7feefbd8:
                return "COMADMIN_E_COMPFILE_BADTLB";
              case -0x7feefbd7:
                return "COMADMIN_E_COMPFILE_NOTINSTALLABLE";
              case -0x7feefbd6:
                return "COMADMIN_E_NOTCHANGEABLE";
              case -0x7feefbd5:
                return "COMADMIN_E_NOTDELETEABLE";
              case -0x7feefbd4:
                return "COMADMIN_E_SESSION";
              case -0x7feefbd3:
                return "COMADMIN_E_COMP_MOVE_LOCKED";
              case -0x7feefbd2:
                return "COMADMIN_E_COMP_MOVE_BAD_DEST";
              case -0x7feefbd0:
                return "COMADMIN_E_REGISTERTLB";
              case -0x7feefbcd:
                return "COMADMIN_E_SYSTEMAPP";
              }
            }
          }
          else if (param_1 < -0x7feef9ff) {
            if (param_1 == -0x7feefa00) {
              return "COMQC_E_APPLICATION_NOT_QUEUED";
            }
            switch(param_1) {
            case -0x7feefbcb:
              return "COMADMIN_E_COREQCOMPINSTALLED";
            case -0x7feefbca:
              return "COMADMIN_E_SERVICENOTINSTALLED";
            case -0x7feefbc9:
              return "COMADMIN_E_PROPERTYSAVEFAILED";
            case -0x7feefbc8:
              return "COMADMIN_E_OBJECTEXISTS";
            case -0x7feefbc7:
              return "COMADMIN_E_COMPONENTEXISTS";
            case -0x7feefbc5:
              return "COMADMIN_E_REGFILE_CORRUPT";
            case -0x7feefbc4:
              return "COMADMIN_E_PROPERTY_OVERFLOW";
            case -0x7feefbc2:
              return "COMADMIN_E_NOTINREGISTRY";
            case -0x7feefbc1:
              return "COMADMIN_E_OBJECTNOTPOOLABLE";
            case -0x7feefbba:
              return "COMADMIN_E_APPLID_MATCHES_CLSID";
            case -0x7feefbb9:
              return "COMADMIN_E_ROLE_DOES_NOT_EXIST";
            case -0x7feefbb8:
              return "COMADMIN_E_START_APP_NEEDS_COMPONENTS";
            case -0x7feefbb7:
              return "COMADMIN_E_REQUIRES_DIFFERENT_PLATFORM";
            case -0x7feefbb6:
              return "COMADMIN_E_CAN_NOT_EXPORT_APP_PROXY";
            case -0x7feefbb5:
              return "COMADMIN_E_CAN_NOT_START_APP";
            case -0x7feefbb4:
              return "COMADMIN_E_CAN_NOT_EXPORT_SYS_APP";
            case -0x7feefbb3:
              return "COMADMIN_E_CANT_SUBSCRIBE_TO_COMPONENT";
            case -0x7feefbb2:
              return "COMADMIN_E_EVENTCLASS_CANT_BE_SUBSCRIBER";
            case -0x7feefbb1:
              return "COMADMIN_E_LIB_APP_PROXY_INCOMPATIBLE";
            case -0x7feefbb0:
              return "COMADMIN_E_BASE_PARTITION_ONLY";
            case -0x7feefbaf:
              return "COMADMIN_E_START_APP_DISABLED";
            case -0x7feefba9:
              return "COMADMIN_E_CAT_DUPLICATE_PARTITION_NAME";
            case -0x7feefba8:
              return "COMADMIN_E_CAT_INVALID_PARTITION_NAME";
            case -0x7feefba7:
              return "COMADMIN_E_CAT_PARTITION_IN_USE";
            case -0x7feefba6:
              return "COMADMIN_E_FILE_PARTITION_DUPLICATE_FILES";
            case -0x7feefba5:
              return "COMADMIN_E_CAT_IMPORTED_COMPONENTS_NOT_ALLOWED";
            case -0x7feefba4:
              return "COMADMIN_E_AMBIGUOUS_APPLICATION_NAME";
            case -0x7feefba3:
              return "COMADMIN_E_AMBIGUOUS_PARTITION_NAME";
            case -0x7feefb8e:
              return "COMADMIN_E_REGDB_NOTINITIALIZED";
            case -0x7feefb8d:
              return "COMADMIN_E_REGDB_NOTOPEN";
            case -0x7feefb8c:
              return "COMADMIN_E_REGDB_SYSTEMERR";
            case -0x7feefb8b:
              return "COMADMIN_E_REGDB_ALREADYRUNNING";
            case -0x7feefb80:
              return "COMADMIN_E_MIG_VERSIONNOTSUPPORTED";
            case -0x7feefb7f:
              return "COMADMIN_E_MIG_SCHEMANOTFOUND";
            case -0x7feefb7e:
              return "COMADMIN_E_CAT_BITNESSMISMATCH";
            case -0x7feefb7d:
              return "COMADMIN_E_CAT_UNACCEPTABLEBITNESS";
            case -0x7feefb7c:
              return "COMADMIN_E_CAT_WRONGAPPBITNESS";
            case -0x7feefb7b:
              return "COMADMIN_E_CAT_PAUSE_RESUME_NOT_SUPPORTED";
            case -0x7feefb7a:
              return "COMADMIN_E_CAT_SERVERFAULT";
            }
          }
        }
        else if (param_1 < -0x7789ff87) {
          if (param_1 == -0x7789ff88) {
            return "DDERR_INVALIDMODE";
          }
          if (param_1 < -0x7feef7e7) {
            if (param_1 == -0x7feef7e8) {
              return "COMADMIN_E_PARTITION_ACCESSDENIED";
            }
            if (param_1 < -0x7feef7f2) {
              if (param_1 == -0x7feef7f3) {
                return "COMADMIN_E_SVCAPP_NOT_POOLABLE_OR_RECYCLABLE";
              }
              if (param_1 < -0x7feef8fe) {
                if (param_1 == -0x7feef8ff) {
                  return "MSDTC_E_DUPLICATE_RESOURCE";
                }
                if (param_1 == -0x7feef9fe) {
                  return "COMQC_E_QUEUING_SERVICE_NOT_AVAILABLE";
                }
                if (param_1 == -0x7feef9fd) {
                  return "COMQC_E_NO_IPERSISTSTREAM";
                }
                if (param_1 == -0x7feef9fc) {
                  return "COMQC_E_BAD_MESSAGE";
                }
                if (param_1 == -0x7feef9fb) {
                  return "COMQC_E_UNAUTHENTICATED";
                }
                if (param_1 == -0x7feef9fa) {
                  return "COMQC_E_UNTRUSTED_ENQUEUER";
                }
              }
              else {
                if (param_1 == -0x7feef7f8) {
                  return "COMADMIN_E_OBJECT_PARENT_MISSING";
                }
                if (param_1 == -0x7feef7f7) {
                  return "COMADMIN_E_OBJECT_DOES_NOT_EXIST";
                }
                if (param_1 == -0x7feef7f6) {
                  return "COMADMIN_E_APP_NOT_RUNNING";
                }
                if (param_1 == -0x7feef7f5) {
                  return "COMADMIN_E_INVALID_PARTITION";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7feef7f2:
                return "COMADMIN_E_USER_IN_SET";
              case -0x7feef7f1:
                return "COMADMIN_E_CANTRECYCLELIBRARYAPPS";
              case -0x7feef7ef:
                return "COMADMIN_E_CANTRECYCLESERVICEAPPS";
              case -0x7feef7ee:
                return "COMADMIN_E_PROCESSALREADYRECYCLED";
              case -0x7feef7ed:
                return "COMADMIN_E_PAUSEDPROCESSMAYNOTBERECYCLED";
              case -0x7feef7ec:
                return "COMADMIN_E_CANTMAKEINPROCSERVICE";
              case -0x7feef7eb:
                return "COMADMIN_E_PROGIDINUSEBYCLSID";
              case -0x7feef7ea:
                return "COMADMIN_E_DEFAULT_PARTITION_NOT_IN_SET";
              case -0x7feef7e9:
                return "COMADMIN_E_RECYCLEDPROCESSMAYNOTBEPAUSED";
              }
            }
          }
          else if (param_1 < -0x7789fffa) {
            if (param_1 == -0x7789fffb) {
              return "DDERR_ALREADYINITIALIZED";
            }
            switch(param_1) {
            case -0x7feef7e7:
              return "COMADMIN_E_PARTITION_MSI_ONLY";
            case -0x7feef7e6:
              return "COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_1_0_FORMAT";
            case -0x7feef7e5:
              return "COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_NONBASE_PARTITIONS";
            case -0x7feef7e4:
              return "COMADMIN_E_COMP_MOVE_SOURCE";
            case -0x7feef7e3:
              return "COMADMIN_E_COMP_MOVE_DEST";
            case -0x7feef7e2:
              return "COMADMIN_E_COMP_MOVE_PRIVATE";
            case -0x7feef7e1:
              return "COMADMIN_E_BASEPARTITION_REQUIRED_IN_SET";
            case -0x7feef7e0:
              return "COMADMIN_E_CANNOT_ALIAS_EVENTCLASS";
            case -0x7feef7df:
              return "COMADMIN_E_PRIVATE_ACCESSDENIED";
            case -0x7feef7de:
              return "COMADMIN_E_SAFERINVALID";
            case -0x7feef7dd:
              return "COMADMIN_E_REGISTRY_ACCESSDENIED";
            }
          }
          else if (param_1 < -0x7789ffa5) {
            if (param_1 == -0x7789ffa6) {
              return "DDERR_HEIGHTALIGN";
            }
            if (param_1 == -0x7789fff6) {
              return "DDERR_CANNOTATTACHSURFACE";
            }
            if (param_1 == -0x7789ffec) {
              return "DDERR_CANNOTDETACHSURFACE";
            }
            if (param_1 == -0x7789ffd8) {
              return "DDERR_CURRENTLYNOTAVAIL";
            }
            if (param_1 == -0x7789ffc9) {
              return "DDERR_EXCEPTION";
            }
          }
          else {
            if (param_1 == -0x7789ffa1) {
              return "DDERR_INCOMPATIBLEPRIMARY";
            }
            if (param_1 == -0x7789ff9c) {
              return "DDERR_INVALIDCAPS";
            }
            if (param_1 == -0x7789ff92) {
              return "DDERR_INVALIDCLIPLIST";
            }
          }
        }
        else if (param_1 < -0x7789fef1) {
          if (param_1 == -0x7789fef2) {
            return "DDERR_OVERLAPPINGRECTS";
          }
          if (param_1 < -0x7789ff2b) {
            if (param_1 == -0x7789ff2c) {
              return "DDERR_NOCOOPERATIVELEVELSET";
            }
            if (param_1 < -0x7789ff4b) {
              if (param_1 == -0x7789ff4c) {
                return "DDERR_NOALPHAHW";
              }
              if (param_1 == -0x7789ff7e) {
                return "DDERR_INVALIDOBJECT";
              }
              if (param_1 == -0x7789ff6f) {
                return "DDERR_INVALIDPIXELFORMAT";
              }
              if (param_1 == -0x7789ff6a) {
                return "DDERR_INVALIDRECT";
              }
              if (param_1 == -0x7789ff60) {
                return "DDERR_LOCKEDSURFACES";
              }
              if (param_1 == -0x7789ff56) {
                return "DDERR_NO3D";
              }
            }
            else {
              if (param_1 == -0x7789ff4b) {
                return "DDERR_NOSTEREOHARDWARE";
              }
              if (param_1 == -0x7789ff4a) {
                return "DDERR_NOSURFACELEFT";
              }
              if (param_1 == -0x7789ff33) {
                return "DDERR_NOCLIPLIST";
              }
              if (param_1 == -0x7789ff2e) {
                return "DDERR_NOCOLORCONVHW";
              }
            }
          }
          else if (param_1 < -0x7789ff19) {
            if (param_1 == -0x7789ff1a) {
              return "DDERR_NOFLIPHW";
            }
            if (param_1 == -0x7789ff29) {
              return "DDERR_NOCOLORKEY";
            }
            if (param_1 == -0x7789ff24) {
              return "DDERR_NOCOLORKEYHW";
            }
            if (param_1 == -0x7789ff22) {
              return "DDERR_NODIRECTDRAWSUPPORT";
            }
            if (param_1 == -0x7789ff1f) {
              return "DDERR_NOEXCLUSIVEMODE";
            }
          }
          else {
            if (param_1 == -0x7789ff10) {
              return "DDERR_NOGDI";
            }
            if (param_1 == -0x7789ff06) {
              return "DDERR_NOMIRRORHW";
            }
            if (param_1 == -0x7789ff01) {
              return "DDERR_NOTFOUND";
            }
            if (param_1 == -0x7789fefc) {
              return "DDERR_NOOVERLAYHW";
            }
          }
        }
        else if (param_1 < -0x7789fea1) {
          if (param_1 == -0x7789fea2) {
            return "DDERR_NOZOVERLAYHW";
          }
          if (param_1 < -0x7789fec2) {
            if (param_1 == -0x7789fec3) {
              return "DDERR_NOT4BITCOLORINDEX";
            }
            if (param_1 == -0x7789fee8) {
              return "DDERR_NORASTEROPHW";
            }
            if (param_1 == -0x7789fede) {
              return "DDERR_NOROTATIONHW";
            }
            if (param_1 == -0x7789feca) {
              return "DDERR_NOSTRETCHHW";
            }
            if (param_1 == -0x7789fec4) {
              return "DDERR_NOT4BITCOLOR";
            }
          }
          else {
            if (param_1 == -0x7789fec0) {
              return "DDERR_NOT8BITCOLOR";
            }
            if (param_1 == -0x7789feb6) {
              return "DDERR_NOTEXTUREHW";
            }
            if (param_1 == -0x7789feb1) {
              return "DDERR_NOVSYNCHW";
            }
            if (param_1 == -0x7789feac) {
              return "DDERR_NOZBUFFERHW";
            }
          }
        }
        else if (param_1 < -0x7789fe7c) {
          if (param_1 == -0x7789fe7d) {
            return "DDERR_PALETTEBUSY";
          }
          if (param_1 == -0x7789fe98) {
            return "DDERR_OUTOFCAPS";
          }
          if (param_1 == -0x7789fe84) {
            return "D3DERR_OUTOFVIDEOMEMORY";
          }
          if (param_1 == -0x7789fe82) {
            return "DDERR_OVERLAYCANTCLIP";
          }
          if (param_1 == -0x7789fe80) {
            return "DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
          }
        }
        else {
          if (param_1 == -0x7789fe70) {
            return "DDERR_COLORKEYNOTSET";
          }
          if (param_1 == -0x7789fe66) {
            return "DDERR_SURFACEALREADYATTACHED";
          }
          if (param_1 == -0x7789fe5c) {
            return "DDERR_SURFACEALREADYDEPENDENT";
          }
          if (param_1 == -0x7789fe52) {
            return "DDERR_SURFACEBUSY";
          }
        }
      }
      else if (param_1 < -0x7789fc9a) {
        if (param_1 == -0x7789fc9b) {
          return "DXFILEERR_BADDATAREFERENCE";
        }
        if (param_1 < -0x7789fdb2) {
          if (param_1 == -0x7789fdb3) {
            return "DDERR_NOTPALETTIZED";
          }
          switch(param_1) {
          case -0x7789fe48:
            return "DDERR_SURFACEISOBSCURED";
          case -0x7789fe3e:
            return "DDERR_SURFACELOST";
          case -0x7789fe34:
            return "DDERR_SURFACENOTATTACHED";
          case -0x7789fe2a:
            return "DDERR_TOOBIGHEIGHT";
          case -0x7789fe20:
            return "DDERR_TOOBIGSIZE";
          case -0x7789fe16:
            return "DDERR_TOOBIGWIDTH";
          case -0x7789fe02:
            return "DDERR_UNSUPPORTEDFORMAT";
          case -0x7789fdf8:
            return "DDERR_UNSUPPORTEDMASK";
          case -0x7789fdf7:
            return "DDERR_INVALIDSTREAM";
          case -0x7789fde7:
            return "DDERR_VERTICALBLANKINPROGRESS";
          case -0x7789fde4:
            return "DDERR_WASSTILLDRAWING";
          case -0x7789fde2:
            return "DDERR_DDSCAPSCOMPLEXREQUIRED";
          case -0x7789fdd0:
            return "DDERR_XALIGN";
          case -0x7789fdcf:
            return "DDERR_INVALIDDIRECTDRAWGUID";
          case -0x7789fdce:
            return "DDERR_DIRECTDRAWALREADYCREATED";
          case -0x7789fdcd:
            return "DDERR_NODIRECTDRAWHW";
          case -0x7789fdcc:
            return "DDERR_PRIMARYSURFACEALREADYEXISTS";
          case -0x7789fdcb:
            return "DDERR_NOEMULATION";
          case -0x7789fdca:
            return "DDERR_REGIONTOOSMALL";
          case -0x7789fdc9:
            return "DDERR_CLIPPERISUSINGHWND";
          case -0x7789fdc8:
            return "DDERR_NOCLIPPERATTACHED";
          case -0x7789fdc7:
            return "DDERR_NOHWND";
          case -0x7789fdc6:
            return "DDERR_HWNDSUBCLASSED";
          case -0x7789fdc5:
            return "DDERR_HWNDALREADYSET";
          case -0x7789fdc4:
            return "DDERR_NOPALETTEATTACHED";
          case -0x7789fdc3:
            return "DDERR_NOPALETTEHW";
          case -0x7789fdc2:
            return "DDERR_BLTFASTCANTCLIP";
          case -0x7789fdc1:
            return "DDERR_NOBLTHW";
          case -0x7789fdc0:
            return "DDERR_NODDROPSHW";
          case -0x7789fdbf:
            return "DDERR_OVERLAYNOTVISIBLE";
          case -0x7789fdbe:
            return "DDERR_NOOVERLAYDEST";
          case -0x7789fdbd:
            return "DDERR_INVALIDPOSITION";
          case -0x7789fdbc:
            return "DDERR_NOTAOVERLAYSURFACE";
          case -0x7789fdbb:
            return "DDERR_EXCLUSIVEMODEALREADYSET";
          case -0x7789fdba:
            return "DDERR_NOTFLIPPABLE";
          case -0x7789fdb9:
            return "DDERR_CANTDUPLICATE";
          case -0x7789fdb8:
            return "DDERR_NOTLOCKED";
          case -0x7789fdb7:
            return "DDERR_CANTCREATEDC";
          case -0x7789fdb6:
            return "DDERR_NODC";
          case -0x7789fdb5:
            return "DDERR_WRONGMODE";
          case -0x7789fdb4:
            return "DDERR_IMPLICITLYCREATED";
          }
        }
        else if (param_1 < -0x7789fd44) {
          if (param_1 == -0x7789fd45) {
            return "DDERR_DEVICEDOESNTOWNSURFACE";
          }
          if (param_1 < -0x7789fd6b) {
            if (param_1 == -0x7789fd6c) {
              return "DDERR_CANTPAGEUNLOCK";
            }
            if (param_1 < -0x7789fda5) {
              if (param_1 == -0x7789fda6) {
                return "DDERR_NOFOCUSWINDOW";
              }
              if (param_1 == -0x7789fdb2) {
                return "DDERR_UNSUPPORTEDMODE";
              }
              if (param_1 == -0x7789fdb1) {
                return "DDERR_NOMIPMAPHW";
              }
              if (param_1 == -0x7789fdb0) {
                return "DDERR_INVALIDSURFACETYPE";
              }
              if (param_1 == -0x7789fda8) {
                return "DDERR_NOOPTIMIZEHW";
              }
              if (param_1 == -0x7789fda7) {
                return "DDERR_NOTLOADED";
              }
            }
            else {
              if (param_1 == -0x7789fda5) {
                return "DDERR_NOTONMIPMAPSUBLEVEL";
              }
              if (param_1 == -0x7789fd94) {
                return "DDERR_DCALREADYCREATED";
              }
              if (param_1 == -0x7789fd8a) {
                return "DDERR_NONONLOCALVIDMEM";
              }
              if (param_1 == -0x7789fd80) {
                return "DDERR_CANTPAGELOCK";
              }
            }
          }
          else {
            switch(param_1) {
            case -0x7789fd58:
              return "DDERR_NOTPAGELOCKED";
            case -0x7789fd4e:
              return "DDERR_MOREDATA";
            case -0x7789fd4d:
              return "DDERR_EXPIRED";
            case -0x7789fd4c:
              return "DDERR_TESTFINISHED";
            case -0x7789fd4b:
              return "DDERR_NEWMODE";
            case -0x7789fd4a:
              return "DDERR_D3DNOTINITIALIZED";
            case -0x7789fd49:
              return "DDERR_VIDEONOTACTIVE";
            case -0x7789fd48:
              return "DDERR_NOMONITORINFORMATION";
            case -0x7789fd47:
              return "DDERR_NODRIVERSUPPORT";
            }
          }
        }
        else {
          switch(param_1) {
          case -0x7789fcae:
            return "DXFILEERR_BADOBJECT";
          case -0x7789fcad:
            return "DXFILEERR_BADVALUE";
          case -0x7789fcac:
            return "DXFILEERR_BADTYPE";
          case -0x7789fcab:
            return "DXFILEERR_BADSTREAMHANDLE";
          case -0x7789fcaa:
            return "DXFILEERR_BADALLOC";
          case -0x7789fca9:
            return "DXFILEERR_NOTFOUND";
          case -0x7789fca8:
            return "DXFILEERR_NOTDONEYET";
          case -0x7789fca7:
            return "DXFILEERR_FILENOTFOUND";
          case -0x7789fca6:
            return "DXFILEERR_RESOURCENOTFOUND";
          case -0x7789fca5:
            return "DXFILEERR_URLNOTFOUND";
          case -0x7789fca4:
            return "DXFILEERR_BADRESOURCE";
          case -0x7789fca3:
            return "DXFILEERR_BADFILETYPE";
          case -0x7789fca2:
            return "DXFILEERR_BADFILEVERSION";
          case -0x7789fca1:
            return "DXFILEERR_BADFILEFLOATSIZE";
          case -0x7789fca0:
            return "DXFILEERR_BADFILECOMPRESSIONTYPE";
          case -0x7789fc9f:
            return "DXFILEERR_BADFILE";
          case -0x7789fc9e:
            return "DXFILEERR_PARSEERROR";
          case -0x7789fc9d:
            return "DXFILEERR_NOTEMPLATE";
          case -0x7789fc9c:
            return "DXFILEERR_BADARRAYSIZE";
          }
        }
      }
      else if (param_1 < -0x7789f795) {
        if (param_1 == -0x7789f796) {
          return "D3DERR_NOTAVAILABLE";
        }
        if (param_1 < -0x7789fc6e) {
          if (param_1 == -0x7789fc6f) {
            return "D3DXFERR_BADARRAYSIZE";
          }
          switch(param_1) {
          case -0x7789fc9a:
            return "DXFILEERR_INTERNALERROR";
          case -0x7789fc99:
            return "DXFILEERR_NOMOREOBJECTS";
          case -0x7789fc98:
            return "DXFILEERR_BADINTRINSICS";
          case -0x7789fc97:
            return "DXFILEERR_NOMORESTREAMHANDLES";
          case -0x7789fc96:
            return "DXFILEERR_NOMOREDATA";
          case -0x7789fc95:
            return "DXFILEERR_BADCACHEFILE";
          case -0x7789fc94:
            return "DXFILEERR_NOINTERNET";
          case -0x7789fc7c:
            return "D3DXFERR_BADOBJECT";
          case -0x7789fc7b:
            return "D3DXFERR_BADVALUE";
          case -0x7789fc7a:
            return "D3DXFERR_BADTYPE";
          case -0x7789fc79:
            return "D3DXFERR_NOTFOUND";
          case -0x7789fc78:
            return "D3DXFERR_NOTDONEYET";
          case -0x7789fc77:
            return "D3DXFERR_FILENOTFOUND";
          case -0x7789fc76:
            return "D3DXFERR_RESOURCENOTFOUND";
          case -0x7789fc75:
            return "D3DXFERR_BADRESOURCE";
          case -0x7789fc74:
            return "D3DXFERR_BADFILETYPE";
          case -0x7789fc73:
            return "D3DXFERR_BADFILEVERSION";
          case -0x7789fc72:
            return "D3DXFERR_BADFILEFLOATSIZE";
          case -0x7789fc71:
            return "D3DXFERR_BADFILE";
          case -0x7789fc70:
            return "D3DXFERR_PARSEERROR";
          }
        }
        else if (param_1 < -0x7789f7e1) {
          if (param_1 == -0x7789f7e2) {
            return "D3DERR_CONFLICTINGTEXTUREFILTER";
          }
          if (param_1 < -0x7789f7e6) {
            if (param_1 == -0x7789f7e7) {
              return "D3DERR_UNSUPPORTEDCOLOROPERATION";
            }
            if (param_1 == -0x7789fc6e) {
              return "D3DXFERR_BADDATAREFERENCE";
            }
            if (param_1 == -0x7789fc6d) {
              return "D3DXFERR_NOMOREOBJECTS";
            }
            if (param_1 == -0x7789fc6c) {
              return "D3DXFERR_NOMOREDATA";
            }
            if (param_1 == -0x7789fc6b) {
              return "D3DXFERR_BADCACHEFILE";
            }
            if (param_1 == -0x7789f7e8) {
              return "D3DERR_WRONGTEXTUREFORMAT";
            }
          }
          else {
            if (param_1 == -0x7789f7e6) {
              return "D3DERR_UNSUPPORTEDCOLORARG";
            }
            if (param_1 == -0x7789f7e5) {
              return "D3DERR_UNSUPPORTEDALPHAOPERATION";
            }
            if (param_1 == -0x7789f7e4) {
              return "D3DERR_UNSUPPORTEDALPHAARG";
            }
            if (param_1 == -0x7789f7e3) {
              return "D3DERR_TOOMANYOPERATIONS";
            }
          }
        }
        else if (param_1 < -0x7789f7d8) {
          if (param_1 == -0x7789f7d9) {
            return "D3DERR_DRIVERINTERNALERROR";
          }
          if (param_1 == -0x7789f7e1) {
            return "D3DERR_UNSUPPORTEDFACTORVALUE";
          }
          if (param_1 == -0x7789f7df) {
            return "D3DERR_CONFLICTINGRENDERSTATE";
          }
          if (param_1 == -0x7789f7de) {
            return "D3DERR_UNSUPPORTEDTEXTUREFILTER";
          }
          if (param_1 == -0x7789f7da) {
            return "D3DERR_CONFLICTINGTEXTUREPALETTE";
          }
        }
        else {
          if (param_1 == -0x7789f79a) {
            return "D3DERR_NOTFOUND";
          }
          if (param_1 == -0x7789f799) {
            return "D3DERR_MOREDATA";
          }
          if (param_1 == -0x7789f798) {
            return "D3DERR_DEVICELOST";
          }
          if (param_1 == -0x7789f797) {
            return "D3DERR_DEVICENOTRESET";
          }
        }
      }
      else if (param_1 < -0x7787ff7d) {
        if (param_1 == -0x7787ff7e) {
          return "DSERR_ALREADYINITIALIZED";
        }
        if (param_1 < -0x7789f4a6) {
          if (param_1 == -0x7789f4a7) {
            return "D3DXERR_INVALIDDATA";
          }
          if (param_1 < -0x7789f4ab) {
            if (param_1 == -0x7789f4ac) {
              return "D3DXERR_CANNOTMODIFYINDEXBUFFER";
            }
            if (param_1 == -0x7789f795) {
              return "D3DERR_INVALIDDEVICE";
            }
            if (param_1 == -0x7789f794) {
              return "D3DERR_INVALIDCALL";
            }
            if (param_1 == -0x7789f793) {
              return "D3DERR_DRIVERINVALIDCALL";
            }
            if (param_1 == -0x7789f790) {
              return "D3DERR_DEVICEREMOVED";
            }
            if (param_1 == -0x7789f78c) {
              return "D3DERR_DEVICEHUNG";
            }
          }
          else {
            if (param_1 == -0x7789f4ab) {
              return "D3DXERR_INVALIDMESH";
            }
            if (param_1 == -0x7789f4aa) {
              return "D3DXERR_CANNOTATTRSORT";
            }
            if (param_1 == -0x7789f4a9) {
              return "D3DXERR_SKINNINGNOTSUPPORTED";
            }
            if (param_1 == -0x7789f4a8) {
              return "D3DXERR_TOOMANYINFLUENCES";
            }
          }
        }
        else if (param_1 < -0x7787ffe1) {
          if (param_1 == -0x7787ffe2) {
            return "DSERR_CONTROLUNAVAIL";
          }
          if (param_1 == -0x7789f4a6) {
            return "D3DXERR_LOADEDMESHASNODATA";
          }
          if (param_1 == -0x7789f4a5) {
            return "D3DXERR_DUPLICATENAMEDFRAGMENT";
          }
          if (param_1 == -0x7789f4a4) {
            return "D3DXERR_CANNOTREMOVELASTITEM";
          }
          if (param_1 == -0x7787fff6) {
            return "DSERR_ALLOCATED";
          }
        }
        else {
          if (param_1 == -0x7787ffce) {
            return "DSERR_INVALIDCALL";
          }
          if (param_1 == -0x7787ffba) {
            return "DSERR_PRIOLEVELNEEDED";
          }
          if (param_1 == -0x7787ff9c) {
            return "DSERR_BADFORMAT";
          }
          if (param_1 == -0x7787ff88) {
            return "DSERR_NODRIVER";
          }
        }
      }
      else if (param_1 < -0x7786fffe) {
        if (param_1 == -0x7786ffff) {
          return "D3D10_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS";
        }
        if (param_1 < -0x7787ff41) {
          if (param_1 == -0x7787ff42) {
            return "DSERR_DS8_REQUIRED";
          }
          if (param_1 == -0x7787ff6a) {
            return "DSERR_BUFFERLOST";
          }
          if (param_1 == -0x7787ff60) {
            return "DSERR_OTHERAPPHASPRIO";
          }
          if (param_1 == -0x7787ff56) {
            return "DSERR_UNINITIALIZED";
          }
          if (param_1 == -0x7787ff4c) {
            return "DSERR_BUFFERTOOSMALL";
          }
        }
        else {
          if (param_1 == -0x7787ff38) {
            return "DSERR_SENDLOOP";
          }
          if (param_1 == -0x7787ff2e) {
            return "DSERR_BADSENDBUFFERGUID";
          }
          if (param_1 == -0x7787ff24) {
            return "DSERR_FXUNAVAILABLE";
          }
          if (param_1 == -0x7787ee9f) {
            return "DSERR_OBJECTNOTFOUND";
          }
        }
      }
      else if (param_1 < -0x7785fffb) {
        if (param_1 == -0x7785fffc) {
          return "DXGI_ERROR_UNSUPPORTED";
        }
        if (param_1 == -0x7786fffe) {
          return "D3D10_ERROR_FILE_NOT_FOUND";
        }
        if (param_1 == -0x7785ffff) {
          return "DXGI_ERROR_INVALID_CALL";
        }
        if (param_1 == -0x7785fffe) {
          return "DXGI_ERROR_NOT_FOUND";
        }
        if (param_1 == -0x7785fffd) {
          return "DXGI_ERROR_MORE_DATA";
        }
      }
      else {
        if (param_1 == -0x7785fffb) {
          return "DXGI_ERROR_DEVICE_REMOVED";
        }
        if (param_1 == -0x7785fffa) {
          return "DXGI_ERROR_DEVICE_HUNG";
        }
        if (param_1 == -0x7785fff9) {
          return "DXGI_ERROR_DEVICE_RESET";
        }
        if (param_1 == -0x7785fff6) {
          return "DXGI_ERROR_WAS_STILL_DRAWING";
        }
      }
    }
    else if (param_1 < 0x43b) {
      if (param_1 == 0x43a) {
LAB_00a9a9d2:
        return "ERROR_NO_RECOVERY_PROGRAM";
      }
      if (param_1 < 0x7a) {
        if (param_1 == 0x79) {
LAB_00a9a22f:
          return "ERROR_SEM_TIMEOUT";
        }
        if (param_1 < 7) {
          if (param_1 == 6) {
            return "ERROR_INVALID_HANDLE";
          }
          if (param_1 < -0x7538ffe4) {
            if (param_1 == -0x7538ffe5) {
              return "XACTENGINE_E_NOFRIENDLYNAMES";
            }
            if (param_1 < -0x7538fff9) {
              if (param_1 == -0x7538fffa) {
                return "XACTENGINE_E_INVALIDUSAGE";
              }
              if (param_1 < -0x7769fffe) {
                if (param_1 == -0x7769ffff) {
                  return "XAUDIO2_E_INVALID_CALL";
                }
                if (param_1 < -0x7785ffdb) {
                  if (param_1 == -0x7785ffdc) {
                    return "DXGI_ERROR_REMOTE_OUTOFMEMORY";
                  }
                  if (param_1 == -0x7785fff4) {
                    return "DXGI_ERROR_GRAPHICS_VIDPN_SOURCE_IN_USE";
                  }
                  if (param_1 == -0x7785ffe0) {
                    return "DXGI_ERROR_DRIVER_INTERNAL_ERROR";
                  }
                  if (param_1 == -0x7785ffdf) {
                    return "DXGI_ERROR_NONEXCLUSIVE";
                  }
                  if (param_1 == -0x7785ffde) {
                    return "DXGI_ERROR_NOT_CURRENTLY_AVAILABLE";
                  }
                  if (param_1 == -0x7785ffdd) {
                    return "DXGI_ERROR_REMOTE_CLIENT_DISCONNECTED";
                  }
                }
                else {
                  if (param_1 == -0x7783ffff) {
                    return "D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS";
                  }
                  if (param_1 == -0x7783fffe) {
                    return "D3D11_ERROR_FILE_NOT_FOUND";
                  }
                  if (param_1 == -0x7783fffd) {
                    return "D3D11_ERROR_TOO_MANY_UNIQUE_VIEW_OBJECTS";
                  }
                  if (param_1 == -0x7783fffc) {
                    return "D3D11_ERROR_DEFERRED_CONTEXT_MAP_WITHOUT_INITIAL_DISCARD";
                  }
                }
              }
              else if (param_1 < -0x7538fffe) {
                if (param_1 == -0x7538ffff) {
                  return "XACTENGINE_E_ALREADYINITIALIZED";
                }
                if (param_1 == -0x7769fffe) {
                  return "XAUDIO2_E_XMA_DECODER_ERROR";
                }
                if (param_1 == -0x7769fffd) {
                  return "XAUDIO2_E_XAPO_CREATION_FAILED";
                }
                if (param_1 == -0x7769fffc) {
                  return "XAUDIO2_E_DEVICE_INVALIDATED";
                }
                if (param_1 == -0x7768ffff) {
                  return "XAPO_E_FORMAT_UNSUPPORTED";
                }
              }
              else {
                if (param_1 == -0x7538fffe) {
                  return "XACTENGINE_E_NOTINITIALIZED";
                }
                if (param_1 == -0x7538fffd) {
                  return "XACTENGINE_E_EXPIRED";
                }
                if (param_1 == -0x7538fffc) {
                  return "XACTENGINE_E_NONOTIFICATIONCALLBACK";
                }
                if (param_1 == -0x7538fffb) {
                  return "XACTENGINE_E_NOTIFICATIONREGISTERED";
                }
              }
            }
            else {
              switch(param_1) {
              case -0x7538fff9:
                return "XACTENGINE_E_INVALIDDATA";
              case -0x7538fff8:
                return "XACTENGINE_E_INSTANCELIMITFAILTOPLAY";
              case -0x7538fff7:
                return "XACTENGINE_E_NOGLOBALSETTINGS";
              case -0x7538fff6:
                return "XACTENGINE_E_INVALIDVARIABLEINDEX";
              case -0x7538fff5:
                return "XACTENGINE_E_INVALIDCATEGORY";
              case -0x7538fff4:
                return "XACTENGINE_E_INVALIDCUEINDEX";
              case -0x7538fff3:
                return "XACTENGINE_E_INVALIDWAVEINDEX";
              case -0x7538fff2:
                return "XACTENGINE_E_INVALIDTRACKINDEX";
              case -0x7538fff1:
                return "XACTENGINE_E_INVALIDSOUNDOFFSETORINDEX";
              case -0x7538fff0:
                return "XACTENGINE_E_READFILE";
              case -0x7538ffef:
                return "XACTENGINE_E_UNKNOWNEVENT";
              case -0x7538ffee:
                return "XACTENGINE_E_INCALLBACK";
              case -0x7538ffed:
                return "XACTENGINE_E_NOWAVEBANK";
              case -0x7538ffec:
                return "XACTENGINE_E_SELECTVARIATION";
              case -0x7538ffeb:
                return "XACTENGINE_E_MULTIPLEAUDITIONENGINES";
              case -0x7538ffea:
                return "XACTENGINE_E_WAVEBANKNOTPREPARED";
              case -0x7538ffe9:
                return "XACTENGINE_E_NORENDERER";
              case -0x7538ffe8:
                return "XACTENGINE_E_INVALIDENTRYCOUNT";
              case -0x7538ffe7:
                return "XACTENGINE_E_SEEKTIMEBEYONDCUEEND";
              case -0x7538ffe6:
                return "XACTENGINE_E_SEEKTIMEBEYONDWAVEEND";
              }
            }
          }
          else if (param_1 < -0x3ff6fffe) {
            if (param_1 == -0x3ff6ffff) {
              return "ERROR_AUDITING_DISABLED";
            }
            switch(param_1) {
            case -0x7538feff:
              return "XACTENGINE_E_AUDITION_WRITEFILE";
            case -0x7538fefe:
              return "XACTENGINE_E_AUDITION_NOSOUNDBANK";
            case -0x7538fefd:
              return "XACTENGINE_E_AUDITION_INVALIDRPCINDEX";
            case -0x7538fefc:
              return "XACTENGINE_E_AUDITION_MISSINGDATA";
            case -0x7538fefb:
              return "XACTENGINE_E_AUDITION_UNKNOWNCOMMAND";
            case -0x7538fefa:
              return "XACTENGINE_E_AUDITION_INVALIDDSPINDEX";
            case -0x7538fef9:
              return "XACTENGINE_E_AUDITION_MISSINGWAVE";
            case -0x7538fef8:
              return "XACTENGINE_E_AUDITION_CREATEDIRECTORYFAILED";
            case -0x7538fef7:
              return "XACTENGINE_E_AUDITION_INVALIDSESSION";
            }
          }
          else if (param_1 < -0x3ff31fe8) {
            if (param_1 == -0x3ff31fe9) {
              return "XML_ATTRIBUTE_VALUE";
            }
            if (param_1 < -0x3ff31ff2) {
              if (param_1 == -0x3ff31ff3) {
                return "XML_ELEMENT_UNDECLARED";
              }
              if (param_1 == -0x3ff6fffe) {
                return "ERROR_ALL_SIDS_FILTERED";
              }
              if (param_1 == -0x3ff31ffe) {
                return "XML_ENTITY_UNDEFINED";
              }
              if (param_1 == -0x3ff31ffd) {
                return "XML_INFINITE_ENTITY_LOOP";
              }
              if (param_1 == -0x3ff31ffc) {
                return "XML_NDATA_INVALID_PE";
              }
              if (param_1 == -0x3ff31ffb) {
                return "XML_REQUIRED_NDATA";
              }
              if (param_1 == -0x3ff31ffa) {
                return "XML_NDATA_INVALID_REF";
              }
              if (param_1 == -0x3ff31ff9) {
                return "XML_EXTENT_IN_ATTR";
              }
            }
            else {
              if (param_1 == -0x3ff31ff2) {
                return "XML_ELEMENT_ID_NOT_FOUND";
              }
              if (param_1 == -0x3ff31fef) {
                return "XML_EMPTY_NOT_ALLOWED";
              }
              if (param_1 == -0x3ff31fee) {
                return "XML_ELEMENT_NOT_COMPLETE";
              }
              if (param_1 == -0x3ff31fed) {
                return "XML_ROOT_NAME_MISMATCH";
              }
              if (param_1 == -0x3ff31fec) {
                return "XML_INVALID_CONTENT";
              }
              if (param_1 == -0x3ff31feb) {
                return "XML_ATTRIBUTE_NOT_DEFINED";
              }
              if (param_1 == -0x3ff31fea) {
                return "XML_ATTRIBUTE_FIXED";
              }
            }
          }
          else if (param_1 < -0x3ff31ddb) {
            if (param_1 == -0x3ff31ddc) {
              return "XML_E_NODTD";
            }
            if (param_1 == -0x3ff31fe8) {
              return "XML_ILLEGAL_TEXT";
            }
            if (param_1 == -0x3ff31fe7) {
              return "XML_MULTI_FIXED_VALUES";
            }
            if (param_1 == -0x3ff31fe4) {
              return "XML_ELEMENT_UNDEFINED";
            }
            if (param_1 == -0x3ff31fe2) {
              return "XML_XMLNS_FIXED";
            }
            if (param_1 == -0x3ff31fe0) {
              return "XML_REQUIRED_ATTRIBUTE_MISSING";
            }
            if (param_1 == -0x3ff31fda) {
              return "XML_DTD_EXPECTING";
            }
            if (param_1 == -0x3ff31ddd) {
              return "XML_E_NOTWF";
            }
          }
          else {
            if (param_1 == 0) {
              return "S_OK";
            }
            if (param_1 == 1) {
              return "S_FALSE";
            }
            if (param_1 == 2) {
LAB_00a99eb9:
              return "ERROR_FILE_NOT_FOUND";
            }
            if (param_1 == 3) {
LAB_00a99eaf:
              return "ERROR_PATH_NOT_FOUND";
            }
            if (param_1 == 4) {
LAB_00a99ea5:
              return "ERROR_TOO_MANY_OPEN_FILES";
            }
            if (param_1 == 5) {
              return "ERROR_ACCESS_DENIED";
            }
          }
        }
        else {
          switch(param_1) {
          case 7:
LAB_00a99efb:
            return "ERROR_ARENA_TRASHED";
          case 8:
LAB_00a99f05:
            return "ERROR_NOT_ENOUGH_MEMORY";
          case 9:
LAB_00a99f0f:
            return "ERROR_INVALID_BLOCK";
          case 10:
LAB_00a99f19:
            return "ERROR_BAD_ENVIRONMENT";
          case 0xb:
LAB_00a99f23:
            return "ERROR_BAD_FORMAT";
          case 0xc:
LAB_00a99f2d:
            return "ERROR_INVALID_ACCESS";
          case 0xd:
LAB_00a99f37:
            return "ERROR_INVALID_DATA";
          case 0xe:
            return "ERROR_OUTOFMEMORY";
          case 0xf:
LAB_00a99f4b:
            return "ERROR_INVALID_DRIVE";
          case 0x10:
LAB_00a99f55:
            return "ERROR_CURRENT_DIRECTORY";
          case 0x11:
LAB_00a99f5f:
            return "ERROR_NOT_SAME_DEVICE";
          case 0x12:
LAB_00a99f69:
            return "ERROR_NO_MORE_FILES";
          case 0x13:
LAB_00a99f73:
            return "ERROR_WRITE_PROTECT";
          case 0x14:
LAB_00a99f7d:
            return "ERROR_BAD_UNIT";
          case 0x15:
LAB_00a99f87:
            return "ERROR_NOT_READY";
          case 0x16:
LAB_00a99f91:
            return "ERROR_BAD_COMMAND";
          case 0x17:
LAB_00a99f9b:
            return "ERROR_CRC";
          case 0x18:
LAB_00a99fa5:
            return "ERROR_BAD_LENGTH";
          case 0x19:
LAB_00a99faf:
            return "ERROR_SEEK";
          case 0x1a:
LAB_00a99fb9:
            return "ERROR_NOT_DOS_DISK";
          case 0x1b:
LAB_00a99fc3:
            return "ERROR_SECTOR_NOT_FOUND";
          case 0x1c:
LAB_00a99fcd:
            return "ERROR_OUT_OF_PAPER";
          case 0x1d:
LAB_00a99fd7:
            return "ERROR_WRITE_FAULT";
          case 0x1e:
LAB_00a99fe1:
            return "ERROR_READ_FAULT";
          case 0x1f:
LAB_00a99feb:
            return "ERROR_GEN_FAILURE";
          case 0x20:
LAB_00a99ff5:
            return "ERROR_SHARING_VIOLATION";
          case 0x21:
LAB_00a99fff:
            return "ERROR_LOCK_VIOLATION";
          case 0x22:
LAB_00a9a009:
            return "ERROR_WRONG_DISK";
          case 0x24:
LAB_00a9a013:
            return "ERROR_SHARING_BUFFER_EXCEEDED";
          case 0x26:
LAB_00a9a01d:
            return "ERROR_HANDLE_EOF";
          case 0x27:
LAB_00a9a027:
            return "ERROR_HANDLE_DISK_FULL";
          case 0x32:
LAB_00a9a031:
            return "ERROR_NOT_SUPPORTED";
          case 0x33:
LAB_00a9a03b:
            return "ERROR_REM_NOT_LIST";
          case 0x34:
LAB_00a9a045:
            return "ERROR_DUP_NAME";
          case 0x35:
LAB_00a9a04f:
            return "ERROR_BAD_NETPATH";
          case 0x36:
LAB_00a9a059:
            return "ERROR_NETWORK_BUSY";
          case 0x37:
LAB_00a9a063:
            return "ERROR_DEV_NOT_EXIST";
          case 0x38:
LAB_00a9a06d:
            return "ERROR_TOO_MANY_CMDS";
          case 0x39:
LAB_00a9a077:
            return "ERROR_ADAP_HDW_ERR";
          case 0x3a:
LAB_00a9a081:
            return "ERROR_BAD_NET_RESP";
          case 0x3b:
LAB_00a9a08b:
            return "ERROR_UNEXP_NET_ERR";
          case 0x3c:
LAB_00a9a095:
            return "ERROR_BAD_REM_ADAP";
          case 0x3d:
LAB_00a9a09f:
            return "ERROR_PRINTQ_FULL";
          case 0x3e:
LAB_00a9a0a9:
            return "ERROR_NO_SPOOL_SPACE";
          case 0x3f:
LAB_00a9a0b3:
            return "ERROR_PRINT_CANCELLED";
          case 0x40:
LAB_00a9a0bd:
            return "ERROR_NETNAME_DELETED";
          case 0x41:
LAB_00a9a0c7:
            return "ERROR_NETWORK_ACCESS_DENIED";
          case 0x42:
LAB_00a9a0d1:
            return "ERROR_BAD_DEV_TYPE";
          case 0x43:
LAB_00a9a0db:
            return "ERROR_BAD_NET_NAME";
          case 0x44:
LAB_00a9a0e5:
            return "ERROR_TOO_MANY_NAMES";
          case 0x45:
LAB_00a9a0ef:
            return "ERROR_TOO_MANY_SESS";
          case 0x46:
LAB_00a9a0f9:
            return "ERROR_SHARING_PAUSED";
          case 0x47:
LAB_00a9a103:
            return "ERROR_REQ_NOT_ACCEP";
          case 0x48:
LAB_00a9a10d:
            return "ERROR_REDIR_PAUSED";
          case 0x50:
LAB_00a9a117:
            return "ERROR_FILE_EXISTS";
          case 0x52:
LAB_00a9a121:
            return "ERROR_CANNOT_MAKE";
          case 0x53:
LAB_00a9a12b:
            return "ERROR_FAIL_I24";
          case 0x54:
LAB_00a9a135:
            return "ERROR_OUT_OF_STRUCTURES";
          case 0x55:
LAB_00a9a13f:
            return "ERROR_ALREADY_ASSIGNED";
          case 0x56:
LAB_00a9a149:
            return "ERROR_INVALID_PASSWORD";
          case 0x57:
            return "ERROR_INVALID_PARAMETER";
          case 0x58:
LAB_00a9a15d:
            return "ERROR_NET_WRITE_FAULT";
          case 0x59:
LAB_00a9a167:
            return "ERROR_NO_PROC_SLOTS";
          case 100:
LAB_00a9a171:
            return "ERROR_TOO_MANY_SEMAPHORES";
          case 0x65:
LAB_00a9a17b:
            return "ERROR_EXCL_SEM_ALREADY_OWNED";
          case 0x66:
LAB_00a9a185:
            return "ERROR_SEM_IS_SET";
          case 0x67:
LAB_00a9a18f:
            return "ERROR_TOO_MANY_SEM_REQUESTS";
          case 0x68:
LAB_00a9a199:
            return "ERROR_INVALID_AT_INTERRUPT_TIME";
          case 0x69:
LAB_00a9a1a3:
            return "ERROR_SEM_OWNER_DIED";
          case 0x6a:
LAB_00a9a1ad:
            return "ERROR_SEM_USER_LIMIT";
          case 0x6b:
LAB_00a9a1b7:
            return "ERROR_DISK_CHANGE";
          case 0x6c:
LAB_00a9a1c1:
            return "ERROR_DRIVE_LOCKED";
          case 0x6d:
LAB_00a9a1cb:
            return "ERROR_BROKEN_PIPE";
          case 0x6e:
LAB_00a9a1d5:
            return "ERROR_OPEN_FAILED";
          case 0x6f:
LAB_00a9a1df:
            return "ERROR_BUFFER_OVERFLOW";
          case 0x70:
LAB_00a9a1e9:
            return "ERROR_DISK_FULL";
          case 0x71:
LAB_00a9a1f3:
            return "ERROR_NO_MORE_SEARCH_HANDLES";
          case 0x72:
LAB_00a9a1fd:
            return "ERROR_INVALID_TARGET_HANDLE";
          case 0x75:
LAB_00a9a207:
            return "ERROR_INVALID_CATEGORY";
          case 0x76:
LAB_00a9a211:
            return "ERROR_INVALID_VERIFY_SWITCH";
          case 0x77:
LAB_00a9a21b:
            return "ERROR_BAD_DRIVER_LEVEL";
          case 0x78:
LAB_00a9a225:
            return "ERROR_CALL_NOT_IMPLEMENTED";
          }
        }
      }
      else if (param_1 < 0xf1) {
        if (param_1 == 0xf0) {
LAB_00a9a593:
          return "ERROR_VC_DISCONNECTED";
        }
        switch(param_1) {
        case 0x7a:
LAB_00a9a25f:
          return "ERROR_INSUFFICIENT_BUFFER";
        case 0x7b:
LAB_00a9a269:
          return "ERROR_INVALID_NAME";
        case 0x7c:
LAB_00a9a273:
          return "ERROR_INVALID_LEVEL";
        case 0x7d:
LAB_00a9a27d:
          return "ERROR_NO_VOLUME_LABEL";
        case 0x7e:
LAB_00a9a287:
          return "ERROR_MOD_NOT_FOUND";
        case 0x7f:
LAB_00a9a291:
          return "ERROR_PROC_NOT_FOUND";
        case 0x80:
LAB_00a9a29b:
          return "ERROR_WAIT_NO_CHILDREN";
        case 0x81:
LAB_00a9a2a5:
          return "ERROR_CHILD_NOT_COMPLETE";
        case 0x82:
LAB_00a9a2af:
          return "ERROR_DIRECT_ACCESS_HANDLE";
        case 0x83:
LAB_00a9a2b9:
          return "ERROR_NEGATIVE_SEEK";
        case 0x84:
LAB_00a9a2c3:
          return "ERROR_SEEK_ON_DEVICE";
        case 0x85:
LAB_00a9a2cd:
          return "ERROR_IS_JOIN_TARGET";
        case 0x86:
LAB_00a9a2d7:
          return "ERROR_IS_JOINED";
        case 0x87:
LAB_00a9a2e1:
          return "ERROR_IS_SUBSTED";
        case 0x88:
LAB_00a9a2eb:
          return "ERROR_NOT_JOINED";
        case 0x89:
LAB_00a9a2f5:
          return "ERROR_NOT_SUBSTED";
        case 0x8a:
LAB_00a9a2ff:
          return "ERROR_JOIN_TO_JOIN";
        case 0x8b:
LAB_00a9a309:
          return "ERROR_SUBST_TO_SUBST";
        case 0x8c:
LAB_00a9a313:
          return "ERROR_JOIN_TO_SUBST";
        case 0x8d:
LAB_00a9a31d:
          return "ERROR_SUBST_TO_JOIN";
        case 0x8e:
LAB_00a9a327:
          return "ERROR_BUSY_DRIVE";
        case 0x8f:
LAB_00a9a331:
          return "ERROR_SAME_DRIVE";
        case 0x90:
LAB_00a9a33b:
          return "ERROR_DIR_NOT_ROOT";
        case 0x91:
LAB_00a9a345:
          return "ERROR_DIR_NOT_EMPTY";
        case 0x92:
LAB_00a9a34f:
          return "ERROR_IS_SUBST_PATH";
        case 0x93:
LAB_00a9a359:
          return "ERROR_IS_JOIN_PATH";
        case 0x94:
LAB_00a9a363:
          return "ERROR_PATH_BUSY";
        case 0x95:
LAB_00a9a36d:
          return "ERROR_IS_SUBST_TARGET";
        case 0x96:
LAB_00a9a377:
          return "ERROR_SYSTEM_TRACE";
        case 0x97:
LAB_00a9a381:
          return "ERROR_INVALID_EVENT_COUNT";
        case 0x98:
LAB_00a9a38b:
          return "ERROR_TOO_MANY_MUXWAITERS";
        case 0x99:
LAB_00a9a395:
          return "ERROR_INVALID_LIST_FORMAT";
        case 0x9a:
LAB_00a9a39f:
          return "ERROR_LABEL_TOO_LONG";
        case 0x9b:
          goto LAB_00a9a3a9;
        case 0x9c:
LAB_00a9a3b3:
          return "ERROR_SIGNAL_REFUSED";
        case 0x9d:
LAB_00a9a3bd:
          return "ERROR_DISCARDED";
        case 0x9e:
LAB_00a9a3c7:
          return "ERROR_NOT_LOCKED";
        case 0x9f:
LAB_00a9a3d1:
          return "ERROR_BAD_THREADID_ADDR";
        case 0xa0:
LAB_00a9a3db:
          return "ERROR_BAD_ARGUMENTS";
        case 0xa1:
LAB_00a9a3e5:
          return "ERROR_BAD_PATHNAME";
        case 0xa2:
LAB_00a9a3ef:
          return "ERROR_SIGNAL_PENDING";
        case 0xa4:
LAB_00a9a3f9:
          return "ERROR_MAX_THRDS_REACHED";
        case 0xa7:
LAB_00a9a403:
          return "ERROR_LOCK_FAILED";
        case 0xaa:
LAB_00a9a40d:
          return "ERROR_BUSY";
        case 0xad:
LAB_00a9a417:
          return "ERROR_CANCEL_VIOLATION";
        case 0xae:
LAB_00a9a421:
          return "ERROR_ATOMIC_LOCKS_NOT_SUPPORTED";
        case 0xb4:
LAB_00a9a42b:
          return "ERROR_INVALID_SEGMENT_NUMBER";
        case 0xb6:
LAB_00a9a435:
          return "ERROR_INVALID_ORDINAL";
        case 0xb7:
LAB_00a9a43f:
          return "ERROR_ALREADY_EXISTS";
        case 0xba:
LAB_00a9a449:
          return "ERROR_INVALID_FLAG_NUMBER";
        case 0xbb:
LAB_00a9a453:
          return "ERROR_SEM_NOT_FOUND";
        case 0xbc:
LAB_00a9a45d:
          return "ERROR_INVALID_STARTING_CODESEG";
        case 0xbd:
LAB_00a9a467:
          return "ERROR_INVALID_STACKSEG";
        case 0xbe:
LAB_00a9a471:
          return "ERROR_INVALID_MODULETYPE";
        case 0xbf:
LAB_00a9a47b:
          return "ERROR_INVALID_EXE_SIGNATURE";
        case 0xc0:
LAB_00a9a485:
          return "ERROR_EXE_MARKED_INVALID";
        case 0xc1:
LAB_00a9a48f:
          return "ERROR_BAD_EXE_FORMAT";
        case 0xc2:
LAB_00a9a499:
          return "ERROR_ITERATED_DATA_EXCEEDS_64k";
        case 0xc3:
LAB_00a9a4a3:
          return "ERROR_INVALID_MINALLOCSIZE";
        case 0xc4:
LAB_00a9a4ad:
          return "ERROR_DYNLINK_FROM_INVALID_RING";
        case 0xc5:
LAB_00a9a4b7:
          return "ERROR_IOPL_NOT_ENABLED";
        case 0xc6:
LAB_00a9a4c1:
          return "ERROR_INVALID_SEGDPL";
        case 199:
LAB_00a9a4cb:
          return "ERROR_AUTODATASEG_EXCEEDS_64k";
        case 200:
          return "ERROR_RING2SEG_MUST_BE_MOVABLE";
        case 0xc9:
          return "ERROR_RELOC_CHAIN_XEEDS_SEGLIM";
        case 0xca:
LAB_00a9a4e9:
          return "ERROR_INFLOOP_IN_RELOC_CHAIN";
        case 0xcb:
LAB_00a9a4f3:
          return "ERROR_ENVVAR_NOT_FOUND";
        case 0xcd:
LAB_00a9a4fd:
          return "ERROR_NO_SIGNAL_SENT";
        case 0xce:
LAB_00a9a507:
          return "ERROR_FILENAME_EXCED_RANGE";
        case 0xcf:
LAB_00a9a511:
          return "ERROR_RING2_STACK_IN_USE";
        case 0xd0:
LAB_00a9a51b:
          return "ERROR_META_EXPANSION_TOO_LONG";
        case 0xd1:
LAB_00a9a525:
          return "ERROR_INVALID_SIGNAL_NUMBER";
        case 0xd2:
LAB_00a9a52f:
          return "ERROR_THREAD_1_INACTIVE";
        case 0xd4:
LAB_00a9a539:
          return "ERROR_LOCKED";
        case 0xd6:
LAB_00a9a543:
          return "ERROR_TOO_MANY_MODULES";
        case 0xd7:
LAB_00a9a54d:
          return "ERROR_NESTING_NOT_ALLOWED";
        case 0xd8:
LAB_00a9a557:
          return "ERROR_EXE_MACHINE_TYPE_MISMATCH";
        case 0xe6:
LAB_00a9a561:
          return "ERROR_BAD_PIPE";
        case 0xe7:
LAB_00a9a56b:
          return "ERROR_PIPE_BUSY";
        case 0xe8:
LAB_00a9a575:
          return "ERROR_NO_DATA";
        case 0xe9:
LAB_00a9a57f:
          return "ERROR_PIPE_NOT_CONNECTED";
        case 0xea:
LAB_00a9a589:
          return "ERROR_MORE_DATA";
        }
      }
      else if (param_1 < 0x3f6) {
        if (param_1 == 0x3f5) {
LAB_00a9a81c:
          return "ERROR_CANTWRITE";
        }
        if (param_1 < 0x217) {
          if (param_1 == 0x216) {
LAB_00a9a6ef:
            return "ERROR_ARITHMETIC_OVERFLOW";
          }
          if (param_1 < 0x11b) {
            if (param_1 == 0x11a) {
LAB_00a9a656:
              return "ERROR_EAS_NOT_SUPPORTED";
            }
            switch(param_1) {
            case 0xfe:
LAB_00a9a5f2:
              return "ERROR_INVALID_EA_NAME";
            case 0xff:
LAB_00a9a5fc:
              return "ERROR_EA_LIST_INCONSISTENT";
            case 0x102:
LAB_00a9a606:
              return "WAIT_TIMEOUT";
            case 0x103:
LAB_00a9a610:
              return "ERROR_NO_MORE_ITEMS";
            case 0x10a:
LAB_00a9a61a:
              return "ERROR_CANNOT_COPY";
            case 0x10b:
LAB_00a9a624:
              return "ERROR_DIRECTORY";
            case 0x113:
LAB_00a9a62e:
              return "ERROR_EAS_DIDNT_FIT";
            case 0x114:
LAB_00a9a638:
              return "ERROR_EA_FILE_CORRUPT";
            case 0x115:
LAB_00a9a642:
              return "ERROR_EA_TABLE_FULL";
            case 0x116:
LAB_00a9a64c:
              return "ERROR_INVALID_EA_HANDLE";
            }
          }
          else if (param_1 < 0x12e) {
            if (param_1 == 0x12d) {
LAB_00a9a6a9:
              return "ERROR_INVALID_OPLOCK_PROTOCOL";
            }
            if (param_1 == 0x120) {
LAB_00a9a69f:
              return "ERROR_NOT_OWNER";
            }
            if (param_1 == 0x12a) goto LAB_00a9a695;
            if (param_1 == 299) goto LAB_00a9a68b;
            if (param_1 == 300) goto LAB_00a9a681;
          }
          else {
            if (param_1 == 0x12e) {
LAB_00a9a6e5:
              return "ERROR_DISK_TOO_FRAGMENTED";
            }
            if (param_1 == 0x12f) {
LAB_00a9a6db:
              return "ERROR_DELETE_PENDING";
            }
            if (param_1 == 0x13d) {
LAB_00a963c7:
              return "ERROR_MR_MID_NOT_FOUND";
            }
            if (param_1 == 0x1e7) goto LAB_00a9a6d1;
          }
        }
        else if (param_1 < 0x3ec) {
          if (param_1 == 0x3eb) {
LAB_00a9a7a3:
            return "ERROR_CAN_NOT_COMPLETE";
          }
          if (param_1 < 0x3e6) {
            if (param_1 == 0x3e5) goto LAB_00a9a75c;
            if (param_1 == 0x217) {
LAB_00a9a752:
              return "ERROR_PIPE_CONNECTED";
            }
            if (param_1 == 0x218) {
LAB_00a9a748:
              return "ERROR_PIPE_LISTENING";
            }
            if (param_1 == 0x3e2) {
LAB_00a9a73e:
              return "ERROR_EA_ACCESS_DENIED";
            }
            if (param_1 == 0x3e3) {
LAB_00a96408:
              return "ERROR_OPERATION_ABORTED";
            }
            if (param_1 == 0x3e4) goto LAB_00a9a734;
          }
          else {
            if (param_1 == 0x3e6) goto LAB_00a9a799;
            if (param_1 == 999) goto LAB_00a9a78f;
            if (param_1 == 0x3e9) goto LAB_00a9a785;
            if (param_1 == 0x3ea) goto code_r0x00a9a77b;
          }
        }
        else {
          switch(param_1) {
          case 0x3ec:
LAB_00a9a7c2:
            return "ERROR_INVALID_FLAGS";
          case 0x3ed:
LAB_00a9a7cc:
            return "ERROR_UNRECOGNIZED_VOLUME";
          case 0x3ee:
LAB_00a9a7d6:
            return "ERROR_FILE_INVALID";
          case 0x3ef:
LAB_00a9a7e0:
            return "ERROR_FULLSCREEN_MODE";
          case 0x3f0:
LAB_00a9a7ea:
            return "ERROR_NO_TOKEN";
          case 0x3f1:
LAB_00a9a7f4:
            return "ERROR_BADDB";
          case 0x3f2:
LAB_00a9a7fe:
            return "ERROR_BADKEY";
          case 0x3f3:
LAB_00a9a808:
            return "ERROR_CANTOPEN";
          case 0x3f4:
LAB_00a9a812:
            return "ERROR_CANTREAD";
          }
        }
      }
      else {
        switch(param_1) {
        case 0x3f6:
LAB_00a9a842:
          return "ERROR_REGISTRY_RECOVERED";
        case 0x3f7:
LAB_00a9a84c:
          return "ERROR_REGISTRY_CORRUPT";
        case 0x3f8:
LAB_00a9a856:
          return "ERROR_REGISTRY_IO_FAILED";
        case 0x3f9:
LAB_00a9a860:
          return "ERROR_NOT_REGISTRY_FILE";
        case 0x3fa:
LAB_00a9a86a:
          return "ERROR_KEY_DELETED";
        case 0x3fb:
LAB_00a9a874:
          return "ERROR_NO_LOG_SPACE";
        case 0x3fc:
LAB_00a9a87e:
          return "ERROR_KEY_HAS_CHILDREN";
        case 0x3fd:
LAB_00a9a888:
          return "ERROR_CHILD_MUST_BE_VOLATILE";
        case 0x3fe:
LAB_00a9a892:
          return "ERROR_NOTIFY_ENUM_DIR";
        case 0x41b:
LAB_00a9a89c:
          return "ERROR_DEPENDENT_SERVICES_RUNNING";
        case 0x41c:
LAB_00a9a8a6:
          return "ERROR_INVALID_SERVICE_CONTROL";
        case 0x41d:
LAB_00a9a8b0:
          return "ERROR_SERVICE_REQUEST_TIMEOUT";
        case 0x41e:
LAB_00a9a8ba:
          return "ERROR_SERVICE_NO_THREAD";
        case 0x41f:
LAB_00a9a8c4:
          return "ERROR_SERVICE_DATABASE_LOCKED";
        case 0x420:
LAB_00a9a8ce:
          return "ERROR_SERVICE_ALREADY_RUNNING";
        case 0x421:
LAB_00a9a8d8:
          return "ERROR_INVALID_SERVICE_ACCOUNT";
        case 0x422:
LAB_00a9a8e2:
          return "ERROR_SERVICE_DISABLED";
        case 0x423:
LAB_00a9a8ec:
          return "ERROR_CIRCULAR_DEPENDENCY";
        case 0x424:
LAB_00a9a8f6:
          return "ERROR_SERVICE_DOES_NOT_EXIST";
        case 0x425:
LAB_00a9a900:
          return "ERROR_SERVICE_CANNOT_ACCEPT_CTRL";
        case 0x426:
LAB_00a9a90a:
          return "ERROR_SERVICE_NOT_ACTIVE";
        case 0x427:
LAB_00a9a914:
          return "ERROR_FAILED_SERVICE_CONTROLLER_CONNECT";
        case 0x428:
LAB_00a9a91e:
          return "ERROR_EXCEPTION_IN_SERVICE";
        case 0x429:
LAB_00a9a928:
          return "ERROR_DATABASE_DOES_NOT_EXIST";
        case 0x42a:
LAB_00a9a932:
          return "ERROR_SERVICE_SPECIFIC_ERROR";
        case 0x42b:
LAB_00a9a93c:
          return "ERROR_PROCESS_ABORTED";
        case 0x42c:
LAB_00a9a946:
          return "ERROR_SERVICE_DEPENDENCY_FAIL";
        case 0x42d:
LAB_00a9a950:
          return "ERROR_SERVICE_LOGON_FAILED";
        case 0x42e:
LAB_00a9a95a:
          return "ERROR_SERVICE_START_HANG";
        case 0x42f:
LAB_00a9a964:
          return "ERROR_INVALID_SERVICE_LOCK";
        case 0x430:
LAB_00a9a96e:
          return "ERROR_SERVICE_MARKED_FOR_DELETE";
        case 0x431:
LAB_00a9a978:
          return "ERROR_SERVICE_EXISTS";
        case 0x432:
LAB_00a9a982:
          return "ERROR_ALREADY_RUNNING_LKG";
        case 0x433:
LAB_00a9a98c:
          return "ERROR_SERVICE_DEPENDENCY_DELETED";
        case 0x434:
LAB_00a9a996:
          return "ERROR_BOOT_ALREADY_ACCEPTED";
        case 0x435:
LAB_00a9a9a0:
          return "ERROR_SERVICE_NEVER_STARTED";
        case 0x436:
LAB_00a9a9aa:
          return "ERROR_DUPLICATE_SERVICE_NAME";
        case 0x437:
LAB_00a9a9b4:
          return "ERROR_DIFFERENT_SERVICE_ACCOUNT";
        case 0x438:
LAB_00a9a9be:
          return "ERROR_CANNOT_DETECT_DRIVER_FAILURE";
        case 0x439:
LAB_00a9a9c8:
          return "ERROR_CANNOT_DETECT_PROCESS_ABORT";
        }
      }
    }
    else {
      switch(param_1) {
      case 0x43b:
LAB_00a9a9f3:
        return "ERROR_SERVICE_NOT_IN_EXE";
      case 0x43c:
LAB_00a9b58d:
        return "ERROR_NOT_SAFEBOOT_SERVICE";
      case 0x44c:
LAB_00a9a9fd:
        return "ERROR_END_OF_MEDIA";
      case 0x44d:
LAB_00a9aa07:
        return "ERROR_FILEMARK_DETECTED";
      case 0x44e:
LAB_00a9aa11:
        return "ERROR_BEGINNING_OF_MEDIA";
      case 0x44f:
LAB_00a9aa1b:
        return "ERROR_SETMARK_DETECTED";
      case 0x450:
LAB_00a9aa25:
        return "ERROR_NO_DATA_DETECTED";
      case 0x451:
LAB_00a9aa2f:
        return "ERROR_PARTITION_FAILURE";
      case 0x452:
LAB_00a9aa39:
        return "ERROR_INVALID_BLOCK_LENGTH";
      case 0x453:
LAB_00a9aa43:
        return "ERROR_DEVICE_NOT_PARTITIONED";
      case 0x454:
LAB_00a9aa4d:
        return "ERROR_UNABLE_TO_LOCK_MEDIA";
      case 0x455:
LAB_00a9aa57:
        return "ERROR_UNABLE_TO_UNLOAD_MEDIA";
      case 0x456:
LAB_00a9aa61:
        return "ERROR_MEDIA_CHANGED";
      case 0x457:
LAB_00a9aa6b:
        return "ERROR_BUS_RESET";
      case 0x458:
LAB_00a9aa75:
        return "ERROR_NO_MEDIA_IN_DRIVE";
      case 0x459:
LAB_00a9aa7f:
        return "ERROR_NO_UNICODE_TRANSLATION";
      case 0x45a:
LAB_00a9aa89:
        return "ERROR_DLL_INIT_FAILED";
      case 0x45b:
LAB_00a9aa93:
        return "ERROR_SHUTDOWN_IN_PROGRESS";
      case 0x45c:
LAB_00a9aa9d:
        return "ERROR_NO_SHUTDOWN_IN_PROGRESS";
      case 0x45d:
LAB_00a9aaa7:
        return "ERROR_IO_DEVICE";
      case 0x45e:
LAB_00a9aab1:
        return "ERROR_SERIAL_NO_DEVICE";
      case 0x45f:
LAB_00a9aabb:
        return "ERROR_IRQ_BUSY";
      case 0x460:
LAB_00a9aac5:
        return "ERROR_MORE_WRITES";
      case 0x461:
LAB_00a9aacf:
        return "ERROR_COUNTER_TIMEOUT";
      case 0x462:
LAB_00a9aad9:
        return "ERROR_FLOPPY_ID_MARK_NOT_FOUND";
      case 0x463:
LAB_00a9aae3:
        return "ERROR_FLOPPY_WRONG_CYLINDER";
      case 0x464:
LAB_00a9aaed:
        return "ERROR_FLOPPY_UNKNOWN_ERROR";
      case 0x465:
LAB_00a9aaf7:
        return "ERROR_FLOPPY_BAD_REGISTERS";
      case 0x466:
LAB_00a9ab01:
        return "ERROR_DISK_RECALIBRATE_FAILED";
      case 0x467:
LAB_00a9ab0b:
        return "ERROR_DISK_OPERATION_FAILED";
      case 0x468:
LAB_00a9ab15:
        return "ERROR_DISK_RESET_FAILED";
      case 0x469:
LAB_00a9ab1f:
        return "ERROR_EOM_OVERFLOW";
      case 0x46a:
LAB_00a9ab29:
        return "ERROR_NOT_ENOUGH_SERVER_MEMORY";
      case 0x46b:
LAB_00a9ab33:
        return "ERROR_POSSIBLE_DEADLOCK";
      case 0x46c:
LAB_00a9ab3d:
        return "ERROR_MAPPED_ALIGNMENT";
      case 0x474:
code_r0x00a9ab47:
        return "ERROR_SET_POWER_STATE_VETOED";
      case 0x475:
code_r0x00a9ab51:
        return "ERROR_SET_POWER_STATE_FAILED";
      case 0x476:
code_r0x00a9ab5b:
        return "ERROR_TOO_MANY_LINKS";
      case 0x47e:
LAB_00a9ab65:
        return "ERROR_OLD_WIN_VERSION";
      case 0x47f:
LAB_00a9ab6f:
        return "ERROR_APP_WRONG_OS";
      case 0x480:
LAB_00a9ab79:
        return "ERROR_SINGLE_INSTANCE_APP";
      case 0x481:
LAB_00a9ab83:
        return "ERROR_RMODE_APP";
      case 0x482:
LAB_00a9ab8d:
        return "ERROR_INVALID_DLL";
      case 0x483:
LAB_00a9ab97:
        return "ERROR_NO_ASSOCIATION";
      case 0x484:
LAB_00a9aba1:
        return "ERROR_DDE_FAIL";
      case 0x485:
LAB_00a9abab:
        return "ERROR_DLL_NOT_FOUND";
      case 0x486:
LAB_00a9abb5:
        return "ERROR_NO_MORE_USER_HANDLES";
      case 0x487:
LAB_00a9abbf:
        return "ERROR_MESSAGE_SYNC_ONLY";
      case 0x488:
LAB_00a9abc9:
        return "ERROR_SOURCE_ELEMENT_EMPTY";
      case 0x489:
LAB_00a9abd3:
        return "ERROR_DESTINATION_ELEMENT_FULL";
      case 0x48a:
LAB_00a9abdd:
        return "ERROR_ILLEGAL_ELEMENT_ADDRESS";
      case 0x48b:
LAB_00a9abe7:
        return "ERROR_MAGAZINE_NOT_PRESENT";
      case 0x48c:
LAB_00a9abf1:
        return "ERROR_DEVICE_REINITIALIZATION_NEEDED";
      case 0x48d:
LAB_00a9abfb:
        return "ERROR_DEVICE_REQUIRES_CLEANING";
      case 0x48e:
LAB_00a9ac05:
        return "ERROR_DEVICE_DOOR_OPEN";
      case 0x48f:
LAB_00a9ac0f:
        return "ERROR_DEVICE_NOT_CONNECTED";
      case 0x490:
LAB_00a9ac19:
        return "ERROR_NOT_FOUND";
      case 0x491:
LAB_00a9ac23:
        return "ERROR_NO_MATCH";
      case 0x492:
LAB_00a9ac2d:
        return "ERROR_SET_NOT_FOUND";
      case 0x493:
LAB_00a9ac37:
        return "ERROR_POINT_NOT_FOUND";
      case 0x494:
LAB_00a9ac41:
        return "ERROR_NO_TRACKING_SERVICE";
      case 0x495:
LAB_00a9ac4b:
        return "ERROR_NO_VOLUME_ID";
      case 0x497:
LAB_00a9ac55:
        return "ERROR_UNABLE_TO_REMOVE_REPLACED";
      case 0x498:
LAB_00a9ac5f:
        return "ERROR_UNABLE_TO_MOVE_REPLACEMENT";
      case 0x499:
LAB_00a9ac69:
        return "ERROR_UNABLE_TO_MOVE_REPLACEMENT_2";
      case 0x49a:
LAB_00a9ac73:
        return "ERROR_JOURNAL_DELETE_IN_PROGRESS";
      case 0x49b:
LAB_00a9ac7d:
        return "ERROR_JOURNAL_NOT_ACTIVE";
      case 0x49c:
LAB_00a9ac87:
        return "ERROR_POTENTIAL_FILE_FOUND";
      case 0x49d:
LAB_00a9b597:
        return "ERROR_JOURNAL_ENTRY_DELETED";
      case 0x4b0:
LAB_00a9ac91:
        return "ERROR_BAD_DEVICE";
      case 0x4b1:
LAB_00a9ac9b:
        return "ERROR_CONNECTION_UNAVAIL";
      case 0x4b2:
LAB_00a9aca5:
        return "ERROR_DEVICE_ALREADY_REMEMBERED";
      case 0x4b3:
LAB_00a9acaf:
        return "ERROR_NO_NET_OR_BAD_PATH";
      case 0x4b4:
LAB_00a9acb9:
        return "ERROR_BAD_PROVIDER";
      case 0x4b5:
LAB_00a9acc3:
        return "ERROR_CANNOT_OPEN_PROFILE";
      case 0x4b6:
LAB_00a9accd:
        return "ERROR_BAD_PROFILE";
      case 0x4b7:
LAB_00a9acd7:
        return "ERROR_NOT_CONTAINER";
      case 0x4b8:
LAB_00a9ace1:
        return "ERROR_EXTENDED_ERROR";
      case 0x4b9:
LAB_00a9aceb:
        return "ERROR_INVALID_GROUPNAME";
      case 0x4ba:
LAB_00a9acf5:
        return "ERROR_INVALID_COMPUTERNAME";
      case 0x4bb:
LAB_00a9acff:
        return "ERROR_INVALID_EVENTNAME";
      case 0x4bc:
LAB_00a9ad09:
        return "ERROR_INVALID_DOMAINNAME";
      case 0x4bd:
LAB_00a9ad13:
        return "ERROR_INVALID_SERVICENAME";
      case 0x4be:
LAB_00a9ad1d:
        return "ERROR_INVALID_NETNAME";
      case 0x4bf:
LAB_00a9ad27:
        return "ERROR_INVALID_SHARENAME";
      case 0x4c0:
LAB_00a9ad31:
        return "ERROR_INVALID_PASSWORDNAME";
      case 0x4c1:
LAB_00a9ad3b:
        return "ERROR_INVALID_MESSAGENAME";
      case 0x4c2:
LAB_00a9ad45:
        return "ERROR_INVALID_MESSAGEDEST";
      case 0x4c3:
LAB_00a9ad4f:
        return "ERROR_SESSION_CREDENTIAL_CONFLICT";
      case 0x4c4:
LAB_00a9ad59:
        return "ERROR_REMOTE_SESSION_LIMIT_EXCEEDED";
      case 0x4c5:
LAB_00a9ad63:
        return "ERROR_DUP_DOMAINNAME";
      case 0x4c6:
LAB_00a9ad6d:
        return "ERROR_NO_NETWORK";
      case 0x4c7:
LAB_00a9ad77:
        return "ERROR_CANCELLED";
      case 0x4c8:
LAB_00a9ad81:
        return "ERROR_USER_MAPPED_FILE";
      case 0x4c9:
LAB_00a9ad8b:
        return "ERROR_CONNECTION_REFUSED";
      case 0x4ca:
LAB_00a9ad95:
        return "ERROR_GRACEFUL_DISCONNECT";
      case 0x4cb:
LAB_00a9ad9f:
        return "ERROR_ADDRESS_ALREADY_ASSOCIATED";
      case 0x4cc:
LAB_00a9ada9:
        return "ERROR_ADDRESS_NOT_ASSOCIATED";
      case 0x4cd:
LAB_00a9adb3:
        return "ERROR_CONNECTION_INVALID";
      case 0x4ce:
LAB_00a9adbd:
        return "ERROR_CONNECTION_ACTIVE";
      case 0x4cf:
LAB_00a9adc7:
        return "ERROR_NETWORK_UNREACHABLE";
      case 0x4d0:
LAB_00a9add1:
        return "ERROR_HOST_UNREACHABLE";
      case 0x4d1:
LAB_00a9addb:
        return "ERROR_PROTOCOL_UNREACHABLE";
      case 0x4d2:
LAB_00a9ade5:
        return "ERROR_PORT_UNREACHABLE";
      case 0x4d3:
LAB_00a9adef:
        return "ERROR_REQUEST_ABORTED";
      case 0x4d4:
LAB_00a9adf9:
        return "ERROR_CONNECTION_ABORTED";
      case 0x4d5:
LAB_00a9ae03:
        return "ERROR_RETRY";
      case 0x4d6:
LAB_00a9ae0d:
        return "ERROR_CONNECTION_COUNT_LIMIT";
      case 0x4d7:
LAB_00a9ae17:
        return "ERROR_LOGIN_TIME_RESTRICTION";
      case 0x4d8:
LAB_00a9ae21:
        return "ERROR_LOGIN_WKSTA_RESTRICTION";
      case 0x4d9:
LAB_00a9ae2b:
        return "ERROR_INCORRECT_ADDRESS";
      case 0x4da:
LAB_00a9ae35:
        return "ERROR_ALREADY_REGISTERED";
      case 0x4db:
LAB_00a9ae3f:
        return "ERROR_SERVICE_NOT_FOUND";
      case 0x4dc:
LAB_00a9ae49:
        return "ERROR_NOT_AUTHENTICATED";
      case 0x4dd:
LAB_00a9ae53:
        return "ERROR_NOT_LOGGED_ON";
      case 0x4de:
LAB_00a9ae5d:
        return "ERROR_CONTINUE";
      case 0x4df:
LAB_00a9ae67:
        return "ERROR_ALREADY_INITIALIZED";
      case 0x4e0:
LAB_00a9ae71:
        return "ERROR_NO_MORE_DEVICES";
      case 0x4e1:
LAB_00a9ae7b:
        return "ERROR_NO_SUCH_SITE";
      case 0x4e2:
LAB_00a9ae85:
        return "ERROR_DOMAIN_CONTROLLER_EXISTS";
      case 0x4e3:
LAB_00a9b5a1:
        return "ERROR_ONLY_IF_CONNECTED";
      case 0x4e4:
LAB_00a9b5ab:
        return "ERROR_OVERRIDE_NOCHANGES";
      case 0x4e5:
LAB_00a9b5b5:
        return "ERROR_BAD_USER_PROFILE";
      case 0x4e6:
LAB_00a9b5bf:
        return "ERROR_NOT_SUPPORTED_ON_SBS";
      case 0x4e7:
LAB_00a9b5c9:
        return "ERROR_SERVER_SHUTDOWN_IN_PROGRESS";
      case 0x4e8:
LAB_00a9b5d3:
        return "ERROR_HOST_DOWN";
      case 0x4e9:
LAB_00a9b5dd:
        return "ERROR_NON_ACCOUNT_SID";
      case 0x4ea:
LAB_00a9b5e7:
        return "ERROR_NON_DOMAIN_SID";
      case 0x4eb:
LAB_00a9b5f1:
        return "ERROR_APPHELP_BLOCK";
      case 0x4ec:
LAB_00a9b5fb:
        return "ERROR_ACCESS_DISABLED_BY_POLICY";
      case 0x4ed:
LAB_00a9b605:
        return "ERROR_REG_NAT_CONSUMPTION";
      case 0x4ee:
LAB_00a9b60f:
        return "ERROR_CSCSHARE_OFFLINE";
      case 0x4ef:
LAB_00a9b619:
        return "ERROR_PKINIT_FAILURE";
      case 0x4f0:
LAB_00a9b623:
        return "ERROR_SMARTCARD_SUBSYSTEM_FAILURE";
      case 0x4f1:
LAB_00a9b62d:
        return "ERROR_DOWNGRADE_DETECTED";
      case 0x4f7:
code_r0x00a9b637:
        return "ERROR_MACHINE_LOCKED";
      case 0x4f9:
LAB_00a9b641:
        return "ERROR_CALLBACK_SUPPLIED_INVALID_DATA";
      case 0x4fa:
LAB_00a9b64b:
        return "ERROR_SYNC_FOREGROUND_REFRESH_REQUIRED";
      case 0x4fb:
LAB_00a9b655:
        return "ERROR_DRIVER_BLOCKED";
      case 0x4fc:
LAB_00a9b65f:
        return "ERROR_INVALID_IMPORT_OF_NON_DLL";
      case 0x514:
LAB_00a9ae8f:
        return "ERROR_NOT_ALL_ASSIGNED";
      case 0x515:
LAB_00a9ae99:
        return "ERROR_SOME_NOT_MAPPED";
      case 0x516:
LAB_00a9aea3:
        return "ERROR_NO_QUOTAS_FOR_ACCOUNT";
      case 0x517:
LAB_00a9aead:
        return "ERROR_LOCAL_USER_SESSION_KEY";
      case 0x518:
LAB_00a9aeb7:
        return "ERROR_NULL_LM_PASSWORD";
      case 0x519:
LAB_00a9aec1:
        return "ERROR_UNKNOWN_REVISION";
      case 0x51a:
LAB_00a9aecb:
        return "ERROR_REVISION_MISMATCH";
      case 0x51b:
LAB_00a9aed5:
        return "ERROR_INVALID_OWNER";
      case 0x51c:
LAB_00a9aedf:
        return "ERROR_INVALID_PRIMARY_GROUP";
      case 0x51d:
LAB_00a9aee9:
        return "ERROR_NO_IMPERSONATION_TOKEN";
      case 0x51e:
LAB_00a9aef3:
        return "ERROR_CANT_DISABLE_MANDATORY";
      case 0x51f:
LAB_00a9aefd:
        return "ERROR_NO_LOGON_SERVERS";
      case 0x520:
LAB_00a9af07:
        return "ERROR_NO_SUCH_LOGON_SESSION";
      case 0x521:
LAB_00a9af11:
        return "ERROR_NO_SUCH_PRIVILEGE";
      case 0x522:
LAB_00a9af1b:
        return "ERROR_PRIVILEGE_NOT_HELD";
      case 0x523:
LAB_00a9af25:
        return "ERROR_INVALID_ACCOUNT_NAME";
      case 0x524:
LAB_00a9af2f:
        return "ERROR_USER_EXISTS";
      case 0x525:
LAB_00a9af39:
        return "ERROR_NO_SUCH_USER";
      case 0x526:
LAB_00a9af43:
        return "ERROR_GROUP_EXISTS";
      case 0x527:
LAB_00a9af4d:
        return "ERROR_NO_SUCH_GROUP";
      case 0x528:
LAB_00a9af57:
        return "ERROR_MEMBER_IN_GROUP";
      case 0x529:
LAB_00a9af61:
        return "ERROR_MEMBER_NOT_IN_GROUP";
      case 0x52a:
LAB_00a9af6b:
        return "ERROR_LAST_ADMIN";
      case 0x52b:
LAB_00a9af75:
        return "ERROR_WRONG_PASSWORD";
      case 0x52c:
LAB_00a9af7f:
        return "ERROR_ILL_FORMED_PASSWORD";
      case 0x52d:
LAB_00a9af89:
        return "ERROR_PASSWORD_RESTRICTION";
      case 0x52e:
LAB_00a9af93:
        return "ERROR_LOGON_FAILURE";
      case 0x52f:
LAB_00a9af9d:
        return "ERROR_ACCOUNT_RESTRICTION";
      case 0x530:
LAB_00a9afa7:
        return "ERROR_INVALID_LOGON_HOURS";
      case 0x531:
LAB_00a9afb1:
        return "ERROR_INVALID_WORKSTATION";
      case 0x532:
LAB_00a9afbb:
        return "ERROR_PASSWORD_EXPIRED";
      case 0x533:
LAB_00a9afc5:
        return "ERROR_ACCOUNT_DISABLED";
      case 0x534:
LAB_00a9afcf:
        return "ERROR_NONE_MAPPED";
      case 0x535:
LAB_00a9afd9:
        return "ERROR_TOO_MANY_LUIDS_REQUESTED";
      case 0x536:
LAB_00a9afe3:
        return "ERROR_LUIDS_EXHAUSTED";
      case 0x537:
LAB_00a9afed:
        return "ERROR_INVALID_SUB_AUTHORITY";
      case 0x538:
LAB_00a9aff7:
        return "ERROR_INVALID_ACL";
      case 0x539:
LAB_00a9b001:
        return "ERROR_INVALID_SID";
      case 0x53a:
LAB_00a9b00b:
        return "ERROR_INVALID_SECURITY_DESCR";
      case 0x53c:
LAB_00a9b015:
        return "ERROR_BAD_INHERITANCE_ACL";
      case 0x53d:
LAB_00a9b01f:
        return "ERROR_SERVER_DISABLED";
      case 0x53e:
LAB_00a9b029:
        return "ERROR_SERVER_NOT_DISABLED";
      case 0x53f:
LAB_00a9b033:
        return "ERROR_INVALID_ID_AUTHORITY";
      case 0x540:
LAB_00a9b03d:
        return "ERROR_ALLOTTED_SPACE_EXCEEDED";
      case 0x541:
LAB_00a9b047:
        return "ERROR_INVALID_GROUP_ATTRIBUTES";
      case 0x542:
LAB_00a9b051:
        return "ERROR_BAD_IMPERSONATION_LEVEL";
      case 0x543:
LAB_00a9b05b:
        return "ERROR_CANT_OPEN_ANONYMOUS";
      case 0x544:
LAB_00a9b065:
        return "ERROR_BAD_VALIDATION_CLASS";
      case 0x545:
LAB_00a9b06f:
        return "ERROR_BAD_TOKEN_TYPE";
      case 0x546:
LAB_00a9b079:
        return "ERROR_NO_SECURITY_ON_OBJECT";
      case 0x547:
LAB_00a9b083:
        return "ERROR_CANT_ACCESS_DOMAIN_INFO";
      case 0x548:
LAB_00a9b08d:
        return "ERROR_INVALID_SERVER_STATE";
      case 0x549:
LAB_00a9b097:
        return "ERROR_INVALID_DOMAIN_STATE";
      case 0x54a:
LAB_00a9b0a1:
        return "ERROR_INVALID_DOMAIN_ROLE";
      case 0x54b:
LAB_00a9b0ab:
        return "ERROR_NO_SUCH_DOMAIN";
      case 0x54c:
LAB_00a9b0b5:
        return "ERROR_DOMAIN_EXISTS";
      case 0x54d:
LAB_00a9b0bf:
        return "ERROR_DOMAIN_LIMIT_EXCEEDED";
      case 0x54e:
LAB_00a9b0c9:
        return "ERROR_INTERNAL_DB_CORRUPTION";
      case 0x54f:
LAB_00a9b0d3:
        return "ERROR_INTERNAL_ERROR";
      case 0x550:
LAB_00a9b0dd:
        return "ERROR_GENERIC_NOT_MAPPED";
      case 0x551:
LAB_00a9b0e7:
        return "ERROR_BAD_DESCRIPTOR_FORMAT";
      case 0x552:
LAB_00a9b0f1:
        return "ERROR_NOT_LOGON_PROCESS";
      case 0x553:
LAB_00a9b0fb:
        return "ERROR_LOGON_SESSION_EXISTS";
      case 0x554:
LAB_00a9b105:
        return "ERROR_NO_SUCH_PACKAGE";
      case 0x555:
LAB_00a9b10f:
        return "ERROR_BAD_LOGON_SESSION_STATE";
      case 0x556:
LAB_00a9b119:
        return "ERROR_LOGON_SESSION_COLLISION";
      case 0x557:
LAB_00a9b123:
        return "ERROR_INVALID_LOGON_TYPE";
      case 0x558:
LAB_00a9b12d:
        return "ERROR_CANNOT_IMPERSONATE";
      case 0x559:
LAB_00a9b137:
        return "ERROR_RXACT_INVALID_STATE";
      case 0x55a:
LAB_00a9b141:
        return "ERROR_RXACT_COMMIT_FAILURE";
      case 0x55b:
LAB_00a9b14b:
        return "ERROR_SPECIAL_ACCOUNT";
      case 0x55c:
LAB_00a9b155:
        return "ERROR_SPECIAL_GROUP";
      case 0x55d:
LAB_00a9b15f:
        return "ERROR_SPECIAL_USER";
      case 0x55e:
LAB_00a9b169:
        return "ERROR_MEMBERS_PRIMARY_GROUP";
      case 0x55f:
LAB_00a9b173:
        return "ERROR_TOKEN_ALREADY_IN_USE";
      case 0x560:
LAB_00a9b17d:
        return "ERROR_NO_SUCH_ALIAS";
      case 0x561:
LAB_00a9b187:
        return "ERROR_MEMBER_NOT_IN_ALIAS";
      case 0x562:
LAB_00a9b191:
        return "ERROR_MEMBER_IN_ALIAS";
      case 0x563:
LAB_00a9b19b:
        return "ERROR_ALIAS_EXISTS";
      case 0x564:
LAB_00a9b1a5:
        return "ERROR_LOGON_NOT_GRANTED";
      case 0x565:
LAB_00a9b1af:
        return "ERROR_TOO_MANY_SECRETS";
      case 0x566:
LAB_00a9b1b9:
        return "ERROR_SECRET_TOO_LONG";
      case 0x567:
LAB_00a9b1c3:
        return "ERROR_INTERNAL_DB_ERROR";
      case 0x568:
LAB_00a9b1cd:
        return "ERROR_TOO_MANY_CONTEXT_IDS";
      case 0x569:
LAB_00a9b1d7:
        return "ERROR_LOGON_TYPE_NOT_GRANTED";
      case 0x56a:
LAB_00a9b1e1:
        return "ERROR_NT_CROSS_ENCRYPTION_REQUIRED";
      case 0x56b:
LAB_00a9b1eb:
        return "ERROR_NO_SUCH_MEMBER";
      case 0x56c:
LAB_00a9b1f5:
        return "ERROR_INVALID_MEMBER";
      case 0x56d:
LAB_00a9b1ff:
        return "ERROR_TOO_MANY_SIDS";
      case 0x56e:
LAB_00a9b209:
        return "ERROR_LM_CROSS_ENCRYPTION_REQUIRED";
      case 0x56f:
LAB_00a9b213:
        return "ERROR_NO_INHERITANCE";
      case 0x570:
LAB_00a9b21d:
        return "ERROR_FILE_CORRUPT";
      case 0x571:
LAB_00a9b227:
        return "ERROR_DISK_CORRUPT";
      case 0x572:
LAB_00a9b231:
        return "ERROR_NO_USER_SESSION_KEY";
      case 0x573:
LAB_00a9b23b:
        return "ERROR_LICENSE_QUOTA_EXCEEDED";
      case 0x574:
LAB_00a9b245:
        return "ERROR_WRONG_TARGET_NAME";
      case 0x575:
LAB_00a9b24f:
        return "ERROR_MUTUAL_AUTH_FAILED";
      case 0x576:
LAB_00a9b259:
        return "ERROR_TIME_SKEW";
      case 0x577:
LAB_00a9b669:
        return "ERROR_CURRENT_DOMAIN_NOT_ALLOWED";
      case 0x578:
LAB_00a9b263:
        return "ERROR_INVALID_WINDOW_HANDLE";
      case 0x579:
LAB_00a9b26d:
        return "ERROR_INVALID_MENU_HANDLE";
      case 0x57a:
LAB_00a9b277:
        return "ERROR_INVALID_CURSOR_HANDLE";
      case 0x57b:
LAB_00a9b281:
        return "ERROR_INVALID_ACCEL_HANDLE";
      case 0x57c:
LAB_00a9b28b:
        return "ERROR_INVALID_HOOK_HANDLE";
      case 0x57d:
LAB_00a9b295:
        return "ERROR_INVALID_DWP_HANDLE";
      case 0x57e:
LAB_00a9b29f:
        return "ERROR_TLW_WITH_WSCHILD";
      case 0x57f:
LAB_00a9b2a9:
        return "ERROR_CANNOT_FIND_WND_CLASS";
      case 0x580:
LAB_00a9b2b3:
        return "ERROR_WINDOW_OF_OTHER_THREAD";
      case 0x581:
LAB_00a9b2bd:
        return "ERROR_HOTKEY_ALREADY_REGISTERED";
      case 0x582:
LAB_00a9b2c7:
        return "ERROR_CLASS_ALREADY_EXISTS";
      case 0x583:
LAB_00a9b2d1:
        return "ERROR_CLASS_DOES_NOT_EXIST";
      case 0x584:
LAB_00a9b2db:
        return "ERROR_CLASS_HAS_WINDOWS";
      case 0x585:
LAB_00a9b2e5:
        return "ERROR_INVALID_INDEX";
      case 0x586:
LAB_00a9b2ef:
        return "ERROR_INVALID_ICON_HANDLE";
      case 0x587:
LAB_00a9b2f9:
        return "ERROR_PRIVATE_DIALOG_INDEX";
      case 0x588:
LAB_00a9b303:
        return "ERROR_LISTBOX_ID_NOT_FOUND";
      case 0x589:
LAB_00a9b30d:
        return "ERROR_NO_WILDCARD_CHARACTERS";
      case 0x58a:
LAB_00a9b317:
        return "ERROR_CLIPBOARD_NOT_OPEN";
      case 0x58b:
LAB_00a9b321:
        return "ERROR_HOTKEY_NOT_REGISTERED";
      case 0x58c:
LAB_00a9b32b:
        return "ERROR_WINDOW_NOT_DIALOG";
      case 0x58d:
LAB_00a9b335:
        return "ERROR_CONTROL_ID_NOT_FOUND";
      case 0x58e:
LAB_00a9b33f:
        return "ERROR_INVALID_COMBOBOX_MESSAGE";
      case 0x58f:
LAB_00a9b349:
        return "ERROR_WINDOW_NOT_COMBOBOX";
      case 0x590:
LAB_00a9b353:
        return "ERROR_INVALID_EDIT_HEIGHT";
      case 0x591:
LAB_00a9b35d:
        return "ERROR_DC_NOT_FOUND";
      case 0x592:
LAB_00a9b367:
        return "ERROR_INVALID_HOOK_FILTER";
      case 0x593:
LAB_00a9b371:
        return "ERROR_INVALID_FILTER_PROC";
      case 0x594:
LAB_00a9b37b:
        return "ERROR_HOOK_NEEDS_HMOD";
      case 0x595:
LAB_00a9b385:
        return "ERROR_GLOBAL_ONLY_HOOK";
      case 0x596:
LAB_00a9b38f:
        return "ERROR_JOURNAL_HOOK_SET";
      case 0x597:
LAB_00a9b399:
        return "ERROR_HOOK_NOT_INSTALLED";
      case 0x598:
LAB_00a9b3a3:
        return "ERROR_INVALID_LB_MESSAGE";
      case 0x599:
LAB_00a9b3ad:
        return "ERROR_SETCOUNT_ON_BAD_LB";
      case 0x59a:
LAB_00a9b3b7:
        return "ERROR_LB_WITHOUT_TABSTOPS";
      case 0x59b:
LAB_00a9b3c1:
        return "ERROR_DESTROY_OBJECT_OF_OTHER_THREAD";
      case 0x59c:
LAB_00a9b3cb:
        return "ERROR_CHILD_WINDOW_MENU";
      case 0x59d:
LAB_00a9b3d5:
        return "ERROR_NO_SYSTEM_MENU";
      case 0x59e:
LAB_00a9b3df:
        return "ERROR_INVALID_MSGBOX_STYLE";
      case 0x59f:
LAB_00a9b3e9:
        return "ERROR_INVALID_SPI_VALUE";
      case 0x5a0:
LAB_00a9b3f3:
        return "ERROR_SCREEN_ALREADY_LOCKED";
      case 0x5a1:
LAB_00a9b3fd:
        return "ERROR_HWNDS_HAVE_DIFF_PARENT";
      case 0x5a2:
LAB_00a9b407:
        return "ERROR_NOT_CHILD_WINDOW";
      case 0x5a3:
LAB_00a9b411:
        return "ERROR_INVALID_GW_COMMAND";
      case 0x5a4:
LAB_00a9b41b:
        return "ERROR_INVALID_THREAD_ID";
      case 0x5a5:
LAB_00a9b425:
        return "ERROR_NON_MDICHILD_WINDOW";
      case 0x5a6:
LAB_00a9b42f:
        return "ERROR_POPUP_ALREADY_ACTIVE";
      case 0x5a7:
LAB_00a9b439:
        return "ERROR_NO_SCROLLBARS";
      case 0x5a8:
LAB_00a9b443:
        return "ERROR_INVALID_SCROLLBAR_RANGE";
      case 0x5a9:
LAB_00a9b44d:
        return "ERROR_INVALID_SHOWWIN_COMMAND";
      case 0x5aa:
LAB_00a9b457:
        return "ERROR_NO_SYSTEM_RESOURCES";
      case 0x5ab:
LAB_00a9b461:
        return "ERROR_NONPAGED_SYSTEM_RESOURCES";
      case 0x5ac:
LAB_00a9b46b:
        return "ERROR_PAGED_SYSTEM_RESOURCES";
      case 0x5ad:
LAB_00a9b475:
        return "ERROR_WORKING_SET_QUOTA";
      case 0x5ae:
LAB_00a9b47f:
        return "ERROR_PAGEFILE_QUOTA";
      case 0x5af:
LAB_00a9b489:
        return "ERROR_COMMITMENT_LIMIT";
      case 0x5b0:
LAB_00a9b493:
        return "ERROR_MENU_ITEM_NOT_FOUND";
      case 0x5b1:
LAB_00a9b49d:
        return "ERROR_INVALID_KEYBOARD_HANDLE";
      case 0x5b2:
LAB_00a9b4a7:
        return "ERROR_HOOK_TYPE_NOT_ALLOWED";
      case 0x5b3:
LAB_00a9b4b1:
        return "ERROR_REQUIRES_INTERACTIVE_WINDOWSTATION";
      case 0x5b4:
LAB_00a9b4bb:
        return "ERROR_TIMEOUT";
      case 0x5b5:
LAB_00a9b4c5:
        return "ERROR_INVALID_MONITOR_HANDLE";
      case 0x5dc:
LAB_00a9b4cf:
        return "ERROR_EVENTLOG_FILE_CORRUPT";
      case 0x5dd:
LAB_00a9b4d9:
        return "ERROR_EVENTLOG_CANT_START";
      case 0x5de:
LAB_00a9b4e3:
        return "ERROR_LOG_FILE_FULL";
      case 0x5df:
LAB_00a9b4ed:
        return "ERROR_EVENTLOG_FILE_CHANGED";
      case 0x641:
LAB_00a9b673:
        return "ERROR_INSTALL_SERVICE_FAILURE";
      case 0x642:
LAB_00a9b4f7:
        return "ERROR_INSTALL_USEREXIT";
      case 0x643:
LAB_00a9b501:
        return "ERROR_INSTALL_FAILURE";
      case 0x644:
LAB_00a9b50b:
        return "ERROR_INSTALL_SUSPEND";
      case 0x645:
LAB_00a9b515:
        return "ERROR_UNKNOWN_PRODUCT";
      case 0x646:
LAB_00a9b51f:
        return "ERROR_UNKNOWN_FEATURE";
      case 0x647:
LAB_00a9b529:
        return "ERROR_UNKNOWN_COMPONENT";
      case 0x648:
LAB_00a9b533:
        return "ERROR_UNKNOWN_PROPERTY";
      case 0x649:
LAB_00a9b53d:
        return "ERROR_INVALID_HANDLE_STATE";
      case 0x64a:
LAB_00a9b547:
        return "ERROR_BAD_CONFIGURATION";
      case 0x64b:
LAB_00a9b551:
        return "ERROR_INDEX_ABSENT";
      case 0x64c:
LAB_00a9b55b:
        return "ERROR_INSTALL_SOURCE_ABSENT";
      case 0x64d:
LAB_00a9b67d:
        return "ERROR_INSTALL_PACKAGE_VERSION";
      case 0x64e:
LAB_00a9b565:
        return "ERROR_PRODUCT_UNINSTALLED";
      case 0x64f:
LAB_00a9b56f:
        return "ERROR_BAD_QUERY_SYNTAX";
      case 0x650:
        goto LAB_00a9b579;
      case 0x651:
        goto LAB_00a9b583;
      case 0x652:
        goto LAB_00a9b687;
      case 0x653:
        goto LAB_00a9b691;
      case 0x654:
        goto LAB_00a9b69b;
      case 0x655:
        goto LAB_00a9b6a5;
      case 0x656:
        goto LAB_00a9b6af;
      case 0x657:
        goto LAB_00a9b6b9;
      case 0x658:
        goto LAB_00a9b6c3;
      case 0x659:
        goto LAB_00a9b6cd;
      case 0x65a:
        goto LAB_00a9b6d7;
      }
    }
  }
  else if (param_1 < 0x6a5) {
    if (param_1 == 0x6a4) {
LAB_00a9b7bd:
      return "RPC_S_INVALID_STRING_BINDING";
    }
    switch(param_1) {
    case 0x65c:
LAB_00a9b713:
      return "ERROR_INVALID_TABLE";
    case 0x65d:
LAB_00a9b71d:
      return "ERROR_DATATYPE_MISMATCH";
    case 0x65e:
LAB_00a9b727:
      return "ERROR_UNSUPPORTED_TYPE";
    case 0x65f:
LAB_00a9b731:
      return "ERROR_CREATE_FAILED";
    case 0x660:
LAB_00a9b73b:
      return "ERROR_INSTALL_TEMP_UNWRITABLE";
    case 0x661:
LAB_00a9b745:
      return "ERROR_INSTALL_PLATFORM_UNSUPPORTED";
    case 0x662:
LAB_00a9b74f:
      return "ERROR_INSTALL_NOTUSED";
    case 0x663:
LAB_00a9b759:
      return "ERROR_PATCH_PACKAGE_OPEN_FAILED";
    case 0x664:
LAB_00a9b763:
      return "ERROR_PATCH_PACKAGE_INVALID";
    case 0x665:
LAB_00a9b76d:
      return "ERROR_PATCH_PACKAGE_UNSUPPORTED";
    case 0x666:
LAB_00a9b777:
      return "ERROR_PRODUCT_VERSION";
    case 0x667:
LAB_00a9b781:
      return "ERROR_INVALID_COMMAND_LINE";
    case 0x668:
LAB_00a9b78b:
      return "ERROR_INSTALL_REMOTE_DISALLOWED";
    case 0x669:
LAB_00a9b795:
      return "ERROR_SUCCESS_REBOOT_INITIATED";
    case 0x66a:
LAB_00a9b79f:
      return "ERROR_PATCH_TARGET_NOT_FOUND";
    case 0x66b:
LAB_00a9b7a9:
      return "ERROR_PATCH_PACKAGE_REJECTED";
    case 0x66c:
LAB_00a9b7b3:
      return "ERROR_INSTALL_TRANSFORM_REJECTED";
    }
  }
  else if (param_1 < 0x8cb) {
    if (param_1 == 0x8ca) goto LAB_00a9bf28;
    if (param_1 - 0x6a5U < 0x1f6) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((&DAT_00aa35ab)[param_1]) {
      case 0:
        goto LAB_00a9b7f8;
      case 1:
        goto LAB_00a9b802;
      case 2:
        goto LAB_00a9b80c;
      case 3:
        goto LAB_00a9b816;
      case 4:
        goto LAB_00a9b820;
      case 5:
        goto LAB_00a9b82a;
      case 6:
        goto LAB_00a9b834;
      case 7:
        goto LAB_00a9b83e;
      case 8:
        goto LAB_00a9b848;
      case 9:
        goto LAB_00a9b852;
      case 10:
        goto LAB_00a9b85c;
      case 0xb:
        goto LAB_00a9b866;
      case 0xc:
        goto LAB_00a9b870;
      case 0xd:
        goto LAB_00a9b87a;
      case 0xe:
        goto LAB_00a9b884;
      case 0xf:
        goto LAB_00a9b88e;
      case 0x10:
        goto LAB_00a9b898;
      case 0x11:
        goto LAB_00a9b8a2;
      case 0x12:
        goto LAB_00a9b8ac;
      case 0x13:
        goto LAB_00a9b8b6;
      case 0x14:
        goto LAB_00a9b8c0;
      case 0x15:
        goto LAB_00a9b8ca;
      case 0x16:
        goto LAB_00a9b8d4;
      case 0x17:
        goto LAB_00a9b8de;
      case 0x18:
        goto LAB_00a9b8e8;
      case 0x19:
        goto LAB_00a9b8f2;
      case 0x1a:
        goto LAB_00a9b8fc;
      case 0x1b:
        goto LAB_00a9b906;
      case 0x1c:
        goto LAB_00a9b910;
      case 0x1d:
        goto LAB_00a9b91a;
      case 0x1e:
        goto LAB_00a9b924;
      case 0x1f:
        goto LAB_00a9b92e;
      case 0x20:
        goto LAB_00a9b938;
      case 0x21:
        goto LAB_00a9b942;
      case 0x22:
        goto LAB_00a9b94c;
      case 0x23:
        goto LAB_00a9b956;
      case 0x24:
        goto LAB_00a9b960;
      case 0x25:
        goto LAB_00a9b96a;
      case 0x26:
        goto LAB_00a9b974;
      case 0x27:
        goto LAB_00a9b97e;
      case 0x28:
        goto LAB_00a9b988;
      case 0x29:
        goto LAB_00a9b992;
      case 0x2a:
        goto LAB_00a9b99c;
      case 0x2b:
        goto LAB_00a9b9a6;
      case 0x2c:
        goto LAB_00a9b9b0;
      case 0x2d:
        goto LAB_00a9b9ba;
      case 0x2e:
        goto LAB_00a9b9c4;
      case 0x2f:
        goto LAB_00a9b9ce;
      case 0x30:
        goto LAB_00a9b9d8;
      case 0x31:
        goto LAB_00a9b9e2;
      case 0x32:
        goto LAB_00a9b9ec;
      case 0x33:
        goto LAB_00a9b9f6;
      case 0x34:
        goto LAB_00a9ba00;
      case 0x35:
        goto LAB_00a9ba0a;
      case 0x36:
        goto LAB_00a9ba14;
      case 0x37:
        goto LAB_00a9ba1e;
      case 0x38:
        goto LAB_00a9ba28;
      case 0x39:
        goto LAB_00a9ba32;
      case 0x3a:
        goto LAB_00a9ba3c;
      case 0x3b:
        goto LAB_00a9ba46;
      case 0x3c:
        goto LAB_00a9ba50;
      case 0x3d:
        goto LAB_00a9ba5a;
      case 0x3e:
        goto LAB_00a9ba64;
      case 0x3f:
        goto LAB_00a9ba6e;
      case 0x40:
        goto LAB_00a9ba78;
      case 0x41:
        goto LAB_00a9ba82;
      case 0x42:
        goto LAB_00a9ba8c;
      case 0x43:
        goto LAB_00a9ba96;
      case 0x44:
        goto LAB_00a9baa0;
      case 0x45:
        goto LAB_00a9baaa;
      case 0x46:
        goto LAB_00a9bab4;
      case 0x47:
        goto LAB_00a9babe;
      case 0x48:
        goto LAB_00a9bac8;
      case 0x49:
        goto LAB_00a9bad2;
      case 0x4a:
        goto LAB_00a9badc;
      case 0x4b:
        goto LAB_00a9bae6;
      case 0x4c:
        goto LAB_00a9baf0;
      case 0x4d:
        goto LAB_00a9bafa;
      case 0x4e:
        goto LAB_00a9bb04;
      case 0x4f:
        goto LAB_00a9bb0e;
      case 0x50:
        goto LAB_00a9bb18;
      case 0x51:
        goto LAB_00a9bb22;
      case 0x52:
        goto LAB_00a9bb2c;
      case 0x53:
        goto LAB_00a9bb36;
      case 0x54:
        goto LAB_00a9bb40;
      case 0x55:
        goto LAB_00a9bb4a;
      case 0x56:
        goto LAB_00a9bb54;
      case 0x57:
        goto LAB_00a9bb5e;
      case 0x58:
        goto LAB_00a9bb68;
      case 0x59:
        goto LAB_00a9bb72;
      case 0x5a:
        goto LAB_00a9bb7c;
      case 0x5b:
        goto LAB_00a9bb86;
      case 0x5c:
        goto LAB_00a9bb90;
      case 0x5d:
        goto LAB_00a9bb9a;
      case 0x5e:
        goto LAB_00a9bba4;
      case 0x5f:
        goto LAB_00a9bbae;
      case 0x60:
        goto LAB_00a9bbb8;
      case 0x61:
        goto LAB_00a9bbc2;
      case 0x62:
        goto LAB_00a9bbcc;
      case 99:
        goto LAB_00a9bbd6;
      case 100:
        goto LAB_00a9bbe0;
      case 0x65:
        goto LAB_00a9bbea;
      case 0x66:
        goto LAB_00a9bbf4;
      case 0x67:
        goto LAB_00a9bbfe;
      case 0x68:
        goto LAB_00a9bc08;
      case 0x69:
        goto LAB_00a9bc12;
      case 0x6a:
        goto LAB_00a9bc1c;
      case 0x6b:
        goto LAB_00a9bc26;
      case 0x6c:
        goto LAB_00a9bc30;
      case 0x6d:
        goto LAB_00a9bc3a;
      case 0x6e:
        goto LAB_00a9bc44;
      case 0x6f:
        goto LAB_00a9bc4e;
      case 0x70:
        goto LAB_00a9bc58;
      case 0x71:
        goto LAB_00a9bc62;
      case 0x72:
        goto LAB_00a9bc6c;
      case 0x73:
        goto LAB_00a9bc76;
      case 0x74:
        goto LAB_00a9bc80;
      case 0x75:
        goto LAB_00a9bc8a;
      case 0x76:
        goto LAB_00a9bc94;
      case 0x77:
        goto LAB_00a9bc9e;
      case 0x78:
        goto LAB_00a9bca8;
      case 0x79:
        goto LAB_00a9bcb2;
      case 0x7a:
        goto LAB_00a9bcbc;
      case 0x7b:
        goto LAB_00a9bcc6;
      case 0x7c:
        goto LAB_00a9bcd0;
      case 0x7d:
        goto LAB_00a9bcda;
      case 0x7e:
        goto LAB_00a9bce4;
      case 0x7f:
        goto LAB_00a9bcee;
      case 0x80:
        goto LAB_00a9bcf8;
      case 0x81:
        goto LAB_00a9bd02;
      case 0x82:
        goto LAB_00a9bd0c;
      case 0x83:
        goto LAB_00a9bd16;
      case 0x84:
        goto LAB_00a9bd20;
      case 0x85:
        goto LAB_00a9bd2a;
      case 0x86:
        goto LAB_00a9bd34;
      case 0x87:
        goto LAB_00a9bd3e;
      case 0x88:
        goto LAB_00a9bd48;
      case 0x89:
        goto LAB_00a9bd52;
      case 0x8a:
        goto LAB_00a9bd5c;
      case 0x8b:
        goto LAB_00a9bd66;
      case 0x8c:
        goto LAB_00a9bd70;
      case 0x8d:
        goto LAB_00a9bd7a;
      case 0x8e:
        goto LAB_00a9bd84;
      case 0x8f:
        goto LAB_00a9bd8e;
      case 0x90:
        goto LAB_00a9bd98;
      case 0x91:
        goto LAB_00a9bda2;
      case 0x92:
        goto LAB_00a9bdac;
      case 0x93:
        goto LAB_00a9bdb6;
      case 0x94:
        goto LAB_00a9bdc0;
      case 0x95:
        goto LAB_00a9bdca;
      case 0x96:
        goto LAB_00a9bdd4;
      case 0x97:
        goto LAB_00a9bdde;
      case 0x98:
        goto LAB_00a9beba;
      case 0x99:
        goto LAB_00a9bec4;
      case 0x9a:
        goto LAB_00a9bece;
      case 0x9b:
        goto LAB_00a9bed8;
      case 0x9c:
        goto LAB_00a9bee2;
      case 0x9d:
        goto LAB_00a9beec;
      case 0x9e:
        goto LAB_00a9bef6;
      case 0x9f:
        goto LAB_00a9bf00;
      case 0xa0:
        goto LAB_00a9bf0a;
      case 0xa1:
        goto LAB_00a9bf14;
      case 0xa2:
        goto LAB_00a9bde8;
      case 0xa3:
        goto LAB_00a9bdf2;
      case 0xa4:
        goto LAB_00a9bdfc;
      case 0xa5:
        goto LAB_00a9be06;
      case 0xa6:
        goto LAB_00a9be10;
      case 0xa7:
        goto LAB_00a9be1a;
      case 0xa8:
        goto LAB_00a9be24;
      case 0xa9:
        goto LAB_00a9be2e;
      case 0xaa:
        goto LAB_00a9be38;
      case 0xab:
        goto LAB_00a9be42;
      case 0xac:
        goto LAB_00a9be4c;
      case 0xad:
        goto LAB_00a9be56;
      case 0xae:
        goto LAB_00a9be60;
      case 0xaf:
        goto LAB_00a9be6a;
      case 0xb0:
        goto LAB_00a9be74;
      case 0xb1:
        goto LAB_00a9be7e;
      case 0xb2:
        goto LAB_00a9be88;
      case 0xb3:
        goto LAB_00a9be92;
      case 0xb4:
        goto LAB_00a9be9c;
      case 0xb5:
        goto LAB_00a9bea6;
      case 0xb6:
        goto LAB_00a9bf1e;
      case 0xb7:
        goto LAB_00a9beb0;
      }
    }
  }
  else if (param_1 < 0x2159) {
    if (param_1 == 0x2158) {
LAB_00a9d8d4:
      return "ERROR_DS_DESTINATION_AUDITING_NOT_ENABLED";
    }
    if (param_1 < 0x2018) {
      if (param_1 == 0x2017) goto LAB_00a9cdc3;
      if (param_1 < 0x13bb) {
        if (param_1 == 0x13ba) {
LAB_00a9c6a3:
          return "ERROR_CLUSTER_NODE_DOWN";
        }
        if (param_1 < 0x10ea) {
          if (param_1 == 0x10e9) {
LAB_00a9c325:
            return "ERROR_CONTROLLING_IEPORT";
          }
          if (param_1 < 0x1072) {
            if (param_1 == 0x1071) goto LAB_00a9c1ab;
            if (param_1 < 0xbc7) {
              if (param_1 == 0xbc6) goto LAB_00a9c0a7;
              if (param_1 < 0xbbe) {
                if (param_1 == 0xbbd) goto LAB_00a9c038;
                if (param_1 < 0xbba) {
                  if (param_1 == 0xbb9) goto LAB_00a9bfff;
                  if (param_1 == 0x961) goto LAB_00a9bff5;
                  if (param_1 == 0x962) goto LAB_00a9bfeb;
                  if (param_1 == 0x964) goto LAB_00a9bfe1;
                  if (param_1 == 3000) goto LAB_00a9bfd7;
                }
                else {
                  if (param_1 == 0xbba) goto LAB_00a9c02e;
                  if (param_1 == 0xbbb) goto LAB_00a9c024;
                  if (param_1 == 0xbbc) goto LAB_00a9c01a;
                }
              }
              else {
                switch(param_1) {
                case 0xbbe:
                  goto LAB_00a9c057;
                case 0xbbf:
                  goto LAB_00a9c061;
                case 0xbc0:
                  goto LAB_00a9c06b;
                case 0xbc1:
                  goto LAB_00a9c075;
                case 0xbc2:
                  goto LAB_00a9c07f;
                case 0xbc3:
                  goto LAB_00a9c089;
                case 0xbc4:
                  goto LAB_00a9c093;
                case 0xbc5:
                  goto LAB_00a9c09d;
                }
              }
            }
            else if (param_1 < 0x1069) {
              if (param_1 == 0x1068) goto LAB_00a9c146;
              if (param_1 < 0xfa5) {
                if (param_1 == 0xfa4) goto LAB_00a9c10b;
                if (param_1 == 4000) goto LAB_00a9c101;
                if (param_1 == 0xfa1) goto LAB_00a9c0f7;
                if (param_1 == 0xfa2) goto LAB_00a9c0ed;
                if (param_1 == 0xfa3) goto LAB_00a9c0e3;
              }
              else {
                if (param_1 == 0xfa5) goto LAB_00a9c13c;
                if (param_1 == 0xfa6) goto LAB_00a9c132;
                if (param_1 == 0x1004) goto LAB_00a9c128;
              }
            }
            else {
              switch(param_1) {
              case 0x1069:
                goto LAB_00a9c165;
              case 0x106a:
                goto LAB_00a9c16f;
              case 0x106b:
LAB_00a9c179:
                return "ERROR_WMI_TRY_AGAIN";
              case 0x106c:
LAB_00a9c183:
                return "ERROR_WMI_DP_NOT_FOUND";
              case 0x106d:
LAB_00a9c18d:
                return "ERROR_WMI_UNRESOLVED_INSTANCE_REF";
              case 0x106e:
LAB_00a9c197:
                return "ERROR_WMI_ALREADY_ENABLED";
              case 0x106f:
code_r0x00a9663a:
                return "ERROR_WMI_GUID_DISCONNECTED";
              case 0x1070:
                goto LAB_00a9c1a1;
              }
            }
          }
          else {
            switch(param_1) {
            case 0x1072:
              goto LAB_00a9c1d1;
            case 0x1073:
              goto LAB_00a9c1db;
            case 0x1074:
              goto LAB_00a9c1e5;
            case 0x1075:
              goto LAB_00a9c1ef;
            case 0x1076:
              goto LAB_00a9c1f9;
            case 0x10cc:
              goto LAB_00a9c203;
            case 0x10cd:
              goto LAB_00a9c20d;
            case 0x10ce:
              goto LAB_00a9c217;
            case 0x10cf:
              goto LAB_00a9c221;
            case 0x10d0:
              goto LAB_00a9c22b;
            case 0x10d1:
              goto LAB_00a9c235;
            case 0x10d2:
              goto LAB_00a9c23f;
            case 0x10d3:
              goto LAB_00a9c249;
            case 0x10d4:
              goto LAB_00a9c253;
            case 0x10d5:
              goto LAB_00a9c25d;
            case 0x10d6:
              goto LAB_00a9c267;
            case 0x10d7:
              goto LAB_00a9c271;
            case 0x10d8:
              goto LAB_00a9c27b;
            case 0x10d9:
              goto LAB_00a9c285;
            case 0x10da:
              goto LAB_00a9c28f;
            case 0x10db:
              goto LAB_00a9c299;
            case 0x10dc:
              goto LAB_00a9c2a3;
            case 0x10dd:
              goto LAB_00a9c2ad;
            case 0x10de:
              goto LAB_00a9c2b7;
            case 0x10df:
              goto LAB_00a9c2c1;
            case 0x10e0:
              goto LAB_00a9c2cb;
            case 0x10e1:
              goto LAB_00a9c2d5;
            case 0x10e2:
              goto LAB_00a9c2df;
            case 0x10e3:
              goto LAB_00a9c2e9;
            case 0x10e4:
              goto LAB_00a9c2f3;
            case 0x10e5:
              goto LAB_00a9c2fd;
            case 0x10e6:
              goto LAB_00a9c307;
            case 0x10e7:
              goto LAB_00a9c311;
            case 0x10e8:
              goto LAB_00a9c31b;
            }
          }
        }
        else if (param_1 < 0x1127) {
          if (param_1 == 0x1126) goto LAB_00a9c3ea;
          switch(param_1) {
          case 0x10ea:
            goto LAB_00a9c35e;
          case 0x10eb:
            goto LAB_00a9c368;
          case 0x10ec:
            goto LAB_00a9c372;
          case 0x10ed:
            goto LAB_00a9c37c;
          case 0x10ee:
            goto LAB_00a9c386;
          case 0x10ef:
            goto LAB_00a9c390;
          case 0x10f0:
            goto LAB_00a9c39a;
          case 0x10f1:
            goto LAB_00a9c3c2;
          case 0x10f2:
            goto LAB_00a9c3cc;
          case 0x10f3:
            goto LAB_00a9c3d6;
          case 0x10f4:
            goto LAB_00a9c3e0;
          case 0x10fe:
            goto LAB_00a9c3a4;
          case 0x10ff:
            goto LAB_00a9c3ae;
          case 0x1100:
            goto LAB_00a9c3b8;
          }
        }
        else if (param_1 < 0x13a0) {
          if (param_1 == 0x139f) goto LAB_00a9c580;
          if (param_1 < 0x1392) {
            if (param_1 == 0x1391) goto LAB_00a9c4df;
            if (param_1 < 0x138b) {
              if (param_1 == 0x138a) goto LAB_00a9c47f;
              if (param_1 == 0x1127) goto LAB_00a9c475;
              if (param_1 == 0x1128) goto LAB_00a9c46b;
              if (param_1 == 0x1129) goto LAB_00a9c461;
              if (param_1 == 0x112a) goto LAB_00a9c457;
              if (param_1 == 0x1194) goto LAB_00a9c44d;
              if (param_1 == 0x1389) goto LAB_00a9c443;
            }
            else {
              if (param_1 == 0x138b) goto LAB_00a9c4d5;
              if (param_1 == 0x138c) goto LAB_00a9c4cb;
              if (param_1 == 0x138d) goto LAB_00a9c4c1;
              if (param_1 == 0x138e) goto LAB_00a9c4b7;
              if (param_1 == 0x138f) goto LAB_00a9c4ad;
              if (param_1 == 0x1390) goto LAB_00a9c4a3;
            }
          }
          else {
            switch(param_1) {
            case 0x1392:
              goto LAB_00a9c4fe;
            case 0x1393:
              goto LAB_00a9c508;
            case 0x1394:
              goto LAB_00a9c512;
            case 0x1395:
              goto LAB_00a9c51c;
            case 0x1396:
              goto LAB_00a9c526;
            case 0x1397:
              goto LAB_00a9c530;
            case 0x1398:
              goto LAB_00a9c53a;
            case 0x1399:
              goto LAB_00a9c544;
            case 0x139a:
              goto LAB_00a9c54e;
            case 0x139b:
              goto LAB_00a9c558;
            case 0x139c:
              goto LAB_00a9c562;
            case 0x139d:
              goto LAB_00a9c56c;
            case 0x139e:
              goto LAB_00a9c576;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x13a0:
            goto LAB_00a9c59f;
          case 0x13a1:
            goto LAB_00a9c5a9;
          case 0x13a2:
            goto LAB_00a9c5b3;
          case 0x13a3:
            goto LAB_00a9c5bd;
          case 0x13a4:
            goto LAB_00a9c5c7;
          case 0x13a5:
            goto LAB_00a9c5d1;
          case 0x13a6:
            goto LAB_00a9c5db;
          case 0x13a7:
            goto LAB_00a9c5e5;
          case 0x13a8:
            goto LAB_00a9c5ef;
          case 0x13a9:
            goto LAB_00a9c5f9;
          case 0x13aa:
            goto LAB_00a9c603;
          case 0x13ab:
            goto LAB_00a9c60d;
          case 0x13ac:
            goto LAB_00a9c617;
          case 0x13ad:
            goto LAB_00a9c621;
          case 0x13ae:
            goto LAB_00a9c62b;
          case 0x13af:
            goto LAB_00a9c635;
          case 0x13b0:
            goto LAB_00a9c63f;
          case 0x13b1:
            goto LAB_00a9c649;
          case 0x13b2:
            goto LAB_00a9c653;
          case 0x13b3:
            goto LAB_00a9c65d;
          case 0x13b4:
            goto LAB_00a9c667;
          case 0x13b5:
            goto LAB_00a9c671;
          case 0x13b6:
            goto LAB_00a9c67b;
          case 0x13b7:
            goto LAB_00a9c685;
          case 0x13b8:
            goto LAB_00a9c68f;
          case 0x13b9:
            goto LAB_00a9c699;
          }
        }
      }
      else if (param_1 < 0x1703) {
        if (param_1 == 0x1702) goto LAB_00a9c851;
        switch(param_1) {
        case 0x13bb:
          goto LAB_00a9c6d5;
        case 0x13bc:
          goto LAB_00a9c6df;
        case 0x13bd:
          goto LAB_00a9c6e9;
        case 0x13be:
          goto LAB_00a9c6f3;
        case 0x13c0:
          goto LAB_00a9c6fd;
        case 0x13c1:
          goto LAB_00a9c707;
        case 0x13c2:
          goto LAB_00a9c711;
        case 0x13c3:
          goto LAB_00a9c71b;
        case 0x13c4:
          goto LAB_00a9c725;
        case 0x13c5:
          goto LAB_00a9c72f;
        case 0x13c6:
          goto LAB_00a9c739;
        case 0x13c7:
          goto LAB_00a9c743;
        case 0x13c8:
          goto LAB_00a9c74d;
        case 0x13c9:
          goto LAB_00a9c757;
        case 0x13ca:
          goto LAB_00a9c761;
        case 0x13cb:
          goto LAB_00a9c76b;
        case 0x13cc:
          goto LAB_00a9c775;
        case 0x13cd:
          goto LAB_00a9c77f;
        case 0x13ce:
          goto LAB_00a9c789;
        case 0x13cf:
          goto LAB_00a9c793;
        case 0x13d0:
          goto LAB_00a9c79d;
        case 0x13d1:
          goto LAB_00a9c7a7;
        case 0x13d2:
          goto LAB_00a9c7b1;
        case 0x13d3:
          goto LAB_00a9c7bb;
        case 0x13d4:
          goto LAB_00a9c7c5;
        case 0x13d5:
          goto LAB_00a9c7cf;
        case 0x13d6:
          goto LAB_00a9c7d9;
        case 0x13d7:
          goto LAB_00a9c7e3;
        case 0x13d8:
          goto LAB_00a9c7ed;
        case 0x13d9:
          goto LAB_00a9c7f7;
        case 0x13da:
          goto LAB_00a9c801;
        case 0x13db:
          goto LAB_00a9c80b;
        case 0x13dc:
          goto LAB_00a9c815;
        case 0x13dd:
          goto LAB_00a9c81f;
        case 0x13de:
          goto LAB_00a9c829;
        case 0x13df:
          goto LAB_00a9c833;
        case 0x13e0:
          goto LAB_00a9c83d;
        case 0x13e1:
          goto LAB_00a9c847;
        }
      }
      else if (param_1 < 0x1771) {
        if (param_1 == 6000) goto LAB_00a9c8e3;
        switch(param_1) {
        case 0x1703:
          goto LAB_00a9c87f;
        case 0x1704:
          goto LAB_00a9c889;
        case 0x1705:
          goto LAB_00a9c893;
        case 0x1706:
          goto LAB_00a9c89d;
        case 0x1707:
          goto LAB_00a9c8a7;
        case 0x1708:
          goto LAB_00a9c8b1;
        case 0x1709:
          goto LAB_00a9c8bb;
        case 0x170a:
          goto LAB_00a9c8c5;
        case 0x170b:
          goto LAB_00a9c8cf;
        case 0x170c:
          goto LAB_00a9c8d9;
        }
      }
      else if (param_1 < 0x17e7) {
        if (param_1 == 0x17e6) goto LAB_00a9c9b5;
        switch(param_1) {
        case 0x1771:
          goto LAB_00a9c915;
        case 0x1772:
          goto LAB_00a9c91f;
        case 0x1773:
          goto LAB_00a9c929;
        case 0x1774:
          goto LAB_00a9c933;
        case 0x1775:
          goto LAB_00a9c93d;
        case 0x1776:
          goto LAB_00a9c947;
        case 0x1777:
          goto LAB_00a9c951;
        case 0x1778:
          goto LAB_00a9c95b;
        case 0x1779:
          goto LAB_00a9c965;
        case 0x177a:
          goto LAB_00a9c96f;
        case 0x177b:
          goto LAB_00a9c979;
        case 0x177c:
          goto LAB_00a9c983;
        case 0x177d:
          goto LAB_00a9c98d;
        case 0x177e:
          goto LAB_00a9c997;
        case 0x177f:
          goto LAB_00a9c9a1;
        case 0x1780:
          goto LAB_00a9c9ab;
        }
      }
      else if (param_1 < 0x1b90) {
        if (param_1 == 0x1b8f) {
LAB_00a9cbbe:
          return "ERROR_CTX_LICENSE_CLIENT_INVALID";
        }
        if (param_1 < 0x1b6f) {
          if (param_1 == 0x1b6e) goto LAB_00a9caee;
          if (param_1 < 0x1b62) {
            if (param_1 == 0x1b61) goto LAB_00a9ca7f;
            if (param_1 < 0x1b5d) {
              if (param_1 == 0x1b5c) goto LAB_00a9ca3f;
              if (param_1 == 0x1838) goto LAB_00a9ca35;
              if (param_1 == 0x1b59) goto LAB_00a9ca2b;
              if (param_1 == 0x1b5a) goto LAB_00a9ca21;
              if (param_1 == 0x1b5b) goto LAB_00a9ca17;
            }
            else {
              if (param_1 == 0x1b5d) goto LAB_00a9ca75;
              if (param_1 == 0x1b5e) goto LAB_00a9ca6b;
              if (param_1 == 0x1b5f) goto LAB_00a96874;
              if (param_1 == 0x1b60) goto LAB_00a9ca61;
            }
          }
          else {
            switch(param_1) {
            case 0x1b62:
              goto LAB_00a9ca9e;
            case 0x1b63:
              goto LAB_00a9caa8;
            case 0x1b64:
              goto LAB_00a9cab2;
            case 0x1b65:
              goto LAB_00a9cabc;
            case 0x1b66:
              goto LAB_00a9cac6;
            case 0x1b67:
              goto LAB_00a9cad0;
            case 0x1b68:
              goto LAB_00a9cada;
            case 0x1b69:
              goto LAB_00a9cae4;
            }
          }
        }
        else {
          switch(param_1) {
          case 0x1b6f:
            goto LAB_00a9cb14;
          case 0x1b70:
            goto LAB_00a9cb1e;
          case 0x1b71:
            goto LAB_00a9cb28;
          case 0x1b7b:
            goto LAB_00a9cb32;
          case 0x1b7d:
            goto LAB_00a9cb3c;
          case 0x1b7e:
            goto LAB_00a9cb46;
          case 0x1b80:
            goto LAB_00a9cb50;
          case 0x1b81:
            goto LAB_00a9cb5a;
          case 0x1b82:
            goto LAB_00a9cb64;
          case 0x1b84:
            goto LAB_00a9cb6e;
          case 0x1b85:
            goto LAB_00a9cb78;
          case 0x1b89:
            goto LAB_00a9cb82;
          case 0x1b8a:
            goto LAB_00a9cb8c;
          case 0x1b8b:
            goto LAB_00a9cb96;
          case 0x1b8c:
            goto LAB_00a9cba0;
          case 0x1b8d:
            goto LAB_00a9cbaa;
          case 0x1b8e:
            goto LAB_00a9cbb4;
          }
        }
      }
      else if (param_1 < 0x1f50) {
        if (param_1 == 0x1f4f) {
LAB_00a9cccf:
          return "FRS_ERR_SYSVOL_IS_BUSY";
        }
        if (param_1 < 0x1f47) {
          if (param_1 == 0x1f46) goto LAB_00a9cc60;
          if (param_1 < 0x1f43) {
            if (param_1 == 0x1f42) goto LAB_00a9cc2d;
            if (param_1 == 0x1b90) goto LAB_00a9cc23;
            if (param_1 == 0x1b91) goto LAB_00a9cc19;
            if (param_1 == 0x1b92) goto LAB_00a9690a;
            if (param_1 == 0x1f41) goto LAB_00a9cc0f;
          }
          else {
            if (param_1 == 0x1f43) goto LAB_00a9cc56;
            if (param_1 == 0x1f44) goto LAB_00a96935;
            if (param_1 == 0x1f45) goto LAB_00a9cc4c;
          }
        }
        else {
          switch(param_1) {
          case 0x1f47:
            goto LAB_00a9cc7f;
          case 0x1f48:
            goto LAB_00a9cc89;
          case 0x1f49:
            goto LAB_00a9cc93;
          case 0x1f4a:
            goto LAB_00a9cc9d;
          case 0x1f4b:
            goto LAB_00a9cca7;
          case 0x1f4c:
            goto LAB_00a9ccb1;
          case 0x1f4d:
            goto LAB_00a9ccbb;
          case 0x1f4e:
            goto LAB_00a9ccc5;
          }
        }
      }
      else if (param_1 < 0x200f) {
        if (param_1 == 0x200e) goto LAB_00a9cd5e;
        if (param_1 < 0x200b) {
          if (param_1 == 0x200a) goto LAB_00a9cd2b;
          if (param_1 == 0x1f50) goto LAB_00a9cd21;
          if (param_1 == 0x1f51) goto LAB_00a9cd17;
          if (param_1 == 0x2008) goto LAB_00a9699c;
          if (param_1 == 0x2009) goto LAB_00a9cd0d;
        }
        else {
          if (param_1 == 0x200b) goto LAB_00a9cd54;
          if (param_1 == 0x200c) goto LAB_00a969c7;
          if (param_1 == 0x200d) goto LAB_00a9cd4a;
        }
      }
      else {
        switch(param_1) {
        case 0x200f:
          goto LAB_00a9cd7d;
        case 0x2010:
LAB_00a9cd87:
          return "ERROR_DS_NO_RIDS_ALLOCATED";
        case 0x2011:
LAB_00a9cd91:
          return "ERROR_DS_NO_MORE_RIDS";
        case 0x2012:
LAB_00a9cd9b:
          return "ERROR_DS_INCORRECT_ROLE_OWNER";
        case 0x2013:
LAB_00a9cda5:
          return "ERROR_DS_RIDMGR_INIT_ERROR";
        case 0x2014:
code_r0x00a96a1e:
          return "ERROR_DS_OBJ_CLASS_VIOLATION";
        case 0x2015:
          goto LAB_00a9cdaf;
        case 0x2016:
          goto LAB_00a9cdb9;
        }
      }
    }
    else {
      switch(param_1) {
      case 0x2018:
        goto LAB_00a9cde4;
      case 0x2019:
        goto LAB_00a9cdee;
      case 0x201a:
        goto LAB_00a9cdf8;
      case 0x201b:
        goto LAB_00a9ce02;
      case 0x201c:
        goto LAB_00a9ce0c;
      case 0x201d:
        goto LAB_00a9ce16;
      case 0x201e:
        goto LAB_00a9ce20;
      case 0x2020:
        goto LAB_00a9ce2a;
      case 0x2021:
        goto LAB_00a9ce34;
      case 0x2022:
        goto LAB_00a9ce3e;
      case 0x2023:
        goto LAB_00a9ce48;
      case 0x2024:
        goto LAB_00a9ce52;
      case 0x2025:
        goto LAB_00a9ce5c;
      case 0x2026:
        goto LAB_00a9ce66;
      case 0x2027:
        goto LAB_00a9ce70;
      case 0x2028:
        goto LAB_00a9ce7a;
      case 0x2029:
        goto LAB_00a9ce84;
      case 0x202a:
        goto LAB_00a9ce8e;
      case 0x202b:
        goto LAB_00a9ce98;
      case 0x202c:
        goto LAB_00a9cea2;
      case 0x202d:
        goto LAB_00a9ceac;
      case 0x202e:
        goto LAB_00a9ceb6;
      case 0x202f:
        goto LAB_00a9cec0;
      case 0x2030:
        goto LAB_00a9ceca;
      case 0x2031:
        goto LAB_00a9ced4;
      case 0x2032:
        goto LAB_00a9cede;
      case 0x2033:
        goto LAB_00a9cee8;
      case 0x2034:
        goto LAB_00a9cef2;
      case 0x2035:
        goto LAB_00a9cefc;
      case 0x2036:
        goto LAB_00a9cf06;
      case 0x2037:
        goto LAB_00a9cf10;
      case 0x2038:
        goto LAB_00a9cf1a;
      case 0x2039:
        goto LAB_00a9cf24;
      case 0x203a:
        goto LAB_00a9cf2e;
      case 0x203b:
        goto LAB_00a9cf38;
      case 0x203c:
        goto LAB_00a9cf42;
      case 0x203d:
        goto LAB_00a9cf4c;
      case 0x203e:
        goto LAB_00a9cf56;
      case 0x203f:
        goto LAB_00a9cf60;
      case 0x2040:
        goto LAB_00a9cf6a;
      case 0x2041:
        goto LAB_00a9cf74;
      case 0x2042:
        goto LAB_00a9cf7e;
      case 0x2043:
        goto LAB_00a9cf88;
      case 0x2044:
        goto LAB_00a9cf92;
      case 0x2045:
        goto LAB_00a9d672;
      case 0x2046:
        goto LAB_00a9d67c;
      case 0x206d:
        goto LAB_00a9cf9c;
      case 0x206e:
        goto LAB_00a9cfa6;
      case 0x206f:
        goto LAB_00a9cfb0;
      case 0x2070:
        goto LAB_00a9cfba;
      case 0x2071:
        goto LAB_00a9cfc4;
      case 0x2072:
        goto LAB_00a9cfce;
      case 0x2073:
        goto LAB_00a9cfd8;
      case 0x2074:
        goto LAB_00a9cfe2;
      case 0x2075:
        goto LAB_00a9cfec;
      case 0x2076:
        goto LAB_00a9cff6;
      case 0x2077:
        goto LAB_00a9d000;
      case 0x2078:
        goto LAB_00a9d00a;
      case 0x2079:
        goto LAB_00a9d014;
      case 0x207a:
        goto LAB_00a9d01e;
      case 0x207b:
        goto LAB_00a9d028;
      case 0x207c:
        goto LAB_00a9d032;
      case 0x207d:
        goto LAB_00a9d03c;
      case 0x207e:
        goto LAB_00a9d046;
      case 0x2080:
        goto LAB_00a9d050;
      case 0x2081:
        goto LAB_00a9d05a;
      case 0x2082:
        goto LAB_00a9d064;
      case 0x2083:
        goto LAB_00a9d06e;
      case 0x2084:
        goto LAB_00a9d078;
      case 0x2085:
        goto LAB_00a9d082;
      case 0x2086:
        goto LAB_00a9d08c;
      case 0x2087:
        goto LAB_00a9d096;
      case 0x2088:
        goto LAB_00a9d0a0;
      case 0x2089:
        goto LAB_00a9d0aa;
      case 0x208a:
        goto LAB_00a9d0b4;
      case 0x208b:
        goto LAB_00a9d0be;
      case 0x208c:
        goto LAB_00a9d0c8;
      case 0x208d:
        goto LAB_00a9d0d2;
      case 0x208e:
        goto LAB_00a9d0dc;
      case 0x208f:
        goto LAB_00a9d0e6;
      case 0x2090:
        goto LAB_00a9d0f0;
      case 0x2091:
        goto LAB_00a9d0fa;
      case 0x2092:
        goto LAB_00a9d104;
      case 0x2093:
        goto LAB_00a9d686;
      case 0x2094:
        goto LAB_00a9d10e;
      case 0x2095:
        goto LAB_00a9d118;
      case 0x2096:
        goto LAB_00a9d122;
      case 0x2097:
        goto LAB_00a9d12c;
      case 0x2098:
        goto LAB_00a9d136;
      case 0x2099:
        goto LAB_00a9d140;
      case 0x209a:
        goto LAB_00a9d14a;
      case 0x209b:
        goto LAB_00a9d154;
      case 0x209c:
        goto LAB_00a9d15e;
      case 0x209d:
        goto LAB_00a9d168;
      case 0x209e:
        goto LAB_00a9d172;
      case 0x209f:
        goto LAB_00a9d17c;
      case 0x20a0:
        goto LAB_00a9d186;
      case 0x20a1:
        goto LAB_00a9d190;
      case 0x20a2:
        goto LAB_00a9d19a;
      case 0x20a3:
        goto LAB_00a9d1a4;
      case 0x20a4:
        goto LAB_00a9d1ae;
      case 0x20a5:
        goto LAB_00a9d1b8;
      case 0x20a6:
        goto LAB_00a9d1c2;
      case 0x20a7:
        goto LAB_00a9d1cc;
      case 0x20a8:
        goto LAB_00a9d1d6;
      case 0x20a9:
        goto LAB_00a9d1e0;
      case 0x20aa:
        goto LAB_00a9d1ea;
      case 0x20ab:
        goto LAB_00a9d1f4;
      case 0x20ac:
        goto LAB_00a9d1fe;
      case 0x20ad:
        goto LAB_00a9d208;
      case 0x20ae:
        goto LAB_00a9d212;
      case 0x20af:
        goto LAB_00a9d21c;
      case 0x20b0:
        goto LAB_00a9d226;
      case 0x20b1:
        goto LAB_00a9d230;
      case 0x20b2:
        goto LAB_00a9d23a;
      case 0x20b3:
        goto LAB_00a9d244;
      case 0x20b4:
        goto LAB_00a9d24e;
      case 0x20b5:
        goto LAB_00a9d258;
      case 0x20b6:
        goto LAB_00a9d262;
      case 0x20b7:
        goto LAB_00a9d26c;
      case 0x20b8:
        goto LAB_00a9d276;
      case 0x20b9:
        goto LAB_00a9d280;
      case 0x20ba:
        goto LAB_00a9d28a;
      case 0x20bb:
        goto LAB_00a9d294;
      case 0x20bc:
        goto LAB_00a9d29e;
      case 0x20bd:
        goto LAB_00a9d2a8;
      case 0x20be:
        goto LAB_00a9d2b2;
      case 0x20bf:
        goto LAB_00a9d2bc;
      case 0x20c0:
        goto LAB_00a9d2c6;
      case 0x20c1:
        goto LAB_00a9d2d0;
      case 0x20c2:
        goto LAB_00a9d2da;
      case 0x20c3:
        goto LAB_00a9d2e4;
      case 0x20c4:
        goto LAB_00a9d2ee;
      case 0x20c5:
        goto LAB_00a9d2f8;
      case 0x20c6:
        goto LAB_00a9d302;
      case 0x20c7:
        goto LAB_00a9d30c;
      case 0x20c8:
        goto LAB_00a9d316;
      case 0x20c9:
        goto LAB_00a9d320;
      case 0x20ca:
        goto LAB_00a9d32a;
      case 0x20cb:
        goto LAB_00a9d334;
      case 0x20cc:
        goto LAB_00a9d33e;
      case 0x20cd:
        goto LAB_00a9d348;
      case 0x20ce:
        goto LAB_00a9d352;
      case 0x20cf:
        goto LAB_00a9d35c;
      case 0x20d0:
        goto LAB_00a9d366;
      case 0x20d1:
        goto LAB_00a9d370;
      case 0x20d2:
        goto LAB_00a9d37a;
      case 0x20d3:
        goto LAB_00a9d384;
      case 0x20d4:
        goto LAB_00a9d38e;
      case 0x20d5:
        goto LAB_00a9d398;
      case 0x20d6:
        goto LAB_00a9d3a2;
      case 0x20d7:
        goto LAB_00a9d3ac;
      case 0x20d8:
        goto LAB_00a9d3b6;
      case 0x20d9:
        goto LAB_00a9d3c0;
      case 0x20da:
        goto LAB_00a9d3ca;
      case 0x20db:
        goto LAB_00a9d3d4;
      case 0x20dc:
        goto LAB_00a9d3de;
      case 0x20dd:
        goto LAB_00a9d3e8;
      case 0x20de:
        goto LAB_00a9d3f2;
      case 0x20df:
        goto LAB_00a9d3fc;
      case 0x20e0:
        goto LAB_00a9d406;
      case 0x20e1:
        goto LAB_00a9d410;
      case 0x20e2:
        goto LAB_00a9d41a;
      case 0x20e3:
        goto LAB_00a9d424;
      case 0x20e4:
        goto LAB_00a9d42e;
      case 0x20e5:
        goto LAB_00a9d438;
      case 0x20e6:
        goto LAB_00a9d442;
      case 0x20e7:
        goto LAB_00a9d44c;
      case 0x20e8:
        goto LAB_00a9d456;
      case 0x20e9:
        goto LAB_00a9d460;
      case 0x20ea:
        goto LAB_00a9d46a;
      case 0x20eb:
        goto LAB_00a9d474;
      case 0x20ec:
        goto LAB_00a9d47e;
      case 0x20ed:
        goto LAB_00a9d488;
      case 0x20ee:
        goto LAB_00a9d492;
      case 0x20ef:
        goto LAB_00a9d49c;
      case 0x20f0:
        goto LAB_00a9d4a6;
      case 0x20f1:
        goto LAB_00a9d4b0;
      case 0x20f2:
        goto LAB_00a9d4ba;
      case 0x20f3:
        goto LAB_00a9d4c4;
      case 0x20f4:
        goto LAB_00a9d4ce;
      case 0x20f5:
        goto LAB_00a9d4d8;
      case 0x20f6:
        goto LAB_00a9d4e2;
      case 0x20f7:
        goto LAB_00a9d4ec;
      case 0x20f8:
        goto LAB_00a9d4f6;
      case 0x20f9:
        goto LAB_00a9d500;
      case 0x20fa:
        goto LAB_00a9d50a;
      case 0x20fb:
        goto LAB_00a9d514;
      case 0x20fc:
        goto LAB_00a9d51e;
      case 0x20fd:
        goto LAB_00a9d528;
      case 0x20fe:
        goto LAB_00a9d532;
      case 0x20ff:
        goto LAB_00a9d53c;
      case 0x2100:
        goto LAB_00a9d546;
      case 0x2101:
        goto LAB_00a9d550;
      case 0x2102:
        goto LAB_00a9d55a;
      case 0x2103:
        goto LAB_00a9d564;
      case 0x2104:
        goto LAB_00a9d56e;
      case 0x2105:
        goto LAB_00a9d578;
      case 0x2106:
        goto LAB_00a9d582;
      case 0x2107:
        goto LAB_00a9d58c;
      case 0x2108:
        goto LAB_00a9d596;
      case 0x2109:
        goto LAB_00a9d5a0;
      case 0x210a:
        goto LAB_00a9d5aa;
      case 0x210b:
        goto LAB_00a9d5b4;
      case 0x210c:
        goto LAB_00a9d5be;
      case 0x210d:
        goto LAB_00a9d5c8;
      case 0x210e:
        goto LAB_00a9d5d2;
      case 0x210f:
        goto LAB_00a9d5dc;
      case 0x2110:
        goto LAB_00a9d5e6;
      case 0x2111:
        goto LAB_00a9d5f0;
      case 0x2112:
        goto LAB_00a9d5fa;
      case 0x2113:
        goto LAB_00a9d604;
      case 0x2114:
        goto LAB_00a9d60e;
      case 0x2115:
        goto LAB_00a9d618;
      case 0x2116:
        goto LAB_00a9d622;
      case 0x2117:
        goto LAB_00a9d62c;
      case 0x2118:
        goto LAB_00a9d636;
      case 0x2119:
        goto LAB_00a9d640;
      case 0x211a:
        goto LAB_00a9d64a;
      case 0x211b:
        goto LAB_00a9d654;
      case 0x211c:
        goto LAB_00a9d65e;
      case 0x211d:
        goto LAB_00a9d668;
      case 0x211e:
        goto LAB_00a9d690;
      case 0x211f:
        goto LAB_00a9d69a;
      case 0x2120:
        goto LAB_00a9d6a4;
      case 0x2121:
        goto LAB_00a9d6ae;
      case 0x2122:
        goto LAB_00a9d6b8;
      case 0x2123:
        goto LAB_00a9d6c2;
      case 0x2124:
        goto LAB_00a9d6cc;
      case 0x2125:
        goto LAB_00a9d6d6;
      case 0x2126:
        goto LAB_00a9d6e0;
      case 0x2127:
        goto LAB_00a9d6ea;
      case 0x2128:
        goto LAB_00a9d6f4;
      case 0x2129:
        goto LAB_00a9d6fe;
      case 0x212a:
        goto LAB_00a9d708;
      case 0x212b:
        goto LAB_00a9d712;
      case 0x212c:
        goto LAB_00a9d71c;
      case 0x212d:
        goto LAB_00a9d726;
      case 0x212e:
        goto LAB_00a9d730;
      case 0x212f:
        goto LAB_00a9d73a;
      case 0x2130:
        goto LAB_00a9d744;
      case 0x2131:
        goto LAB_00a9d74e;
      case 0x2132:
        goto LAB_00a9d758;
      case 0x2133:
        goto LAB_00a9d762;
      case 0x2134:
        goto LAB_00a9d76c;
      case 0x2135:
        goto LAB_00a9d776;
      case 0x2136:
        goto LAB_00a9d780;
      case 0x2137:
        goto LAB_00a9d78a;
      case 0x2138:
        goto LAB_00a9d794;
      case 0x2139:
        goto LAB_00a9d79e;
      case 0x213a:
        goto LAB_00a9d7a8;
      case 0x213b:
        goto LAB_00a9d7b2;
      case 0x213c:
        goto LAB_00a9d7bc;
      case 0x213d:
        goto LAB_00a9d7c6;
      case 0x213e:
        goto LAB_00a9d7d0;
      case 0x213f:
        goto LAB_00a9d7da;
      case 0x2140:
        goto LAB_00a9d7e4;
      case 0x2141:
        goto LAB_00a9d7ee;
      case 0x2142:
        goto LAB_00a9d7f8;
      case 0x2143:
        goto LAB_00a9d802;
      case 0x2144:
        goto LAB_00a9d80c;
      case 0x2145:
        goto LAB_00a9d816;
      case 0x2146:
        goto LAB_00a9d820;
      case 0x2147:
        goto LAB_00a9d82a;
      case 0x2148:
        goto LAB_00a9d834;
      case 0x2149:
        goto LAB_00a9d83e;
      case 0x214a:
        goto LAB_00a9d848;
      case 0x214b:
        goto LAB_00a9d852;
      case 0x214c:
        goto LAB_00a9d85c;
      case 0x214d:
        goto LAB_00a9d866;
      case 0x214e:
        goto LAB_00a9d870;
      case 0x214f:
        goto LAB_00a9d87a;
      case 0x2150:
        goto LAB_00a9d884;
      case 0x2151:
        goto LAB_00a9d88e;
      case 0x2152:
        goto LAB_00a9d898;
      case 0x2153:
        goto LAB_00a9d8a2;
      case 0x2154:
        goto LAB_00a9d8ac;
      case 0x2155:
        goto LAB_00a9d8b6;
      case 0x2156:
        goto LAB_00a9d8c0;
      case 0x2157:
        goto LAB_00a9d8ca;
      }
    }
  }
  else if (param_1 < 0x2329) {
    if (param_1 == 9000) goto LAB_00a9db90;
    switch(param_1) {
    case 0x2159:
      goto LAB_00a9d906;
    case 0x215a:
      goto LAB_00a9d910;
    case 0x215b:
      goto LAB_00a9d91a;
    case 0x215c:
      goto LAB_00a9d924;
    case 0x215d:
      goto LAB_00a9d92e;
    case 0x215e:
      goto LAB_00a9d938;
    case 0x215f:
      goto LAB_00a9d942;
    case 0x2160:
      goto LAB_00a9d94c;
    case 0x2161:
      goto LAB_00a9d956;
    case 0x2162:
      goto LAB_00a9d960;
    case 0x2163:
      goto LAB_00a9d96a;
    case 0x2164:
      goto LAB_00a9d974;
    case 0x2165:
      goto LAB_00a9d97e;
    case 0x2166:
      goto LAB_00a9d988;
    case 0x2167:
      goto LAB_00a9d992;
    case 0x2168:
      goto LAB_00a9d99c;
    case 0x2169:
      goto LAB_00a9d9a6;
    case 0x216a:
      goto LAB_00a9d9b0;
    case 0x216b:
      goto LAB_00a9d9ba;
    case 0x216c:
      goto LAB_00a9d9c4;
    case 0x216d:
      goto LAB_00a9d9ce;
    case 0x216e:
      goto LAB_00a9d9d8;
    case 0x216f:
      goto LAB_00a9d9e2;
    case 0x2170:
      goto LAB_00a9d9ec;
    case 0x2171:
      goto LAB_00a9d9f6;
    case 0x2172:
      goto LAB_00a9da00;
    case 0x2173:
      goto LAB_00a9da0a;
    case 0x2174:
      goto LAB_00a9da14;
    case 0x2175:
      goto LAB_00a9da1e;
    case 0x2176:
      goto LAB_00a9da28;
    case 0x2177:
      goto LAB_00a9da32;
    case 0x2178:
      goto LAB_00a9da3c;
    case 0x2179:
      goto LAB_00a9da46;
    case 0x217a:
      goto LAB_00a9da50;
    case 0x217b:
      goto LAB_00a9da5a;
    case 0x217c:
      goto LAB_00a9da64;
    case 0x217d:
      goto LAB_00a9da6e;
    case 0x217e:
      goto LAB_00a9da78;
    case 0x217f:
      goto LAB_00a9da82;
    case 0x2180:
      goto LAB_00a9da8c;
    case 0x2181:
      goto LAB_00a9da96;
    case 0x2182:
      goto LAB_00a9daa0;
    case 0x2183:
      goto LAB_00a9daaa;
    case 0x2184:
      goto LAB_00a9dab4;
    case 0x2185:
      goto LAB_00a9dabe;
    case 0x2186:
      goto LAB_00a9dac8;
    case 0x2187:
      goto LAB_00a9dad2;
    case 0x2188:
      goto LAB_00a9dadc;
    case 0x2189:
      goto LAB_00a9dae6;
    case 0x218a:
      goto LAB_00a9daf0;
    case 0x218b:
      goto LAB_00a9dafa;
    case 0x218c:
      goto LAB_00a9db04;
    case 0x218d:
      goto LAB_00a9db0e;
    case 0x218e:
      goto LAB_00a9db18;
    case 0x218f:
      goto LAB_00a9db22;
    case 0x2190:
      goto LAB_00a9db2c;
    case 0x2191:
      goto LAB_00a9db36;
    case 0x2192:
      goto LAB_00a9db40;
    case 0x2193:
      goto LAB_00a9db4a;
    case 0x2194:
      goto LAB_00a9db54;
    case 0x2195:
      goto LAB_00a9db5e;
    case 0x2196:
      goto LAB_00a9db68;
    case 0x2197:
      goto LAB_00a9db72;
    case 0x2198:
      goto LAB_00a9db7c;
    case 0x2199:
      goto LAB_00a9db86;
    }
  }
  else if (param_1 < 0x251d) {
    if (param_1 == 0x251c) goto LAB_00a9dc44;
    switch(param_1) {
    case 0x2329:
      goto LAB_00a9dbc2;
    case 0x232a:
      goto LAB_00a9dbcc;
    case 0x232b:
      goto LAB_00a9dbd6;
    case 0x232c:
      goto LAB_00a9dbe0;
    case 0x232d:
      goto LAB_00a9dbea;
    case 0x232e:
      goto LAB_00a9dbf4;
    case 0x232f:
      goto LAB_00a9dbfe;
    case 0x2330:
      goto LAB_00a9dc08;
    case 0x2331:
      goto LAB_00a9dc12;
    case 0x2332:
      goto LAB_00a9dc1c;
    case 0x2338:
      goto code_r0x00a9dc26;
    case 0x2339:
      goto code_r0x00a9dc30;
    case 0x233a:
      goto code_r0x00a9dc3a;
    }
  }
  else if (param_1 < 0x361c) {
    if (param_1 == 0x361b) {
LAB_00a9e68f:
      return "ERROR_IPSEC_IKE_NOTCBPRIV";
    }
    if (param_1 < 0x2758) {
      if (param_1 == 0x2757) {
LAB_00a9e11a:
        return "WSAEREMOTE";
      }
      if (param_1 - 0x251dU < 0x23a) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((&DAT_00aa255b)[param_1]) {
        case 0:
          goto LAB_00a9dc92;
        case 1:
          goto LAB_00a9dc9c;
        case 2:
          goto LAB_00a9dca6;
        case 3:
          goto LAB_00a9dcb0;
        case 4:
          goto LAB_00a9dcba;
        case 5:
          goto LAB_00a9dcc4;
        case 6:
          goto LAB_00a9dcce;
        case 7:
          goto LAB_00a9dcd8;
        case 8:
          goto LAB_00a9dce2;
        case 9:
          goto LAB_00a9dcec;
        case 10:
          goto LAB_00a9dcf6;
        case 0xb:
          goto LAB_00a9dd00;
        case 0xc:
          goto LAB_00a9dd0a;
        case 0xd:
          goto LAB_00a9dd14;
        case 0xe:
          goto LAB_00a9dd1e;
        case 0xf:
          goto LAB_00a9dd28;
        case 0x10:
          goto LAB_00a9dd32;
        case 0x11:
          goto LAB_00a9dd3c;
        case 0x12:
          goto LAB_00a9dd46;
        case 0x13:
          goto LAB_00a9dd50;
        case 0x14:
          goto LAB_00a9dd5a;
        case 0x15:
          goto LAB_00a9dd64;
        case 0x16:
          goto LAB_00a9dd6e;
        case 0x17:
          goto LAB_00a9dd78;
        case 0x18:
          goto LAB_00a9dd82;
        case 0x19:
          goto LAB_00a9dd8c;
        case 0x1a:
          goto LAB_00a9dd96;
        case 0x1b:
          goto LAB_00a9dda0;
        case 0x1c:
          goto LAB_00a9ddaa;
        case 0x1d:
          goto LAB_00a9ddb4;
        case 0x1e:
          goto LAB_00a9ddbe;
        case 0x1f:
          goto LAB_00a9ddc8;
        case 0x20:
          goto LAB_00a9ddd2;
        case 0x21:
          goto LAB_00a9dddc;
        case 0x22:
          goto LAB_00a9e0d4;
        case 0x23:
          goto LAB_00a9e0de;
        case 0x24:
          goto LAB_00a9e0e8;
        case 0x25:
          goto LAB_00a9dde6;
        case 0x26:
          goto LAB_00a9ddf0;
        case 0x27:
          goto LAB_00a9ddfa;
        case 0x28:
          goto LAB_00a9de04;
        case 0x29:
          goto LAB_00a9de0e;
        case 0x2a:
          goto LAB_00a9de18;
        case 0x2b:
          goto LAB_00a9de22;
        case 0x2c:
          goto LAB_00a9de2c;
        case 0x2d:
          goto LAB_00a9de36;
        case 0x2e:
          goto LAB_00a9de40;
        case 0x2f:
          goto LAB_00a9de4a;
        case 0x30:
          goto LAB_00a9de54;
        case 0x31:
          goto LAB_00a9de5e;
        case 0x32:
          goto LAB_00a9de68;
        case 0x33:
          goto LAB_00a9de72;
        case 0x34:
          goto LAB_00a9de7c;
        case 0x35:
          goto LAB_00a9de86;
        case 0x36:
          goto LAB_00a9de90;
        case 0x37:
          goto LAB_00a9de9a;
        case 0x38:
          goto LAB_00a9dea4;
        case 0x39:
          goto LAB_00a9deae;
        case 0x3a:
          goto LAB_00a9deb8;
        case 0x3b:
LAB_00a9dec2:
          return "DNS_WARNING_DOMAIN_UNDELETED";
        case 0x3c:
LAB_00a9decc:
          return "DNS_ERROR_DS_UNAVAILABLE";
        case 0x3d:
LAB_00a9ded6:
          return "DNS_ERROR_DS_ZONE_ALREADY_EXISTS";
        case 0x3e:
LAB_00a9dee0:
          return "DNS_ERROR_NO_BOOTFILE_IF_DS_ZONE";
        case 0x3f:
LAB_00a9deea:
          return "DNS_ERROR_OPERATION_BASE";
        case 0x40:
LAB_00a9def4:
          return "DNS_INFO_AXFR_COMPLETE";
        case 0x41:
code_r0x00a96b5c:
          return "DNS_ERROR_AXFR";
        case 0x42:
LAB_00a9defe:
          return "DNS_INFO_ADDED_LOCAL_WINS";
        case 0x43:
LAB_00a9df08:
          return "DNS_ERROR_SECURE_BASE";
        case 0x44:
LAB_00a9df12:
          return "DNS_STATUS_CONTINUE_NEEDED";
        case 0x45:
LAB_00a9df1c:
          return "DNS_ERROR_SETUP_BASE";
        case 0x46:
LAB_00a9df26:
          return "DNS_ERROR_NO_TCPIP";
        case 0x47:
LAB_00a9df30:
          return "DNS_ERROR_NO_DNS_SERVERS";
        case 0x48:
code_r0x00a96ba8:
          return "DNS_ERROR_DP_BASE";
        case 0x49:
LAB_00a9e0f2:
          return "DNS_ERROR_DP_DOES_NOT_EXIST";
        case 0x4a:
LAB_00a9e0fc:
          return "DNS_ERROR_DP_ALREADY_EXISTS";
        case 0x4b:
LAB_00a9e106:
          return "DNS_ERROR_DP_NOT_ENLISTED";
        case 0x4c:
LAB_00a9e110:
          return "DNS_ERROR_DP_ALREADY_ENLISTED";
        case 0x4d:
LAB_00a9df3a:
          return "WSABASEERR";
        case 0x4e:
LAB_00a9df44:
          return "WSAEINTR";
        case 0x4f:
LAB_00a9df4e:
          return "WSAEBADF";
        case 0x50:
code_r0x00a96c0e:
          return "WSAEACCES";
        case 0x51:
LAB_00a9df58:
          return "WSAEFAULT";
        case 0x52:
LAB_00a9df62:
          return "WSAEINVAL";
        case 0x53:
LAB_00a9df6c:
          return "WSAEMFILE";
        case 0x54:
LAB_00a9df76:
          return "WSAEWOULDBLOCK";
        case 0x55:
LAB_00a9df80:
          return "WSAEINPROGRESS";
        case 0x56:
LAB_00a9df8a:
          return "WSAEALREADY";
        case 0x57:
code_r0x00a96c5a:
          return "WSAENOTSOCK";
        case 0x58:
          goto LAB_00a9df94;
        case 0x59:
          goto LAB_00a9df9e;
        case 0x5a:
          goto LAB_00a9dfa8;
        case 0x5b:
          goto LAB_00a9dfb2;
        case 0x5c:
          goto LAB_00a9dfbc;
        case 0x5d:
          goto LAB_00a9dfc6;
        case 0x5e:
          goto LAB_00a9dfd0;
        case 0x5f:
          goto LAB_00a9dfda;
        case 0x60:
          goto LAB_00a9dfe4;
        case 0x61:
          goto LAB_00a9dfee;
        case 0x62:
          goto LAB_00a9dff8;
        case 99:
          goto LAB_00a9e002;
        case 100:
          goto LAB_00a9e00c;
        case 0x65:
          goto LAB_00a9e016;
        case 0x66:
          goto LAB_00a9e020;
        case 0x67:
          goto LAB_00a9e02a;
        case 0x68:
          goto LAB_00a9e034;
        case 0x69:
          goto LAB_00a9e03e;
        case 0x6a:
          goto LAB_00a9e048;
        case 0x6b:
          goto LAB_00a9e052;
        case 0x6c:
          goto LAB_00a9e05c;
        case 0x6d:
          goto LAB_00a9e066;
        case 0x6e:
          goto LAB_00a9e070;
        case 0x6f:
          goto LAB_00a9e07a;
        case 0x70:
          goto LAB_00a9e084;
        case 0x71:
          goto LAB_00a9e08e;
        case 0x72:
          goto LAB_00a9e098;
        case 0x73:
          goto LAB_00a9e0a2;
        case 0x74:
          goto LAB_00a9e0ac;
        case 0x75:
          goto LAB_00a9e0b6;
        case 0x76:
LAB_00a9e0c0:
          return "WSAEDQUOT";
        case 0x77:
LAB_00a9e0ca:
          return "WSAESTALE";
        }
      }
    }
    else if (param_1 < 0x32d6) {
      if (param_1 == 0x32d5) {
LAB_00a9e3fe:
        return "ERROR_IPSEC_DEFAULT_MM_POLICY_NOT_FOUND";
      }
      if (param_1 < 0x2b08) {
        if (param_1 == 0x2b07) {
LAB_00a9e295:
          return "WSA_QOS_GENERIC_ERROR";
        }
        if (param_1 < 0x2781) {
          if (param_1 == 0x2780) {
LAB_00a9e1fe:
            return "WSAEREFUSED";
          }
          switch(param_1) {
          case 0x276b:
            goto LAB_00a9e172;
          case 0x276c:
            goto LAB_00a9e17c;
          case 0x276d:
            goto LAB_00a9e186;
          case 0x2775:
            goto LAB_00a9e190;
          case 0x2776:
            goto LAB_00a9e19a;
          case 0x2777:
            goto LAB_00a9e1a4;
          case 0x2778:
            goto LAB_00a9e1ae;
          case 0x2779:
            goto LAB_00a9e1b8;
          case 0x277a:
            goto LAB_00a9e1c2;
          case 0x277b:
            goto LAB_00a9e1cc;
          case 0x277c:
            goto LAB_00a9e1d6;
          case 0x277d:
            goto LAB_00a9e1e0;
          case 0x277e:
            goto LAB_00a9e1ea;
          case 0x277f:
LAB_00a9e1f4:
            return "WSA_E_CANCELLED";
          }
        }
        else {
          switch(param_1) {
          case 0x2af9:
LAB_00a9e21d:
            return "WSAHOST_NOT_FOUND";
          case 0x2afa:
LAB_00a9e227:
            return "WSATRY_AGAIN";
          case 0x2afb:
LAB_00a9e231:
            return "WSANO_RECOVERY";
          case 0x2afc:
code_r0x00a96d26:
            return "WSANO_DATA";
          case 0x2afd:
            goto LAB_00a9e23b;
          case 0x2afe:
            goto LAB_00a9e245;
          case 0x2aff:
LAB_00a9e24f:
            return "WSA_QOS_NO_SENDERS";
          case 0x2b00:
LAB_00a9e259:
            return "WSA_QOS_NO_RECEIVERS";
          case 0x2b01:
LAB_00a9e263:
            return "WSA_QOS_REQUEST_CONFIRMED";
          case 0x2b02:
LAB_00a9e26d:
            return "WSA_QOS_ADMISSION_FAILURE";
          case 0x2b03:
code_r0x00a96d72:
            return "WSA_QOS_POLICY_FAILURE";
          case 0x2b04:
            goto LAB_00a9e277;
          case 0x2b05:
            goto LAB_00a9e281;
          case 0x2b06:
            goto LAB_00a9e28b;
          }
        }
      }
      else if (param_1 < 0x32c9) {
        if (param_1 == 13000) goto LAB_00a9e367;
        switch(param_1) {
        case 0x2b08:
          goto LAB_00a9e2c7;
        case 0x2b09:
          goto LAB_00a9e2d1;
        case 0x2b0a:
          goto LAB_00a9e2db;
        case 0x2b0b:
          goto LAB_00a9e2e5;
        case 0x2b0c:
          goto LAB_00a9e2ef;
        case 0x2b0d:
          goto LAB_00a9e2f9;
        case 0x2b0e:
          goto LAB_00a9e303;
        case 0x2b0f:
          goto LAB_00a9e30d;
        case 0x2b10:
          goto LAB_00a9e317;
        case 0x2b11:
          goto LAB_00a9e321;
        case 0x2b12:
          goto LAB_00a9e32b;
        case 0x2b13:
          goto LAB_00a9e335;
        case 0x2b14:
          goto LAB_00a9e33f;
        case 0x2b15:
          goto LAB_00a9e349;
        case 0x2b16:
          goto LAB_00a9e353;
        case 0x2b17:
          goto LAB_00a9e35d;
        }
      }
      else {
        switch(param_1) {
        case 0x32c9:
          goto LAB_00a9e386;
        case 0x32ca:
          goto LAB_00a9e390;
        case 0x32cb:
          goto LAB_00a9e39a;
        case 0x32cc:
          goto LAB_00a9e3a4;
        case 0x32cd:
          goto LAB_00a9e3ae;
        case 0x32ce:
          goto LAB_00a9e3b8;
        case 0x32cf:
          goto LAB_00a9e3c2;
        case 0x32d0:
          goto LAB_00a9e3cc;
        case 0x32d1:
          goto LAB_00a9e3d6;
        case 0x32d2:
          goto LAB_00a9e3e0;
        case 0x32d3:
          goto LAB_00a9e3ea;
        case 0x32d4:
          goto LAB_00a9e3f4;
        }
      }
    }
    else if (param_1 < 0x35e9) {
      if (param_1 == 0x35e8) goto LAB_00a9e490;
      switch(param_1) {
      case 0x32d6:
        goto LAB_00a9e42c;
      case 0x32d7:
        goto LAB_00a9e436;
      case 0x32d8:
        goto LAB_00a9e440;
      case 0x32d9:
        goto LAB_00a9e44a;
      case 0x32da:
        goto LAB_00a9e454;
      case 0x32db:
        goto LAB_00a9e45e;
      case 0x32dc:
        goto LAB_00a9e468;
      case 0x32dd:
        goto LAB_00a9e472;
      case 0x32de:
        goto LAB_00a9e47c;
      case 0x32df:
        goto LAB_00a9e486;
      }
    }
    else {
      switch(param_1) {
      case 0x35e9:
        goto LAB_00a9e4af;
      case 0x35ea:
        goto LAB_00a9e4b9;
      case 0x35eb:
        goto LAB_00a9e4c3;
      case 0x35ec:
        goto LAB_00a9e4cd;
      case 0x35ed:
        goto LAB_00a9e4d7;
      case 0x35ee:
        goto LAB_00a9e4e1;
      case 0x35ef:
        goto LAB_00a9e4eb;
      case 0x35f0:
        goto LAB_00a9e4f5;
      case 0x35f1:
        goto LAB_00a9e4ff;
      case 0x35f2:
        goto LAB_00a9e509;
      case 0x35f3:
        goto LAB_00a9e513;
      case 0x35f4:
        goto LAB_00a9e51d;
      case 0x35f5:
        goto LAB_00a9e527;
      case 0x35f6:
        goto LAB_00a9e531;
      case 0x35f7:
        goto LAB_00a9e53b;
      case 0x35f8:
        goto LAB_00a9e545;
      case 0x35f9:
        goto LAB_00a9e54f;
      case 0x35fa:
        goto LAB_00a9e559;
      case 0x35fb:
        goto LAB_00a9e563;
      case 0x35fc:
        goto LAB_00a9e56d;
      case 0x35fe:
        goto code_r0x00a9e577;
      case 0x3600:
        goto LAB_00a9e581;
      case 0x3601:
        goto LAB_00a9e58b;
      case 0x3602:
        goto LAB_00a9e595;
      case 0x3603:
        goto LAB_00a9e59f;
      case 0x3604:
        goto LAB_00a9e5a9;
      case 0x3605:
        goto LAB_00a9e5b3;
      case 0x3606:
        goto LAB_00a9e5bd;
      case 0x3607:
        goto LAB_00a9e5c7;
      case 0x3608:
        goto LAB_00a9e5d1;
      case 0x3609:
        goto LAB_00a9e5db;
      case 0x360a:
        goto LAB_00a9e5e5;
      case 0x360b:
        goto LAB_00a9e5ef;
      case 0x360c:
        goto LAB_00a9e5f9;
      case 0x360d:
        goto LAB_00a9e603;
      case 0x360e:
        goto LAB_00a9e60d;
      case 0x360f:
        goto LAB_00a9e617;
      case 0x3610:
        goto LAB_00a9e621;
      case 0x3611:
        goto LAB_00a9e62b;
      case 0x3612:
        goto LAB_00a9e635;
      case 0x3613:
        goto LAB_00a9e63f;
      case 0x3614:
        goto LAB_00a9e649;
      case 0x3615:
        goto LAB_00a9e653;
      case 0x3616:
        goto LAB_00a9e65d;
      case 0x3617:
        goto LAB_00a9e667;
      case 0x3618:
        goto LAB_00a9e671;
      case 0x3619:
        goto LAB_00a9e67b;
      case 0x361a:
        goto LAB_00a9e685;
      }
    }
  }
  else if (param_1 < 0x364a) {
    if (param_1 == 0x3649) goto LAB_00a9e7f7;
    switch(param_1) {
    case 0x361c:
      goto LAB_00a9e6c1;
    case 0x361d:
      goto LAB_00a9e6cb;
    case 0x361e:
      goto LAB_00a9e6d5;
    case 0x361f:
      goto LAB_00a9e6df;
    case 0x3620:
      goto LAB_00a9e6e9;
    case 0x3621:
      goto LAB_00a9e6f3;
    case 0x3622:
      goto LAB_00a9e6fd;
    case 0x3623:
      goto LAB_00a9e707;
    case 0x3624:
      goto LAB_00a9e711;
    case 0x3625:
      goto LAB_00a9e71b;
    case 0x3626:
      goto LAB_00a9e725;
    case 0x3627:
      goto LAB_00a9e72f;
    case 0x3628:
      goto LAB_00a9e739;
    case 0x3629:
      goto LAB_00a9e743;
    case 0x362a:
      goto LAB_00a9e74d;
    case 0x362b:
      goto LAB_00a9e757;
    case 0x362c:
      goto LAB_00a9e761;
    case 0x362d:
      goto LAB_00a9e76b;
    case 0x362e:
      goto LAB_00a9e775;
    case 0x362f:
      goto LAB_00a9e77f;
    case 0x3630:
      goto LAB_00a9e789;
    case 0x3631:
      goto LAB_00a9e793;
    case 0x3632:
      goto LAB_00a9e79d;
    case 0x3633:
      goto LAB_00a9e7a7;
    case 0x3634:
      goto LAB_00a9e7b1;
    case 0x3635:
      goto LAB_00a9e7bb;
    case 0x3636:
      goto LAB_00a9e7c5;
    case 0x3637:
      goto LAB_00a9e7cf;
    case 0x3639:
      goto code_r0x00a9e7d9;
    case 0x363a:
      goto code_r0x00a9e7e3;
    case 0x363b:
      goto code_r0x00a9e7ed;
    }
  }
  else if (param_1 < 0x30201) {
    if (param_1 == 0x30200) {
      return "STG_S_CONVERTED";
    }
    switch(param_1) {
    case 14000:
      goto LAB_00a9e829;
    case 0x36b1:
      goto LAB_00a9e833;
    case 0x36b2:
      goto LAB_00a9e83d;
    case 0x36b3:
      goto LAB_00a9e847;
    case 0x36b4:
      goto LAB_00a9e851;
    case 0x36b5:
      goto LAB_00a9e85b;
    case 0x36b6:
      goto LAB_00a9e865;
    case 0x36b7:
      goto LAB_00a9e86f;
    case 0x36b8:
      goto LAB_00a9e879;
    case 0x36b9:
      goto LAB_00a9e883;
    case 0x36ba:
      goto LAB_00a9e88d;
    case 0x36bb:
      goto LAB_00a9e897;
    case 0x36bc:
      goto LAB_00a9e8a1;
    case 0x36bd:
      goto LAB_00a9e8ab;
    case 0x36be:
      goto LAB_00a9e8b5;
    case 0x36bf:
      goto LAB_00a9e8bf;
    case 0x36c0:
      goto LAB_00a9e8c9;
    case 0x36c1:
      goto LAB_00a9e8d3;
    case 0x36c2:
      goto LAB_00a9e8dd;
    case 0x36c3:
      goto LAB_00a9e8e7;
    case 0x36c4:
      goto LAB_00a9e8f1;
    case 0x36c5:
      goto LAB_00a9e8fb;
    case 0x36c6:
      goto LAB_00a9e905;
    case 0x36c7:
      goto LAB_00a9e90f;
    case 0x36c8:
      goto LAB_00a9e919;
    case 0x36c9:
      goto LAB_00a9e923;
    case 0x36ca:
      goto LAB_00a9e92d;
    case 0x36cb:
      goto LAB_00a9e937;
    case 0x36cc:
      goto LAB_00a9e941;
    case 0x36cd:
      goto LAB_00a9e94b;
    case 0x36ce:
      goto LAB_00a9e955;
    case 0x36cf:
      goto LAB_00a9e95f;
    case 0x36d0:
      goto LAB_00a9e969;
    case 0x36d1:
      goto LAB_00a9e973;
    case 0x36d2:
      goto LAB_00a9e97d;
    case 0x36d3:
      goto LAB_00a9e987;
    case 0x36d4:
      goto LAB_00a9e991;
    case 0x36d5:
      goto LAB_00a9e99b;
    case 0x36d6:
      goto LAB_00a9e9a5;
    case 0x36d7:
      goto LAB_00a9e9af;
    case 0x36d8:
      goto LAB_00a9e9b9;
    case 0x36d9:
      goto LAB_00a9e9c3;
    case 0x36da:
      goto LAB_00a9e9cd;
    case 0x36db:
      goto LAB_00a9e9d7;
    case 0x36dc:
      goto LAB_00a9e9e1;
    case 0x36dd:
      goto LAB_00a9e9eb;
    case 0x36de:
      goto LAB_00a9e9f5;
    case 0x36df:
      goto LAB_00a9e9ff;
    case 0x36e0:
      goto LAB_00a9ea09;
    case 0x36e1:
      goto LAB_00a9ea13;
    case 0x36e2:
      goto LAB_00a9ea1d;
    case 0x36e3:
      goto LAB_00a9ea27;
    case 0x36e4:
      goto LAB_00a9ea31;
    case 0x36e5:
      goto LAB_00a9ea3b;
    case 0x36e6:
      goto LAB_00a9ea45;
    case 0x36e7:
      goto LAB_00a9ea4f;
    case 0x36e8:
      goto LAB_00a9ea59;
    case 0x36e9:
      goto LAB_00a9ea63;
    case 0x36ea:
      goto LAB_00a9ea6d;
    case 0x36eb:
      goto LAB_00a9ea77;
    case 0x36ec:
      goto LAB_00a9ea81;
    case 0x36ed:
      goto LAB_00a9ea8b;
    case 0x36ee:
      goto LAB_00a9ea95;
    case 0x36ef:
      goto LAB_00a9ea9f;
    case 0x36f0:
      goto LAB_00a9eaa9;
    case 0x36f1:
      goto LAB_00a9eab3;
    case 0x36f2:
      goto LAB_00a9eabd;
    case 0x36f3:
      goto LAB_00a9eac7;
    case 0x36f4:
      goto LAB_00a9ead1;
    case 0x36f5:
      goto LAB_00a9eadb;
    case 0x36f6:
      goto LAB_00a9eae5;
    case 0x36f7:
      goto LAB_00a9eaef;
    case 0x36f8:
      goto LAB_00a9eaf9;
    case 0x36f9:
      goto LAB_00a9eb03;
    case 0x36fa:
      goto LAB_00a9eb0d;
    case 0x36fb:
      goto LAB_00a9eb17;
    case 0x36fc:
      goto LAB_00a9eb21;
    case 0x36fd:
      goto LAB_00a9eb2b;
    case 0x36fe:
      goto LAB_00a9eb35;
    case 0x36ff:
      goto LAB_00a9eb3f;
    case 0x3700:
      goto LAB_00a9eb49;
    }
  }
  else if (param_1 < 0x40246) {
    if (param_1 == 0x40245) {
      return "VFW_S_SOME_DATA_IGNORED";
    }
    if (param_1 < 0x40150) {
      if (param_1 == 0x4014f) {
        return "VIEW_S_LAST";
      }
      if (param_1 < 0x4000a) {
        if (param_1 == 0x40009) {
          return "WBEM_S_ACCESS_DENIED";
        }
        if (param_1 < 0x40002) {
          if (param_1 == 0x40001) {
            return "OLE_S_STATIC";
          }
          if (param_1 == 0x30201) {
            return "STG_S_BLOCK";
          }
          if (param_1 == 0x30202) {
            return "STG_S_RETRYNOW";
          }
          if (param_1 == 0x30203) {
            return "STG_S_MONITORING";
          }
          if (param_1 == 0x30204) {
            return "STG_S_MULTIPLEOPENS";
          }
          if (param_1 == 0x30205) {
            return "STG_S_CONSOLIDATIONFAILED";
          }
          if (param_1 == 0x30206) {
            return "STG_S_CANNOTCONSOLIDATE";
          }
          if (param_1 == 0x40000) {
            return "OLE_S_FIRST";
          }
        }
        else {
          if (param_1 == 0x40002) {
            return "OLE_S_MAC_CLIPFORMAT";
          }
          if (param_1 == 0x40003) {
            return "MS_S_ENDOFSTREAM";
          }
          if (param_1 == 0x40004) {
            return "WBEM_S_TIMEDOUT";
          }
          if (param_1 == 0x40005) {
            return "WBEM_S_NO_MORE_DATA";
          }
          if (param_1 == 0x40006) {
            return "WBEM_S_OPERATION_CANCELLED";
          }
          if (param_1 == 0x40007) {
            return "WBEM_S_PENDING";
          }
          if (param_1 == 0x40008) {
            return "WBEM_S_DUPLICATE_OBJECTS";
          }
        }
      }
      else if (param_1 < 0x40110) {
        if (param_1 == 0x4010f) {
          return "DRAGDROP_S_LAST";
        }
        if (param_1 == 0x40010) {
          return "WBEM_S_PARTIAL_RESULTS";
        }
        if (param_1 == 0x40017) {
          return "WBEM_S_SOURCE_NOT_AVAILABLE";
        }
        if (param_1 == 0x400ff) {
          return "OLE_S_LAST";
        }
        if (param_1 == 0x40100) {
          return "DRAGDROP_S_FIRST";
        }
        if (param_1 == 0x40101) {
          return "DRAGDROP_S_CANCEL";
        }
        if (param_1 == 0x40102) {
          return "DRAGDROP_S_USEDEFAULTCURSORS";
        }
        if (param_1 == 0x40103) {
          return "VFW_S_NO_MORE_ITEMS";
        }
      }
      else {
        if (param_1 == 0x40110) {
          return "CLASSFACTORY_S_FIRST";
        }
        if (param_1 == 0x4011f) {
          return "CLASSFACTORY_S_LAST";
        }
        if (param_1 == 0x40120) {
          return "MARSHAL_S_FIRST";
        }
        if (param_1 == 0x4012f) {
          return "MARSHAL_S_LAST";
        }
        if (param_1 == 0x40130) {
          return "DATA_S_FIRST";
        }
        if (param_1 == 0x4013f) {
          return "DATA_S_LAST";
        }
        if (param_1 == 0x40140) {
          return "VIEW_S_FIRST";
        }
      }
    }
    else if (param_1 < 0x401c0) {
      if (param_1 == 0x401bf) {
        return "ENUM_S_LAST";
      }
      if (param_1 < 0x40182) {
        if (param_1 == 0x40181) {
          return "OLEOBJ_S_CANNOT_DOVERB_NOW";
        }
        if (param_1 == 0x40150) {
          return "REGDB_S_FIRST";
        }
        if (param_1 == 0x4015f) {
          return "REGDB_S_LAST";
        }
        if (param_1 == 0x40170) {
          return "CACHE_S_FIRST";
        }
        if (param_1 == 0x40171) {
          return "CACHE_S_SAMECACHE";
        }
        if (param_1 == 0x40172) {
          return "CACHE_S_SOMECACHES_NOTUPDATED";
        }
        if (param_1 == 0x4017f) {
          return "CACHE_S_LAST";
        }
        if (param_1 == 0x40180) {
          return "OLEOBJ_S_FIRST";
        }
      }
      else {
        if (param_1 == 0x40182) {
          return "OLEOBJ_S_INVALIDHWND";
        }
        if (param_1 == 0x4018f) {
          return "OLEOBJ_S_LAST";
        }
        if (param_1 == 0x40190) {
          return "CLIENTSITE_S_FIRST";
        }
        if (param_1 == 0x4019f) {
          return "CLIENTSITE_S_LAST";
        }
        if (param_1 == 0x401a0) {
          return "INPLACE_S_FIRST";
        }
        if (param_1 == 0x401af) {
          return "INPLACE_S_LAST";
        }
        if (param_1 == 0x401b0) {
          return "ENUM_S_FIRST";
        }
      }
    }
    else if (param_1 < 0x401e6) {
      if (param_1 == 0x401e5) {
        return "MK_S_HIM";
      }
      if (param_1 == 0x401c0) {
        return "CONVERT10_S_FIRST";
      }
      if (param_1 == 0x401cf) {
        return "CONVERT10_S_LAST";
      }
      if (param_1 == 0x401d0) {
        return "CLIPBRD_S_FIRST";
      }
      if (param_1 == 0x401df) {
        return "CLIPBRD_S_LAST";
      }
      if (param_1 == 0x401e0) {
        return "MK_S_FIRST";
      }
      if (param_1 == 0x401e2) {
        return "MK_S_REDUCED_TO_SELF";
      }
      if (param_1 == 0x401e4) {
        return "MK_S_ME";
      }
    }
    else {
      if (param_1 == 0x401e6) {
        return "MK_S_US";
      }
      if (param_1 == 0x401e7) {
        return "MK_S_MONIKERALREADYREGISTERED";
      }
      if (param_1 == 0x401ef) {
        return "MK_S_LAST";
      }
      if (param_1 == 0x40202) {
        return "EVENT_S_NOSUBSCRIBERS";
      }
      if (param_1 == 0x4022d) {
        return "VFW_S_DUPLICATE_NAME";
      }
      if (param_1 == 0x40237) {
        return "VFW_S_STATE_INTERMEDIATE";
      }
      if (param_1 == 0x40242) {
        return "VFW_S_PARTIAL_RENDER";
      }
    }
  }
  else if (param_1 < 0x4d008) {
    if (param_1 == 0x4d007) {
      return "XACT_S_ALLNORETAIN";
    }
    if (param_1 < 0x41301) {
      if (param_1 == 0x41300) {
        return "SCHED_S_TASK_READY";
      }
      if (param_1 < 0x40264) {
        if (param_1 == 0x40263) {
          return "VFW_S_RESERVED";
        }
        if (param_1 == 0x40246) {
          return "VFW_S_CONNECTIONS_DEFERRED";
        }
        if (param_1 == 0x40250) {
          return "VFW_S_RESOURCE_NOT_NEEDED";
        }
        if (param_1 == 0x40254) {
          return "VFW_S_MEDIA_TYPE_IGNORED";
        }
        if (param_1 == 0x40257) {
          return "VFW_S_VIDEO_NOT_RENDERED";
        }
        if (param_1 == 0x40258) {
          return "VFW_S_AUDIO_NOT_RENDERED";
        }
        if (param_1 == 0x4025a) {
          return "VFW_S_RPZA";
        }
        if (param_1 == 0x40260) {
          return "VFW_S_ESTIMATED";
        }
      }
      else {
        if (param_1 == 0x40267) {
          return "VFW_S_STREAM_OFF";
        }
        if (param_1 == 0x40268) {
          return "VFW_S_CANT_CUE";
        }
        if (param_1 == 0x40270) {
          return "VFW_S_NO_STOP_TIME";
        }
        if (param_1 == 0x4027e) {
          return "VFW_S_NOPREVIEWPIN";
        }
        if (param_1 == 0x40280) {
          return "VFW_S_DVD_NON_ONE_SEQUENTIAL";
        }
        if (param_1 == 0x4028c) {
          return "VFW_S_DVD_CHANNEL_CONTENTS_NOT_AVAILABLE";
        }
        if (param_1 == 0x4028d) {
          return "VFW_S_DVD_NOT_ACCURATE";
        }
      }
    }
    else if (param_1 < 0x41309) {
      if (param_1 == 0x41308) {
        return "SCHED_S_EVENT_TRIGGER";
      }
      if (param_1 == 0x41301) {
        return "SCHED_S_TASK_RUNNING";
      }
      if (param_1 == 0x41302) {
        return "SCHED_S_TASK_DISABLED";
      }
      if (param_1 == 0x41303) {
        return "SCHED_S_TASK_HAS_NOT_RUN";
      }
      if (param_1 == 0x41304) {
        return "SCHED_S_TASK_NO_MORE_RUNS";
      }
      if (param_1 == 0x41305) {
        return "SCHED_S_TASK_NOT_SCHEDULED";
      }
      if (param_1 == 0x41306) {
        return "SCHED_S_TASK_TERMINATED";
      }
      if (param_1 == 0x41307) {
        return "SCHED_S_TASK_NO_VALID_TRIGGERS";
      }
    }
    else {
      if (param_1 == 0x4d000) {
        return "XACT_S_FIRST";
      }
      if (param_1 == 0x4d001) {
        return "XACT_S_DEFECT";
      }
      if (param_1 == 0x4d002) {
        return "XACT_S_READONLY";
      }
      if (param_1 == 0x4d003) {
        return "XACT_S_SOMENORETAIN";
      }
      if (param_1 == 0x4d004) {
        return "XACT_S_OKINFORM";
      }
      if (param_1 == 0x4d005) {
        return "XACT_S_MADECHANGESCONTENT";
      }
      if (param_1 == 0x4d006) {
        return "XACT_S_MADECHANGESINFORM";
      }
    }
  }
  else if (param_1 < 0x90324) {
    if (param_1 == 0x90323) {
      return "SEC_I_NO_LSA_CONTEXT";
    }
    if (param_1 < 0x80014) {
      if (param_1 == 0x80013) {
        return "CO_S_MACHINENAMENOTFOUND";
      }
      if (param_1 == 0x4d008) {
        return "XACT_S_ABORTING";
      }
      if (param_1 == 0x4d009) {
        return "XACT_S_SINGLEPHASE";
      }
      if (param_1 == 0x4d00a) {
        return "XACT_S_LOCALLY_OK";
      }
      if (param_1 == 0x4d010) {
        return "XACT_S_LAST";
      }
      if (param_1 == 0x4e000) {
        return "CONTEXT_S_FIRST";
      }
      if (param_1 == 0x4e02f) {
        return "CONTEXT_S_LAST";
      }
      if (param_1 == 0x80012) {
        return "CO_S_NOTALLINTERFACES";
      }
    }
    else {
      if (param_1 == 0x90312) {
        return "SEC_I_CONTINUE_NEEDED";
      }
      if (param_1 == 0x90313) {
        return "SEC_I_COMPLETE_NEEDED";
      }
      if (param_1 == 0x90314) {
        return "SEC_I_COMPLETE_AND_CONTINUE";
      }
      if (param_1 == 0x90315) {
        return "SEC_I_LOCAL_LOGON";
      }
      if (param_1 == 0x90317) {
        return "SEC_I_CONTEXT_EXPIRED";
      }
      if (param_1 == 0x90320) {
        return "SEC_I_INCOMPLETE_CREDENTIALS";
      }
      if (param_1 == 0x90321) {
        return "SEC_I_RENEGOTIATE";
      }
    }
  }
  else if (param_1 < 0x87a0002) {
    if (param_1 == 0x87a0001) {
      return "DXGI_STATUS_OCCLUDED";
    }
    if (param_1 == 0x91012) {
      return "CRYPT_I_NEW_PROTECTION_REQUIRED";
    }
    if (param_1 == 0x876086f) {
      return "D3DOK_NOAUTOGEN";
    }
    if (param_1 == 0x8760875) {
      return "S_NOT_RESIDENT";
    }
    if (param_1 == 0x8760876) {
      return "S_RESIDENT_IN_SHARED_MEMORY";
    }
    if (param_1 == 0x8760877) {
      return "S_PRESENT_MODE_CHANGED";
    }
    if (param_1 == 0x8760878) {
      return "S_PRESENT_OCCLUDED";
    }
    if (param_1 == 0x878000a) {
      return "DS_NO_VIRTUALIZATION";
    }
  }
  else {
    if (param_1 == 0x87a0002) {
      return "DXGI_STATUS_CLIPPED";
    }
    if (param_1 == 0x87a0004) {
      return "DXGI_STATUS_NO_REDIRECTION";
    }
    if (param_1 == 0x87a0005) {
      return "DXGI_STATUS_NO_DESKTOP_ACCESS";
    }
    if (param_1 == 0x87a0006) {
      return "DXGI_STATUS_GRAPHICS_VIDPN_SOURCE_IN_USE";
    }
    if (param_1 == 0x87a0007) {
      return "DXGI_STATUS_MODE_CHANGED";
    }
    if (param_1 == 0x87a0008) {
      return "DXGI_STATUS_MODE_CHANGE_IN_PROGRESS";
    }
  }
  return "Unknown";
}

