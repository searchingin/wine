/*
 * Copyright 2017 Zebediah Figura
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#define MSIERR_INSTALLERROR         5
#define MSIERR_ACTIONSTART          8
#define MSIERR_COMMONDATA           11
#define MSIERR_INFO_LOGGINGSTART    12
#define MSIERR_INFO_ACTIONSTART     14
#define MSIERR_INFO_ACTIONENDED     15

#define IDS_NEWFOLDER               100

#define MSIERR_INSERTDISK           1302
#define MSIERR_CABNOTFOUND          1311

#define IDS_ERROR_BASE          10000

#define IDS_FATALEXIT           (IDS_ERROR_BASE)
#define IDS_ERROR               (IDS_ERROR_BASE + 1)
#define IDS_WARNING             (IDS_ERROR_BASE + 2)
#define IDS_INFO                (IDS_ERROR_BASE + 4)
#define IDS_INSTALLERROR        (IDS_ERROR_BASE + MSIERR_INSTALLERROR)
#define IDS_OUTOFDISKSPACE      (IDS_ERROR_BASE + 7)
#define IDS_ACTIONSTART         (IDS_ERROR_BASE + MSIERR_ACTIONSTART)
#define IDS_COMMONDATA          (IDS_ERROR_BASE + MSIERR_COMMONDATA)
#define IDS_INFO_LOGGINGSTART   (IDS_ERROR_BASE + MSIERR_INFO_LOGGINGSTART)
#define IDS_INFO_ACTIONSTART    (IDS_ERROR_BASE + MSIERR_INFO_ACTIONSTART)
#define IDS_INFO_ACTIONENDED    (IDS_ERROR_BASE + MSIERR_INFO_ACTIONENDED)

#define IDS_ERR_INSERTDISK      (IDS_ERROR_BASE + MSIERR_INSERTDISK)
#define IDS_ERR_CABNOTFOUND     (IDS_ERROR_BASE + MSIERR_CABNOTFOUND)

#define IDS_DESC_ALLOCATEREGISTRYSPACE 1100
#define IDS_DESC_APPSEARCH 1101
#define IDS_DESC_BINDIMAGE 1102
#define IDS_DESC_CCPSEARCH 1103
#define IDS_DESC_COSTFINALIZE 1104
#define IDS_DESC_COSTINITIALIZE 1105
#define IDS_DESC_CREATEFOLDERS 1106
#define IDS_DESC_CREATESHORTCUTS 1107
#define IDS_DESC_DELETESERVICES 1108
#define IDS_DESC_DUPLICATEFILES 1109
#define IDS_DESC_FILECOST 1110
#define IDS_DESC_FINDRELATEDPRODUCTS 1111
#define IDS_DESC_INSTALLADMINPACKAGE 1112
#define IDS_DESC_INSTALLFILES 1113
#define IDS_DESC_INSTALLODBC 1114
#define IDS_DESC_INSTALLSERVICES 1115
#define IDS_DESC_INSTALLSFPCATALOGFILE 1116
#define IDS_DESC_INSTALLVALIDATE 1117
#define IDS_DESC_LAUNCHCONDITIONS 1118
#define IDS_DESC_MIGRATEFEATURESTATES 1119
#define IDS_DESC_MOVEFILES 1120
#define IDS_DESC_MSIPUBLISHASSEMBLIES 1121
#define IDS_DESC_MSIUNPUBLISHASSEMBLIES 1122
#define IDS_DESC_PATCHFILES 1123
#define IDS_DESC_PROCESSCOMPONENTS 1124
#define IDS_DESC_PUBLISHCOMPONENTS 1125
#define IDS_DESC_PUBLISHFEATURES 1126
#define IDS_DESC_PUBLISHPRODUCT 1127
#define IDS_DESC_REGISTERCLASSINFO 1128
#define IDS_DESC_REGISTERCOMPLUS 1129
#define IDS_DESC_REGISTEREXTENSIONINFO 1130
#define IDS_DESC_REGISTERFONTS 1131
#define IDS_DESC_REGISTERMIMEINFO 1132
#define IDS_DESC_REGISTERPRODUCT 1133
#define IDS_DESC_REGISTERPROGIDINFO 1134
#define IDS_DESC_REGISTERTYPELIBRARIES 1135
#define IDS_DESC_REGISTERUSER 1136
#define IDS_DESC_REMOVEDUPLICATEFILES 1137
#define IDS_DESC_REMOVEENVIRONMENTSTRINGS 1138
#define IDS_DESC_REMOVEEXISTINGPRODUCTS 1139
#define IDS_DESC_REMOVEFILES 1140
#define IDS_DESC_REMOVEFOLDERS 1141
#define IDS_DESC_REMOVEINIVALUES 1142
#define IDS_DESC_REMOVEODBC 1143
#define IDS_DESC_REMOVEREGISTRYVALUES 1144
#define IDS_DESC_REMOVESHORTCUTS 1145
#define IDS_DESC_RMCCPSEARCH 1146
#define IDS_DESC_SELFREGMODULES 1147
#define IDS_DESC_SELFUNREGMODULES 1148
#define IDS_DESC_SETODBCFOLDERS 1149
#define IDS_DESC_STARTSERVICES 1150
#define IDS_DESC_STOPSERVICES 1151
#define IDS_DESC_UNPUBLISHCOMPONENTS 1152
#define IDS_DESC_UNPUBLISHFEATURES 1153
#define IDS_DESC_UNPUBLISHPRODUCT 1154
#define IDS_DESC_UNREGISTERCLASSINFO 1155
#define IDS_DESC_UNREGISTERCOMPLUS 1156
#define IDS_DESC_UNREGISTEREXTENSIONINFO 1157
#define IDS_DESC_UNREGISTERFONTS 1158
#define IDS_DESC_UNREGISTERMIMEINFO 1159
#define IDS_DESC_UNREGISTERPROGIDINFO 1160
#define IDS_DESC_UNREGISTERTYPELIBRARIES 1161
#define IDS_DESC_WRITEENVIRONMENTSTRINGS 1162
#define IDS_DESC_WRITEINIVALUES 1163
#define IDS_DESC_WRITEREGISTRYVALUES 1164

#define IDS_TEMP_ALLOCATEREGISTRYSPACE 1200
#define IDS_TEMP_APPSEARCH 1201
#define IDS_TEMP_BINDIMAGE 1202
#define IDS_TEMP_CREATEFOLDERS 1203
#define IDS_TEMP_CREATESHORTCUTS 1204
#define IDS_TEMP_DELETESERVICES 1205
#define IDS_TEMP_DUPLICATEFILES 1206
#define IDS_TEMP_FINDRELATEDPRODUCTS 1207
#define IDS_TEMP_INSTALLADMINPACKAGE 1208
#define IDS_TEMP_INSTALLFILES 1209
#define IDS_TEMP_INSTALLSERVICES 1210
#define IDS_TEMP_INSTALLSFPCATALOGFILE 1211
#define IDS_TEMP_MIGRATEFEATURESTATES 1212
#define IDS_TEMP_MOVEFILES 1213
#define IDS_TEMP_MSIPUBLISHASSEMBLIES 1214
#define IDS_TEMP_MSIUNPUBLISHASSEMBLIES 1215
#define IDS_TEMP_PATCHFILES 1216
#define IDS_TEMP_PUBLISHCOMPONENTS 1217
#define IDS_TEMP_PUBLISHFEATURES 1218
#define IDS_TEMP_REGISTERCLASSINFO 1219
#define IDS_TEMP_REGISTERCOMPLUS 1220
#define IDS_TEMP_REGISTEREXTENSIONINFO 1221
#define IDS_TEMP_REGISTERFONTS 1222
#define IDS_TEMP_REGISTERMIMEINFO 1223
#define IDS_TEMP_REGISTERPROGIDINFO 1224
#define IDS_TEMP_REGISTERTYPELIBRARIES 1225
#define IDS_TEMP_REMOVEDUPLICATEFILES 1226
#define IDS_TEMP_REMOVEENVIRONMENTSTRINGS 1227
#define IDS_TEMP_REMOVEEXISTINGPRODUCTS 1228
#define IDS_TEMP_REMOVEFILES 1229
#define IDS_TEMP_REMOVEFOLDERS 1230
#define IDS_TEMP_REMOVEINIVALUES 1231
#define IDS_TEMP_REMOVEREGISTRYVALUES 1232
#define IDS_TEMP_REMOVESHORTCUTS 1233
#define IDS_TEMP_SELFREGMODULES 1234
#define IDS_TEMP_SELFUNREGMODULES 1235
#define IDS_TEMP_STARTSERVICES 1236
#define IDS_TEMP_STOPSERVICES 1237
#define IDS_TEMP_UNPUBLISHCOMPONENTS 1238
#define IDS_TEMP_UNPUBLISHFEATURES 1239
#define IDS_TEMP_UNREGISTERCLASSINFO 1240
#define IDS_TEMP_UNREGISTERCOMPLUS 1241
#define IDS_TEMP_UNREGISTEREXTENSIONINFO 1242
#define IDS_TEMP_UNREGISTERFONTS 1243
#define IDS_TEMP_UNREGISTERMIMEINFO 1244
#define IDS_TEMP_UNREGISTERPROGIDINFO 1245
#define IDS_TEMP_UNREGISTERTYPELIBRARIES 1246
#define IDS_TEMP_WRITEENVIRONMENTSTRINGS 1247
#define IDS_TEMP_WRITEINIVALUES 1248
#define IDS_TEMP_WRITEREGISTRYVALUES 1249
