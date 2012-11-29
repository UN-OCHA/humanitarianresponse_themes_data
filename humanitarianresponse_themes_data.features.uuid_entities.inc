<?php
/**
 * @file
 * humanitarianresponse_themes_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_themes_data_uuid_default_entities() {
  $entities = array();
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9fed3de8-87c6-456c-95dd-41c1cc3ce53b',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Age',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Age',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Age',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Age',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Edad',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/age',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '9fed3de8-87c6-456c-95dd-41c1cc3ce53b',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );

  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f9bbcf04-92b5-24e4-5136-ac88102df71b',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Civil/Military Relations',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Civil/Military Relations',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Civil/Military Relations',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Relations Civiles/Militaires',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Relaciones Civiles/Militares',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/civilmilitary-relations',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f9bbcf04-92b5-24e4-5136-ac88102df71b',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/cf07597a-b26e-42ed-856d-0b908e860f86',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Communication with affected populations',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Communication with affected populations',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Communication with affected populations',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Communication avec les populations affectées',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/communication-with-affected-populations',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'cf07597a-b26e-42ed-856d-0b908e860f86',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/80db9aaa-1b4d-8f04-7d99-2870f0ac0136',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Disarmament and Demobilization',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disarmament and Demobilization',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disarmament and Demobilization',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Désarmement et Démobilisation',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Desarme y Desmovilización',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/disarmament-and-demobilization',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '80db9aaa-1b4d-8f04-7d99-2870f0ac0136',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/86d499af-2e26-75b4-e102-c6424d0e35d2',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Disaster management',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disaster management',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disaster management',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gestion des Désastres',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gestión de desastres',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/disaster-management',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '86d499af-2e26-75b4-e102-c6424d0e35d2',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/07037c62-3d29-4441-9ef3-d8177b3d3fc4',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Environment',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Environment',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Environment',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Environnement',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/environment',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '07037c62-3d29-4441-9ef3-d8177b3d3fc4',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/0ce02f74-c231-b2a4-95b4-b87c960f7459',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Field coordination',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field coordination',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Field coordination',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Coordination sur le Terrain',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Coordinación de campos',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/field-coordination',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '0ce02f74-c231-b2a4-95b4-b87c960f7459',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b3d5d8dc-1009-4f4e-8027-c864d8cc043b',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Gender',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gender',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gender',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Genre',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/gender',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b3d5d8dc-1009-4f4e-8027-c864d8cc043b',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/15abe66d-39d5-4da2-bca4-ce1c69bfad2b',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'GenCap',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'GenCap',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'GenCap',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'GenCap',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b3d5d8dc-1009-4f4e-8027-c864d8cc043b',
    ),
    'path' => array(
      'alias' => 'themes/gencap',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '15abe66d-39d5-4da2-bca4-ce1c69bfad2b',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b6ea23fa-963f-43d2-8e60-295058d95238',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Gender Marker',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gender Marker',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gender Marker',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Marqueur de Genre',
        ),
      ),
    ),
    'parent' => array(
      0 => 'b3d5d8dc-1009-4f4e-8027-c864d8cc043b',
    ),
    'path' => array(
      'alias' => 'themes/gender-marker',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b6ea23fa-963f-43d2-8e60-295058d95238',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/9ded8528-02f2-6f24-399b-1744f92f89cf',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'HIV/AIDS',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'HIV/AIDS',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'HIV/AIDS',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'VIH/SIDA',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'VIH/SIDA',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/hivaids',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '9ded8528-02f2-6f24-399b-1744f92f89cf',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/90d5e546-2f59-d094-71a9-101b4b9c6051',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Humanitarian Financing',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Financing',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Financing',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Financement Humanitaire',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Financiamiento Humanitario',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/humanitarian-financing',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '90d5e546-2f59-d094-71a9-101b4b9c6051',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/486d8ae7-a19b-4723-ba02-b4eea49fdd8a',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Information Management',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Management',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information Management',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gestion de l\'Information',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/information-management',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '486d8ae7-a19b-4723-ba02-b4eea49fdd8a',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/73baf6f1-1085-2444-15c3-8d0e4a7bfb82',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Internally Displaced People (IDPs)',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Internally Displaced People (IDPs)',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Internally Displaced People (IDPs)',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Déplacés Internes (IDPs)',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Personas desplazadas internamente',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/internally-displaced-people-idps',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '73baf6f1-1085-2444-15c3-8d0e4a7bfb82',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/333b8475-cce6-4008-ba70-6382745f8cb2',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Mental Health / Psycho Social Support',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mental Health / Psycho Social Support',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mental Health / Psycho Social Support',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Santé Mentale / Support Socio Psychologique',
        ),
      ),
      
    ),
    'path' => array(
      'alias' => 'themes/mental-health-psycho-social-support',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '333b8475-cce6-4008-ba70-6382745f8cb2',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8ef00868-67f9-92f4-f906-69eee309a0e9',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Mine Action',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mine Action',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Mine Action',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Déminage',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Acción contra las Minas',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/mine-action',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '8ef00868-67f9-92f4-f906-69eee309a0e9',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/29e0789c-98e3-e394-c9c6-aabeecc42111',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Refugees and Returnees',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugees and Returnees',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugees and Returnees',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Réfugiés et Rapatriés',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Refugiados y Retornados',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/refugees-and-returnees',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '29e0789c-98e3-e394-c9c6-aabeecc42111',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/eb4e0d7a-5095-a7a4-45c7-3666754f7300',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Safety & Security',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Safety & Security',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Safety & Security',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sûreté & Sécurité',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Seguridad y Protección',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/safety-security',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'eb4e0d7a-5095-a7a4-45c7-3666754f7300',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/5fc7cc7a-abc6-f724-19cb-6833f011586e',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Sexual and Gender based Violence',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sexual and Gender based Violence',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sexual and Gender based Violence',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Violence Sexuelle et Sexiste',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Violencia sexual basada en género',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/sexual-and-gender-based-violence',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '5fc7cc7a-abc6-f724-19cb-6833f011586e',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/c05a0554-eff8-e414-d5f1-62eaab8f2c8c',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Technical co-operation with other countries',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Technical co-operation with other countries',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Technical co-operation with other countries',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Coopération Technique avec d\'autres pays',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Cooperación técnica con otros paises',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/technical-co-operation-other-countries',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'c05a0554-eff8-e414-d5f1-62eaab8f2c8c',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/dc596d6c-ac04-38e4-21ca-da320758686e',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Other',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Other',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Autre',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Otros',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/other',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'dc596d6c-ac04-38e4-21ca-da320758686e',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3016646f-f0b2-4578-9f89-35d5308a31ba',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Clusters and Coordination',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Clusters and Coordination',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Clusters and Coordination',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Clusters et Coordination',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Clusters y Coordinación',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/clusters-and-coordination',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '3016646f-f0b2-4578-9f89-35d5308a31ba',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8ebe521a-263b-46a6-ac80-d7f30cb79926',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Conflict',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conflict',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conflict',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conflit',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Conflicto',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/conflict',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '8ebe521a-263b-46a6-ac80-d7f30cb79926',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
    $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/11a29b4e-721a-4c0f-8611-f6bd3e10f9cf',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Contingency Planning',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Contingency Planning',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Contingency Planning',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Plan de Contingence',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Plan de Contingencia',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/contingency-planning',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '11a29b4e-721a-4c0f-8611-f6bd3e10f9cf',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
    $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/06d52367-85ad-4920-aaa0-e125a07cd389',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Early Recovery',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Early Recovery',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Early Recovery',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Relèvement Précoce',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Recupéración Temprana',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/early-recovery',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '06d52367-85ad-4920-aaa0-e125a07cd389',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f22d405d-f6fb-4080-88d0-94ebf3a9b935',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Human Rights and IHL',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Human Rights and IHL',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Human Rights and IHL',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Droits de l\'Homme et LHI',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Derechos Humanos y LHI',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/human-rights-and-ihl',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f22d405d-f6fb-4080-88d0-94ebf3a9b935',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3c453994-6031-41aa-9fb3-2ff192336ca0',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Humanitarian Access',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Access',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Access',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Accès Humanitaire',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Acceso Humanitario',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/humanitarian-access',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '3c453994-6031-41aa-9fb3-2ff192336ca0',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/79224c67-4079-416d-a770-cae5ba45f444',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Humanitarian Assistance',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Assistance',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Assistance',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Assistance Humanitaire',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Asistencia Humanitaria',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/humanitarian-assistance',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '79224c67-4079-416d-a770-cae5ba45f444',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/8ec3692a-c839-4276-a369-a1ab4af08676',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Natural Disasters',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Natural Disasters',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Natural Disasters',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Catastrophes Naturelles',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Desastres Naturales',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/natural-disasters',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '8ec3692a-c839-4276-a369-a1ab4af08676',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f03a7553-5085-490c-9f10-95b37afc929e',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Preparedness',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Preparedness',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Preparedness',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Préparation',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Preparación',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/preparedness',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f03a7553-5085-490c-9f10-95b37afc929e',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7ad3dca2-bab0-4181-91bc-68ff968e783f',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Public Information and Advocacy',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Public Information and Advocacy',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Public Information and Advocacy',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Information du Public et Plaidoyer',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Información Pública y Defensa',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/public-information-and-advocacy',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '7ad3dca2-bab0-4181-91bc-68ff968e783f',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/00c61726-3ece-4829-8ed0-58d3d65aeb02',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Sphere',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sphere',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sphere',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Sphère',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Esfera',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/sphere',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '00c61726-3ece-4829-8ed0-58d3d65aeb02',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/63f0561c-143f-4851-8228-5889e759ab40',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Resilience',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Resilience',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Resilience',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Résilience',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Resiliencia',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/resilience',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '63f0561c-143f-4851-8228-5889e759ab40',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );
  
  $entities['themes'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d3885c35-280d-44e5-b021-05bcb97b9f73',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Disaster Risk Reduction',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disaster Risk Reduction',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Disaster Risk Reduction',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Réduction des Risques de Catastrophe',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Reducción del Riesgo de Desastres',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'themes/disaster-risk-reduction',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'd3885c35-280d-44e5-b021-05bcb97b9f73',
    'vocabulary_machine_name' => 'themes',
    'weight' => '0',
  );

  return $entities;
}
