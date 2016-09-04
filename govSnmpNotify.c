/*
 * Note: this file originally auto-generated by mib2c using
 *        $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "govSnmp.h"

extern const oid snmptrap_oid[];
extern const size_t snmptrap_oid_len;

int
send_govSnmpLessPages_trap(void)
{
    netsnmp_variable_list *var_list = NULL;
    const oid       govSnmpLessPages_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 2, 1 };
    const oid       govSnmpNoPages_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 1, 1, 0 };
    const oid       govSnmpIntensity_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 1, 2, 0 };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
                              snmptrap_oid, snmptrap_oid_len,
                              ASN_OBJECT_ID,
                              govSnmpLessPages_oid,
                              sizeof(govSnmpLessPages_oid));

    /*
     * Add any objects from the trap definition
     */
	int no_of_pages = 400, intensity = 4;
    snmp_varlist_add_variable(&var_list,
                              govSnmpNoPages_oid,
                              OID_LENGTH(govSnmpNoPages_oid), ASN_INTEGER,&no_of_pages, sizeof(no_of_pages));
    snmp_varlist_add_variable(&var_list,
                              govSnmpIntensity_oid,
                              OID_LENGTH(govSnmpIntensity_oid),
                              ASN_INTEGER,
                              &intensity, sizeof(intensity));

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap(var_list);
    snmp_free_varbind(var_list);

    return SNMP_ERR_NOERROR;
}

int
send_govSnmpLowInk_trap(void)
{
    netsnmp_variable_list *var_list = NULL;
    const oid       govSnmpLowInk_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 2, 2 };
    const oid       govSnmpIntensity_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 1, 2, 0 };
    const oid       govSnmpNoPages_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 1, 1, 0 };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
                              snmptrap_oid, snmptrap_oid_len,
                              ASN_OBJECT_ID,
                              govSnmpLowInk_oid,
                              sizeof(govSnmpLowInk_oid));

    /*
     * Add any objects from the trap definition
     */
	int no_of_pages = 500, intensity = 5;
    snmp_varlist_add_variable(&var_list,
                              govSnmpIntensity_oid,
                              OID_LENGTH(govSnmpIntensity_oid),
                              ASN_INTEGER,&intensity, sizeof(intensity));
    snmp_varlist_add_variable(&var_list,
                              govSnmpNoPages_oid,
                              OID_LENGTH(govSnmpNoPages_oid), ASN_INTEGER,
                              &no_of_pages, sizeof(no_of_pages));

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the- trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap(var_list);
    snmp_free_varbind(var_list);

    return SNMP_ERR_NOERROR;
}

int
send_govSnmpNotPrinting_trap(void)
{
    netsnmp_variable_list *var_list = NULL;
    const oid       govSnmpNotPrinting_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 2, 3 };
    const oid       govSnmpStatus_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 1, 3, 0 };
    const oid       govSnmpNoPages_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 1, 1, 0 };
    const oid       govSnmpIntensity_oid[] =
        { 1, 3, 6, 1, 4, 1, 8072, 100, 1, 2, 0 };

    /*
     * Set the snmpTrapOid.0 value
     */
    snmp_varlist_add_variable(&var_list,
                              snmptrap_oid, snmptrap_oid_len,
                              ASN_OBJECT_ID,
                              govSnmpNotPrinting_oid,
                              sizeof(govSnmpNotPrinting_oid));

    /*
     * Add any objects from the trap definition
     */
	int no_of_pages = 600, intensity = 6, status = 1;
    snmp_varlist_add_variable(&var_list,
                              govSnmpStatus_oid,
                              OID_LENGTH(govSnmpStatus_oid), ASN_INTEGER,
                              &status, sizeof(status));
    snmp_varlist_add_variable(&var_list,
                              govSnmpNoPages_oid,
                              OID_LENGTH(govSnmpNoPages_oid), ASN_INTEGER,
                              &no_of_pages, sizeof(no_of_pages));
    snmp_varlist_add_variable(&var_list,
                              govSnmpIntensity_oid,
                              OID_LENGTH(govSnmpIntensity_oid),
                              ASN_INTEGER,
                              &intensity, sizeof(intensity));

    /*
     * Add any extra (optional) objects here
     */

    /*
     * Send the trap to the list of configured destinations
     *  and clean up
     */
    send_v2trap(var_list);
    snmp_free_varbind(var_list);

    return SNMP_ERR_NOERROR;
}
