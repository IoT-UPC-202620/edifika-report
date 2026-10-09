<div align="center">
<p align="center">
  <img src="assets/img/upc_logo.png" alt="logo" width="200"/>
</p>

<h3>Universidad Peruana de Ciencias Aplicadas</h3>
<h3>Ingeniería de Software</h3>

<h4>1ASI0572 - Desarrollo de Soluciones IOT<br>202620</h4>

<h4>NRC: 8740</h4>

<h4>Docente: Verla Olivera, David Carlos</h4>

<h3>Informe de Trabajo Final</h3>

<h4>Nombre del Startup: Condomia</h4>
<h4>Nombre del Producto: Edifika</h4>


<br>

<h4>Integrantes:</h4>

<table style="border-collapse: collapse;">
  <thead>
    <tr>
      <th style="border: 1px solid black;">Alumno</th>
      <th style="border: 1px solid black;">Codigo</th>
    </tr>
  </thead>
  <tbody>
    <tr><td style="border: 1px solid black;">Acuña Corahua, Jonatan Ariel</td><td style="border: 1px solid black;">u20211b995</td></tr>
    <tr><td style="border: 1px solid black;">Collantes Carrillo, Diego Mateo</td><td style="border: 1px solid black;">u202311823</td></tr>
    <tr><td style="border: 1px solid black;">Landa Ortiz, Sergio Javier</td><td style="border: 1px solid black;">u202311086</td></tr>
	<tr><td style="border: 1px solid black;">Lizarbe Alvarez, Ariana Nickole</td><td style="border: 1px solid black;">u202311704</td></tr>
    <tr><td style="border: 1px solid black;">Ortiz Cardenas, Johanna Antuanete</td><td style="border: 1px solid black;">u202310358</td></tr>
    <tr><td style="border: 1px solid black;">Perez Tuesta, Gabriel</td><td style="border: 1px solid black;">u202321281</td></tr>
    <tr><td style="border: 1px solid black;">Sarmiento Medina, Loreley</td><td style="border: 1px solid black;">u202310005</td></tr>
  </tbody>
</table>
<br>

<h4>Setiembre, 2026</h4>

</div>

<div style="page-break-after: always;"></div>

## Registro de Versiones del Informe

<div align="center">I
<table>
  <thead>
    <tr>
      <th>Versión</th>
      <th>Fecha</th>
      <th>Autor</th>
      <th>Descripción de modificación</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>AVN1</td>
      <td>20/09/2026</td>
      <td>
        - Acuña Corahua, Jonatan Ariel <br>
        - Collantes Carrillo, Diego Mateo <br>
        - Landa Ortiz, Sergio Javier <br>
        - Ortiz Cardenas, Johanna Antuanete <br>
        - Perez Tuesta, Gabriel <br>
        - Lizarbe Alvarez, Ariana Nickole <br>
        - Sarmiento Medina, Loreley
      </td>
      <td>
        - Capítulo I: Introducción <br>
        - Capítulo II: Requirements Elicitation & Analysis <br>
        - Capítulo III: Requirements Specification <br>
        - Capítulo IV: Solution Software Design
      </td>
    </tr>
  </tbody>
</table>
</div>

## **Project Report Collaboration Insights**

AV1 (20/09/2026):
<br>
<p align="center">
  <img src="assets/img/in.jpeg" alt="logo" />
</p>

## **Contenido**
- [CAPÍTULO I: Introducción](#capítulo-i-introducción)
  - [1.1. Startup Profile](#11-startup-profile)
    - [1.1.1. Descripción de la Startup](#111-descripción-de-la-startup)
    - [1.1.2. Perfiles de integrantes del equipo](#112-perfiles-de-integrantes-del-equipo)
  - [1.2. Solution Profile](#12-solution-profile)
    - [1.2.1. Antecedentes y problemática](#121-antecedentes-y-problemática)
    - [1.2.2. Lean UX Process](#122-lean-ux-process)
      - [1.2.2.1. Lean UX Problem Statements](#1221-lean-ux-problem-statements)
      - [1.2.2.2. Lean UX Assumptions](#1222-lean-ux-assumptions)
      - [1.2.2.3. Lean UX Hypothesis Statements](#1223-lean-ux-hypothesis-statements)
      - [1.2.2.4. Lean UX Canvas](#1224-lean-ux-canvas)
  - [1.3. Segmentos objetivo](#13-segmentos-objetivo)
- [CAPÍTULO II: Requirements Elicitation & Analysis](#capítulo-ii-requirements-elicitation--analysis)
  - [2.1. Competidores](#21-competidores)
    - [2.1.1. Análisis competitivo](#211-análisis-competitivo)
    - [2.1.2. Estrategias y tácticas frente a competidores](#212-estrategias-y-tácticas-frente-a-competidores)
  - [2.2. Entrevistas](#22-entrevistas)
    - [2.2.1. Diseño de entrevistas](#221-diseño-de-entrevistas)
    - [2.2.2. Registro de entrevistas](#222-registro-de-entrevistas)
    - [2.2.3. Análisis de entrevistas](#223-análisis-de-entrevistas)
  - [2.3. Needfinding](#23-needfinding)
    - [2.3.1. User Personas](#231-user-personas)
    - [2.3.2. User Task Matrix](#232-user-task-matrix)
    - [2.3.3. User Journey Mapping](#233-user-journey-mapping)
    - [2.3.4. Empathy Mapping](#234-empathy-mapping)
  - [2.4. Big Picture EventStorming](#24-big-picture-eventstorming)
  - [2.5. Ubiquitous Language](#25-ubiquitous-language)
- [CAPÍTULO III: Requirements Specification](#capítulo-iii-requirements-specification)
  - [3.1. User Stories](#31-user-stories)
  - [3.2. Impact Mapping](#32-impact-mapping)
  - [3.3. Product Backlog](#33-product-backlog)
- [CAPÍTULO IV: Solution Software Design](#capítulo-iv-solution-software-design)
  - [4.1. Strategic-Level Domain-Driven Design](#41-strategic-level-domain-driven-design)
    - [4.1.1. Design-Level EventStorming](#411-design-level-eventstorming)
      - [4.1.1.1. Candidate Context Discovery](#4111-candidate-context-discovery)
      - [4.1.1.2. Domain Message Flows Modeling](#4112-domain-message-flows-modeling)
      - [4.1.1.3. Bounded Context Canvases](#4113-bounded-context-canvases)
    - [4.1.2. Context Mapping](#412-context-mapping)
    - [4.1.3. Software Architecture](#413-software-architecture)
      - [4.1.3.1. Software Architecture System Landscape Diagram](#4131-software-architecture-system-landscape-diagram)
      - [4.1.3.2. Software Architecture Context Level Diagrams](#4132-software-architecture-context-level-diagrams)
      - [4.1.3.3. Software Architecture Container Level Diagrams](#4133-software-architecture-container-level-diagrams)
      - [4.1.3.4. Software Architecture Deployment Diagrams](#4134-software-architecture-deployment-diagrams)
  - [4.2. Tactical-Level Domain-Driven Design](#42-tactical-level-domain-driven-design)
    - [4.2.1. Bounded Context: IAM / Auth](#421-bounded-context-iam--auth)
      - [4.2.1.1. Domain Layer](#4211-domain-layer)
      - [4.2.1.2. Interface Layer](#4212-interface-layer)
      - [4.2.1.3. Application Layer](#4213-application-layer)
      - [4.2.1.4. Infrastructure Layer](#4214-infrastructure-layer)
      - [4.2.1.5. Bounded Context Software Architecture Component Level Diagrams](#4215-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.1.6. Bounded Context Software Architecture Code Level Diagrams](#4216-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.1.6.1. Bounded Context Domain Layer Class Diagrams](#42161-bounded-context-domain-layer-class-diagrams)
        - [4.2.1.6.2. Bounded Context Database Design Diagram](#42162-bounded-context-database-design-diagram)
    - [4.2.2. Bounded Context: Residential Management](#422-bounded-context-residential-management)
      - [4.2.2.1. Domain Layer](#4221-domain-layer)
      - [4.2.2.2. Interface Layer](#4222-interface-layer)
      - [4.2.2.3. Application Layer](#4223-application-layer)
      - [4.2.2.4. Infrastructure Layer](#4224-infrastructure-layer)
      - [4.2.2.5. Bounded Context Software Architecture Component Level Diagrams](#4225-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.2.6. Bounded Context Software Architecture Code Level Diagrams](#4226-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.2.6.1. Bounded Context Domain Layer Class Diagrams](#42261-bounded-context-domain-layer-class-diagrams)
        - [4.2.2.6.2. Bounded Context Database Design Diagram](#42262-bounded-context-database-design-diagram)
    - [4.2.3. Bounded Context: Reservation](#423-bounded-context-reservation)
      - [4.2.3.1. Domain Layer](#4231-domain-layer)
      - [4.2.3.2. Interface Layer](#4232-interface-layer)
      - [4.2.3.3. Application Layer](#4233-application-layer)
      - [4.2.3.4. Infrastructure Layer](#4234-infrastructure-layer)
      - [4.2.3.5. Bounded Context Software Architecture Component Level Diagrams](#4235-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.3.6. Bounded Context Software Architecture Code Level Diagrams](#4236-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.3.6.1. Bounded Context Domain Layer Class Diagrams](#42361-bounded-context-domain-layer-class-diagrams)
        - [4.2.3.6.2. Bounded Context Database Design Diagram](#42362-bounded-context-database-design-diagram)
    - [4.2.4. Bounded Context: Payment](#424-bounded-context-payment)
      - [4.2.4.1. Domain Layer](#4241-domain-layer)
      - [4.2.4.2. Interface Layer](#4242-interface-layer)
      - [4.2.4.3. Application Layer](#4243-application-layer)
      - [4.2.4.4. Infrastructure Layer](#4244-infrastructure-layer)
      - [4.2.4.5. Bounded Context Software Architecture Component Level Diagrams](#4245-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.4.6. Bounded Context Software Architecture Code Level Diagrams](#4246-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.4.6.1. Bounded Context Domain Layer Class Diagrams](#42461-bounded-context-domain-layer-class-diagrams)
        - [4.2.4.6.2. Bounded Context Database Design Diagram](#42462-bounded-context-database-design-diagram)
    - [4.2.5. Bounded Context: Notification](#425-bounded-context-notification)
      - [4.2.5.1. Domain Layer](#4251-domain-layer)
      - [4.2.5.2. Interface Layer](#4252-interface-layer)
      - [4.2.5.3. Application Layer](#4253-application-layer)
      - [4.2.5.4. Infrastructure Layer](#4254-infrastructure-layer)
      - [4.2.5.5. Bounded Context Software Architecture Component Level Diagrams](#4255-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.5.6. Bounded Context Software Architecture Code Level Diagrams](#4256-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.5.6.1. Bounded Context Domain Layer Class Diagrams](#42561-bounded-context-domain-layer-class-diagrams)
        - [4.2.5.6.2. Bounded Context Database Design Diagram](#42562-bounded-context-database-design-diagram)
    - [4.2.6. Bounded Context: Communication](#426-bounded-context-communication)
      - [4.2.6.1. Domain Layer](#4261-domain-layer)
      - [4.2.6.2. Interface Layer](#4262-interface-layer)
      - [4.2.6.3. Application Layer](#4263-application-layer)
      - [4.2.6.4. Infrastructure Layer](#4264-infrastructure-layer)
      - [4.2.6.5. Bounded Context Software Architecture Component Level Diagrams](#4265-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.6.6. Bounded Context Software Architecture Code Level Diagrams](#4266-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.6.6.1. Bounded Context Domain Layer Class Diagrams](#42661-bounded-context-domain-layer-class-diagrams)
        - [4.2.6.6.2. Bounded Context Database Design Diagram](#42662-bounded-context-database-design-diagram)
    - [4.2.7. Bounded Context: Forum](#427-bounded-context-forum)
      - [4.2.7.1. Domain Layer](#4271-domain-layer)
      - [4.2.7.2. Interface Layer](#4272-interface-layer)
      - [4.2.7.3. Application Layer](#4273-application-layer)
      - [4.2.7.4. Infrastructure Layer](#4274-infrastructure-layer)
      - [4.2.7.5. Bounded Context Software Architecture Component Level Diagrams](#4275-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.7.6. Bounded Context Software Architecture Code Level Diagrams](#4276-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.7.6.1. Bounded Context Domain Layer Class Diagrams](#42761-bounded-context-domain-layer-class-diagrams)
        - [4.2.7.6.2. Bounded Context Database Design Diagram](#42762-bounded-context-database-design-diagram)
    - [4.2.8. Bounded Context: Report](#428-bounded-context-report)
      - [4.2.8.1. Domain Layer](#4281-domain-layer)
      - [4.2.8.2. Interface Layer](#4282-interface-layer)
      - [4.2.8.3. Application Layer](#4283-application-layer)
      - [4.2.8.4. Infrastructure Layer](#4284-infrastructure-layer)
      - [4.2.8.5. Bounded Context Software Architecture Component Level Diagrams](#4285-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.8.6. Bounded Context Software Architecture Code Level Diagrams](#4286-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.8.6.1. Bounded Context Domain Layer Class Diagrams](#42861-bounded-context-domain-layer-class-diagrams)
        - [4.2.8.6.2. Bounded Context Database Design Diagram](#42862-bounded-context-database-design-diagram)
      - [4.2.9. Bounded Context: IoT Access Management](#429-bounded-context-iot-access-management)
      - [4.2.9.1. Domain Layer](#4291-domain-layer)
      - [4.2.9.2. Interface Layer](#4292-interface-layer)
      - [4.2.9.3. Application Layer](#4293-application-layer)
      - [4.2.9.4. Infrastructure Layer](#4294-infrastructure-layer)
      - [4.2.9.5. Bounded Context Software Architecture Component Level Diagrams](#4295-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.9.6. Bounded Context Software Architecture Code Level Diagrams](#4296-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.9.6.1. Bounded Context Domain Layer Class Diagrams](#42961-bounded-context-domain-layer-class-diagrams)
        - [4.2.9.6.2. Bounded Context Database Design Diagram](#42962-bounded-context-database-design-diagram)
    - [4.2.10. Bounded Context: Smart Lighting & Automation](#4210-bounded-context-smart-lighting--automation)
      - [4.2.10.1. Domain Layer](#42101-domain-layer)
      - [4.2.10.2. Interface Layer](#42102-interface-layer)
      - [4.2.10.3. Application Layer](#42103-application-layer)
      - [4.2.10.4. Infrastructure Layer](#42104-infrastructure-layer)
      - [4.2.10.5. Bounded Context Software Architecture Component Level Diagrams](#42105-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.10.6. Bounded Context Software Architecture Code Level Diagrams](#42106-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.10.6.1. Bounded Context Domain Layer Class Diagrams](#421061-bounded-context-domain-layer-class-diagrams)
        - [4.2.10.6.2. Bounded Context Database Design Diagram](#421062-bounded-context-database-design-diagram)
    - [4.2.11. Bounded Context: IoT Telemetry & Analytics](#4211-bounded-context-iot-telemetry--analytics)
      - [4.2.11.1. Domain Layer](#42111-domain-layer)
      - [4.2.11.2. Interface Layer](#42112-interface-layer)
      - [4.2.11.3. Application Layer](#42113-application-layer)
      - [4.2.11.4. Infrastructure Layer](#42114-infrastructure-layer)
      - [4.2.11.5. Bounded Context Software Architecture Component Level Diagrams](#42115-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.11.6. Bounded Context Software Architecture Code Level Diagrams](#42116-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.11.6.1. Bounded Context Domain Layer Class Diagrams](#421161-bounded-context-domain-layer-class-diagrams)
        - [4.2.11.6.2. Bounded Context Database Design Diagram](#421162-bounded-context-database-design-diagram)
    - [4.2.12. Bounded Context: Water Pump Leak Detection](#4212-bounded-context-water-pump-leak-detection)
      - [4.2.12.1. Domain Layer](#42121-domain-layer)
      - [4.2.12.2. Interface Layer](#42122-interface-layer)
      - [4.2.12.3. Application Layer](#42123-application-layer)
      - [4.2.12.4. Infrastructure Layer](#42124-infrastructure-layer)
      - [4.2.12.5. Bounded Context Software Architecture Component Level Diagrams](#42125-bounded-context-software-architecture-component-level-diagrams)
      - [4.2.12.6. Bounded Context Software Architecture Code Level Diagrams](#42126-bounded-context-software-architecture-code-level-diagrams)
        - [4.2.12.6.1. Bounded Context Domain Layer Class Diagrams](#421261-bounded-context-domain-layer-class-diagrams)
        - [4.2.12.6.2. Bounded Context Database Design Diagram](#421262-bounded-context-database-design-diagram)
    - [Conclusiones](#conclusiones)
- [CAPÍTULO V: Solution UI/UX Design](#capítulo-v-solution-uiux-design)
  - [5.1. Style Guidelines](#51-style-guidelines)
    - [5.1.1. General Style Guidelines](#511-general-style-guidelines)
    - [5.1.2. Web, Mobile and IoT Style Guidelines](#512-web-mobile-and-iot-style-guidelines)
      - [IoT Physical Interface Style Guidelines](#iot-physical-interface-style-guidelines)
  - [5.2. Information Architecture](#52-information-architecture)
  - [5.3. Landing Page UI Design](#53-landing-page-ui-design)
  - [5.4. Applications UX/UI Design](#54-applications-uxui-design)
  - [5.5. Application Prototyping](#55-application-prototyping)
  - [5.6. IoT Device Design](#56-iot-device-design)
    - [5.6.1. Introducción y criterios de diseño](#561-introducción-y-criterios-de-diseño)
    - [5.6.2. Relación con la arquitectura de información y con la guía de estilos de interfaz física](#562-relación-con-la-arquitectura-de-información-y-con-la-guía-de-estilos-de-interfaz-física)
    - [5.6.3. Stack común y cadena de herramientas](#563-stack-común-y-cadena-de-herramientas)
    - [5.6.4. Dispositivo 01 — Controlador de acceso de áreas comunes (ACC-01)](#564-dispositivo-01--controlador-de-acceso-de-áreas-comunes-acc-01)
    - [5.6.5. Dispositivo 02 — Nodo de iluminación inteligente y sensado (LGT-01)](#565-dispositivo-02--nodo-de-iluminación-inteligente-y-sensado-lgt-01)
    - [5.6.6. Dispositivo 03 — Nodo hidráulico de detección de fugas (HYD-01)](#566-dispositivo-03--nodo-hidráulico-de-detección-de-fugas-hyd-01)
    - [5.6.7. Dispositivo 04 — Medidor de consumo energético (PWR-01)](#567-dispositivo-04--medidor-de-consumo-energético-pwr-01)
    - [5.6.8. Verificación de los prototipos y presupuestos de respuesta](#568-verificación-de-los-prototipos-y-presupuestos-de-respuesta)
    - [5.6.9. Trazabilidad con las historias de usuario](#569-trazabilidad-con-las-historias-de-usuario)
- [Conclusiones y Recomendaciones](#conclusiones-y-recomendaciones)
- [Referencias Bibliográficas](#referencias-bibliográficas)
- [Anexos](#anexos)

## **Student Outcome**
ABET – EAC - Student Outcome 5: La capacidad de funcionar efectivamente en un equipo cuyos miembros juntos proporcionan liderazgo, crean un entorno de colaboración e inclusivo, establecen objetivos, planifican tareas y cumplen objetivos

<table border="1">
<thead>
<tr>
<th>Criterio específico</th>
<th>Acciones realizadas</th>
<th>Conclusiones</th>
</tr>
</thead>
<tbody>
<tr>
<td>5.c.1 Trabaja en equipo para proporcionar liderazgo en forma conjunta</td>
<td>
Acuña Corahua, Jonatan Ariel<br><br>
AV1: Asumí el desarrollo de los principales artefactos de diseño de la solución. Modelé la arquitectura del sistema con C4 Model en Structurizr DSL (Landscape, Context, Container y Deployment, incluidos los microservicios IoT, el nivel de Edge Computing on-premise y los nodos físicos ESP32), definí los Bounded Contexts estratégicos, el Design-Level EventStorming de la extensión IoT y los diagramas de Domain Storytelling, y elaboré el modelado táctico DDD con la persistencia híbrida (PostgreSQL y TimescaleDB), consolidando el Capítulo IV como base común del diseño.<br><br>

Collantes Carrillo, Diego Mateo<br><br>
AV1: Desarrollé liderazgo compartido al coordinar colaborativamente la sección de Strategic-Level Domain-Driven Design. Guié al equipo en el Design-Level EventStorming (Candidate Context Discovery, Domain Message Flows Modeling y Bounded Context Canvases) y en el desarrollo del Context Mapping, facilitando la alineación y estructuración estratégica del dominio del sistema. <br><br>


Landa Ortiz, Sergio Javier<br><br>
AV1: <br>Desarrollé el Capítulo I del informe, incluyendo la definición del Startup Profile, la descripción de la startup y de los integrantes del equipo, los antecedentes y la problemática, así como la aplicación del proceso Lean UX mediante la elaboración de los Problem Statements, Assumptions, Hypothesis Statements y Lean UX Canvas. Además, definí los segmentos objetivo del proyecto, proporcionando una base estructurada para que el equipo comprendiera el contexto de la solución y alineara las actividades de investigación y análisis desarrolladas en las siguientes etapas.<br>

Lizarbe Alvarez, Ariana Nickole<br><br>
AV1: Participé activamente en las entrevistas realizadas a los usuarios para recopilar información sobre sus necesidades, comportamientos y problemas. Además, elaboré los User Stories, el Product Backlog y el Impact Mapping, contribuyendo a organizar los requerimientos, priorizar funcionalidades y relacionar las necesidades identificadas con los objetivos del producto. Estas actividades permitieron aportar al trabajo colaborativo y facilitar la toma de decisiones del equipo durante la definición de la solución. <br><br>

Ortiz Cardenas, Johanna Antuanete<br><br>
AV1: Participé en el Design-Level EventStorming de la extensión IoT, identificando los comandos, eventos de dominio y políticas que conectan los Bounded Contexts Reservation, Smart Lighting & Automation e IoT Access Management. A partir de ese modelo, redacté y documenté el Domain Layer, Interface Layer, Application Layer e Infrastructure Layer de todos los Bounded Contexts del Capítulo IV, incluyendo el nuevo contexto de Water Pump Leak Detection, junto con sus diagramas de clases y de entidad-relación en PlantUML. <br><br>

Perez Tuesta, Gabriel<br><br>
AV1: Asumí el desarrollo de los principales artefactos de investigación y análisis centrados en el usuario. Diseñé las entrevistas para la validación del segmento objetivo, elaboré el User Persona, el Customer Journey Map, el Análisis Competitivo y la User Task Matrix, contribuyendo a comprender las necesidades de los usuarios, identificar oportunidades de mejora y establecer una base sólida para la definición de requerimientos y funcionalidades del producto.<br><br>

Sarmiento Medina, Loreley<br><br>
AV1:Participé en el Design-Level EventStorming, en la identificación de los Bounded Contexts y en la definición de sus capas Domain, Application, Interface e Infrastructure. Además, apoyé en la elaboración de User Stories y en correcciones generales del informe. 
</td>
<td>
AV1: Durante esta entrega, el equipo desarrolló actividades de investigación y análisis orientadas a comprender el problema, identificar las necesidades de los usuarios y evaluar el contexto competitivo del producto. La elaboración del análisis competitivo, el diseño y ejecución de entrevistas, los User Personas, la User Task Matrix y el User Journey Map permitió obtener información relevante sobre los usuarios objetivo, sus necesidades, comportamientos y desafíos. Como resultado, se estableció una base sólida para la definición de requerimientos y la toma de decisiones en las siguientes etapas del proyecto, asegurando que la propuesta de solución estuviera alineada con las necesidades identificadas. Además, en el Capítulo IV el equipo pasó de la investigación al diseño de la solución: la arquitectura y los Bounded Contexts estratégicos quedaron definidos y sirvieron de base para el diseño táctico de cada contexto.
</td>
</tr>
<tr>
<td>5.c.2 Crea un entorno colaborativo e inclusivo, establece metas, planifica tareas y cumple objetivos</td>
<td>
Acuña Corahua, Jonatan Ariel<br><br>
AV1: Estructuré el repositorio del informe con una carpeta por capítulo según las pautas del trabajo final, migré los contenidos base y organicé los recursos gráficos en un directorio común de assets. Configuré un pipeline en Docker (Pandoc y Eisvogel, con filtros propios para tablas y HTML) que compila todo el informe a PDF y mantuve el Registro de Versiones, de modo que el equipo trabaje sobre una misma fuente y cada avance quede trazable.<br><br>

Collantes Carrillo, Diego Mateo<br><br>
AV1: Fomenté un entorno colaborativo e inclusivo al coordinar la planificación y ejecución estratégica del dominio del proyecto (Strategic-Level Domain-Driven Design). Establecí metas claras facilitando el Design-Level EventStorming (Candidate Context Discovery, Domain Message Flows Modeling y Bounded Context Canvases) y organicé el trabajo en equipo para definir el Context Mapping, cumpliendo exitosamente con los objetivos planteados. <br><br>

Landa Ortiz, Sergio Javier<br><br>
AV1: <br>Planifiqué y desarrollé el Capítulo I del proyecto, organizando la información relacionada con la startup, la problemática, el proceso Lean UX y los segmentos objetivo. Establecí una estructura clara para documentar el contexto y la propuesta inicial del producto, permitiendo que el equipo trabajara sobre una base común y alineada. Gracias a ello, se cumplieron los objetivos de la etapa inicial del proyecto y se facilitó el desarrollo de las actividades posteriores de investigación, validación y diseño de la solución.<br>

Lizarbe Alvarez, Ariana Nickole<br><br>
AV1: Participé en la planificación y desarrollo de las actividades de investigación y definición del producto. Colaboré en las entrevistas con usuarios y elaboré los User Stories, Product Backlog e Impact Mapping, organizando los requerimientos y funcionalidades de acuerdo con los objetivos identificados. Con estas actividades contribuí al cumplimiento de los objetivos de la etapa y a mantener una organización clara del trabajo del equipo. <br><br>

Ortiz Cardenas, Johanna Antuanete<br><br>
AV1: Planifiqué las sesiones de Design-Level EventStorming para la extensión IoT, definiendo el alcance de eventos a modelar por cada Bounded Context. Cumplí con la meta de dejar documentado y homogéneo todo el Capítulo IV, redactando cada Bounded Context bajo el mismo formato y corrigiendo la numeración de secciones para mantener la trazabilidad del informe.<br><br>

Perez Tuesta, Gabriel<br><br>
AV1: Planifiqué y desarrollé las actividades relacionadas con la investigación de usuarios y el análisis del contexto del producto. Diseñé las entrevistas, elaboré el User Persona, el Journey Map, el Análisis Competitivo y la User Task Matrix, cumpliendo con los objetivos establecidos para la fase de descubrimiento y validación inicial del proyecto.<br><br>

Sarmiento Medina, Loreley<br><br>
AV1:Colaboré en la organización y revisión de los Bounded Contexts, User Stories y artefactos del proyecto, realizando correcciones generales para mantener la consistencia del informe y contribuir al cumplimiento de los objetivos de la entrega. 
</td>
<td>
AV1: Durante esta entrega, el equipo organizó y ejecutó las actividades correspondientes a la fase de investigación y análisis del proyecto. La planificación de entrevistas, el análisis del mercado y la construcción de artefactos centrados en el usuario permitieron recopilar información relevante y estructurar el conocimiento obtenido. Gracias a ello, se cumplieron los objetivos planteados para la etapa de descubrimiento, generando insumos que sirvieron como base para la definición de requerimientos y el diseño de la solución propuesta. Además, trabajar sobre un único repositorio del informe, con un pipeline automatizado para generar el PDF y un registro de versiones, permitió que los integrantes avanzaran en paralelo y que cada aporte quedara trazable en los commits.
</td>
</tr>
</tbody>
</table>

# Capítulo I: Introducción

## 1.1. Startup Profile
### 1.1.1. Descripción de la Startup

Condomia es una startup tecnológica enfocada en transformar la gestión de condominios y edificios residenciales mediante soluciones digitales accesibles, intuitivas y diseñadas para el día a día. Creemos firmemente que administrar una comunidad residencial puede y debe ser una experiencia ordenada, clara y eficiente para todos los actores involucrados. Nuestro equipo combina experiencia en tecnología, diseño y gestión para desarrollar herramientas que respondan a las necesidades reales de quienes conviven y administran estos espacios. Nuestro producto principal, Edifika, es una plataforma que centraliza en un único entorno digital la gestión y seguimiento de deudas y pagos, agiliza el proceso de reserva de áreas comunes y mantiene a toda la comunidad informada a través de comunicados oficiales estructurados, eliminando los procesos manuales y la información dispersa que podrían generar conflictos y desorganización. Apostamos por una tecnología que no solo resuelve problemas operativos, sino que también fortalece la comunicación interna y facilita la toma de decisiones colectivas dentro de cada edificio. Nuestro objetivo es convertirnos en el aliado digital de cada comunidad residencial, brindándole las herramientas necesarias para funcionar con transparencia, autonomía y confianza.

**Misión:**
Transformar la gestión de comunidades residenciales mediante soluciones digitales accesibles e intuitivas que centralicen los procesos administrativos, mejoren la comunicación y promuevan la transparencia entre administradores y residentes.

**Visión:**
Convertirnos en la plataforma de referencia para la gestión de condominios, siendo el aliado digital de cada comunidad residencial que busca operar con orden y confianza.

### 1.1.2. Perfiles de integrantes del equipo

| Estudiante | Descripción |
|------------|-------------|
| ![team member profile photo](assets/img/profiles/jonatan_acuna.jpeg) **Acuña Corahua, Jonatan Ariel (u20211b995)** | Soy estudiante del 8vo ciclo de la carrera de Ingeniería de Software en la UPC. Me gustó la carrera tras aprender desarrollo web y desde entonces, sigo aprendiendo para mejorar mis habilidades cada vez más, actualmente me enfoco en aprender tecnologías relacionadas a DevSecOps. En mi tiempo libre juego videojuegos y de vez en cuando salir en bicicleta|
| ![team member profile photo](assets/img/profiles/diego_collantes.png) **Collantes Carrillo, Diego Mateo (u202311823)** | Mi nombre es Diego Collantes. Tengo 21 años. Soy estudiante de octavo ciclo en la Universidad Peruana de Ciencias Aplicadas (UPC). Disfruto de leer, redactar y escuchar música en mi tiempo libre. Elegí esta carrera, ya que me interesó todo el proceso que hay detrás de cada aplicación o programa que usamos en nuestro día a día. Personalmente, espero ampliar mis conocimientos en este ámbito a lo largo de este curso. Además, estoy comprometido a contribuir en todo lo que sea posible con el equipo y a desempeñarme de manera adecuada. |
| ![team member profile photo](assets/img/profiles/antuanete_ortiz.png) **Ortiz Cardenas, Johanna Antuanete (u202310358)** | Mi nombre es Johanna Antuanete Ortiz Cardenas, tengo 20 años y actualmente curso el octavo ciclo de la carrera de Ingeniería de Software en la Universidad Peruana de Ciencias Aplicadas. Me considero una persona proactiva, responsable y orientada a la calidad, con especial interés en el desarrollo frontend, área en la que disfruto crear interfaces intuitivas y visualmente atractivas. Me apasiona mantenerme actualizada sobre las últimas tendencias y avances tecnológicos, lo que me permite aportar soluciones modernas y fundamentadas a cada proyecto. En mi tiempo libre, disfruto escuchar música y leer cómics, actividades que nutren mi creatividad y perspectiva. En el marco de este proyecto grupal, me comprometo a colaborar de manera activa y responsable, aportando ideas de valor y cumpliendo con los entregables en los plazos establecidos, con el objetivo de alcanzar resultados de alta calidad. |
| ![team member profile photo](assets/img//Sergio-Landa.jpeg) **Landa Ortiz, Sergio Javier (u202311086)** |Soy Sergio Landa Ortiz, tengo 20 años. Soy estudiante de la UPC de la carrera de Ingeniería de Software y me encuentro cursando el séptimo ciclo. Me considero una persona responsable y activa, siempre con la actitud de ofrecer ayuda al equipo, cuento con experiencia trabajando como desarrollador frontend. Asimismo, en cuanto a habilidades extracurriculares, soy bailarin y profesor de marinera norteña, me apasionan los deportes y estar actualizado con las nuevas tecnologias que se actualizan dia a dia en el mundo. || ![team member profile photo](assets/img/profiles/antuanete_ortiz.png) **Ortiz Cardenas, Johanna Antuanete (u202310358)** | Mi nombre es Johanna Antuanete Ortiz Cardenas, tengo 20 años y actualmente curso el octavo ciclo de la carrera de Ingeniería de Software en la Universidad Peruana de Ciencias Aplicadas. Me considero una persona proactiva, responsable y orientada a la calidad, con especial interés en el desarrollo frontend, área en la que disfruto crear interfaces intuitivas y visualmente atractivas. Me apasiona mantenerme actualizada sobre las últimas tendencias y avances tecnológicos, lo que me permite aportar soluciones modernas y fundamentadas a cada proyecto. En mi tiempo libre, disfruto escuchar música y leer cómics, actividades que nutren mi creatividad y perspectiva. En el marco de este proyecto grupal, me comprometo a colaborar de manera activa y responsable, aportando ideas de valor y cumpliendo con los entregables en los plazos establecidos, con el objetivo de alcanzar resultados de alta calidad. |
| ![team member profile photo](assets/img/profiles/gabriel.png) **Perez Tuesta, Gabriel (u202321281)** | Soy Gabriel Perez Tuesta, tengo 23 años. Soy estudiante de la UPC de la carrera de Ingeniería de Software y me encuentro cursando el séptimo ciclo. Cuento con habilidades de programación en C++ y Python, así como aptitudes para el desarrollo en UX y UI. Asimismo, en cuanto a habilidades extracurriculares, he contribuido en proyectos con edición de video y fomentando una actitud colaborativa en el equipo. |
| ![team member profile photo](assets/img/profiles/ariana_lizarbe.jpg) **Lizarbe Alvarez, Ariana Nickole (u202311704)** | Mi nombre es Ariana Lizarbe, tengo 21 años y me encuentro cursando el octavo ciclo de Ingeniería de Software en la UPC. Me considero una persona responsable y aplicada, siempre estoy dispuesta a aprender nuevos conceptos y tecnologías. Además de ello, trabajo muy bien en equipo, logrando dividir y delegar tareas a mis compañeros de manera eficiente. |
| ![team member profile photo](assets/img/profiles/loreley_sarmiento.jpg) **Sarmiento Medina, Loreley (u202310005)** | Mi nombre es Loreley Sarmiento, tengo 20 años y actualmente curso la carrera de Ingeniería de Software. Me considero una persona responsable, organizada y con buena disposición para el trabajo en equipo, ya que valoro la comunicación y la colaboración como elementos clave para lograr buenos resultados. Me interesa seguir aprendiendo constantemente y asumir nuevos retos que me permitan fortalecer mis habilidades.En este proyecto, busco participar de manera activa, apoyar a mis compañeros, aportar ideas que contribuyan al desarrollo del equipo y cumplir con las tareas asignadas dentro de los plazos establecidos, con el objetivo de alcanzar un resultado de calidad. |

## 1.2. Solution Profile

El nombre elegido para nuestro producto es Edifika. Este nombre surge de la fusión de dos conceptos clave: "edificio", que representa el entorno físico y la comunidad residencial a la que va dirigida la solución, y el sufijo "ka", que le otorga una identidad al producto en sí. Edifika es una aplicación digital que centraliza y simplifica la gestión integral de condominios y edificios residenciales en un solo lugar. Permite registrar y hacer un seguimiento de deudas y pagos de manera transparente, coordinar la reserva de áreas comunes sin complicaciones y mantener a toda la comunidad informada mediante comunicados fáciles de acceder. Su diseño está pensado para ser intuitivo y accesible, eliminando los procesos manuales y la información dispersa que suelen generar conflictos y desorganización dentro de las comunidades. Edifika no es solo una herramienta operativa, sino un canal que fortalece la comunicación y facilita la toma de decisiones dentro de cada edificio, con el objetivo de construir comunidades más ordenadas, transparentes y eficientes.

### 1.2.1. Antecedentes y problemática

 **What:** <br><br>
El crecimiento sostenido del mercado inmobiliario en Lima ha generado una mayor demanda de servicios de gestión y mantenimiento de propiedades. Durante el tercer trimestre del 2024, se registró la venta de 5,716 unidades en Lima Metropolitana y Callao, lo que evidencia una necesidad creciente de administración eficiente en edificios multifamiliares (Sociedad Peruana de Bienes Raíces, 2024). Sin embargo, las empresas y juntas encargadas de esta gestión enfrentan desafíos significativos relacionados con la transparencia, la eficiencia operativa y la comunicación con los residentes (Verastegui Leon et al., 2025). <br><br>
En este contexto, la digitalización emerge como una respuesta necesaria. Según la Sociedad Peruana de Bienes Raíces (2024), la gestión digital de edificios y condominios permite automatizar procesos como el registro de pagos y cobranzas, mejorar la comunicación entre administradores, propietarios e inquilinos, y garantizar mayor transparencia en la toma de decisiones. A pesar de ello, esta transformación digital aún representa una tendencia emergente en el Perú, lo que deja a gran parte de las comunidades residenciales sin herramientas adecuadas para una gestión ordenada y eficiente. <br><br>

**When:** <br><br>

El problema de la gestión ineficiente en condominios y edificios residenciales no es reciente, sin embargo se ha intensificado en los últimos años como consecuencia del crecimiento acelerado de edificaciones verticales en Latinoamérica. Aguilar (2026) señala que los conflictos en torno al pago de cuotas de mantenimiento, el uso de áreas comunes y la administración interna se presentan de forma recurrente y cotidiana dentro de las comunidades residenciales, agravándose en situaciones donde la normativa vigente data de décadas atrás y no responde a la necesidades actuales. En el caso de Perú, este escenario se hace más urgente considerando que solo en el tercer trimestre del 2024 se registró la venta de 5,716 unidades residenciales en Lima Metropolitana y Callao, lo que evidencia un crecimiento sostenido del mercado inmobiliario que amplía la demanda de soluciones de gestión eficientes (Verastegui Leon et al., 2025). <br><br>

**Where:** <br><br>

El problema de la gestión ineficiente en condominios y edificios residenciales se presenta principalmente en las zonas urbanas con mayor densidad de vivienda vertical. En el caso de Lima, distritos como Miraflores, Santiago de Surco y Jesús María concentran cerca del 70% de la búsqueda de viviendas nuevas, siendo las zonas clasificadas como Lima Moderna y Lima Top las de mayor demanda residencial (Verastegui Leon et al., 2025). Es precisamente en estas áreas donde la convivencia en espacios reducidos y la alta densidad poblacional intensifica los conflictos de gobernanza, administración y uso de bienes comunes. A nivel regional, Aguilar (2026) señala que esta problemática se vuelve a evidenciar en distintos países de Latinoamérica, manifestándose con mayor intensidad en las modalidades verticales, donde la convivencia de múltiples propietarios en un mismo espacio genera mayor volumen de requisitos que los sistemas de gestión tradicionales no logran atender de forma eficiente. <br><br>

**Why:** <br><br>

La problemática en la gestión de condominios y edificios residenciales responde a vacíos estructurales tanto normativos como operativos. Desde el ámbito legal, Aguilar (2026) señala que la Ley de Propiedad en Condominio no establece procedimientos claros para la supervisión estatal, ni asigna mecanismos de rendición de cuentas o auditoría sobre las juntas administradoras, lo que genera un vacío normativo que favorece la persistencia de conflictos recurrentes en los condominios verticales. Esta ausencia de regulación efectiva permite la proliferación de prácticas arbitrarias por parte de administradores o juntas directivas, dejando desprotegidos a los copropietarios frente a actos ilegítimos.
Desde el ámbito operativo, el mismo autor indica que el 80% de los encuestados considera prioritaria la fiscalización estatal obligatoria y la capacitación obligatoria para administradores y juntas directivas, mientras que el 60% demanda procedimientos más ágiles para el registro y gestión de condominios (Aguilar, 2026). Esto refleja que los propios actores del sistema reconocen la falta de herramientas y mecanismos claros para gestionar sus comunidades de manera eficiente y transparente. <br><br>
Con todo esto, la ausencia de canales formales de comunicación, la falta de transparencia en la administración financiera y la carencia de herramientas digitales accesibles forman un escenario donde los conflictos entre residentes y administradores se vuelven recurrentes y difíciles de resolver, evidenciando la necesidad urgente de soluciones tecnológicas que cubran estos vacíos. <br><br>

**Who:** <br><br>

Los principales afectados por la problemática de gestión ineficiente en condominios y edificios residenciales son dos grupos claramente diferenciados. Por un lado, los propietarios e inquilinos, quienes enfrentan una limitada transparencia en el manejo de los fondos, conflictos recurrentes por el uso de áreas comunes y dificultades para acceder a información clara sobre el estado financiero de su comunidad, lo que genera desconfianza y baja participación en las asambleas (Aguilar, 2026). Por otro lado, los administradores y juntas directivas, quienes deben gestionar comunidades cada vez más extensas y complejas sin contar con herramientas adecuadas, enfrentando dificultades en la aplicación de sanciones, mecanismos de resolución de conflictos poco efectivos y problemas recurrentes en la gestión financiera (Aguilar, 2026). <br><br>
Este escenario se agrava en el contexto peruano, donde el crecimiento sostenido del mercado inmobiliario, especialmente en zonas como Lima Moderna y Lima Top, ha incrementado significativamente el número de comunidades residenciales que requieren una gestión ordenada y eficiente (Verastegui Leon et al., 2025). Ambos grupos comparten la necesidad de contar con soluciones digitales que centralicen la gestión, mejoren la comunicación y garanticen la transparencia dentro de sus comunidades. <br><br>

**How:** <br><br>

La gestión ineficiente en condominios y edificios residenciales ocurre principalmente porque las comunidades dependen de herramientas informales y no especializadas para una correcta administración. El caso más extendido es el uso de grupos de WhatsApp como canal principal de gestión, donde se comparten comprobantes de pago, vouchers, boletas y comunicados oficiales mezclados con conversaciones cotidianas (ProTool, 2026). Si bien esta parece una opción práctica en un inicio, genera consecuencias graves: los comprobantes se pierden entre conversaciones, no existe un orden claro de documentos, los archivos quedan almacenados en teléfonos personales y la comunidad pierde su historial administrativo completo, especialmente cuando cambian los integrantes del comité o el administrador (ProTool, 2026). <br><br>
A esto se suma que los chats de vecinos, al carecer de moderación y reglas claras, se convierten en fuente de conflictos entre residentes, mensajes irrelevantes y malentendidos que dificultan la comunicación efectiva dentro de la comunidad (Condominos, 2024). La ausencia de trazabilidad administrativa impide que la comunidad pueda reconstruir con claridad su historial financiero, identificar qué pagos se realizaron, qué documentos los respaldan y quién autorizó cada gasto (ProTool, 2026). En conjunto, esta dependencia de herramientas no diseñadas para la gestión residencial perpetúa la desorganización, la falta de transparencia y los conflictos recurrentes que afectan la convivencia dentro de los edificios. <br><br>

**How much:** <br><br>

El impacto de una gestión ineficiente en condominios y edificios residenciales se refleja tanto en pérdidas económicas concretas como en consecuencias legales y financieras para los residentes. Según Birimisa, gerente de Operaciones de Cushman & Wakefield Perú, la falta de control y planificación en la gestión de edificios puede generar sobrecostos de hasta el 30% del presupuesto anual de operación, considerando que los servicios de seguridad, limpieza y administración representan más del 50% de los costos operativos (El Comercio, 2026). Asimismo, los altos niveles de morosidad y desbalances presupuestales afectan directamente el flujo de caja y la operación del edificio, generando riesgos acumulados que se vuelven difíciles de revertir sin intervención especializada. <br><br>
A nivel de los residentes, la morosidad en el pago de gastos comunes es una problemática recurrente que no solo afecta la salud financiera de la comunidad, sino que puede derivar en consecuencias legales para los deudores, incluyendo el registro en Infocorp y el deterioro de su historial crediticio (Gestión, 2023). La junta directiva, respaldada por el Decreto Legislativo N° 1568, tiene incluso la facultad de iniciar procesos judiciales que pueden llegar hasta el embargo de bienes, lo que evidencia la gravedad que puede alcanzar la falta de una gestión ordenada y transparente (Gestión, 2023). Estos datos confirman que la ausencia de herramientas digitales adecuadas no es solo un problema de organización, sino que tiene un impacto económico y legal directo sobre todos los actores involucrados en la comunidad residencial. <br><br>

### 1.2.2. Lean UX Process
#### 1.2.2.1. Lean UX Problem Statements

En la actualidad, la gestión de condominios y edificios residenciales se realiza, en muchos casos, mediante procesos manuales o herramientas no integradas, como grupos de mensajería, hojas de cálculo o comunicaciones informales. Esta situación genera desorganización, falta de control sobre pagos y deudas, conflictos en la reserva de áreas comunes y una comunicación poco clara entre los miembros de la comunidad, lo que se traduce en ineficiencias operativas, errores en la gestión de la información y dificultades en la coordinación entre los distintos actores involucrados (Deloitte, 2022).

Este problema afecta principalmente a administradores y propietarios e inquilinos, quienes enfrentan dificultades para mantener una gestión eficiente, transparente y ordenada dentro de sus comunidades, lo que impacta negativamente en la convivencia y en la toma de decisiones colectivas.

Hemos identificado que esta problemática limita la capacidad de los condominios para operar de manera organizada y confiable. Esta situación se vuelve aún más crítica en contextos como el peruano, donde el crecimiento de viviendas en edificios multifamiliares ha ido en aumento en zonas urbanas, especialmente en Lima Metropolitana, incrementando la necesidad de mecanismos de gestión más eficientes (Instituto Nacional de Estadística e Informática [INEI], 2023).

A partir de ello surge la siguiente pregunta:  
**¿Cómo podríamos brindar a las comunidades residenciales una solución digital centralizada, accesible y confiable que mejore la gestión administrativa, reduzca conflictos y fortalezca la comunicación interna?**

Para abordar esta problemática, se ha definido el contexto del problema y los elementos clave del modelo de negocio, los cuales se detallan a continuación:
- **Domain:** Gestión de condominios y soluciones digitales para comunidades residenciales.  
- **Customer Segments:** Administradores de edificios y condominios, propietarios e inquilinos de edificios residenciales.  
- **Pain Points:** Falta de centralización de información, poca transparencia en pagos y deudas, conflictos por reservas de áreas comunes, comunicación desorganizada.  
- **Gap:** Ausencia de plataformas digitales integrales, accesibles e intuitivas enfocadas en la gestión completa de comunidades residenciales.  
- **Vision/Strategy:** Desarrollar una aplicación digital que centralice la gestión del condominio, mejore la comunicación interna y facilite procesos administrativos mediante una experiencia simple, transparente y eficiente.  
- **Initial Segment:** Edificios residenciales urbanos con gestión tradicional que buscan digitalizar sus procesos administrativos.

#### 1.2.2.2. Lean UX Assumptions

1. **Creemos que** nuestros usuarios tienen la necesidad de optimizar la gestión del condominio mediante herramientas digitales que centralicen pagos, reservas y comunicación.  

2. **Estas necesidades se pueden satisfacer con** una aplicación digital que integre en un solo entorno la gestión administrativa, la comunicación interna y la organización de actividades del condominio.  

3. **Nuestros clientes iniciales serán** administradores de edificios y condominios, y comunidades residenciales urbanas que buscan digitalizar sus procesos.  

4. **El valor más importante que un cliente quiere de nuestros servicios es** la transparencia, el control de la información y la eficiencia en la gestión del condominio.  

5. **El cliente también va a obtener beneficios adicionales como** la reducción de conflictos, mejor comunicación entre residentes, ahorro de tiempo en tareas administrativas y mayor organización en la comunidad.  

6. **Vamos a obtener la mayoría de los clientes mediante** recomendaciones, marketing digital y alianzas con administradores de condominios.  

7. **Vamos a obtener ingresos mediante** suscripciones mensuales por el uso de la plataforma por parte de cada condominio o administración.  

8. **Nuestra competencia en el mercado serán** herramientas tradicionales como Excel, grupos de mensajería como WhatsApp y algunas plataformas digitales no integradas o poco intuitivas.  

9. **Vamos a tener ventaja frente a nuestra competencia debido a** la centralización de funcionalidades en una sola plataforma, su facilidad de uso y su enfoque específico en comunidades residenciales.  

10. **El mayor riesgo del servicio es** la resistencia al cambio hacia herramientas digitales por parte de administradores o residentes, así como una baja adopción inicial.  

11. **Lo resolveremos realizando** un diseño intuitivo, procesos de onboarding simples y mostrando beneficios claros desde el primer uso de la plataforma.  

12. **Otro riesgo que debemos considerar y que, si resulta falso, haría fracasar el proyecto es** que los usuarios realmente perciban valor en digitalizar la gestión del condominio y estén dispuestos a cambiar sus métodos actuales.  

### User Assumptions

**¿Quién es el usuario?**  
Nuestro usuario principal son administradores de edificios y condominios y los residentes que buscan mejorar la organización y convivencia dentro de su comunidad.

**¿Dónde encaja nuestro producto en su vida?**  
Encaja en la gestión diaria del condominio, facilitando tareas administrativas, comunicación y organización de espacios comunes.

**¿Qué problemas resuelve nuestro producto?**  
Resuelve la desorganización en la gestión, la falta de control en pagos y deudas, los conflictos en reservas de áreas comunes y la comunicación dispersa.

**¿Cuándo y cómo se usa nuestro producto?**  
Se utiliza de manera frecuente cuando los usuarios necesitan revisar pagos, reservar áreas comunes, recibir comunicados o gestionar información del condominio, principalmente a través de dispositivos móviles.

**¿Qué características son importantes?**
- Gestión de pagos y deudas  
- Reserva de áreas comunes  
- Comunicación centralizada  
- Notificaciones automáticas  
- Interfaz simple e intuitiva  

**¿Cómo debería lucir y comportarse el producto?**  
El producto debe lucir moderno, accesible y amigable, con un diseño centrado en el usuario. Debe comportarse de forma intuitiva, rápida y confiable, priorizando la facilidad de uso y la claridad de la información.


### Feature Assumptions

- **Creemos que** los usuarios necesitan visualizar de forma clara y en tiempo real sus pagos y deudas.  
- **Creemos que** un sistema digital de reservas reducirá conflictos por el uso de áreas comunes.  
- **Creemos que** una comunicación centralizada mejorará la organización dentro del condominio.  
- **Creemos que** las notificaciones automáticas aumentarán el compromiso de los usuarios con la plataforma.  
- **Creemos que** una interfaz intuitiva facilitará la adopción del sistema sin necesidad de capacitación.  

#### 1.2.2.3. Lean UX Hypothesis Statements

#### Hypothesis Statement 01
Creemos que los administradores y residentes utilizarán Edifika como su principal herramienta para gestionar pagos, reservas y comunicación dentro del condominio.  

**Sabremos que hemos tenido éxito** cuando al menos un 70% de los usuarios registrados utilicen la plataforma semanalmente durante el primer mes.


#### Hypothesis Statement 02
Creemos que la centralización de la información reducirá los conflictos relacionados con pagos y reservas dentro de la comunidad.  

**Sabremos que hemos tenido éxito** cuando se reduzcan en al menos un 40% los reclamos o incidencias relacionadas con la gestión administrativa en un periodo de tres meses.


#### Hypothesis Statement 03
Creemos que una interfaz intuitiva y accesible permitirá que los usuarios adopten la plataforma sin dificultad.  

**Sabremos que hemos tenido éxito** cuando al menos un 80% de los nuevos usuarios completen su registro y primeras acciones sin asistencia.


#### Hypothesis Statement 04
Creemos que una comunicación estructurada dentro de la plataforma aumentará la participación de los residentes en actividades y decisiones del condominio.  

**Sabremos que hemos tenido éxito** cuando al menos un 60% de los usuarios interactúen con comunicados o notificaciones dentro de la aplicación.

#### 1.2.2.4. Lean UX Canvas

![Lean Ux Canvas](assets/img/lean_ux_canvas.png)

 *Figura. Lean Ux Canvas. Elaborado por el equipo utilizando Miro (Miro, s.f.).*

## 1.3. Segmentos objetivo

**Administradores de edificios y condominios:**

Una gran parte de las administraciones aún utiliza herramientas informales como Excel, WhatsApp o registros manuales, lo que genera desorden en la gestión y dificulta la toma de decisiones.

- Edad estimada: 25 a 60 años
- Ubicación: Zonas urbanas con alta concentración de edificios residenciales como Lima Metropolitana, Arequipa o Callao
- Características demográficas y de comportamiento:
   - Son responsables de la gestión operativa, administrativa y financiera del condominio.
   - Utilizan herramientas básicas y poco integradas para el control de pagos y comunicación.
   - Enfrentan problemas frecuentes de morosidad y desorganización.
   - Buscan optimizar procesos y reducir conflictos entre residentes.
- Necesidades principales:
   - Gestionar de manera clara y automatizada las deudas y pagos.
   - Enviar comunicados organizados y verificables.
   - Contar con reportes que faciliten la toma de decisiones.
   - Reducir la carga operativa manual y mejorar la eficiencia.

**Propietarios e inquilinos de condominios:**

El crecimiento de la vivienda vertical en ciudades ha incrementado la cantidad de personas que viven en condominios, generando la necesidad de herramientas digitales que faciliten la convivencia, el acceso a información y la participación en la gestión del edificio.

- Edad estimada: 18 a 55 años
- Ubicación: Zonas urbanas residenciales en ciudades como Lima y Callao
- Características demográficas y de comportamiento:
   - Incluye tanto propietarios como inquilinos que residen en el condominio.
   - Utilizan smartphones y aplicaciones móviles de manera frecuente.
   - Buscan soluciones rápidas, claras y accesibles.
   - Valoran la transparencia en la gestión y la buena comunicación.
- Necesidades principales:
   - Consultar sus deudas y estado de pagos en cualquier momento.
   - Recibir notificaciones y comunicados importantes.
   - Reservar áreas comunes de forma sencilla.
   - Mantenerse informados y participar en la vida del condominio.

# Capítulo II: Requirements Elicitation & Analysis

## 2.1. Competidores
### 2.1.1. Análisis competitivo


 <table border="2" style="text-align: center; border-collapse: collapse; width: 100%;">
  <tbody>
    <tr>
      <td colspan="6" style="padding: 8px; font-weight: bold;">Competitive Analysis Landscape</td>
    </tr>
    <tr>
      <td colspan="2" style="padding: 8px; font-weight: bold;">¿Por qué llevar a cabo este análisis?</td>
      <td colspan="4" style="padding: 8px;">
        Este análisis permite comprender cómo distintas plataformas gestionan la administración de condominios, qué funcionalidades ofrecen y qué valor brindan a los usuarios. De esta manera, se identifican oportunidades de mejora, diferenciación y posicionamiento para Edifika dentro del mercado, especialmente frente a soluciones tradicionales y plataformas digitales existentes.
      </td>
    </tr>
    <tr>
      <td colspan="2" style="padding: 8px;"></td>
      <td style="padding: 8px; font-weight: bold;">Edifika</td>
      <td style="padding: 8px; font-weight: bold;">Condo Control</td>
      <td style="padding: 8px; font-weight: bold;">Buildium</td>
      <td style="padding: 8px; font-weight: bold;">AppFolio</td>
    </tr>
    <tr>
      <td rowspan="2" style="padding: 8px; font-weight: bold; vertical-align: middle;">Perfil</td>
      <td style="padding: 8px; font-weight: bold;">Overview</td>
      <td style="padding: 8px; vertical-align: top;">Aplicación enfocada en la gestión de condominios en el contexto peruano, que centraliza pagos, reservas y comunicación en una sola plataforma accesible e intuitiva.</td>
      <td style="padding: 8px; vertical-align: top;">Software de gestión de condominios que permite la comunicación entre residentes, gestión de documentos y administración de reservas.</td>
      <td style="padding: 8px; vertical-align: top;">Plataforma de gestión inmobiliaria en la nube orientada a administradores profesionales, con herramientas financieras, operativas y de comunicación.</td>
      <td style="padding: 8px; vertical-align: top;">Software integral de gestión de propiedades que permite administrar pagos, mantenimiento y comunicación desde una sola plataforma.</td>
    </tr>
    <tr>
      <td style="padding: 8px; font-weight: bold;">Ventaja competitiva ¿Qué valor ofrece?</td>
      <td style="padding: 8px; vertical-align: top;">Centraliza funciones clave en una interfaz simple, enfocada en la adopción real de usuarios que actualmente usan WhatsApp y Excel.</td>
      <td style="padding: 8px; vertical-align: top;">Ofrece una plataforma estructurada para la comunicación y organización dentro del condominio.</td>
      <td style="padding: 8px; vertical-align: top;">Proporciona herramientas avanzadas de gestión financiera y automatización para empresas administradoras.</td>
      <td style="padding: 8px; vertical-align: top;">Integra múltiples funcionalidades con automatización y escalabilidad para grandes volúmenes de propiedades.</td>
    </tr>
    <tr>
      <td rowspan="2" style="padding: 8px; font-weight: bold; vertical-align: middle;">Perfil de Marketing</td>
      <td style="padding: 8px; font-weight: bold;">Mercado objetivo</td>
      <td style="padding: 8px; vertical-align: top;">Condominios urbanos en Perú, administradores y residentes que buscan digitalizar su gestión.</td>
      <td style="padding: 8px; vertical-align: top;">Condominios y asociaciones de propietarios, principalmente en mercados internacionales.</td>
      <td style="padding: 8px; vertical-align: top;">Empresas administradoras de propiedades y profesionales inmobiliarios.</td>
      <td style="padding: 8px; vertical-align: top;">Empresas de gestión inmobiliaria y administradores de múltiples propiedades.</td>
    </tr>
    <tr>
      <td style="padding: 8px; font-weight: bold;">Estrategias de marketing</td>
      <td style="padding: 8px; vertical-align: top;">Enfoque en simplicidad, adopción digital y solución de problemas reales en comunidades locales.</td>
      <td style="padding: 8px; vertical-align: top;">Marketing digital enfocado en comunidades y administradores de condominios.</td>
      <td style="padding: 8px; vertical-align: top;">Marketing B2B dirigido a empresas inmobiliarias con enfoque en eficiencia y automatización.</td>
      <td style="padding: 8px; vertical-align: top;">Estrategias digitales enfocadas en empresas grandes y escalabilidad del servicio.</td>
    </tr>
    <tr>
      <td rowspan="3" style="padding: 8px; font-weight: bold; vertical-align: middle;">Perfil de Producto</td>
      <td style="padding: 8px; font-weight: bold;">Productos & Servicios</td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Gestión de pagos y deudas</li>
          <li>Reserva de áreas comunes</li>
          <li>Comunicados centralizados</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Gestión de documentos</li>
          <li>Comunicación con residentes</li>
          <li>Reservas de espacios</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Gestión financiera</li>
          <li>Pagos en línea</li>
          <li>Reportes y contabilidad</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Gestión de pagos</li>
          <li>Mantenimiento</li>
          <li>Automatización de procesos</li>
        </ul>
      </td>
    </tr>
    <tr>
      <td style="padding: 8px; font-weight: bold;">Precios & Costos</td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Modelo de suscripción mensual por condominio</li>
          <li>Posible versión freemium</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Suscripción mensual según tamaño del condominio</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Suscripción mensual para empresas administradoras</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Modelo SaaS con precios escalables</li>
        </ul>
      </td>
    </tr>
    <tr>
      <td style="padding: 8px; font-weight: bold;">Canales de distribución</td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Aplicación móvil (iOS y Android)</li>
          <li>Posible versión web</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Web y aplicación móvil</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Web (plataforma en la nube)</li>
        </ul>
      </td>
      <td style="padding: 8px; vertical-align: top; text-align: left;">
        <ul>
          <li>Web y aplicación móvil</li>
        </ul>
      </td>
    </tr>
    <tr>
      <td rowspan="4" style="padding: 8px; font-weight: bold; vertical-align: middle;">Análisis SWOT</td>
      <td style="padding: 8px; font-weight: bold;">Fortalezas</td>
      <td style="padding: 8px; vertical-align: top;">Enfoque local, simplicidad y alta adaptabilidad al contexto peruano.</td>
      <td style="padding: 8px; vertical-align: top;">Experiencia en gestión de condominios y comunicación estructurada.</td>
      <td style="padding: 8px; vertical-align: top;">Plataforma robusta con herramientas financieras avanzadas.</td>
      <td style="padding: 8px; vertical-align: top;">Alta escalabilidad y automatización.</td>
    </tr>
    <tr>
      <td style="padding: 8px; font-weight: bold;">Debilidades</td>
      <td style="padding: 8px; vertical-align: top;">Aplicación nueva con baja adopción inicial.</td>
      <td style="padding: 8px; vertical-align: top;">Puede ser compleja para usuarios no tecnológicos.</td>
      <td style="padding: 8px; vertical-align: top;">No está enfocada en usuarios pequeños o individuales.</td>
      <td style="padding: 8px; vertical-align: top;">Curva de aprendizaje más alta.</td>
    </tr>
    <tr>
      <td style="padding: 8px; font-weight: bold;">Oportunidades</td>
      <td style="padding: 8px; vertical-align: top;">Alta demanda de digitalización en condominios en Perú.</td>
      <td style="padding: 8px; vertical-align: top;">Expansión en mercados internacionales.</td>
      <td style="padding: 8px; vertical-align: top;">Expansión en mercados emergentes.</td>
      <td style="padding: 8px; vertical-align: top;">Innovación en automatización y servicios.</td>
    </tr>
    <tr>
      <td style="padding: 8px; font-weight: bold;">Amenazas</td>
      <td style="padding: 8px; vertical-align: top;">Resistencia al cambio y uso de herramientas informales.</td>
      <td style="padding: 8px; vertical-align: top;">Competencia de nuevas apps más simples.</td>
      <td style="padding: 8px; vertical-align: top;">Competencia de software especializado más accesible.</td>
      <td style="padding: 8px; vertical-align: top;">Competencia creciente en el sector proptech.</td>
    </tr>
  </tbody>
</table>

Fuente: Elaboración propia del grupo de trabajo.

### 2.1.2. Estrategias y tácticas frente a competidores

**Enfoque en la digitalización total del condominio**

Estrategia: Diferenciarse de soluciones tradicionales (WhatsApp, Excel, papel) ofreciendo una plataforma centralizada y estructurada

Táctica: Integrar en una sola app funcionalidades como pagos, comunicados, reservas y gestión de usuarios, evitando el uso de múltiples herramientas dispersas

**Transparencia en la gestión administrativa**

Estrategia: Generar confianza entre residentes y administradores mediante acceso claro a la información

Táctica: Mostrar historiales de pagos, deudas (morosidad), reportes financieros y registros de decisiones accesibles en tiempo real para todos los usuarios autorizados

**Comunicación centralizada y efectiva**

Estrategia: Reemplazar la comunicación desordenada de múltiples canales por un sistema único y eficiente

Táctica: Crear un sistema de notificaciones dentro de la app con confirmación de lectura, segmentación por tipo de usuario (residente/administrador) y categorización de anuncios

**Experiencia de usuario simple y accesible**

Estrategia: Facilitar la adopción tecnológica incluso para usuarios no familiarizados con apps complejas

Táctica: Diseñar una interfaz intuitiva, con accesos rápidos (ej: “Pagar”, “Reservar”, “Ver avisos”) y procesos simplificados en pocos pasos

**Adaptación al contexto local (Perú / LATAM)**

Estrategia: Diferenciarse de competidores internacionales adaptándose a la realidad local

Táctica: Incluir métodos de pago locales (Yape, Plin), lenguaje adaptado, y funcionalidades específicas como control de morosos o juntas vecinales

**Gestión inteligente de áreas comunes**

Estrategia: Optimizar el uso de recursos compartidos dentro del condominio

Táctica: Implementar un calendario interactivo con disponibilidad en tiempo real, reglas automáticas de uso y confirmaciones instantáneas de reservas

## 2.2. Entrevistas
### 2.2.1. Diseño de entrevistas

Para el diseño de las entrevistas se utilizó el método de entrevistas semiestructuradas, el cual combina un conjunto de preguntas predefinidas con la flexibilidad de profundizar en las respuestas del entrevistado según el contexto de la conversación. Este enfoque fue seleccionado porque permite recopilar información cualitativa sobre las experiencias, frustraciones y expectativas de los usuarios sin limitar sus respuestas a opciones cerradas. Las preguntas fueron formuladas de manera abierta para incentivar respuestas detalladas y se organizaron en dos guiones diferenciados, uno por cada segmento objetivo del proyecto, asegurando que cada entrevista aborde las problemáticas específicas del perfil entrevistado.

1. Segmento: Administradores de edificios y condominios

- ¿Cuántos edificios administran actualmente y cómo llevan hoy la gestión del día a día?

- ¿Qué herramientas o sistemas utilizan para gestionar los pagos y deudas de todos sus edificios?

- ¿Cómo coordinan las reservas de áreas comunes en los distintos edificios que administran?

- ¿De qué manera envían avisos oficiales a los residentes y cómo verifican que la información llegó a todos?

- ¿Cuál es el proceso más tedioso que quisieran eliminar de su operación diaria?

- ¿Qué tan seguido reciben quejas de residentes por falta de información o transparencia?

- ¿Han evaluado antes algún software de administración? Si es así, ¿qué fue lo que no les convenció?

- ¿Qué tan probable sería para su empresa migrar toda la gestión a una sola plataforma digital?

- ¿Qué tendría que tener una plataforma para que su empresa la adopte sin dudarlo?
  
- ¿Cuánto estarían dispuestos a pagar mensualmente por una herramienta que centralice toda su gestión?

2. Segmento: Propietarios e Inquilinos

- ¿Cómo se entera hoy de sus saldos pendientes de mantenimiento y de las noticias de su edificio?

- ¿Qué tan fácil o difícil le resulta realizar el pago y enviar el comprobante de mantenimiento?

- ¿Dónde puede consultar su historial de pagos si necesita verificar un cobro antiguo?

- ¿Ha tenido problemas para reservar áreas comunes por falta de claridad en los horarios?

- ¿Siente que la administración es transparente con el uso del dinero y los gastos del edificio?

- ¿Qué tan rápido recibe respuesta cuando tiene una duda o necesita un comunicado importante?

- ¿Cuál es el canal de comunicación que más le molesta o le satura (ej. grupos de WhatsApp)?

- ¿Qué trámite del edificio le parece el más anticuado o el que más le quita tiempo?

- ¿Estaría dispuesto a gestionar sus pagos y cuotas en una sola aplicación móvil?

- Si pudiera cambiar una sola cosa de la gestión de su condominio, ¿qué sería?


### 2.2.2. Registro de entrevistas


**Segmento objetivo: Administradores de edificios y condominios:**

| **ENTREVISTA 1** | |
|------------------|----------------------------|
| **Nombre entrevistado** |  Cesar Villalobos  |
| **Edad** | 51 |
| **Departamento** | Cercado de Lima  |
| **Link del video** | [Link del video de la entrevista](https://upcedupe-my.sharepoint.com/:v:/g/personal/u202310358_upc_edu_pe/IQDEXx-uGk1tS71xXaDeSeDeAf3fEODmStVZKztx7vcr0i8?nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJPbmVEcml2ZUZvckJ1c2luZXNzIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXciLCJyZWZlcnJhbFZpZXciOiJNeUZpbGVzTGlua0NvcHkifX0&e=5V6W7o) |
| **Foto entrevista** |   <img src="assets/img/interviews/admin1.png" alt="logo" />|
| **Resumen** | César es administrador de edificios en GWM EIRL y actualmente gestiona 15 edificios usando Excel con macros como herramienta principal, apoyándose en WhatsApp para coordinar reservas y comunicaciones, y en las páginas de los bancos para pagos. El proceso más tedioso es la emisión de recibos, que aún se hace de forma física en varios edificios y que desea digitalizar al 100%. Ha evaluado entre 3 y 4 sistemas sin éxito, ya que todos presentaban exceso de información que generaba confusión en los propietarios y una percepción de desorden o falta de transparencia. Como empresa tiene el objetivo claro de migrar a una plataforma digital, y considera que una app o sistema web mejoraría significativamente la comunicación y la gestión, siempre que sea ágil, ordenada, fácil de entender y con información siempre actualizada. En cuanto al precio, conoce el mercado y sabe que el rango habitual oscila entre 2 y 5 dólares por unidad al mes. |

| **ENTREVISTA 2** | |
|---|---|
| **Nombre entrevistado** | Alejandro Galindo |
| **Edad** | 26 |
| **Departamento** | San Miguel |
| **Link del video** |[Link del video de la entrevista](https://upcedupe-my.sharepoint.com/:v:/g/personal/u202321281_upc_edu_pe/IQAW5DBOyn8xS6ZiZVZwufEIAU9yh_7P6mIIpJ_RzxJp6is?e=kLEW30&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJTdHJlYW1XZWJBcHAiLCJyZWZlcnJhbFZpZXciOiJTaGFyZURpYWxvZy1MaW5rIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXcifX0%3D)|
| **Foto entrevista** |<img src="assets/img/alejandro.jpeg" alt="logo" /> |
| **Resumen** | El administrador Alejandro Galindo gestiona 4 edificios utilizando principalmente Excel, WhatsApp y registros manuales. Su principal problema es el seguimiento de pagos y la falta de confirmación sobre la recepción de comunicados. Considera viable adoptar una plataforma digital siempre que centralice pagos, comunicaciones y reservas, y tenga un costo accesible. |


| **ENTREVISTA 2** | |
|---|---|
| **Nombre entrevistado** | Kattya Valentina |
| **Edad** | 25 |
| **Departamento** | San Miguel |
| **Link del video** |[Link del video de la entrevista](https://upcedupe-my.sharepoint.com/:v:/g/personal/u202321281_upc_edu_pe/IQBytTOuLENRRpzS9nYLELHKAVVSvtdyP9hPyITLZN-VWLU?e=nGaihv&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJTdHJlYW1XZWJBcHAiLCJyZWZlcnJhbFZpZXciOiJTaGFyZURpYWxvZy1MaW5rIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXcifX0%3D)|
| **Foto entrevista** |<img src="assets/img/kattya.jpeg" alt="logo" /> |
| **Resumen** | La entrevistada administra 15 edificios utilizando principalmente Excel con macros, WhatsApp y plataformas bancarias para gestionar pagos y comunicaciones. Identifica como principal problema la emisión física de recibos y la falta de una solución centralizada para coordinar pagos, reservas y avisos a los residentes. Aunque ha evaluado varios sistemas de administración, considera que muchos son excesivamente complejos y generan confusión. Se muestra interesada en adoptar una plataforma digital que sea intuitiva, organizada, transparente y mantenga la información actualizada, considerando aceptable un costo alineado con los precios habituales del mercado. |

**Segmento objetivo: Propietarios e Inquilinos:**

| **ENTREVISTA 1** | |
|------------------|----------------------------|
| **Nombre entrevistado** | Melina Lopez  |
| **Edad** | 51 |
| **Departamento** | San Miguel  |
| **Link del video** | [Link del video de la entrevista](https://upcedupe-my.sharepoint.com/:v:/g/personal/u202321281_upc_edu_pe/IQAW5DBOyn8xS6ZiZVZwufEIAU9yh_7P6mIIpJ_RzxJp6is?e=kLEW30&nav=eyJyZWZlcnJhbEluZm8iOnsicmVmZXJyYWxBcHAiOiJTdHJlYW1XZWJBcHAiLCJyZWZlcnJhbFZpZXciOiJTaGFyZURpYWxvZy1MaW5rIiwicmVmZXJyYWxBcHBQbGF0Zm9ybSI6IldlYiIsInJlZmVycmFsTW9kZSI6InZpZXcifX0%3D)  |
| **Foto entrevista** |<img src="assets/img/interviews/prop2.png" alt="logo"/>  |
| **Resumen** |Se entrevistó a Melina López, propietaria de un departamento, ella indica que no suele estar al tanto de las reuniones del edificio debido a la falta de tiempo. En cuanto a los pagos, envía los comprobantes por correo al administrador y mantiene un archivo físico como respaldo, ya que de lo contrario no tendría un historial accesible, asumiendo que la administración podría brindárselo si lo solicita. Señala que el proceso de reserva de espacios es el más tedioso, pues implica consultar disponibilidad, dejar garantía, realizar pagos y luego hacer seguimiento para su devolución, lo que la obliga a estar constantemente detrás de la administración. Además, le incomoda la gran cantidad de mensajes en el grupo de WhatsApp, donde se pierde información relevante. Finalmente, se muestra abierta al uso de una aplicación que centralice la información, considerando que actualmente los eventos y reuniones ya se comunican mediante un tablero. |

| **ENTREVISTA 2** | |
|---|---|
| **Nombre entrevistado** | Jarol Panduro |
| **Edad** | 30 |
| **Departamento** | San Miguel |
| **Link del video** | [Link del video de la entrevista](https://youtu.be/NHYPQzPL36M) |
| **Foto entrevista** | <img src="assets/img/ser1.jpeg" alt="logo" /> |
| **Resumen** | En este video, Jarol Panduro, un abogado de 30 años, detalla las principales deficiencias en la administración de su edificio. Explica que el proceso de pago del mantenimiento es tedioso porque requiere enviar capturas de pantalla por WhatsApp, y señala que no existe un sistema oficial para consultar su historial de pagos. Además, menciona problemas como la desorganización al reservar áreas comunes mediante cuadernos físicos, la falta de transparencia en los gastos administrativos, la lentitud en la comunicación oficial y lo anticuado que resulta el registro manual de visitas en la portería. Como solución, propone la implementación de una plataforma digital centralizada que permita registrar pagos automáticamente, reservar espacios y auditar los gastos de forma rápida y transparente.|

| **ENTREVISTA 3** | |
|---|---|
| **Nombre entrevistado** | Marcelo Candia |
| **Edad** | 25 |
| **Departamento** | San Miguel |
| **Link del video** | [Link del video de la entrevista](https://youtu.be/E5k60PHyvYI) |
| **Foto entrevista** | <img src="assets/img/ser2.jpeg" alt="logo" /> |
| **Resumen** | En la entrevista, Marcelo expone su frustración con la administración obsoleta y caótica de su edificio. Señala que los pagos de mantenimiento son tediosos porque exigen depósitos en cuentas específicas y la entrega de comprobantes físicos, sin aceptar billeteras digitales como Yape. Además, menciona problemas recurrentes como la falta de transparencia en los gastos anuales, la mala gestión en la reserva de áreas comunes que genera conflictos por cruces de horarios, y la lentitud de la administración para responder correos formales. También critica el uso de correos masivos que terminan llenándose de quejas irrelevantes de los vecinos y el engorroso proceso manual que se requiere para autorizar el ingreso de muebles grandes o mudanzas. Como solución ideal, sugiere la implementación de una aplicación o portal vecinal 100% automatizado que permita realizar pagos, reservas y reportes de fallas de manera digital las 24 horas del día, eliminando así el uso de papel|

### 2.2.3. Análisis de entrevistas

## **Segmento objetivo de administradores de edificios y condominios**

Las entrevistas realizadas a César, administrador de GWM EIRL, y a Alejandro Galindo evidencian que ambos gestionan sus edificios principalmente mediante Excel, WhatsApp y procesos manuales, lo que genera dificultades en el control de pagos, la comunicación con los propietarios y la administración de reservas. César, quien administra 15 edificios, identifica como principal problema la emisión física de recibos y busca una digitalización completa de sus procesos, mientras que Alejandro, encargado de 4 edificios, destaca la falta de seguimiento eficiente de pagos y la incertidumbre sobre la recepción de comunicados. Ambos consideran que una plataforma digital podría mejorar significativamente la gestión siempre que centralice funciones clave como pagos, comunicaciones y reservas, sea fácil de usar, mantenga la información actualizada y tenga un costo accesible acorde a los precios habituales del mercado.


## **Segmento objetivo de propietarios e inquilinos**

Las entrevistas realizadas a Melina López, Jarol Panduro y Marcelo muestran una insatisfacción común con los procesos tradicionales de administración de edificios. Los principales problemas identificados son la falta de un historial digital de pagos, la necesidad de enviar comprobantes manualmente, la escasa transparencia en los gastos administrativos, la desorganización en la reserva de áreas comunes y la saturación de información en canales de comunicación como WhatsApp y correos masivos. Además, destacan procesos poco eficientes para la gestión de visitas, mudanzas y solicitudes a la administración, así como la lentitud en la atención de consultas. Los tres entrevistados coinciden en que una plataforma digital centralizada mejoraría significativamente la experiencia de los propietarios al permitir gestionar pagos, reservas, comunicaciones y consultas de manera rápida, organizada, transparente y accesible desde cualquier momento, reduciendo la dependencia de procesos manuales y documentos físicos.


## 2.3. Needfinding
### 2.3.1. User Personas

### Administrador de Condominio – Ricardo Mendoza

![User Personas](assets/img/Ricardo_Mendoza.png)

*Figura. User persona del administrador de condominio. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*

### Residente (Propietario/Inquilino) – Andrea Villacorta

![User Personas](assets/img/Andrea_Villacorta.png)

*Figura. User persona del residente. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*

### 2.3.2. User Task Matrix

### Administrador de Condominio – Ricardo Mendoza

| Tarea | Frecuencia | Prioridad | Frustración |
| :--- | :--- | :--- | :--- |
| Conciliar pagos y validar transferencias | Diario | Muy Alta | Alta |
| Actualizar el estado de saldos pendientes | Diario | Alta | Alta |
| Enviar comunicados oficiales masivos | Semanal | Alta | Media |
| Gestionar y aprobar reservas de áreas comunes | Diario | Media | Media |
| Generar reportes financieros mensuales | Mensual | Muy Alta | Alta |
| Registrar gastos y facturas del edificio | Semanal | Alta | Media |
| Identificar deudores críticos para cobranza | Semanal | Alta | Media |

### Residente (Propietario/Inquilino) – Andrea Villacorta

| Tarea | Frecuencia | Prioridad | Frustración |
| :--- | :--- | :--- | :--- |
| Consultar monto exacto de cuota del mes | Mensual | Muy Alta | Media |
| Subir el comprobante de pago realizado | Mensual | Alta | Alta |
| Verificar disponibilidad de áreas comunes | Ocasional | Media | Alta |
| Realizar una reserva (parrilla, SUM, etc.) | Ocasional | Media | Media |
| Leer notificaciones de mantenimiento | Semanal | Alta | Media |
| Revisar el estado de cuenta histórico | Semanal | Media | Alta |
| Reportar una avería o incidencia | Ocasional | Alta | Alta |

### 2.3.3. User Journey Mapping

Primer Segmento:

<img src="assets/img/j1.png" alt="logo" /> 

Segundo Segmento:


<img src="assets/img/j2.png" alt="logo" /> 

### 2.3.4. Empathy Mapping

### Administrador de Condominio – Ricardo Mendoza

![Empathy Mapping](assets/img/Ricardo_empathy_map.png)

 *Figura. Empathy mapping del administrador de condominio. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*


### Residente (Propietario/Inquilino) – Andrea Villacorta

![Empathy Mapping](assets/img/Andrea_empathy_map.png)

*Figura. Empathy mapping del residente. Elaborado por el equipo utilizando UXPressia (UXPressia, s.f.).*

## 2.4. Big Picture EventStorming

En esta seccción se presenta el trabajo realizado durante la sesion de Big Picture event storming enfocada en comprender el dominio general del negocio. Para ello se utilizaran post-its para mapear los eventos significativos que ocurre en el flujo operativo actual.Esta actividad permite agrupar las interacciones en bloques funcionales lógicos, asegurando que la solución tecnológica satisfaga los requisitos reales del flujo operativo


<img src="assets/img/big.jpeg" alt="logo" /> 

## 2.5 Ubiquitous Language

El Ubiquitous Language define un lenguaje común entre los actores del sistema, permitiendo una comunicación clara y consistente durante el desarrollo de la solución. En este proyecto, se integran conceptos relacionados con la administración de edificios inteligentes (Smart Buildings), automatización mediante IoT, monitoreo de recursos y seguridad residencial.

---

## Usuarios y Segmentos

### Administrador de Edificios
Persona responsable de supervisar la operación de uno o varios edificios o condominios. Gestiona residentes, pagos, incidencias, reservas de áreas comunes y monitorea los dispositivos IoT instalados.

### Propietario e Inquilino
Residente que utiliza la plataforma para consultar información de su unidad, realizar pagos, reservar áreas comunes, recibir notificaciones y acceder a servicios inteligentes del edificio.

### Personal de Mantenimiento
Usuario encargado de atender incidencias técnicas relacionadas con infraestructura, dispositivos IoT, sistemas de iluminación, agua y seguridad.

---

## Funcionalidades Core para Administradores

### Edificio
Conjunto de unidades residenciales administradas dentro de la plataforma.

### Unidad Residencial
Departamento o espacio asignado a uno o varios residentes dentro de un edificio.

### Residente
Persona vinculada a una unidad residencial con acceso a funcionalidades específicas del sistema.

### Área Común
Espacio compartido por los residentes, como salón de eventos, gimnasio, zona de parrillas o áreas recreativas.

### Reserva
Solicitud realizada por un residente para utilizar un área común en una fecha y horario determinados.

### Incidencia
Problema o evento reportado relacionado con infraestructura, servicios o dispositivos del edificio.

### Notificación
Mensaje enviado automáticamente a administradores o residentes para informar eventos importantes.

### Reporte Financiero
Documento generado por el sistema que resume ingresos, pagos pendientes y movimientos económicos del edificio.

---

## Funcionalidades IoT (NÚCLEO DEL PROYECTO)

### Sensor IoT
Dispositivo conectado capaz de recopilar datos del entorno y transmitirlos al sistema en tiempo real.

### Iluminación Inteligente
Sistema que controla automáticamente las luces de áreas comunes mediante sensores de movimiento o reglas configuradas.

### Control de Acceso Inteligente
Mecanismo que permite autorizar o restringir el ingreso a determinadas áreas mediante credenciales digitales.

### Sensor de Movimiento
Dispositivo encargado de detectar presencia de personas en áreas comunes para activar automatizaciones.

### Monitoreo de Tanque de Agua
Proceso que supervisa continuamente el nivel de agua almacenada para prevenir desabastecimientos.

### Detección de Fugas
Funcionalidad que identifica posibles pérdidas de agua y genera alertas automáticas.

### Riego Automático
Sistema que activa el riego de áreas verdes según horarios programados o condiciones ambientales detectadas.

### Calidad del Aire
Indicador obtenido mediante sensores que monitorean variables como CO₂, temperatura, humedad y ventilación.

### Alerta Inteligente
Notificación generada automáticamente cuando se detecta una condición fuera de los parámetros establecidos.

### Consumo de Recursos
Registro y monitoreo del uso de agua y energía dentro del edificio.

### Dashboard IoT
Panel centralizado que permite visualizar en tiempo real el estado de los sensores, dispositivos y recursos monitoreados.

---

## Funcionalidades Core para Residentes

### Estado de Cuenta
Resumen de pagos realizados, deudas pendientes y movimientos asociados a una unidad residencial.

### Pago de Mantenimiento
Proceso mediante el cual el residente realiza el abono de las cuotas correspondientes al edificio.

### Historial de Pagos
Registro histórico de todos los pagos efectuados por el residente.

### Comunicado
Anuncio emitido por la administración para informar novedades, eventos o disposiciones importantes.

### Encuesta
Mecanismo que permite recopilar opiniones y votaciones de los residentes sobre decisiones comunitarias.

### Votación
Proceso mediante el cual los residentes participan en decisiones relacionadas con la gestión del edificio.

### Seguimiento de Incidencias
Funcionalidad que permite conocer el estado actual de un problema reportado.

---

## Gestión de Dispositivos IoT

### Dispositivo IoT
Equipo físico conectado al sistema capaz de recopilar información o ejecutar acciones automáticas.

### Estado del Dispositivo
Condición actual del dispositivo (activo, inactivo, desconectado o en mantenimiento).

### Regla de Automatización
Condición configurada para ejecutar acciones automáticas basadas en eventos detectados por sensores.

### Evento IoT
Acción o situación detectada por un dispositivo, como movimiento, fuga de agua o variación en la calidad del aire.

### Historial de Eventos
Registro cronológico de todas las actividades generadas por sensores y dispositivos IoT.

### Monitoreo en Tiempo Real
Visualización instantánea de datos generados por sensores y dispositivos conectados.

---




# Capítulo III: Requirements Specification

## 3.1. User Stories

| Epic ID | Título | Descripción | User Stories Asociadas |
|---------|--------|-------------|------------------------|
| EP01 | Autenticación y gestión de usuarios | Esta épica se enfoca en la creación, registro y administración de usuarios dentro de la plataforma, incluyendo residentes y administradores. Permite vincular cuentas a unidades específicas dentro del edificio, así como gestionar perfiles, validar información y controlar accesos. | US01, US02, US03, US04, US05, US06, US07, US34 |
| EP02 | Comunicación centralizada | Esta épica aborda la gestión de notificaciones y comunicados dentro del edificio, permitiendo mantener informados a los residentes sobre incidencias, pagos, reservas y anuncios importantes. Incluye la personalización de notificaciones y el seguimiento de visualización de comunicados. | US08, US10, US12, US13, US14, US15, US29, US31, US32, US36, US37 |
| EP03 | Gestión de áreas comunes | Esta épica se centra en la administración y uso eficiente de las áreas comunes del edificio. Permite a los residentes consultar disponibilidad, realizar y cancelar reservas, mientras que los administradores pueden aprobar solicitudes y evitar conflictos de horario. | US11, US16, US17, US18, US19, US20, US33, US35, US38, US39, US40 |
| EP04 | Gestión financiera y reportes | Esta épica se enfoca en la administración económica del edificio, permitiendo a los residentes consultar su deuda, registrar pagos y revisar su historial financiero. Los administradores pueden identificar morosos, generar y exportar reportes financieros. | US09, US21, US22, US23, US24, US25, US26, US27, US28, US30 |
| EP05 | Infraestructura, seguridad y arquitectura técnica | Esta épica abarca todos los aspectos técnicos necesarios para el correcto funcionamiento del sistema Edifika, incluyendo la configuración de microservicios, autenticación JWT, API Gateway, bases de datos independientes, documentación de APIs, comunicación entre servicios y despliegue en la nube. Su objetivo es garantizar que la plataforma sea segura, escalable y mantenible. | TS01, TS02, TS03, TS04, TS05, TS06, TS07, TS08, TS09, TS10, TS11, TS12, TS13, TS14, TS15 |
| EP06 | Landing Page e Interfaz Web | Esta épica cubre todas las funcionalidades visibles en la landing page pública de Edifika y la interfaz web de la aplicación. Incluye navegación, presentación de contenido y acceso a la plataforma, con el objetivo de atraer y convertir nuevos usuarios. | US41, US42, US43, US44, US45, US46, US47 |
| EP07 | Smart Building e Internet de las Cosas (IoT) | Esta épica abarca la integración de dispositivos IoT dentro del edificio para automatizar y controlar el acceso a áreas comunes y unidades mediante sensores, cerraduras inteligentes. Permite a los residentes gestionar el acceso a sus reservas de forma remota, mientras que los administradores pueden monitorear en tiempo real el estado de los dispositivos, registrar eventos de apertura/cierre y detectar accesos no autorizados, fortaleciendo la seguridad y la eficiencia operativa del edificio. | US48, US49, US50, US51, US52, US53 |

**User Stories:**


<table>
  <thead>
    <tr>
      <th>Epic / US ID</th>
      <th>Título</th>
      <th>Descripción</th>
      <th>Criterios de Aceptación (Escenarios)</th>
      <th>Relacionado</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><strong>US01</strong></td>
      <td>Crear cuenta vinculada a unidad</td>
      <td>Como residente, deseo crear una cuenta vinculada a mi unidad para acceder a la gestión de mi edificio.</td>
      <td>
        <strong>Escenario 1: Registro exitoso.</strong><br>
        Dado que el residente completa sus datos y selecciona torre/unidad,<br>
        cuando envía el formulario de registro,<br>
        entonces el sistema confirma el vínculo y crea la cuenta exitosamente.<br><br>
        <strong>Escenario 2: Unidad ya ocupada.</strong><br>
        Dado que el residente selecciona una unidad con titular activo,<br>
        cuando intenta completar el registro,<br>
        entonces el sistema bloquea el registro y solicita adjuntar título de propiedad para validación manual.<br><br>
        <strong>Escenario 3: Error de red.</strong><br>
        Dado que el residente está en proceso de vinculación,<br>
        cuando se pierde la conexión a internet,<br>
        entonces el sistema muestra "Error de sincronización" y permite reintentar sin rellenar todo el formulario.
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US02</strong></td>
      <td>Registro con correo</td>
      <td>Como usuario, quiero registrarme con mi correo para acceder a la plataforma.</td>
      <td>
        <strong>Escenario 1: Validación de formato.</strong><br>
        Dado que el usuario está completando el formulario de registro,<br>
        cuando ingresa un correo sin "@",<br>
        entonces el sistema muestra instantáneamente "Formato de correo inválido".<br><br>
        <strong>Escenario 2: Correo duplicado.</strong><br>
        Dado que el usuario intenta registrarse con un correo existente,<br>
        cuando envía el formulario,<br>
        entonces el sistema indica que la cuenta ya existe y ofrece la opción de recuperar contraseña.<br><br>
        <strong>Escenario 3: Timeout en verificación.</strong><br>
        Dado que el usuario espera el código de verificación,<br>
        cuando el servicio de envío demora más de 30 segundos,<br>
        entonces el sistema muestra "Servicio temporalmente lento" y habilita el botón "Reenviar código".
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US03</strong></td>
      <td>Inicio de sesión</td>
      <td>Como usuario, quiero iniciar sesión para acceder a mi información.</td>
      <td>
        <strong>Escenario 1: Login exitoso.</strong><br>
        Dado que el usuario tiene credenciales válidas,<br>
        cuando las ingresa y confirma el inicio de sesión,<br>
        entonces el sistema lo redirige al dashboard correspondiente según su rol (Admin/Residente).<br><br>
        <strong>Escenario 2: Bloqueo por intentos.</strong><br>
        Dado que el usuario ha ingresado credenciales incorrectas,<br>
        cuando acumula 5 intentos fallidos,<br>
        entonces el sistema bloquea la cuenta por 15 minutos por razones de seguridad.<br><br>
        <strong>Escenario 3: Sesión expirada.</strong><br>
        Dado que el token JWT del usuario ha caducado,<br>
        cuando intenta navegar dentro de la plataforma,<br>
        entonces el sistema lo redirige al login con el mensaje "Su sesión ha expirado".
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US04</strong></td>
      <td>Verificar información por torre y dpto.</td>
      <td>Como administrador, quiero verificar los datos de usuarios por ubicación para asegurar que el censo sea correcto.</td>
      <td>
        <strong>Escenario 1: Validación exitosa.</strong><br>
        Dado que el admin filtra por "Torre B - 402",<br>
        cuando revisa el DNI adjunto y los datos coinciden,<br>
        entonces puede marcar el registro como "Verificado".<br><br>
        <strong>Escenario 2: Datos inconsistentes.</strong><br>
        Dado que el admin revisa un registro con datos incorrectos,<br>
        cuando el nombre no coincide con el documento adjunto,<br>
        entonces el sistema permite marcar como "Pendiente de corrección" y notifica al residente el motivo específico.<br><br>
        <strong>Escenario 3: Error de carga de media.</strong><br>
        Dado que el admin intenta abrir el documento adjunto,<br>
        cuando el servidor de archivos no responde,<br>
        entonces el sistema muestra "No se pudo cargar la imagen del DNI, reintente en unos minutos".
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US05</strong></td>
      <td>Actualizar información de usuarios</td>
      <td>Como administrador, quiero editar datos de usuarios para corregir errores.</td>
      <td>
        <strong>Escenario 1: Edición de contacto.</strong><br>
        Dado que el admin accede al perfil de un residente,<br>
        cuando modifica el número de teléfono y guarda los cambios,<br>
        entonces el sistema almacena la información y registra en el log quién realizó el cambio.<br><br>
        <strong>Escenario 2: Cambio de rol inválido.</strong><br>
        Dado que el admin es el único administrador activo del sistema,<br>
        cuando intenta quitarse sus propios permisos de administrador,<br>
        entonces el sistema lanza "Error: Debe existir al menos un administrador activo".<br><br>
        <strong>Escenario 3: Fallo de persistencia.</strong><br>
        Dado que el admin intenta guardar cambios en un perfil,<br>
        cuando la base de datos se encuentra en mantenimiento,<br>
        entonces el sistema muestra "Error 500: No se pudieron guardar los cambios".
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US06</strong></td>
      <td>Editar perfil</td>
      <td>Como residente, quiero editar mi perfil para mantener mi contacto actualizado.</td>
      <td>
        <strong>Escenario 1: Actualización de foto.</strong><br>
        Dado que el residente accede a la edición de su perfil,<br>
        cuando sube una nueva imagen de perfil,<br>
        entonces el sistema la procesa y actualiza en todos los módulos de la plataforma.<br><br>
        <strong>Escenario 2: Cancelación.</strong><br>
        Dado que el usuario ha modificado campos de su perfil,<br>
        cuando pulsa el botón "Cancelar",<br>
        entonces el sistema descarta los cambios y vuelve al estado anterior sin alterar la base de datos.<br><br>
        <strong>Escenario 3: Formato no soportado.</strong><br>
        Dado que el usuario intenta subir una imagen de perfil,<br>
        cuando selecciona un archivo en formato .gif,<br>
        entonces el sistema indica "Solo se permiten formatos JPG/PNG".
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US07</strong></td>
      <td>Registrar edificio y unidades</td>
      <td>Como administrador, quiero configurar la estructura del edificio (torres/unidades).</td>
      <td>
        <strong>Escenario 1: Configuración inicial.</strong><br>
        Dado que el admin ingresa la configuración del edificio,<br>
        cuando registra 2 torres con 20 departamentos cada una,<br>
        entonces el sistema genera IDs únicos para cada unidad automáticamente.<br><br>
        <strong>Escenario 2: Unidades duplicadas.</strong><br>
        Dado que el admin intenta registrar una unidad,<br>
        cuando el "Dpto 101" ya existe en la misma torre,<br>
        entonces el sistema arroja "Error: Identificador de unidad ya existe".<br><br>
        <strong>Escenario 3: Interrupción de carga masiva.</strong><br>
        Dado que el admin está subiendo un Excel de unidades,<br>
        cuando el proceso se interrumpe inesperadamente,<br>
        entonces el sistema indica cuál fue la última fila procesada exitosamente.
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US08</strong></td>
      <td>Notificaciones de emergencias</td>
      <td>Como residente/admin, quiero gestionar avisos inmediatos de incidencias.</td>
      <td>
        <strong>Escenario 1: Alerta de incendio.</strong><br>
        Dado que el admin activa una alerta de emergencia,<br>
        cuando confirma el envío,<br>
        entonces todos los residentes reciben push y SMS en menos de 5 segundos.<br><br>
        <strong>Escenario 2: Reporte de incidencia.</strong><br>
        Dado que un residente detecta una fuga de gas,<br>
        cuando reporta la incidencia desde la app,<br>
        entonces el admin recibe una notificación con la ubicación exacta (Torre/Dpto).<br><br>
        <strong>Escenario 3: Fallo de Push Service.</strong><br>
        Dado que se intenta enviar una notificación de emergencia,<br>
        cuando el servicio de Firebase no está disponible,<br>
        entonces el sistema registra el error y reintenta el envío automáticamente hasta 3 veces.
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US09</strong></td>
      <td>Recordatorios de pago</td>
      <td>Como residente, quiero recibir alertas de mis deudas próximas a vencer.</td>
      <td>
        <strong>Escenario 1: Aviso preventivo.</strong><br>
        Dado que un pago de mantenimiento está próximo a vencer,<br>
        cuando faltan 3 días para la fecha límite,<br>
        entonces el sistema envía automáticamente un recordatorio al residente.<br><br>
        <strong>Escenario 2: Notificación de mora.</strong><br>
        Dado que un residente no realizó su pago a tiempo,<br>
        cuando se cumple el primer día de retraso,<br>
        entonces el sistema alerta al residente sobre el recargo aplicado.<br><br>
        <strong>Escenario 3: Pago parcial.</strong><br>
        Dado que el residente tiene una deuda de S/ 100,<br>
        cuando realiza un abono de S/ 50,<br>
        entonces el sistema notifica que aún queda un saldo pendiente de S/ 50.
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US10</strong></td>
      <td>Recepción de comunicados</td>
      <td>Como residente, quiero recibir información oficial del condominio.</td>
      <td>
        <strong>Escenario 1: Lectura de acta.</strong><br>
        Dado que el admin publica el acta de una junta,<br>
        cuando el residente recibe el aviso,<br>
        entonces puede abrir y leer el PDF directamente desde la app.<br><br>
        <strong>Escenario 2: Filtro de relevancia.</strong><br>
        Dado que el admin publica un aviso dirigido únicamente a "Torre A",<br>
        cuando el comunicado es enviado,<br>
        entonces los residentes de "Torre B" no reciben el mensaje.<br><br>
        <strong>Escenario 3: Notificaciones desactivadas.</strong><br>
        Dado que el residente tiene las notificaciones push desactivadas,<br>
        cuando el admin publica un comunicado,<br>
        entonces el sistema no envía push pero marca el mensaje como "No leído" en el buzón interno.
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US11</strong></td>
      <td>Notificaciones de reservas</td>
      <td>Como residente, quiero avisos sobre mis turnos en áreas comunes.</td>
      <td>
        <strong>Escenario 1: Confirmación.</strong><br>
        Dado que el residente completa una reserva en el gimnasio,<br>
        cuando el sistema procesa la solicitud,<br>
        entonces envía una notificación confirmando el día y la hora reservados.<br><br>
        <strong>Escenario 2: Recordatorio de uso.</strong><br>
        Dado que el residente tiene una reserva activa,<br>
        cuando falta 1 hora para el inicio del turno,<br>
        entonces el sistema envía el aviso: "Tu turno en el área común inicia pronto".<br><br>
        <strong>Escenario 3: Cancelación forzada.</strong><br>
        Dado que el admin cierra un área por mantenimiento,<br>
        cuando existen reservas activas para esa área,<br>
        entonces el sistema notifica al residente afectado y libera el cobro si correspondiera.
      </td>
      <td>EP03</td>
    </tr>
    <tr>
      <td><strong>US12</strong></td>
      <td>Configuración de notificaciones</td>
      <td>Como residente, quiero elegir qué avisos recibir.</td>
      <td>
        <strong>Escenario 1: Personalización.</strong><br>
        Dado que el usuario accede a la configuración de notificaciones,<br>
        cuando desactiva "Comunicados" pero mantiene "Pagos" activo,<br>
        entonces el sistema guarda esa preferencia en su perfil.<br><br>
        <strong>Escenario 2: Error al guardar.</strong><br>
        Dado que el usuario intenta guardar sus preferencias,<br>
        cuando el servicio de preferencias falla,<br>
        entonces el sistema muestra "No se pudo actualizar la configuración, intente más tarde".<br><br>
        <strong>Escenario 3: Reseteo de preferencias.</strong><br>
        Dado que el usuario desea volver a la configuración original,<br>
        cuando pulsa el botón "Restablecer",<br>
        entonces el sistema activa todas las notificaciones con sus valores por defecto.
      </td>
      <td>EP02</td>
    </tr>
   <tr>
      <td><strong>US13</strong></td>
      <td>Publicar comunicados oficiales</td>
      <td>Como administrador, quiero difundir noticias a la comunidad.</td>
      <td>
        <strong>Escenario 1: Publicación con adjunto.</strong><br>
        Dado que el admin redacta un comunicado con el presupuesto anual adjunto,<br>
        cuando lo publica,<br>
        entonces el sistema lo distribuye a todos los perfiles activos.<br><br>
        <strong>Escenario 2: Borrador de comunicado.</strong><br>
        Dado que el admin está redactando un comunicado,<br>
        cuando lo guarda como borrador,<br>
        entonces el sistema lo mantiene oculto para los residentes hasta su publicación.<br><br>
        <strong>Escenario 3: Error de formato.</strong><br>
        Dado que el admin intenta adjuntar un archivo al comunicado,<br>
        cuando el archivo supera los 10MB,<br>
        entonces el sistema indica "El archivo excede el límite permitido (10MB)".
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US14</strong></td>
      <td>Visualizar comunicados anteriores</td>
      <td>Como residente, quiero ver el historial de anuncios.</td>
      <td>
        <strong>Escenario 1: Búsqueda histórica.</strong><br>
        Dado que el residente accede al historial de comunicados,<br>
        cuando filtra por "Enero 2024",<br>
        entonces el sistema lista los comunicados de ese período de forma cronológica.<br><br>
        <strong>Escenario 2: Lista vacía.</strong><br>
        Dado que el residente aplica un filtro de búsqueda,<br>
        cuando no existen registros para ese período,<br>
        entonces el sistema muestra "No hay comunicados para este periodo".<br><br>
        <strong>Escenario 3: Error de carga de lista.</strong><br>
        Dado que el residente solicita el historial de comunicados,<br>
        cuando el servicio de base de datos demora en responder,<br>
        entonces el sistema muestra un "Skeleton loader" mientras recupera los datos.
      </td>
      <td>EP02</td>
    </tr>
	  <tr>
  <td><strong>US15</strong></td>
  <td>Seguimiento de visualización de comunicados</td>
  <td>Como administrador, quiero saber quién ha visto los comunicados para asegurar su alcance.</td>
  <td>
    <strong>Escenario 1: Visualización del registro.</strong><br>
    Dado que el admin accede a un comunicado publicado,<br>
    cuando revisa el panel de seguimiento,<br>
    entonces el sistema muestra la lista de residentes que lo han leído con fecha y hora de lectura.<br><br>
    <strong>Escenario 2: Residentes que no han leído.</strong><br>
    Dado que el admin consulta el seguimiento de un comunicado,<br>
    cuando filtra por "No leído",<br>
    entonces el sistema lista los residentes que aún no han abierto el comunicado y permite reenviar la notificación.<br><br>
    <strong>Escenario 3: Error de carga del registro.</strong><br>
    Dado que el admin intenta ver el seguimiento de visualizaciones,<br>
    cuando el servicio de base de datos tarda en responder,<br>
    entonces el sistema muestra un "Skeleton loader" mientras recupera los datos.
  </td>
  <td>EP02</td>
</tr>
    <tr>
      <td><strong>US16</strong></td>
      <td>Ver disponibilidad de áreas comunes</td>
      <td>Como residente/admin, quiero ver qué áreas están libres.</td>
      <td>
        <strong>Escenario 1: Consulta de calendario.</strong><br>
        Dado que el usuario accede al área "Piscina",<br>
        cuando visualiza el calendario,<br>
        entonces puede ver los bloques de 1 hora disponibles y ocupados.<br><br>
        <strong>Escenario 2: Área fuera de servicio.</strong><br>
        Dado que el admin marca el "Gimnasio" como inactivo,<br>
        cuando un residente consulta la disponibilidad,<br>
        entonces ve el área sombreada con el mensaje "Mantenimiento".<br><br>
        <strong>Escenario 3: Error de concurrencia.</strong><br>
        Dado que dos usuarios consultan el mismo horario simultáneamente,<br>
        cuando uno de ellos completa una reserva,<br>
        entonces el sistema actualiza la disponibilidad en tiempo real para el otro usuario.
      </td>
      <td>EP03</td>
    </tr>
    <tr>
      <td><strong>US17</strong></td>
      <td>Reservar área común</td>
      <td>Como residente, quiero separar un espacio para uso personal.</td>
      <td>
        <strong>Escenario 1: Reserva exitosa.</strong><br>
        Dado que el residente selecciona un horario disponible,<br>
        cuando confirma la reserva,<br>
        entonces el sistema da acceso para ese turno.<br><br>
        <strong>Escenario 2: Cruce de horarios.</strong><br>
        Dado que el residente intenta reservar un área común,<br>
        cuando el horario seleccionado ya está tomado,<br>
        entonces el sistema indica "Horario no disponible, elija otro".<br><br>
        <strong>Escenario 3: Límite de reservas.</strong><br>
        Dado que el residente ya alcanzó el máximo de reservas diarias,<br>
        cuando intenta realizar una quinta reserva en el mismo día,<br>
        entonces el sistema bloquea la acción indicando "Límite diario de reservas alcanzado".
      </td>
      <td>EP03</td>
    </tr>
	  <tr>
  <td><strong>US18</strong></td>
  <td>Aprobar o rechazar reservas</td>
  <td>Como administrador, quiero aprobar o rechazar reservas de áreas comunes para mantener el control sobre su uso.</td>
  <td>
    <strong>Escenario 1: Aprobación exitosa.</strong><br>
    Dado que el admin recibe una solicitud de reserva pendiente,<br>
    cuando la aprueba desde el panel de administración,<br>
    entonces el sistema confirma la reserva y notifica al residente que tiene acceso.<br><br>
    <strong>Escenario 2: Rechazo con motivo.</strong><br>
    Dado que el admin decide rechazar una solicitud de reserva,<br>
    cuando ingresa el motivo y confirma el rechazo,<br>
    entonces el sistema libera el horario y notifica al residente indicando el motivo del rechazo.<br><br>
    <strong>Escenario 3: Solicitud expirada.</strong><br>
    Dado que el admin accede a una solicitud de reserva pendiente,<br>
    cuando la fecha y hora solicitada ya pasó sin ser procesada,<br>
    entonces el sistema la marca automáticamente como "Expirada" y la excluye de la lista de pendientes.
  </td>
  <td>EP03</td>
</tr>
	 <tr>
  <td><strong>US19</strong></td>
  <td>Evitar reservas duplicadas</td>
  <td>Como administrador, quiero que el sistema prevenga reservas duplicadas para evitar conflictos de horario en las áreas comunes.</td>
  <td>
    <strong>Escenario 1: Bloqueo de duplicado.</strong><br>
    Dado que un residente intenta reservar un área en un horario ya ocupado,<br>
    cuando confirma la solicitud,<br>
    entonces el sistema bloquea la acción e indica "Este horario ya se encuentra reservado, elija otro".<br><br>
    <strong>Escenario 2: Detección en reserva simultánea.</strong><br>
    Dado que dos residentes intentan reservar el mismo horario al mismo tiempo,<br>
    cuando ambos confirman la reserva simultáneamente,<br>
    entonces el sistema otorga la reserva al primero en confirmar y notifica al segundo que el horario ya no está disponible.<br><br>
    <strong>Escenario 3: Alerta al administrador.</strong><br>
    Dado que el sistema detecta un intento de reserva duplicada,<br>
    cuando el conflicto es registrado,<br>
    entonces el admin recibe una notificación indicando el área, horario y los residentes involucrados.
  </td>
  <td>EP03</td>
</tr> 
    <tr>
      <td><strong>US20</strong></td>
      <td>Cancelar reserva</td>
      <td>Como residente, quiero liberar un espacio que ya no usaré.</td>
      <td>
        <strong>Escenario 1: Cancelación a tiempo.</strong><br>
        Dado que el residente desea cancelar su reserva,<br>
        cuando lo hace con al menos 24 horas de anticipación,<br>
        entonces el sistema libera el cupo y notifica la disponibilidad a otros residentes.<br><br>
        <strong>Escenario 2: Cancelación tardía.</strong><br>
        Dado que el residente intenta cancelar una reserva,<br>
        cuando lo hace faltando solo 5 minutos para el turno,<br>
        entonces el sistema indica "Plazo de cancelación vencido, se aplicará el cobro".<br><br>
        <strong>Escenario 3: Error de estado.</strong><br>
        Dado que el residente intenta cancelar una reserva,<br>
        cuando esta ya fue cancelada previamente por el admin,<br>
        entonces el sistema muestra "Esta reserva ya no está activa".
      </td>
      <td>EP03</td>
    </tr>
    <tr>
      <td><strong>US21</strong></td>
      <td>Ver deuda actual</td>
      <td>Como residente, quiero saber cuánto debo pagar de mantenimiento.</td>
      <td>
        <strong>Escenario 1: Detalle de deuda.</strong><br>
        Dado que el residente accede a la sección de pagos,<br>
        cuando consulta su deuda actual,<br>
        entonces el sistema muestra el desglose: mantenimiento + multas + servicios adicionales.<br><br>
        <strong>Escenario 2: Sin deuda.</strong><br>
        Dado que el residente está al día con sus pagos,<br>
        cuando consulta su saldo,<br>
        entonces el sistema muestra "Saldo: S/ 0.00" y un botón para descargar la constancia de no adeudo.<br><br>
        <strong>Escenario 3: Error de sincronización bancaria.</strong><br>
        Dado que el residente consulta su deuda,<br>
        cuando el sistema de pagos externos está caído,<br>
        entonces se muestra el aviso "Los montos podrían no estar actualizados".
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US22</strong></td>
      <td>Registrar pago con comprobante</td>
      <td>Como residente, quiero subir mi foto de voucher para validar mi pago.</td>
      <td>
        <strong>Escenario 1: Subida exitosa.</strong><br>
        Dado que el residente realizó un pago,<br>
        cuando adjunta la foto del voucher en la plataforma,<br>
        entonces el sistema cambia el estado de la deuda a "En revisión".<br><br>
        <strong>Escenario 2: Voucher ilegible.</strong><br>
        Dado que el admin revisa un comprobante enviado,<br>
        cuando la imagen no permite leer la información correctamente,<br>
        entonces el sistema notifica al residente que debe subir una imagen más clara.<br><br>
        <strong>Escenario 3: Archivo corrupto.</strong><br>
        Dado que el residente intenta subir su comprobante,<br>
        cuando el archivo seleccionado está dañado,<br>
        entonces el sistema muestra "Error: No se pudo procesar el archivo, intente de nuevo".
      </td>
      <td>EP04</td>
    </tr>
	  <tr>
  <td><strong>US23</strong></td>
  <td>Registrar pagos en el sistema</td>
  <td>Como administrador, quiero registrar manualmente los pagos de los residentes para mantener el sistema actualizado.</td>
  <td>
    <strong>Escenario 1: Registro exitoso.</strong><br>
    Dado que el admin accede al módulo de pagos de un residente,<br>
    cuando ingresa el monto, fecha y método de pago y confirma el registro,<br>
    entonces el sistema actualiza la deuda del residente y genera un comprobante de pago.<br><br>
    <strong>Escenario 2: Monto inválido.</strong><br>
    Dado que el admin intenta registrar un pago,<br>
    cuando ingresa un monto de S/ 0 o un valor negativo,<br>
    entonces el sistema muestra "El monto ingresado no es válido, verifique los datos".<br><br>
    <strong>Escenario 3: Fallo de persistencia.</strong><br>
    Dado que el admin intenta guardar el registro de un pago,<br>
    cuando la base de datos se encuentra en mantenimiento,<br>
    entonces el sistema muestra "Error 500: No se pudo registrar el pago, intente nuevamente".
  </td>
  <td>EP04</td>
</tr>
    <tr>
      <td><strong>US24</strong></td>
      <td>Visualizar residentes morosos</td>
      <td>Como administrador, quiero ver la lista de deudores.</td>
      <td>
        <strong>Escenario 1: Filtro de morosidad.</strong><br>
        Dado que el admin accede al módulo de morosidad,<br>
        cuando aplica el filtro de más de 2 meses de deuda,<br>
        entonces el sistema lista los residentes en esa condición para aplicar restricciones.<br><br>
        <strong>Escenario 2: Exportar reporte.</strong><br>
        Dado que el admin necesita el listado de morosos,<br>
        cuando solicita la descarga en PDF,<br>
        entonces el sistema genera el archivo con nombres, departamentos y montos totales.<br><br>
        <strong>Escenario 3: Error de datos masivos.</strong><br>
        Dado que existen 500 residentes morosos registrados,<br>
        cuando el admin consulta la lista completa,<br>
        entonces el sistema implementa paginación para evitar que la app se cuelgue.
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US25</strong></td>
      <td>Generar reportes financieros</td>
      <td>Como administrador, quiero ver el balance de ingresos/egresos.</td>
      <td>
        <strong>Escenario 1: Reporte mensual.</strong><br>
        Dado que el admin selecciona el mes "Mayo",<br>
        cuando solicita el reporte,<br>
        entonces el sistema suma los pagos validados versus los gastos registrados y muestra el neto.<br><br>
        <strong>Escenario 2: Rango inválido.</strong><br>
        Dado que el admin configura el rango de fechas del reporte,<br>
        cuando la fecha de fin es anterior a la fecha de inicio,<br>
        entonces el sistema muestra "Rango de fechas incoherente".<br><br>
        <strong>Escenario 3: Timeout de cálculo.</strong><br>
        Dado que el admin solicita un reporte anual,<br>
        cuando el procesamiento tarda demasiado,<br>
        entonces el sistema muestra una barra de progreso y permite descargar el resultado al finalizar.
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US26</strong></td>
      <td>Exportar reportes financieros</td>
      <td>Como administrador, quiero descargar balances en Excel/PDF.</td>
      <td>
        <strong>Escenario 1: Exportación exitosa.</strong><br>
        Dado que el admin genera un reporte de ingresos,<br>
        cuando descarga el archivo Excel,<br>
        entonces el sistema aplica correctamente los formatos de moneda.<br><br>
        <strong>Escenario 2: Error de permisos.</strong><br>
        Dado que un usuario sin rol de administrador accede al módulo de reportes,<br>
        cuando intenta exportar un balance,<br>
        entonces el sistema deniega el acceso con el mensaje "Permisos insuficientes".<br><br>
        <strong>Escenario 3: Fallo de generación.</strong><br>
        Dado que el admin solicita exportar un reporte,<br>
        cuando no existen datos para el período seleccionado,<br>
        entonces el sistema exporta un documento indicando "Sin registros encontrados".
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US27</strong></td>
      <td>Ver resumen de gastos</td>
      <td>Como residente, quiero saber en qué se gasta el dinero del edificio.</td>
      <td>
        <strong>Escenario 1: Gráfico de gastos.</strong><br>
        Dado que el residente accede al resumen financiero,<br>
        cuando consulta la distribución de gastos,<br>
        entonces el sistema muestra un gráfico de torta con categorías como: 40% Seguridad, 30% Limpieza, etc.<br><br>
        <strong>Escenario 2: Consulta de facturas.</strong><br>
        Dado que el residente visualiza el resumen de gastos,<br>
        cuando selecciona un ítem específico,<br>
        entonces el sistema muestra la descripción del gasto (ej: Reparación de bomba de agua).<br><br>
        <strong>Escenario 3: Información no publicada.</strong><br>
        Dado que el admin aún no ha cerrado el período mensual,<br>
        cuando el residente consulta el resumen,<br>
        entonces el sistema muestra "Información en proceso de cierre".
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US28</strong></td>
      <td>Consultar pagos pasados</td>
      <td>Como residente, quiero ver mi historial de transacciones.</td>
      <td>
        <strong>Escenario 1: Historial histórico.</strong><br>
        Dado que el residente accede a su historial de pagos,<br>
        cuando consulta el período de los últimos 12 meses,<br>
        entonces el sistema lista todos sus pagos con sus respectivos comprobantes.<br><br>
        <strong>Escenario 2: Filtro por año.</strong><br>
        Dado que el residente desea revisar pagos anteriores,<br>
        cuando selecciona el año "2023",<br>
        entonces el sistema recupera únicamente los pagos de ese ejercicio fiscal.<br><br>
        <strong>Escenario 3: Error de base de datos.</strong><br>
        Dado que el residente consulta su historial,<br>
        cuando el servidor de archivos de vouchers antiguos falla,<br>
        entonces el sistema muestra "Detalles temporalmente no disponibles".
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US29</strong></td>
      <td>Publicar mensaje en la comunidad</td>
      <td>Como residente, quiero escribir en el muro comunitario.</td>
      <td>
        <strong>Escenario 1: Publicación exitosa.</strong><br>
        Dado que el residente redacta un mensaje en el muro comunitario,<br>
        cuando lo publica,<br>
        entonces el sistema lo muestra en el feed de la comunidad.<br><br>
        <strong>Escenario 2: Límite diario.</strong><br>
        Dado que el residente ya publicó un mensaje en el día,<br>
        cuando intenta publicar un segundo mensaje,<br>
        entonces el sistema bloquea la acción indicando "Máximo 1 post por día".<br><br>
        <strong>Escenario 3: Filtro de palabras.</strong><br>
        Dado que el residente redacta un mensaje con contenido inapropiado,<br>
        cuando intenta publicarlo,<br>
        entonces el sistema detecta las palabras prohibidas y bloquea la publicación.
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US30</strong></td>
      <td>Pagar deuda en línea</td>
      <td>Como residente, quiero pagar con tarjeta de crédito/débito.</td>
      <td>
        <strong>Escenario 1: Pago aprobado.</strong><br>
        Dado que el residente ingresa los datos de su tarjeta para pagar S/ 200,<br>
        cuando la pasarela de pago aprueba la transacción,<br>
        entonces la deuda se marca como "Pagado" de forma inmediata.<br><br>
        <strong>Escenario 2: Transacción rechazada.</strong><br>
        Dado que el residente intenta pagar con su tarjeta,<br>
        cuando la tarjeta no tiene fondos suficientes,<br>
        entonces el sistema muestra el error del banco y permite cambiar de tarjeta.<br><br>
        <strong>Escenario 3: Pago parcial permitido.</strong><br>
        Dado que el residente tiene una deuda de S/ 300,<br>
        cuando realiza un pago de S/ 100,<br>
        entonces el sistema actualiza el saldo restante a S/ 200 de forma inmediata.
      </td>
      <td>EP04</td>
    </tr>
    <tr>
      <td><strong>US31</strong></td>
      <td>Notificación por reserva (Admin)</td>
      <td>Como admin, quiero saber cuándo alguien reserva un área común.</td>
      <td>
        <strong>Escenario 1: Alerta inmediata.</strong><br>
        Dado que un residente realiza una reserva en el área de parrillas,<br>
        cuando la reserva es confirmada,<br>
        entonces el admin recibe un push: "Reserva nueva en Área Parrillas - Dpto 501".<br><br>
        <strong>Escenario 2: Filtro de alertas.</strong><br>
        Dado que el admin configura sus preferencias de notificación,<br>
        cuando desactiva alertas para áreas de bajo impacto,<br>
        entonces el sistema solo le notifica las reservas de áreas críticas.<br><br>
        <strong>Escenario 3: Sobrecarga de avisos.</strong><br>
        Dado que se registran 50 reservas en 1 minuto,<br>
        cuando el sistema procesa todas las notificaciones,<br>
        entonces las agrupa en un resumen para no saturar al administrador.
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US32</strong></td>
      <td>Consultar Leyes y Manuales</td>
      <td>Como administrador, quiero ver la normativa legal y del edificio.</td>
      <td>
        <strong>Escenario 1: Lectura de PDF.</strong><br>
        Dado que el admin accede a la sección de documentos legales,<br>
        cuando abre el "Reglamento de Convivencia",<br>
        entonces el sistema permite hacer zoom y buscar palabras clave dentro del documento.<br><br>
        <strong>Escenario 2: Actualización de leyes.</strong><br>
        Dado que existe una actualización en la normativa legal,<br>
        cuando el admin consulta la sección correspondiente,<br>
        entonces el sistema muestra un enlace a la última ley de propiedad horizontal accesible vía webview.<br><br>
        <strong>Escenario 3: Archivo no disponible.</strong><br>
        Dado que el admin intenta abrir un manual del edificio,<br>
        cuando el archivo fue eliminado accidentalmente,<br>
        entonces el sistema muestra "Documento no encontrado, contacte a soporte".
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US33</strong></td>
      <td>Ver disponibilidad global (Admin)</td>
      <td>Como admin, quiero ver el mapa de ocupación de todo el edificio.</td>
      <td>
        <strong>Escenario 1: Vista de calendario total.</strong><br>
        Dado que el admin accede al panel de disponibilidad global,<br>
        cuando consulta el día actual,<br>
        entonces puede ver qué áreas están ocupadas para coordinar el personal de limpieza.<br><br>
        <strong>Escenario 2: Bloqueo de fechas.</strong><br>
        Dado que el admin necesita reservar la piscina para mantenimiento el domingo,<br>
        cuando bloquea esa fecha en el calendario,<br>
        entonces los residentes ya no pueden realizar reservas para ese día.<br><br>
        <strong>Escenario 3: Error de refresco.</strong><br>
        Dado que el admin visualiza el calendario de ocupación,<br>
        cuando los datos no se actualizan correctamente,<br>
        entonces el sistema ofrece un botón de "Forzar actualización".
      </td>
      <td>EP03</td>
    </tr>
    <tr>
      <td><strong>US34</strong></td>
      <td>Activar/Desactivar cuentas</td>
      <td>Como administrador, quiero controlar quién tiene acceso a la app.</td>
      <td>
        <strong>Escenario 1: Desactivación por mudanza.</strong><br>
        Dado que un residente se ha mudado del edificio,<br>
        cuando el admin inactiva su cuenta,<br>
        entonces las credenciales del residente dejan de funcionar al instante.<br><br>
        <strong>Escenario 2: Reactivación.</strong><br>
        Dado que el admin habilita una cuenta suspendida,<br>
        cuando confirma la reactivación,<br>
        entonces el sistema envía automáticamente un correo: "Tu cuenta ha sido reactivada".<br><br>
        <strong>Escenario 3: Error al desactivar Admin.</strong><br>
        Dado que el sistema tiene un único super-administrador activo,<br>
        cuando se intenta desactivar esa cuenta,<br>
        entonces el sistema impide la acción por razones de seguridad.
      </td>
      <td>EP01</td>
    </tr>
    <tr>
      <td><strong>US35</strong></td>
      <td>Cancelar reserva (Admin)</td>
      <td>Como administrador, quiero anular una reserva de un residente.</td>
      <td>
        <strong>Escenario 1: Anulación por emergencia.</strong><br>
        Dado que ocurre una rotura de tubería en el SUM,<br>
        cuando el admin cancela las reservas activas de esa área,<br>
        entonces el sistema notifica a cada residente afectado con el motivo de la cancelación.<br><br>
        <strong>Escenario 2: Anulación por deuda.</strong><br>
        Dado que un residente con reserva activa entra en mora,<br>
        cuando el admin cancela su reserva,<br>
        entonces el sistema la anula y bloquea futuras reservas para ese residente.<br><br>
        <strong>Escenario 3: Error de red.</strong><br>
        Dado que el admin intenta cancelar una reserva,<br>
        cuando el sistema falla durante el proceso,<br>
        entonces se muestra "No se pudo cancelar, verifique su conexión e intente de nuevo".
      </td>
      <td>EP03</td>
    </tr>
 <tr>
      <td><strong>US36</strong></td>
      <td>Crear encuestas o votaciones para la comunidad</td>
      <td>Como administrador, quiero crear encuestas o votaciones para conocer la opinión de los residentes sobre temas del condominio.</td>
      <td>
        <strong>Escenario 1: Creación exitosa.</strong><br>
        Dado que el admin completa el formulario de encuesta con pregunta y opciones,<br>
        cuando la publica,<br>
        entonces todos los residentes activos reciben una notificación y pueden votar desde la app.<br><br>
        <strong>Escenario 2: Encuesta con fecha límite.</strong><br>
        Dado que el admin configura una fecha de cierre para la encuesta,<br>
        cuando se cumple el plazo,<br>
        entonces el sistema cierra automáticamente la votación y muestra los resultados finales.<br><br>
        <strong>Escenario 3: Voto duplicado.</strong><br>
        Dado que un residente ya emitió su voto,<br>
        cuando intenta votar nuevamente,<br>
        entonces el sistema bloquea la acción indicando "Ya has registrado tu voto en esta encuesta".
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US37</strong></td>
      <td>Moderar mensajes del muro comunitario</td>
      <td>Como administrador, quiero revisar y eliminar mensajes inapropiados del muro para mantener un ambiente respetuoso.</td>
      <td>
        <strong>Escenario 1: Eliminación exitosa.</strong><br>
        Dado que el admin detecta un mensaje con contenido inapropiado,<br>
        cuando lo elimina desde el panel de moderación,<br>
        entonces el mensaje desaparece del feed y el residente recibe una notificación indicando el motivo.<br><br>
        <strong>Escenario 2: Advertencia al residente.</strong><br>
        Dado que un residente publica contenido que infringe las normas por primera vez,<br>
        cuando el admin aplica una advertencia,<br>
        entonces el sistema registra el aviso en el perfil del residente y lo notifica.<br><br>
        <strong>Escenario 3: Bloqueo por reincidencia.</strong><br>
        Dado que un residente acumula 3 advertencias,<br>
        cuando el admin confirma el bloqueo,<br>
        entonces el residente queda inhabilitado para publicar en el muro comunitario.
      </td>
      <td>EP02</td>
    </tr>
    <tr>
      <td><strong>US38</strong></td>
      <td>Habilitar o deshabilitar área común</td>
      <td>Como administrador, quiero activar o desactivar áreas comunes para reflejar su disponibilidad real según mantenimiento o restricciones.</td>
      <td>
        <strong>Escenario 1: Deshabilitación exitosa.</strong><br>
        Dado que el admin deshabilita el "Gimnasio" por mantenimiento,<br>
        cuando confirma la acción,<br>
        entonces el área aparece como no disponible y los residentes no pueden realizar nuevas reservas.<br><br>
        <strong>Escenario 2: Notificación a reservas activas.</strong><br>
        Dado que existen reservas vigentes en el área deshabilitada,<br>
        cuando el admin la desactiva,<br>
        entonces el sistema cancela esas reservas automáticamente y notifica a los residentes afectados.<br><br>
        <strong>Escenario 3: Rehabilitación del área.</strong><br>
        Dado que el admin reactiva un área previamente deshabilitada,<br>
        cuando confirma la acción,<br>
        entonces el área vuelve a aparecer disponible para reservas y el sistema notifica a los residentes.
      </td>
      <td>EP03</td>
    </tr>
    <tr>
      <td><strong>US39</strong></td>
      <td>Configurar reglas de área común</td>
      <td>Como administrador, quiero definir las reglas, horarios y límites de cada área común para regular su uso correctamente.</td>
      <td>
        <strong>Escenario 1: Configuración exitosa.</strong><br>
        Dado que el admin accede a la configuración de un área,<br>
        cuando establece el aforo máximo, horario de apertura/cierre y duración máxima de reserva,<br>
        entonces el sistema aplica esas reglas en todas las nuevas reservas.<br><br>
        <strong>Escenario 2: Conflicto con reservas existentes.</strong><br>
        Dado que el admin reduce el horario de un área con reservas ya registradas fuera del nuevo rango,<br>
        cuando guarda los cambios,<br>
        entonces el sistema alerta "Existen reservas que superan el nuevo horario, serán canceladas" y solicita confirmación.<br><br>
        <strong>Escenario 3: Validación de datos inválidos.</strong><br>
        Dado que el admin ingresa un aforo de 0 personas o un horario de cierre anterior al de apertura,<br>
        cuando intenta guardar,<br>
        entonces el sistema muestra "Configuración inválida, verifique los datos ingresados".
      </td>
      <td>EP03</td>
    </tr>
    <tr>
      <td><strong>US40</strong></td>
      <td>Ver historial de uso de áreas comunes</td>
      <td>Como administrador, quiero consultar el historial completo de uso de las áreas comunes con estadísticas para tomar mejores decisiones de gestión.</td>
      <td>
        <strong>Escenario 1: Consulta de historial.</strong><br>
        Dado que el admin accede al historial de un área,<br>
        cuando selecciona un rango de fechas,<br>
        entonces el sistema lista todas las reservas realizadas con residente, fecha, hora y estado (completada/cancelada).<br><br>
        <strong>Escenario 2: Estadísticas de uso.</strong><br>
        Dado que el admin consulta las estadísticas globales,<br>
        cuando visualiza el resumen,<br>
        entonces el sistema muestra el área más usada, el horario pico y el porcentaje de cancelaciones del período.<br><br>
        <strong>Escenario 3: Exportar historial.</strong><br>
        Dado que el admin necesita el historial para un informe,<br>
        cuando solicita la exportación,<br>
        entonces el sistema genera un archivo Excel con todos los registros del período seleccionado.
      </td>
      <td>EP03</td>
    </tr>
	<tr>
  <td><strong>US41</strong></td>
  <td>Visualizar sección Hero de la Landing Page</td>
  <td>Como visitante, quiero ver una sección principal con el mensaje de valor de Edifika para entender rápidamente de qué trata el producto.</td>
  <td>
    <strong>Escenario 1: Carga correcta.</strong><br>
    Dado que el visitante accede a la landing page,<br>
    cuando la página termina de cargar,<br>
    entonces visualiza el título principal, subtítulo descriptivo, botones CTA ("Solicitar demo gratis" y "Ver funciones") y el mockup del producto.<br><br>
    <strong>Escenario 2: Responsividad.</strong><br>
    Dado que el visitante accede desde un dispositivo móvil,<br>
    cuando carga la sección Hero,<br>
    entonces el contenido se adapta correctamente sin desbordamiento ni elementos superpuestos.<br><br>
    <strong>Escenario 3: Navegación por CTA.</strong><br>
    Dado que el visitante hace clic en "Ver funciones",<br>
    cuando el sistema procesa la acción,<br>
    entonces la página realiza scroll suave hacia la sección de funcionalidades.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US42</strong></td>
  <td>Navegar entre secciones de la Landing Page</td>
  <td>Como visitante, quiero usar la barra de navegación para desplazarme entre las secciones de la landing page para hacerlo de forma rápida.</td>
  <td>
    <strong>Escenario 1: Navegación exitosa.</strong><br>
    Dado que el visitante hace clic en "Planes" desde el navbar,<br>
    cuando el sistema procesa la acción,<br>
    entonces la página realiza scroll automático hasta la sección de planes.<br><br>
    <strong>Escenario 2: Sección activa resaltada.</strong><br>
    Dado que el visitante hace scroll por la página,<br>
    cuando pasa por una sección específica,<br>
    entonces el ítem correspondiente en el navbar se resalta visualmente con el color primario.<br><br>
    <strong>Escenario 3: Navbar fijo en scroll.</strong><br>
    Dado que el visitante hace scroll hacia abajo,<br>
    cuando supera los primeros 100px de la página,<br>
    entonces el navbar permanece visible y fijo en la parte superior de la pantalla.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US43</strong></td>
  <td>Cambiar idioma de la Landing Page</td>
  <td>Como visitante internacional, quiero cambiar el idioma entre español e inglés para entender el contenido en mi idioma preferido.</td>
  <td>
    <strong>Escenario 1: Cambio a inglés.</strong><br>
    Dado que el visitante hace clic en "EN" en el selector de idioma,<br>
    cuando el sistema procesa el cambio,<br>
    entonces todo el contenido visible de la página se actualiza al inglés sin recargar la página.<br><br>
    <strong>Escenario 2: Persistencia de idioma.</strong><br>
    Dado que el visitante seleccionó inglés previamente,<br>
    cuando navega a otra sección o recarga la página,<br>
    entonces el sistema mantiene el idioma previamente seleccionado.<br><br>
    <strong>Escenario 3: Idioma por defecto.</strong><br>
    Dado que el visitante accede a la landing por primera vez,<br>
    cuando no ha configurado preferencia de idioma alguna,<br>
    entonces el sistema muestra el contenido en español por defecto.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US44</strong></td>
  <td>Cambiar tema visual (claro/oscuro)</td>
  <td>Como visitante, quiero alternar entre el modo claro y oscuro de la landing page para mejorar mi experiencia visual.</td>
  <td>
    <strong>Escenario 1: Activar modo claro.</strong><br>
    Dado que la página está en modo oscuro,<br>
    cuando el visitante hace clic en el ícono de sol,<br>
    entonces la interfaz cambia al tema claro con todos sus colores adaptados correctamente.<br><br>
    <strong>Escenario 2: Persistencia del tema.</strong><br>
    Dado que el visitante activó el modo claro,<br>
    cuando recarga la página,<br>
    entonces el sistema conserva la preferencia guardada localmente.<br><br>
    <strong>Escenario 3: Preferencia del sistema operativo.</strong><br>
    Dado que el visitante tiene configurado modo oscuro en su sistema operativo,<br>
    cuando accede a la landing por primera vez sin preferencia guardada,<br>
    entonces la página adopta automáticamente el tema oscuro.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US45</strong></td>
  <td>Visualizar sección de funcionalidades</td>
  <td>Como visitante, quiero ver las funcionalidades principales de Edifika para evaluar si la plataforma se adapta a mis necesidades.</td>
  <td>
    <strong>Escenario 1: Visualización de módulos.</strong><br>
    Dado que el visitante accede a la sección "Funciones",<br>
    cuando la sección carga correctamente,<br>
    entonces se muestran los tres módulos clave: Gestión de Pagos y Deudas, Reserva de Áreas Comunes y Comunicados, cada uno con su descripción e ícono.<br><br>
    <strong>Escenario 2: Listado de características.</strong><br>
    Dado que el visitante revisa cada tarjeta de módulo,<br>
    cuando lee su contenido,<br>
    entonces puede ver el listado de características con íconos de verificación para cada funcionalidad incluida.<br><br>
    <strong>Escenario 3: Etiqueta de módulo destacado.</strong><br>
    Dado que el visitante visualiza las tarjetas de funcionalidades,<br>
    cuando observa la tarjeta de Gestión de Pagos y Deudas,<br>
    entonces aparece visible la etiqueta "Más popular" para orientar la decisión del visitante.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US46</strong></td>
  <td>Visualizar sección del equipo</td>
  <td>Como visitante, quiero conocer al equipo detrás de Edifika para generar confianza antes de contratar el servicio.</td>
  <td>
    <strong>Escenario 1: Tarjetas del equipo visibles.</strong><br>
    Dado que el visitante accede a la sección "Equipo",<br>
    cuando la sección carga correctamente,<br>
    entonces se muestran las tarjetas con foto y nombre de cada uno de los cinco integrantes del equipo.<br><br>
    <strong>Escenario 2: Carga exitosa de imágenes de perfil.</strong><br>
    Dado que el visitante navega por la sección del equipo,<br>
    cuando las imágenes de perfil están disponibles en el servidor,<br>
    entonces cada tarjeta muestra la fotografía del integrante con su nombre completo visible debajo.<br><br>
    <strong>Escenario 3: Fallback por fallo en carga de imagen.</strong><br>
    Dado que una imagen de perfil no puede ser cargada por fallo del servidor,<br>
    cuando el navegador no puede renderizarla,<br>
    entonces el sistema muestra un avatar con las iniciales del integrante como imagen alternativa.
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US47</strong></td>
  <td>Acceder a la app web desde la Landing Page</td>
  <td>Como usuario registrado, quiero acceder a la aplicación web directamente desde la landing page para iniciar sesión sin pasos adicionales.</td>
  <td>
    <strong>Escenario 1: Redirección al login.</strong><br>
    Dado que el visitante hace clic en "Empieza gratis" desde el navbar,<br>
    cuando el sistema procesa la acción,<br>
    entonces es redirigido a la pantalla de registro o login de la aplicación web.<br><br>
    <strong>Escenario 2: Usuario con sesión activa.</strong><br>
    Dado que el usuario ya tiene una sesión activa en la plataforma,<br>
    cuando accede a la landing y hace clic en "Empieza gratis",<br>
    entonces es redirigido directamente a su dashboard sin pasar por el formulario de login.<br><br>
    <strong>Escenario 3: Acceso desde dispositivo móvil.</strong><br>
    Dado que el visitante accede desde un smartphone,<br>
    cuando hace clic en el CTA principal,<br>
    entonces el sistema lo redirige a la tienda de aplicaciones correspondiente (App Store o Google Play) según su sistema operativo.
	
  </td>
  <td>EP06</td>
</tr>

<tr>
  <td><strong>US48</strong></td>
  <td>Registrar tarjeta de acceso a áreas comunes</td>
  <td>Como administrador, quiero asignar una tarjeta de acceso a cada residente para controlar el ingreso a las áreas comunes del edificio.</td>
  <td>
    <strong>Escenario 1: Asignación exitosa.</strong><br>
    Dado que el admin selecciona a un residente y vincula el número de serie de una tarjeta física,<br>
    cuando confirma la asignación,<br>
    entonces el sistema activa la tarjeta y la habilita en los lectores de las áreas comunes correspondientes.<br><br>
    <strong>Escenario 2: Tarjeta ya asignada.</strong><br>
    Dado que el admin intenta vincular una tarjeta,<br>
    cuando el número de serie ya está asignado a otro residente,<br>
    entonces el sistema muestra "Esta tarjeta ya se encuentra en uso" y bloquea la acción.<br><br>
    <strong>Escenario 3: Reporte de tarjeta perdida.</strong><br>
    Dado que un residente reporta la pérdida de su tarjeta,<br>
    cuando el admin la marca como "Extraviada",<br>
    entonces el sistema la desactiva de inmediato en todos los lectores de las áreas comunes.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US49</strong></td>
  <td>Desactivar acceso a áreas comunes por morosidad</td>
  <td>Como sistema, quiero desactivar automáticamente el acceso de un residente moroso a las áreas comunes para asegurar el cumplimiento de pagos, permitiendo que el administrador pueda revertirlo en casos de emergencia.</td>
  <td>
    <strong>Escenario 1: Desactivación automática.</strong><br>
    Dado que un residente supera el límite de días de mora configurado,<br>
    cuando el sistema ejecuta la validación diaria de deudas,<br>
    entonces desactiva automáticamente su tarjeta de acceso a las áreas comunes y le notifica el motivo.<br><br>
    <strong>Escenario 2: Reactivación manual por emergencia.</strong><br>
    Dado que un residente con acceso desactivado por mora presenta una emergencia,<br>
    cuando el admin reactiva manualmente su tarjeta,<br>
    entonces el sistema restablece el acceso a las áreas comunes y registra en el log el motivo de la excepción.<br><br>
    <strong>Escenario 3: Reactivación automática al pagar.</strong><br>
    Dado que un residente con acceso desactivado regulariza su deuda,<br>
    cuando el pago es validado,<br>
    entonces el sistema reactiva automáticamente su tarjeta de acceso sin intervención del administrador.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US50</strong></td>
  <td>Configurar horarios de riego automático</td>
  <td>Como administrador, quiero configurar los horarios y la duración del riego automático de las áreas verdes para optimizar el mantenimiento del edificio.</td>
  <td>
    <strong>Escenario 1: Configuración exitosa.</strong><br>
    Dado que el admin define un horario de riego de 6:00 a.m. por 15 minutos,<br>
    cuando guarda la configuración,<br>
    entonces el sistema programa la activación automática de las regaderas en ese horario.<br><br>
    <strong>Escenario 2: Horario en conflicto.</strong><br>
    Dado que el admin intenta programar un riego,<br>
    cuando el horario se superpone con otro ya configurado para la misma zona,<br>
    entonces el sistema muestra "Ya existe un riego programado en este horario para esta zona".<br><br>
    <strong>Escenario 3: Dispositivo no disponible.</strong><br>
    Dado que llega la hora programada de riego,<br>
    cuando el dispositivo de riego está desconectado o sin respuesta,<br>
    entonces el sistema registra el fallo y notifica al administrador que el riego no se ejecutó.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US51</strong></td>
  <td>Riego automático según humedad del suelo</td>
  <td>Como sistema, quiero activar el riego automáticamente según el nivel de humedad del suelo para evitar el desperdicio de agua en las áreas verdes.</td>
  <td>
    <strong>Escenario 1: Activación por baja humedad.</strong><br>
    Dado que el sensor de humedad detecta un nivel por debajo del umbral configurado,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces activa automáticamente el riego hasta alcanzar el nivel óptimo.<br><br>
    <strong>Escenario 2: Suelo con humedad suficiente.</strong><br>
    Dado que llega el horario de riego programado,<br>
    cuando el sensor detecta que la humedad ya está en el nivel adecuado,<br>
    entonces el sistema omite el riego y registra el evento como "Riego innecesario evitado".<br><br>
    <strong>Escenario 3: Sensor con lectura fuera de rango.</strong><br>
    Dado que el sensor de humedad envía una lectura inválida o fuera de rango,<br>
    cuando el sistema la recibe,<br>
    entonces descarta la lectura, notifica al administrador de una posible falla del sensor y usa el horario programado por defecto.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US52</strong></td>
  <td>Detección de fugas en tanque de agua</td>
  <td>Como administrador, quiero monitorear el nivel del tanque de agua para detectar posibles fugas y actuar antes de que generen pérdidas mayores.</td>
  <td>
    <strong>Escenario 1: Detección de fuga.</strong><br>
    Dado que el medidor del tanque registra una caída de nivel anormal sin consumo asociado,<br>
    cuando el sistema analiza el patrón de consumo,<br>
    entonces genera una alerta de "Posible fuga detectada" y notifica al administrador con la hora estimada del evento.<br><br>
    <strong>Escenario 2: Consumo normal.</strong><br>
    Dado que el medidor registra una disminución de nivel dentro del rango esperado,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces no genera ninguna alerta y almacena el dato en el historial de consumo.<br><br>
    <strong>Escenario 3: Sensor desconectado.</strong><br>
    Dado que el medidor del tanque deja de enviar lecturas,<br>
    cuando transcurre el tiempo límite sin recibir datos,<br>
    entonces el sistema notifica al administrador "Sensor de tanque sin comunicación".
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US53</strong></td>
  <td>Encendido automático de luces por movimiento</td>
  <td>Como sistema, quiero encender automáticamente las luces de áreas comunes al detectar movimiento para mejorar la seguridad y el ahorro energético del edificio.</td>
  <td>
    <strong>Escenario 1: Encendido por movimiento.</strong><br>
    Dado que el sensor detecta movimiento en un pasillo o área común,<br>
    cuando se activa la señal,<br>
    entonces el sistema enciende automáticamente las luces de esa zona.<br><br>
    <strong>Escenario 2: Apagado por inactividad.</strong><br>
    Dado que las luces de una zona se encendieron por detección de movimiento,<br>
    cuando no se detecta movimiento adicional durante el tiempo configurado,<br>
    entonces el sistema apaga automáticamente las luces de esa zona.<br><br>
    <strong>Escenario 3: Falla del sensor de movimiento.</strong><br>
    Dado que un sensor de movimiento deja de responder,<br>
    cuando el sistema intenta comunicarse con el dispositivo sin éxito,<br>
    entonces notifica al administrador "Sensor de movimiento sin respuesta" e indica la ubicación exacta.
  </td>
  <td>EP07</td>
</tr>
  </tbody>
</table>


**Technical Stories**

<table>
  <thead>
    <tr>
      <th>Epic / User Story ID</th>
      <th>Título</th>
      <th>Descripción</th>
      <th>Criterios de Aceptación</th>
      <th>Relacionado con (Epic ID)</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>TS01</td>
      <td>Configuración de autenticación y autorización con JWT</td>
      <td>Como desarrollador, quiero implementar autenticación y autorización basada en JWT en el microservicio IAM, para que solo los administradores autorizados puedan acceder a los endpoints protegidos del sistema.</td>
      <td>
        <strong>Escenario 1: Generación de token JWT exitosa</strong><br>
        Dado que un administrador envía credenciales válidas al endpoint de sign-in<br>
        Cuando el sistema valida el email y contraseña correctamente<br>
        Entonces genera un token JWT firmado con HMAC-SHA256 que incluye email, userId y rol, con expiración de 7 días y tiempo de respuesta menor a 300ms.<br><br>
        <strong>Escenario 2: Acceso con token inválido o expirado</strong><br>
        Dado que un cliente intenta acceder a un endpoint protegido con un token inválido o expirado<br>
        Cuando el filtro BearerAuthorizationRequestFilter evalúa la solicitud<br>
        Entonces el sistema retorna un error 401 en menos de 100ms con el mensaje correspondiente al tipo de fallo.<br><br>
        <strong>Escenario 3: Acceso sin token a endpoint protegido</strong><br>
        Dado que un cliente intenta acceder a un endpoint protegido sin enviar token en el header Authorization<br>
        Cuando el filtro de seguridad procesa la solicitud<br>
        Entonces el sistema retorna un error 401 con el mensaje "Token Bearer requerido" sin llegar al microservicio destino.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS02</td>
      <td>Implementación de endpoints de registro e inicio de sesión con validaciones</td>
      <td>Como desarrollador, quiero implementar los endpoints de registro e inicio de sesión del microservicio IAM con validaciones estrictas de datos, para garantizar que solo administradores con información válida puedan crear cuentas en el sistema.</td>
      <td>
        <strong>Escenario 1: Registro exitoso de administrador</strong><br>
        Dado que se envía un POST a /api/v1/authentication/sign-up con datos válidos incluyendo rol ADMIN, email con formato correcto, contraseña con mayúscula y símbolo, DNI de 8 dígitos y teléfono de 9 dígitos comenzando con 9<br>
        Cuando el sistema procesa el SignUpCommand<br>
        Entonces crea el usuario en PostgreSQL con la contraseña encriptada en BCrypt y retorna 201 con los datos del usuario en menos de 500ms.<br><br>
        <strong>Escenario 2: Registro rechazado por email duplicado</strong><br>
        Dado que ya existe un usuario registrado con el mismo email en la base de datos<br>
        Cuando se intenta registrar otro usuario con ese email<br>
        Entonces el sistema retorna 400 con el mensaje "El email ya está registrado" sin crear ningún registro.<br><br>
        <strong>Escenario 3: Registro rechazado por rol no permitido</strong><br>
        Dado que se intenta registrar un usuario con rol OWNER o TENANT en el microservicio IAM<br>
        Cuando el sistema valida el rol en el SignUpCommand<br>
        Entonces retorna 400 con el mensaje "En este sistema solo se pueden registrar administradores".<br><br>
        <strong>Escenario 4: Inicio de sesión exitoso con retorno de token</strong><br>
        Dado que un administrador registrado envía sus credenciales correctas al endpoint de sign-in<br>
        Cuando el sistema valida el email y contraseña con BCrypt<br>
        Entonces retorna 200 con el token JWT, el id y el email del usuario autenticado.
      </td>
      <td>EP05</td>
    </tr>
	  <tr>
	  <td>TS03</td>
	  <td>Implementación de endpoints de gestión de usuarios</td>
	  <td>Como desarrollador, quiero implementar los endpoints CRUD de gestión de usuarios y consulta de roles en el microservicio IAM, para que los administradores puedan consultar, actualizar y eliminar usuarios del 				sistema.</td>
	  <td>
	    <strong>Escenario 1: Consulta exitosa de usuario por id</strong><br>
	    Dado que se envía un GET a /api/v1/users/{id} con token válido<br>
	    Cuando el sistema encuentra al usuario<br>
	    Entonces retorna 200 con los datos completos del usuario incluyendo fullName, email, phone, status, documentType, documentNumber y roles asignados en menos de 300ms.<br><br>
	    <strong>Escenario 2: Actualización exitosa de datos de usuario</strong><br>
	    Dado que se envía un PUT a /api/v1/users/{id} con datos válidos y token válido<br>
	    Cuando el sistema procesa la solicitud<br>
	    Entonces actualiza los datos del usuario en PostgreSQL y retorna 200 con la información actualizada.<br><br>
	    <strong>Escenario 3: Eliminación exitosa de usuario</strong><br>
	    Dado que se envía un DELETE a /api/v1/users/{id} con token válido<br>
	    Cuando el sistema procesa la solicitud<br>
	    Entonces elimina al usuario de la base de datos y retorna 200 confirmando la operación.<br><br>
	    <strong>Escenario 4: Listado completo de usuarios registrados</strong><br>
	    Dado que se envía un GET a /api/v1/users con token válido<br>
	    Cuando el sistema procesa la solicitud<br>
	    Entonces retorna 200 con la lista de todos los usuarios incluyendo sus roles asignados.<br><br>
	    <strong>Escenario 5: Consulta de roles disponibles del sistema</strong><br>
	    Dado que se envía un GET a /api/v1/roles con token válido<br>
	    Cuando el sistema procesa la solicitud<br>
	    Entonces retorna 200 con la lista de roles configurados en el sistema.
	  </td>
	  <td>EP05</td>
	</tr>
    <tr>
      <td>TS04</td>
      <td>Configuración del API Gateway como punto de entrada centralizado</td>
      <td>Como desarrollador, quiero configurar un API Gateway que centralice todas las solicitudes de la aplicación móvil hacia los microservicios de Edifika, para gestionar el enrutamiento, validación de tokens JWT y políticas de seguridad en un único punto de acceso.</td>
      <td>
        <strong>Escenario 1: Enrutamiento exitoso con token válido</strong><br>
        Dado que la aplicación móvil envía una solicitud al API Gateway con un token JWT válido en el header Authorization<br>
        Cuando el gateway valida el token y determina el microservicio destino según la ruta<br>
        Entonces redirige la solicitud correctamente y el microservicio responde en menos de 200ms adicionales al tiempo de procesamiento propio.<br><br>
        <strong>Escenario 2: Bloqueo de solicitud sin token antes de llegar al microservicio</strong><br>
        Dado que la aplicación móvil envía una solicitud a cualquier endpoint protegido sin token<br>
        Cuando el API Gateway intercepta la solicitud<br>
        Entonces retorna 401 en menos de 100ms sin reenviar la solicitud a ningún microservicio.<br><br>
        <strong>Escenario 3: Respuesta controlada ante microservicio no disponible</strong><br>
        Dado que el API Gateway recibe una solicitud válida hacia un microservicio que no está disponible<br>
        Cuando intenta redirigir la solicitud<br>
        Entonces retorna un error 503 con un mensaje claro sin afectar el funcionamiento de los demás microservicios.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS05</td>
      <td>Configuración de base de datos PostgreSQL independiente por microservicio</td>
      <td>Como desarrollador, quiero configurar una base de datos PostgreSQL independiente para cada microservicio de Edifika, para garantizar el aislamiento de datos, la autonomía operativa y la consistencia referencial dentro de cada dominio.</td>
      <td>
        <strong>Escenario 1: Creación automática de esquema de tablas al iniciar</strong><br>
        Dado que un microservicio arranca por primera vez con la configuración de PostgreSQL correcta<br>
        Cuando Hibernate inicializa el contexto de persistencia con ddl-auto en update<br>
        Entonces crea automáticamente las tablas del dominio correspondiente en su propia base de datos en menos de 5 segundos.<br><br>
        <strong>Escenario 2: Aislamiento de fallos entre microservicios</strong><br>
        Dado que la base de datos de un microservicio específico falla o se desconecta<br>
        Cuando ocurre el error de conexión<br>
        Entonces únicamente ese microservicio retorna errores 500 mientras los demás continúan respondiendo con normalidad.<br><br>
        <strong>Escenario 3: Persistencia correcta de datos del microservicio IAM</strong><br>
        Dado que se registra un nuevo administrador en el microservicio IAM<br>
        Cuando el sistema guarda el usuario en PostgreSQL<br>
        Entonces las tablas users, roles y user_roles reflejan los datos correctos con sus relaciones y constraints en menos de 300ms.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS06</td>
      <td>Configuración base del microservicio Residential Management</td>
      <td>Como desarrollador, quiero crear el microservicio de gestión residencial para administrar edificios, unidades y la vinculación de residentes con sus unidades, de forma independiente y desacoplada del microservicio IAM.</td>
      <td>
        <strong>Escenario 1: Registro exitoso de edificio con unidades</strong><br>
        Dado que el administrador envía un POST con los datos del edificio y sus unidades al microservicio Residential Management con token válido<br>
        Cuando el microservicio procesa la solicitud<br>
        Entonces guarda el edificio y sus unidades en su base de datos PostgreSQL y retorna 201 con los datos registrados.<br><br>
        <strong>Escenario 2: Vinculación de residente a unidad mediante userId del IAM</strong><br>
        Dado que el administrador vincula un residente a una unidad enviando el userId generado por el microservicio IAM<br>
        Cuando el Residential Management procesa la solicitud<br>
        Entonces registra la relación usuario-unidad en su base de datos y retorna 201 sin duplicar la vinculación.<br><br>
        <strong>Escenario 3: Consulta de residentes por edificio con datos completos</strong><br>
        Dado que el administrador consulta los residentes de un edificio específico con token válido<br>
        Cuando el microservicio procesa la solicitud<br>
        Entonces retorna 200 con la lista de residentes vinculados incluyendo userId, número de unidad y fecha de vinculación en menos de 400ms.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS07</td>
      <td>Configuración base del microservicio Payment Service con integración Culqi</td>
      <td>Como desarrollador, quiero crear el microservicio de pagos para gestionar deudas, cuotas y transacciones del condominio integrándose con Culqi, garantizando consistencia en el estado de cada pago ante cualquier escenario de fallo.</td>
      <td>
        <strong>Escenario 1: Registro de deuda para una unidad residencial</strong><br>
        Dado que el administrador registra una deuda para una unidad con monto, descripción y fecha de vencimiento<br>
        Cuando el Payment Service procesa la solicitud con token válido<br>
        Entonces crea el registro de deuda vinculado a la unidad con estado PENDIENTE y retorna 201 en menos de 300ms.<br><br>
        <strong>Escenario 2: Actualización de estado tras confirmación de Culqi</strong><br>
        Dado que un residente completa un pago en línea y Culqi envía la confirmación de transacción aprobada<br>
        Cuando el Payment Service recibe el webhook de confirmación<br>
        Entonces actualiza el estado de la deuda a PAGADO, registra el comprobante y retorna 200 garantizando consistencia entre Culqi y la base de datos interna.<br><br>
        <strong>Escenario 3: Manejo controlado de fallo en Culqi sin afectar la deuda</strong><br>
        Dado que Culqi no responde durante un intento de pago<br>
        Cuando el microservicio detecta el timeout o error de conexión<br>
        Entonces mantiene el estado de la deuda como PENDIENTE, registra el intento fallido y retorna un error 502 sin modificar ningún dato financiero.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS08</td>
      <td>Configuración base del microservicio Reservation Service</td>
      <td>Como desarrollador, quiero crear el microservicio de reservas para gestionar la disponibilidad y uso de áreas comunes del condominio, garantizando que no existan conflictos ni reservas duplicadas en el sistema.</td>
      <td>
        <strong>Escenario 1: Consulta de disponibilidad de área común con calendario</strong><br>
        Dado que un residente consulta la disponibilidad de un área común con fecha y horario<br>
        Cuando el Reservation Service procesa la solicitud<br>
        Entonces retorna 200 con los horarios disponibles del área seleccionada en menos de 300ms.<br><br>
        <strong>Escenario 2: Bloqueo de reserva duplicada en el mismo horario</strong><br>
        Dado que ya existe una reserva aprobada para un área común en un horario específico<br>
        Cuando otro residente intenta reservar el mismo espacio en el mismo horario<br>
        Entonces el sistema retorna 409 con el mensaje "El horario seleccionado ya está reservado" sin crear el registro.<br><br>
        <strong>Escenario 3: Notificación automática al aprobar reserva</strong><br>
        Dado que el administrador aprueba una reserva pendiente<br>
        Cuando el microservicio actualiza el estado a APROBADO<br>
        Entonces notifica al Notification Service con el userId y datos de la reserva para que envíe la alerta push al residente en menos de 500ms.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS09</td>
      <td>Configuración base del microservicio Communication Service</td>
      <td>Como desarrollador, quiero crear el microservicio de comunicados para que los administradores puedan publicar avisos oficiales y tener trazabilidad de quiénes los han leído dentro del condominio.</td>
      <td>
        <strong>Escenario 1: Publicación de comunicado con notificación a residentes</strong><br>
        Dado que el administrador publica un comunicado oficial con título, descripción y prioridad<br>
        Cuando el Communication Service procesa la solicitud<br>
        Entonces guarda el comunicado en la base de datos, notifica al Notification Service y retorna 201 en menos de 400ms.<br><br>
        <strong>Escenario 2: Registro trazable de lectura por residente</strong><br>
        Dado que un residente abre un comunicado en la aplicación<br>
        Cuando el microservicio registra la acción<br>
        Entonces guarda el userId, el id del comunicado y la fecha exacta de visualización en la tabla announcement_read.<br><br>
        <strong>Escenario 3: Consulta de métricas de lectura con porcentaje de alcance</strong><br>
        Dado que el administrador consulta las métricas de un comunicado específico<br>
        Cuando el microservicio procesa la solicitud<br>
        Entonces retorna 200 con la cantidad total de residentes, cuántos lo leyeron y el porcentaje de alcance del comunicado.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS10</td>
      <td>Configuración base del microservicio Notification Service con Firebase</td>
      <td>Como desarrollador, quiero crear el microservicio de notificaciones integrado con Firebase Cloud Messaging para enviar alertas push a los dispositivos móviles de los usuarios ante eventos relevantes del sistema.</td>
      <td>
        <strong>Escenario 1: Envío exitoso de notificación push por evento del sistema</strong><br>
        Dado que otro microservicio notifica al Notification Service un evento relevante como pago aprobado o reserva confirmada<br>
        Cuando el Notification Service procesa el evento y lo envía a Firebase<br>
        Entonces Firebase entrega la notificación push al dispositivo del usuario en menos de 2 segundos.<br><br>
        <strong>Escenario 2: Registro de fallo ante indisponibilidad de Firebase</strong><br>
        Dado que el Notification Service intenta enviar una notificación y Firebase no responde<br>
        Cuando se detecta el timeout o error de conexión<br>
        Entonces el microservicio registra el evento fallido en la base de datos con estado FALLIDO sin afectar el flujo principal del sistema que originó la notificación.<br><br>
        <strong>Escenario 3: Manejo de token de dispositivo inválido o expirado</strong><br>
        Dado que Firebase retorna un error indicando que el token del dispositivo de un residente es inválido o expirado<br>
        Cuando el Notification Service recibe la respuesta de error<br>
        Entonces elimina o actualiza el token inválido en la base de datos sin reintentar el envío y registra el incidente.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS11</td>
      <td>Configuración base del microservicio Report Service</td>
      <td>Como desarrollador, quiero crear el microservicio de reportes para que los administradores puedan generar y exportar reportes financieros y de actividad del condominio consultando datos de otros microservicios.</td>
      <td>
        <strong>Escenario 1: Generación de reporte financiero por período con datos consolidados</strong><br>
        Dado que el administrador solicita un reporte financiero indicando fecha de inicio y fin<br>
        Cuando el Report Service consulta los datos al Payment Service mediante REST<br>
        Entonces genera el resumen con total de ingresos, egresos, deudas pendientes y lista de morosos, retornando 200 en menos de 1 segundo.<br><br>
        <strong>Escenario 2: Exportación de reporte financiero en formato PDF</strong><br>
        Dado que el administrador solicita exportar un reporte generado<br>
        Cuando el microservicio procesa la solicitud de exportación<br>
        Entonces genera el archivo PDF con los datos del reporte y lo retorna para descarga con el header Content-Type application/pdf.<br><br>
        <strong>Escenario 3: Rechazo de solicitud con rango de fechas inválido</strong><br>
        Dado que el administrador envía una fecha de inicio posterior a la fecha de fin en la solicitud<br>
        Cuando el microservicio valida los parámetros<br>
        Entonces retorna 400 con el mensaje "El rango de fechas no es válido" sin realizar ninguna consulta a otros microservicios.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS12</td>
      <td>Configuración base del microservicio Messaging Forum Service</td>
      <td>Como desarrollador, quiero crear el microservicio de foro comunitario para que los residentes puedan publicar mensajes en el canal de su edificio con un límite de una publicación diaria por usuario.</td>
      <td>
        <strong>Escenario 1: Publicación exitosa de mensaje en el foro del edificio</strong><br>
        Dado que un residente que no ha publicado mensajes en el día envía un POST con su mensaje al foro de su edificio<br>
        Cuando el Messaging Forum Service valida el límite diario y procesa la solicitud<br>
        Entonces guarda la publicación vinculada al edificio y al userId, notifica al Notification Service y retorna 201.<br><br>
        <strong>Escenario 2: Bloqueo de publicación por límite diario alcanzado</strong><br>
        Dado que un residente ya realizó una publicación en el foro durante el día en curso<br>
        Cuando intenta publicar otro mensaje en el mismo día<br>
        Entonces el microservicio retorna 429 con el mensaje "Has alcanzado el límite de una publicación diaria" sin crear ningún registro.<br><br>
        <strong>Escenario 3: Consulta de publicaciones del foro por edificio</strong><br>
        Dado que un residente o administrador consulta las publicaciones del foro de un edificio<br>
        Cuando el microservicio procesa la solicitud con token válido<br>
        Entonces retorna 200 con la lista de publicaciones ordenadas por fecha descendente incluyendo autor, contenido e imagen si aplica.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS13</td>
      <td>Implementación de comunicación entre microservicios mediante REST con manejo de fallos</td>
      <td>Como desarrollador, quiero implementar la comunicación entre microservicios de Edifika mediante llamadas REST con manejo controlado de errores, para que los servicios intercambien información de forma desacoplada sin generar fallos en cascada.</td>
      <td>
        <strong>Escenario 1: Consulta exitosa entre microservicios con token válido</strong><br>
        Dado que el Report Service necesita datos del Payment Service para generar un reporte<br>
        Cuando realiza la llamada REST con el token JWT en el header Authorization<br>
        Entonces obtiene la respuesta con los datos financieros en menos de 500ms y continúa el procesamiento.<br><br>
        <strong>Escenario 2: Respuesta controlada ante microservicio destino no disponible</strong><br>
        Dado que un microservicio intenta comunicarse con otro que no está disponible<br>
        Cuando se produce un timeout o error de conexión en la llamada REST<br>
        Entonces el microservicio solicitante retorna un error descriptivo al cliente sin colapsar su propio servicio y registra el fallo en sus logs.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS14</td>
      <td>Documentación de API con Swagger y autenticación JWT en cada microservicio</td>
      <td>Como desarrollador, quiero integrar Swagger con soporte de autenticación JWT en cada microservicio de Edifika, para que los endpoints estén documentados con sus esquemas de request y response y puedan ser probados desde una interfaz gráfica.</td>
      <td>
        <strong>Escenario 1: Visualización completa de endpoints en Swagger</strong><br>
        Dado que un desarrollador accede a la URL de Swagger de cualquier microservicio<br>
        Cuando la interfaz carga correctamente<br>
        Entonces muestra todos los endpoints disponibles agrupados por controlador con sus métodos HTTP, parámetros y esquemas de request y response.<br><br>
        <strong>Escenario 2: Prueba exitosa de endpoint protegido con token JWT desde Swagger</strong><br>
        Dado que un desarrollador ingresa un token JWT válido en el campo Authorize de Swagger<br>
        Cuando ejecuta una petición a un endpoint protegido usando el botón Try it out<br>
        Entonces el sistema procesa la solicitud correctamente y muestra la respuesta con el código HTTP correspondiente en pantalla.
      </td>
      <td>EP05</td>
    </tr>
    <tr>
      <td>TS15</td>
      <td>Configuración de CORS en el API Gateway para comunicación con clientes</td>
      <td>Como desarrollador, quiero configurar las políticas de CORS en el API Gateway para permitir que la aplicación móvil y el frontend de Edifika se comuniquen correctamente con el backend en entornos de desarrollo y producción.</td>
      <td>
        <strong>Escenario 1: Comunicación permitida desde origen autorizado</strong><br>
        Dado que la aplicación móvil o el frontend realiza una solicitud desde un dominio registrado en la lista de orígenes permitidos del API Gateway<br>
        Cuando el gateway procesa la solicitud<br>
        Entonces responde con los headers Access-Control-Allow-Origin y Access-Control-Allow-Methods correctos permitiendo la comunicación.<br><br>
        <strong>Escenario 2: Bloqueo de solicitud desde origen no autorizado</strong><br>
        Dado que una aplicación externa intenta consumir un endpoint del sistema desde un dominio no registrado en la configuración de CORS<br>
        Cuando realiza la petición al API Gateway<br>
        Entonces el gateway retorna un error de política CORS sin procesar la solicitud ni reenviarla a ningún microservicio.
      </td>
      <td>EP05</td>
    </tr>

	  <tr>
  <td>TS16</td>
  <td>Configuración base del microservicio IoT Access Management</td>
  <td>Como desarrollador, quiero crear el microservicio de IoT Access Management para gestionar el registro, estado y eventos de los dispositivos inteligentes (control de acceso a áreas comunes, riego, sensor de tanque y luces) de forma independiente y desacoplada de los demás microservicios de Edifika.</td>
  <td>
    <strong>Escenario 1: Registro exitoso de dispositivo IoT</strong><br>
    Dado que el administrador registra un nuevo dispositivo indicando tipo (lector de acceso, riego, sensor de tanque o sensor de movimiento), ubicación y edificio<br>
    Cuando el microservicio procesa la solicitud con token válido<br>
    Entonces guarda el dispositivo en su base de datos PostgreSQL con estado INACTIVO hasta su primera conexión y retorna 201 en menos de 300ms.<br><br>
    <strong>Escenario 2: Actualización de estado por heartbeat del dispositivo</strong><br>
    Dado que un dispositivo ESP32 envía una señal periódica de heartbeat al microservicio<br>
    Cuando el sistema recibe la señal dentro del intervalo esperado<br>
    Entonces actualiza el estado del dispositivo a ACTIVO y su timestamp de última conexión.<br><br>
    <strong>Escenario 3: Detección de dispositivo desconectado</strong><br>
    Dado que un dispositivo registrado deja de enviar heartbeat durante el tiempo límite configurado<br>
    Cuando el sistema ejecuta la validación periódica de dispositivos<br>
    Entonces marca el dispositivo como OFFLINE y notifica al administrador mediante el Notification Service.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS17</td>
  <td>Comunicación con dispositivos ESP32 mediante protocolo MQTT</td>
  <td>Como desarrollador, quiero implementar la comunicación entre el microservicio IoT Access Management y las placas ESP32 mediante el protocolo MQTT, para recibir lecturas de sensores en tiempo real y enviar comandos de actuación (abrir acceso, activar riego, encender luces) de forma confiable.</td>
  <td>
    <strong>Escenario 1: Recepción exitosa de lectura de sensor</strong><br>
    Dado que un ESP32 con sensor de humedad publica una lectura en el tópico MQTT correspondiente a su dispositivo<br>
    Cuando el broker MQTT entrega el mensaje al microservicio suscrito<br>
    Entonces el sistema almacena la lectura, evalúa el umbral configurado y responde en menos de 500ms si corresponde activar el riego.<br><br>
    <strong>Escenario 2: Envío de comando de actuación al dispositivo</strong><br>
    Dado que el sistema determina que debe activarse el riego, encenderse una luz o habilitarse el acceso mediante tarjeta<br>
    Cuando publica el comando en el tópico MQTT del dispositivo destino<br>
    Entonces el ESP32 recibe el comando y ejecuta la acción física correspondiente, confirmando el resultado mediante un mensaje de ACK.<br><br>
    <strong>Escenario 3: Pérdida de conexión con el broker MQTT</strong><br>
    Dado que el broker MQTT o la conexión de red del ESP32 se interrumpe<br>
    Cuando el microservicio detecta la ausencia de mensajes del dispositivo durante el tiempo límite<br>
    Entonces marca el dispositivo como OFFLINE, descarta comandos pendientes hacia él y notifica al administrador sin afectar la comunicación con los demás dispositivos.
  </td>
  <td>EP05</td>
</tr>
  </tbody>
</table>


## Justificación y Trazabilidad de las Historias de Usuario

| **Historias de Usuario**                                   | **User Persona**          | **Necesidad / Pain Identificado**                                            | **Justificación**                                                                                                                                                                                                           |
| ---------------------------------------------------------- | ------------------------- | ---------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| **US04 – Verificar información de usuarios**               | Administrador             | Información de residentes gestionada mediante procesos manuales.             | Se justifica por la necesidad del administrador de mantener información organizada y actualizada en un sistema centralizado, reduciendo la dependencia de registros manuales.                                               |
| **US05 – Actualizar información de usuarios**              | Administrador             | Dificultad para mantener actualizados los datos de residentes.               | Los administradores actualmente utilizan Excel y registros manuales, por lo que disponer de información actualizable desde la plataforma permite mantener los datos centralizados.                                          |
| **US07 – Registrar edificio y unidades**                   | Administrador             | Gestión de múltiples edificios y unidades mediante herramientas separadas.   | César administra 15 edificios y actualmente utiliza Excel como herramienta principal, evidenciando la necesidad de centralizar la información de los edificios y sus unidades.                                              |
| **US13 – Publicar comunicados oficiales**                  | Administrador             | Información dispersa entre WhatsApp, correos y otros medios.                 | Los administradores identificaron dificultades para comunicar información de manera organizada. Una plataforma permitiría centralizar los comunicados oficiales y reducir la dependencia de canales dispersos.              |
| **US15 – Seguimiento de visualización**                    | Administrador             | Falta de confirmación sobre si los comunicados fueron recibidos.             | Alejandro señaló específicamente la falta de confirmación sobre la recepción de comunicados, por lo que conocer quién los visualizó responde directamente a esta necesidad.                                                 |
| **US18 – Aprobar o rechazar reservas**                     | Administrador             | Desorganización en la gestión de reservas de áreas comunes.                  | Las entrevistas evidencian que las reservas se realizan mediante procesos manuales y pueden generar conflictos. Contar con aprobación administrativa permite controlar las solicitudes.                                     |
| **US19 – Evitar reservas duplicadas**                      | Administrador             | Cruces de horarios y conflictos al reservar áreas comunes.                   | Marcelo menciona problemas recurrentes por cruces de horarios en las reservas, por lo que evitar reservas duplicadas responde directamente a este problema.                                                                 |
| **US23 – Registrar pagos en el sistema**                   | Administrador             | Seguimiento de pagos mediante comprobantes enviados manualmente.             | Alejandro identifica el seguimiento de pagos como uno de sus principales problemas. Además, los propietarios actualmente envían comprobantes por WhatsApp o correo, justificando la centralización del registro de pagos.   |
| **US24 – Visualizar residentes morosos**                   | Administrador             | Dificultad para controlar y hacer seguimiento de pagos pendientes.           | La falta de un seguimiento eficiente de pagos identificada por los administradores justifica disponer de una vista que permita identificar los pagos pendientes y a los residentes morosos.                                 |
| **US25 – Generar reportes financieros**                    | Administrador             | Falta de transparencia y dificultad para revisar los gastos administrativos. | Jarol y Marcelo señalan problemas relacionados con la transparencia de los gastos. Los reportes financieros permitirían organizar esta información y facilitar su revisión.                                                 |
| **US26 – Exportar reportes financieros**                   | Administrador             | Necesidad de compartir información financiera de manera organizada.          | La preocupación de los residentes por la transparencia de los gastos justifica contar con reportes que puedan ser compartidos con la comunidad.                                                                             |
| **US31 – Notificación por reserva (Admin)**                | Administrador             | Necesidad de conocer oportunamente las solicitudes de reserva.               | La gestión de reservas constituye uno de los procesos problemáticos identificados en las entrevistas. Las notificaciones permitirían al administrador conocer nuevas solicitudes sin depender de mensajes informales.       |
| **US32 – Consultar Leyes y Manuales**                      | Administrador / Residente | Información del edificio dispersa y necesidad de acceso organizado.          | Se relaciona con la necesidad general identificada de centralizar la información del condominio en una única plataforma, aunque las entrevistas no mencionan específicamente leyes o manuales.                              |
| **US33 – Ver disponibilidad global (Admin)**               | Administrador             | Desorganización y cruces de horarios en áreas comunes.                       | La falta de organización en las reservas y los conflictos por horarios justifican disponer de una vista global de disponibilidad.                                                                                           |
| **US34 – Activar/Desactivar cuentas**                      | Administrador             | Necesidad de gestionar el acceso a la información de la comunidad.           | Se relaciona con la centralización de la gestión de residentes en una plataforma digital, aunque esta necesidad no fue mencionada explícitamente durante las entrevistas.                                                   |
| **US35 – Cancelar reserva (Admin)**                        | Administrador             | Problemas y conflictos derivados de la gestión manual de reservas.           | La posibilidad de cancelar reservas permite al administrador corregir situaciones derivadas de cambios, conflictos o restricciones en el uso de áreas comunes.                                                              |
| **US36 – Crear encuestas o votaciones**                    | Administrador             | Necesidad de mejorar la comunicación y participación de los residentes.      | Se relaciona con la centralización de la comunicación comunitaria, aunque las entrevistas no mencionan directamente la necesidad de realizar encuestas o votaciones.                                                        |
| **US37 – Moderar mensajes del muro comunitario**           | Administrador             | Saturación y desorganización de mensajes en canales como WhatsApp y correos. | Melina señala que la gran cantidad de mensajes en WhatsApp dificulta encontrar información relevante. Un espacio comunitario moderado permitiría organizar mejor la comunicación.                                           |
| **US38 – Habilitar o deshabilitar área común**             | Administrador             | Necesidad de controlar adecuadamente la disponibilidad de áreas comunes.     | Los problemas identificados en la gestión y reserva de espacios justifican que el administrador pueda actualizar su disponibilidad según las condiciones reales del edificio.                                               |
| **US39 – Configurar reglas de área común**                 | Administrador             | Procesos poco organizados para reservar y utilizar áreas comunes.            | Las entrevistas muestran problemas de organización en las reservas, por lo que establecer horarios y reglas permite regular el uso de los espacios.                                                                         |
| **US40 – Ver historial de uso de áreas comunes**           | Administrador             | Falta de control y trazabilidad en las reservas.                             | La gestión manual de reservas dificulta mantener un historial organizado. Esta historia permite centralizar el registro de utilización de los espacios.                                                                     |
| **US48 – Registrar tarjeta de acceso a áreas comunes**     | Administrador             | Necesidad de gestionar de forma centralizada el acceso a espacios.           | Se relaciona con la gestión de áreas comunes, aunque las entrevistas no identifican explícitamente el uso de tarjetas de acceso.                                                                                            |
| **US49 – Desactivar acceso a áreas comunes por morosidad** | Administrador / Sistema   | Relación entre pagos pendientes y control de acceso.                         | Puede relacionarse con el problema de seguimiento de morosidad, pero las entrevistas no establecen explícitamente que el acceso deba restringirse por falta de pago.                                                        |
| **US50 – Configurar horarios de riego automático**         | Administrador             | Optimización del mantenimiento de áreas verdes.                              | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance del sistema.                                                                   |
| **US51 – Riego automático según humedad del suelo**        | Sistema                   | Automatización del mantenimiento de áreas verdes.                            | **No existe evidencia directa en las entrevistas** que sustente esta necesidad.                                                                                                                                             |
| **US52 – Detección de fugas en tanque de agua**            | Administrador             | Prevención de pérdidas relacionadas con infraestructura.                     | **No existe evidencia directa en las entrevistas** que sustente esta necesidad.                                                                                                                                             |
| **US53 – Encendido automático de luces por movimiento**    | Sistema                   | Automatización y control de áreas comunes.                                   | **No existe evidencia directa en las entrevistas** que sustente esta necesidad.                                                                                                                                             |



## 3.2. Impact Mapping

El Impact Map muestra la relación entre el objetivo de negocio de Edifika y los cambios de comportamiento esperados en los usuarios clave: administradores y residentes. A partir de este análisis, se definen los impactos principales que la solución busca generar en cada tipo de usuario y los entregables necesarios para lograrlo, los cuales están directamente vinculados a las historias de usuario planteadas. Esto permite asegurar que cada funcionalidad desarrollada responda a necesidades reales y contribuya al cumplimiento del objetivo del sistema.

<img src="assets/img/impact/mapping.png" alt="logo" width="500"/>

## 3.3. Product Backlog

En esta sección, se presenta el Product Backlog como una recopilación organizada de historias de usuario priorizadas, la estimación de estas se realizó mediante story points basados en la escala Fibonacci, con el fin de tener una planificación más clara y una gestión eficiente para desarrollo de Edifika.

| Orden | User Story ID | Título | Descripción | Epic ID | Story Points | MoSCoW |
|-------|--------------|--------|-------------|---------|--------------|--------|
| 1 | US04 | Verificar información de usuarios | Como administrador, quiero verificar la información de los usuarios para asegurar que sea correcta. | EP01 | 3 | Must Have |
| 2 | US05 | Actualizar información de usuarios | Como administrador, quiero actualizar información de usuarios para mantener datos correctos. | EP01 | 2 | Must Have |
| 3 | US07 | Registrar edificio y unidades | Como administrador, quiero registrar el edificio con sus unidades residenciales para gestionar la comunidad. | EP01 | 8 | Must Have |
| 4 | US13 | Publicar comunicados oficiales | Como administrador, quiero publicar comunicados oficiales para informar a los residentes. | EP02 | 3 | Must Have |
| 5 | US15 | Seguimiento de visualización | Como administrador, quiero saber quién ha visto los comunicados para asegurar su alcance. | EP02 | 5 | Should Have |
| 6 | US18 | Aprobar o rechazar reservas | Como administrador, quiero aprobar o rechazar reservas para mantener el control. | EP03 | 3 | Should Have |
| 7 | US19 | Evitar reservas duplicadas | Como administrador, quiero evitar reservas duplicadas para prevenir conflictos. | EP03 | 5 | Must Have |
| 8 | US23 | Registrar pagos en el sistema | Como administrador, quiero registrar pagos para mantener actualizado el sistema. | EP04 | 3 | Must Have |
| 9 | US24 | Visualizar residentes morosos | Como administrador, quiero visualizar residentes morosos para tomar acciones. | EP04 | 5 | Must Have |
| 10 | US25 | Generar reportes financieros | Como administrador, quiero generar reportes financieros para evaluar el estado del condominio. | EP04 | 8 | Should Have |
| 11 | US26 | Exportar reportes financieros | Como administrador, quiero exportar reportes para compartirlos con la comunidad. | EP04 | 3 | Should Have |
| 12 | US31 | Notificación por reserva (Admin) | Como administrador, quiero saber cuándo alguien reserva un área común. | EP03 | 3 | Should Have |
| 13 | US32 | Consultar Leyes y Manuales | Como administrador, quiero ver la normativa legal y del edificio. | EP05 | 3 | Could Have |
| 14 | US33 | Ver disponibilidad global (Admin) | Como administrador, quiero ver el mapa de ocupación de todo el edificio. | EP03 | 5 | Should Have |
| 15 | US34 | Activar/Desactivar cuentas | Como administrador, quiero controlar quién tiene acceso a la app. | EP01 | 3 | Must Have |
| 16 | US35 | Cancelar reserva (Admin) | Como administrador, quiero anular una reserva de un residente. | EP03 | 3 | Should Have |
| 17 | US36 | Crear encuestas o votaciones para la comunidad | Como administrador, quiero crear encuestas o votaciones para conocer la opinión de los residentes sobre temas del condominio. | EP05 | 5 | Could Have |
| 18 | US37 | Moderar mensajes del muro comunitario | Como administrador, quiero revisar y eliminar mensajes inapropiados del muro para mantener un ambiente respetuoso. | EP05 | 3 | Could Have |
| 19 | US38 | Habilitar o deshabilitar área común | Como administrador, quiero activar o desactivar áreas comunes para reflejar su disponibilidad real según mantenimiento o restricciones. | EP03 | 3 | Must Have |
| 20 | US39 | Configurar reglas de área común | Como administrador, quiero definir las reglas, horarios y límites de cada área común para regular su uso correctamente. | EP03 | 5 | Should Have |
| 21 | US40 | Ver historial de uso de áreas comunes | Como administrador, quiero consultar el historial completo de uso de las áreas comunes con estadísticas para tomar mejores decisiones de gestión. | EP03 | 5 | Could Have |
| 22 | TS01 | Configuración de autenticación y autorización con JWT | Como desarrollador, quiero implementar autenticación y autorización basada en JWT en el microservicio IAM, para que solo los administradores autorizados puedan acceder a los endpoints protegidos del sistema. | EP-TS | 5 | Must Have |
| 23 | TS02 | Implementación de endpoints de registro e inicio de sesión con validaciones | Como desarrollador, quiero implementar los endpoints de registro e inicio de sesión del microservicio IAM con validaciones estrictas de datos. | EP-TS | 5 | Must Have |
| 24 | TS03 | Implementación de endpoints de gestión de usuarios | Como desarrollador, quiero implementar los endpoints CRUD de gestión de usuarios y consulta de roles en el microservicio IAM. | EP-TS | 8 | Must Have |
| 25 | TS04 | Configuración del API Gateway como punto de entrada centralizado | Como desarrollador, quiero configurar un API Gateway que centralice todas las solicitudes de la aplicación móvil hacia los microservicios de Edifika. | EP-TS | 5 | Must Have |
| 26 | TS05 | Configuración de base de datos PostgreSQL independiente por microservicio | Como desarrollador, quiero configurar una base de datos PostgreSQL independiente para cada microservicio de Edifika. | EP-TS | 8 | Must Have |
| 27 | TS06 | Configuración base del microservicio Residential Management | Como desarrollador, quiero crear el microservicio de gestión residencial para administrar edificios, unidades y la vinculación de residentes con sus unidades. | EP-TS | 5 | Must Have |
| 28 | TS07 | Configuración base del microservicio Payment Service con integración Culqi | Como desarrollador, quiero crear el microservicio de pagos para gestionar deudas, cuotas y transacciones del condominio integrándose con Culqi. | EP-TS | 5 | Must Have |
| 29 | TS08 | Configuración base del microservicio Reservation Service | Como desarrollador, quiero crear el microservicio de reservas para gestionar la disponibilidad y uso de áreas comunes del condominio. | EP-TS | 5 | Must Have |
| 30 | TS09 | Configuración base del microservicio Communication Service | Como desarrollador, quiero crear el microservicio de comunicados para que los administradores puedan publicar avisos oficiales. | EP-TS | 5 | Must Have |
| 31 | TS10 | Configuración base del microservicio Notification Service con Firebase | Como desarrollador, quiero crear el microservicio de notificaciones integrado con Firebase Cloud Messaging. | EP-TS | 5 | Must Have |
| 32 | TS11 | Configuración base del microservicio Report Service | Como desarrollador, quiero crear el microservicio de reportes para que los administradores puedan generar y exportar reportes financieros y de actividad del condominio. | EP-TS | 8 | Should Have |
| 33 | TS12 | Configuración base del microservicio Messaging Forum Service | Como desarrollador, quiero crear el microservicio de foro comunitario para que los residentes puedan publicar mensajes en el canal de su edificio. | EP-TS | 5 | Could Have |
| 34 | TS13 | Implementación de comunicación entre microservicios mediante REST | Como desarrollador, quiero implementar la comunicación entre microservicios de Edifika mediante llamadas REST con manejo controlado de errores. | EP-TS | 5 | Must Have |
| 35 | TS14 | Documentación de API con Swagger y autenticación JWT | Como desarrollador, quiero integrar Swagger con soporte de autenticación JWT en cada microservicio de Edifika. | EP-TS | 3 | Should Have |
| 36 | TS15 | Configuración de CORS en el API Gateway | Como desarrollador, quiero configurar las políticas de CORS en el API Gateway para permitir que la aplicación móvil y el frontend se comuniquen correctamente con el backend. | EP-TS | 3 | Must Have |
| 37 | US48 | Registrar tarjeta de acceso a áreas comunes | Como administrador, quiero asignar una tarjeta de acceso a cada residente para controlar el ingreso a las áreas comunes del edificio. | EP07 | 5 | Should Have |
| 38 | US49 | Desactivar acceso a áreas comunes por morosidad | Como sistema, quiero desactivar automáticamente el acceso de un residente moroso a las áreas comunes, permitiendo que el administrador pueda revertirlo en casos de emergencia. | EP07 | 5 | Should Have |
| 39 | US50 | Configurar horarios de riego automático | Como administrador, quiero configurar los horarios y la duración del riego automático de las áreas verdes para optimizar el mantenimiento del edificio. | EP07 | 3 | Could Have |
| 40 | US51 | Riego automático según humedad del suelo | Como sistema, quiero activar el riego automáticamente según el nivel de humedad del suelo para evitar el desperdicio de agua en las áreas verdes. | EP07 | 5 | Could Have |
| 41 | US52 | Detección de fugas en tanque de agua | Como administrador, quiero monitorear el nivel del tanque de agua para detectar posibles fugas y actuar antes de que generen pérdidas mayores. | EP07 | 5 | Could Have |
| 42 | US53 | Encendido automático de luces por movimiento | Como sistema, quiero encender automáticamente las luces de áreas comunes al detectar movimiento para mejorar la seguridad y el ahorro energético del edificio. | EP07 | 3 | Could Have |
| 43 | TS16 | Configuración base del microservicio IoT Access Management | Como desarrollador, quiero crear el microservicio de IoT Access Management para gestionar el registro, estado y eventos de los dispositivos inteligentes del edificio. | EP-TS | 5 | Should Have |
| 44 | TS17 | Comunicación con dispositivos ESP32 mediante protocolo MQTT | Como desarrollador, quiero implementar la comunicación entre el microservicio IoT Access Management y las placas ESP32 mediante MQTT, para recibir lecturas de sensores y enviar comandos de actuación en tiempo real. | EP-TS | 8 | Should Have |

# Capítulo IV: Solution Software Design

## 4.1. Strategic-Level Domain-Driven Design

### 4.1.1. Design-Level EventStorming

El equipo realizó la sesión de Design-Level EventStorming en **Miro**, siguiendo la progresión estándar de la técnica en cuatro pasos, cada uno construido sobre el anterior en el mismo tablero:

1. **Storm your events**: volcado libre de todos los eventos de dominio identificados (notas naranjas), sin orden ni filtro, cubriendo tanto la gestión administrativa del condominio como las ideas de nivel IoT.
2. **Organize your events**: reordenamiento de esos eventos en timelines/swimlanes por proceso de negocio, agrupando lo que ocurre en secuencia.
3. **Add commands**: para cada evento, se agregó el *Command* (nota azul) que lo origina y el *Actor* (nota pequeña adjunta: Residente, Administrador o Sistema) que lo dispara.
4. **Add read models, policies and system commands**: se incorporaron los *Read Models* (vistas que consultan los usuarios), las *Policies* (reglas "cuando ocurre X, entonces Y") que conectan eventos entre procesos distintos, y los *System Commands* que el propio sistema dispara de forma automática al cumplirse una policy.

![Tablero de Design-Level EventStorming](assets/img/eventstorming-board.jpg)

#### 4.1.1.1. Candidate Context Discovery

El equipo aplicó las tres técnicas de Candidate Context Discovery en conjunto, no de forma excluyente, sobre el tablero ya organizado en commands, policies y read models:

- **Look-for-pivotal-events:** se buscaron los eventos que marcan un cambio de estado entre procesos de negocio distintos, es decir, los puntos donde un flujo termina y dispara (vía policy) el inicio de otro. `Reserva aceptada` es pivotal porque dispara la habilitación de acceso físico; `Pago fue registrado` / `Deuda marcada como pagada` es pivotal porque libera al residente de una suspensión de acceso; `Residente moroso fue detectado` es pivotal porque cruza de Payment hacia el control de acceso. Estos pivotes son los que terminaron materializándose como los eventos de integración entre contextos documentados en 4.1.1.2 y 4.1.2.
- **Start-with-value:** se identificaron las partes del dominio con mayor valor diferencial para el negocio, usando como referencia directa las estrategias frente a competidores de 2.1.2, en particular la **Estrategia 6, "Gestión inteligente de áreas comunes"** (optimizar el uso de los recursos compartidos del condominio) y la **Estrategia 5, "Adaptación al contexto local"**,, que son las dos que el nivel IoT lleva más allá de lo que ofrecen Condo Control, Buildium y AppFolio. De las capacidades IoT exploradas en el storm, iluminación inteligente, control de acceso, monitoreo de tanque de agua, detección de fugas, riego automático, el equipo priorizó **acceso físico** y **iluminación/energía** por ser las de mayor valor demostrable dentro del alcance de un proyecto académico con hardware real (ESP32), y difirió riego y monitoreo de agua por requerir sensores/actuadores adicionales (electroválvulas, sensores de humedad de suelo, sensores de nivel) fuera del alcance de hardware de esta entrega.

  Esta decisión tiene un efecto directo sobre el Product Backlog de 3.3 que conviene explicitar: las historias **US50** (configurar horarios de riego), **US51** (riego según humedad del suelo) y **US52** (detección de fugas en tanque de agua) quedan **fuera del alcance de esta entrega** y no se les asigna bounded context en 4.2. Las tres estaban priorizadas como *Could Have* en el backlog, de modo que diferirlas no altera el alcance comprometido como *Must* o *Should*. Las restantes historias de la épica EP07 sí tienen contexto asignado: **US48** y **US49** en IoT Access Management, y **US53** en Smart Lighting & Automation. Del mismo modo, los términos *Monitoreo de Tanque de Agua*, *Detección de Fugas*, *Riego Automático* y *Calidad del Aire* definidos en el Ubiquitous Language de 2.5 permanecen como vocabulario del dominio, pero sin contexto implementador en esta entrega.
- **Start-with-simple:** el timeline ya organizado en el paso 2 de EventStorming se descompuso en sub-timelines secuenciales por proceso (autenticación → gestión residencial → reservas → pagos → comunicación/foro → reportes, y luego los tres sub-timelines IoT), cada uno lo bastante simple como para sostener un propósito de negocio propio, ese es, en esencia, el criterio de corte que produjo los 11 candidatos de la tabla siguiente.

La tabla resume, por cada proceso de negocio que sí se mantuvo en el alcance, el *Command* y *Actor* que lo origina, los *Domain Events* producidos, y las *Policies* / *Read Models* agregados en el paso 4, es decir, el nivel de detalle sobre el que se hizo el corte de bounded contexts:

| Proceso de negocio | Command (Actor) | Domain Events clave | Policy | Read Model |
|---|---|---|---|---|
| Autenticación (IAM/Auth) | Completar formulario de registro (Residente/Administrador) · Iniciar sesión | Usuario registrado, Rol asignado a usuario, Usuario autenticado, Credenciales rechazadas, Sesión cerrada | Un residente desactivado no puede iniciar sesión | — |
| Gestión residencial | Registrar edificio y unidades (Administrador) | Edificio registrado, Unidad registrada, Residente vinculado a unidad | Rol de usuario debe ser administrador | Directorio de unidades y residentes |
| Reservas | Registrar área común (Administrador) · Solicitar/Cancelar reserva (Residente) | Área común registrada, Reglas de área común registradas, Reserva solicitada, Reserva aceptada/rechazada, Reserva cancelada | — | Calendario de reservas |
| Pagos y deudas | Registrar pago (Residente) | Deuda generada, Pago fue registrado, Pago rechazado, Deuda marcada como pagada, Recordatorio de deuda enviado | Si el pago es rechazado, la deuda permanece pendiente | Estado de cuenta del residente |
| Comunicados y foro | Publicar anuncio (Administrador) · Agregar comentario / Crear encuesta / Votar (Residente) | Anuncio publicado, Comentario agregado, Encuesta creada, Voto registrado, Encuesta finalizada | — | Muro de anuncios, Resultados de la encuesta |
| Incidencias y emergencias | Reportar incidencia (Residente) · Declarar emergencia (Administrador) | Incidencia reportada, Incidencia atendida, Incidencia resuelta, Emergencia declarada | Si la severidad es crítica, difundir a todo el edificio | Bandeja de incidencias del administrador |
| Reportes | Generar reporte financiero (Administrador) | Reporte financiero generado, Reporte financiero exportado | — | Dashboard financiero |
| Notificaciones (transversal) | *(Sistema, automático)* | Notificación enviada, Notificación leída, Notificación de deuda fue enviada, Notificación enviada a usuario/administrador | — | — |
| Acceso físico (IoT) | Escanear tarjeta (Residente) | Tarjeta RFID/NFC fue escaneada, Residente fue validado, Acceso fue concedido/rechazado/denegado, Puerta fue abierta, Tarjeta no reconocida, Residente moroso fue detectado | Si el residente es moroso, denegar el acceso | — |
| Iluminación inteligente (IoT) | Activar interruptor manual (Residente/Administrador) | Movimiento detectado/no detectado en área común, Luces encendidas/apagadas automáticamente, Temporizador de inactividad iniciado, Fallo de conexión en sensor detectado, Luces permanecieron en modo seguro | Si no hay movimiento por 3 minutos, apagar luces | — |
| *Riego y monitoreo de agua (descartado — ver start-with-value)* | *Activar riego manual* | *Riego activado/detenido automáticamente, Humedad del suelo medida, Fuga detectada, Nivel de agua medido, Fallo en válvula detectado* | *Si la humedad es suficiente, omitir el riego · Si el nivel es crítico o hay fuga, enviar alerta inmediata* | *Historial de riego, Panel de nivel de tanque de agua* |

A partir de este corte por proceso de negocio, y de la incorporación del nivel IoT priorizado, se identificaron **12 bounded contexts candidatos**, cada uno implementado como un microservicio independiente (más el API Gateway y el Edge API como componentes de infraestructura transversal, no bounded contexts de dominio). Los nueve primeros cubren la gestión administrativa del condominio; los tres últimos son los que sobrevivieron el filtro start-with-value dentro del nivel IoT:

| Sección | Bounded Context candidato | Responsabilidad principal |
|---|---|---|
| 4.2.1 | IAM / Auth | Registro, autenticación (JWT) y gestión de usuarios y roles (administradores/residentes). |
| 4.2.2 | Residential Management | Registro de edificios, unidades y vinculación de residentes a sus unidades. |
| 4.2.3 | Reservation | Disponibilidad, reserva y aprobación de uso de áreas comunes. |
| 4.2.4 | Payment | Registro de deudas, pagos, comprobantes e integración con la pasarela Culqi. |
| 4.2.5 | Notification | Envío de notificaciones push (Firebase Cloud Messaging) originadas por eventos de otros contextos. |
| 4.2.6 | Communication | Publicación de comunicados oficiales y encuestas a la comunidad. |
| 4.2.7 | Forum | Muro comunitario de mensajes entre residentes. |
| 4.2.8 | Report | Generación y exportación de reportes financieros y de morosidad. |
| 4.2.9 | Incident Management | Reporte, seguimiento y escalacion de incidencias del edificio, y difusion de alertas de emergencia a la comunidad. |
| 4.2.10 | IoT Access Management | Permisos de acceso a áreas comunes, credenciales RFID, y control de cerraduras según reservas activas. |
| 4.2.11 | Smart Lighting & Automation | Reglas de automatización y control de luminarias de áreas comunes según presencia, lux ambiental, horarios de reserva y override manual. |
| 4.2.12 | IoT Telemetry & Analytics | Ingesta de telemetría de sensores, cálculo cuantitativo de consumo energético (kWh), estadísticas y detección de anomalías de hardware. |

La columna **Sección** fija la numeración con la que cada contexto se desarrolla en 4.2 y se mantiene en todo el capítulo. La única sección que presenta los contextos en otro orden es 4.1.1.3, donde los canvases se elaboran por importancia estratégica según lo pide el enunciado; allí cada canvas indica entre paréntesis la sección que le corresponde.


En cuanto a la persistencia, se mantiene el principio de **database-per-service** comprometido en la historia técnica **TS05** del Capítulo III: cada microservicio es dueño exclusivo de sus tablas y ningún contexto lee directamente las de otro. Lo que el modelo de despliegue de 4.1.3.4 hace es *alojar* esos esquemas lógicamente independientes sobre dos instancias gestionadas en vez de sobre once servidores separados, una instancia PostgreSQL para los esquemas de los contextos de gestión e IoT transaccionales, y una instancia TimescaleDB dedicada a las series de telemetría de alta frecuencia, cuyo perfil de escritura y consulta es incompatible con el transaccional. Es una decisión de infraestructura y de costo para el alcance académico del proyecto, no una relajación del aislamiento de datos entre contextos: la independencia lógica que exige TS05 se conserva íntegra.

#### 4.1.1.2. Domain Message Flows Modeling

Diagrama: [`plantuml/domain-storytelling/`](https://github.com/IoT-UPC-202620/edifika-report/tree/main/plantuml/domain-storytelling/).

**Autenticación de administrador** (Command: `RegisterAdministrator` / `SignIn` → Event: `SessionStarted`)

![Domain Story autenticación administrador](assets/img/domain-story-auth-admin.png)

*Figura. Domain Story — el Administrador completa el formulario, que atraviesa el API Gateway hasta IAM/Auth, quien crea el Usuario con rol ADMIN y emite el Token JWT que habilita la sesión.*

![Diagrama de secuencia autenticación administrador](assets/img/secuencia1.png)

*Figura. IAM recibe el Command de registro/login vía API Gateway, valida contra su agregado de Usuario y responde con el token JWT (Event: `SessionStarted`).*

**Autenticación de residente** (Command: `LinkResidentToUnit` / `SignIn` → Event: `SessionStarted`)

![Domain Story autenticación residente](assets/img/domain-story-auth-resident.png)

*Figura. Domain Story — a diferencia del administrador, el residente no se autorregistra: el Administrador registra el vínculo residente–unidad en Residential Management, que lo provee a IAM/Auth; recién entonces el Residente puede autenticarse.*

![Diagrama de secuencia autenticación residente](assets/img/secuencia2.png)

*Figura. A diferencia del administrador, el residente no se autorregistra: es Residential Management quien crea el vínculo residente–unidad; IAM solo valida credenciales y emite el token.*

**Publicación de comunicados** (Command: `PublishAnnouncement` → Event: `AnnouncementPublished` → Policy: notificar residentes)

![Domain Story comunicados](assets/img/domain-story-comunicados.png)

*Figura. Domain Story — el Administrador publica el Comunicado en Communication, que dispara a Notification la creación y entrega de la Notificación Push al Residente; si el envío falla, queda pendiente de reintento.*

![Diagrama de secuencia comunicados](assets/img/secuencia_comunicados.png)

*Figura. Communication guarda el comunicado y emite el evento `AnnouncementPublished`; una policy reacciona enviando las notificaciones push a través de Notification (vía Firebase). Si el envío falla, una acción compensatoria marca la notificación como pendiente de reintento sin afectar el comunicado ya guardado.*

**Registro y aprobación de pagos** (Command: `RegisterPayment` / `ApprovePayment` → Event: `PaymentApproved`)

![Domain Story pagos](assets/img/domain-story-pagos.png)

*Figura. Domain Story — el Residente registra el Pago en Payment, que lo envía a Culqi; según la confirmación, Payment aprueba y genera el Comprobante (o revierte la deuda) y notifica al Residente.*

![Diagrama de secuencia gestión de pagos](assets/img/secuencia_pagos.png)

*Figura. Payment registra el pago en estado `PENDING`; al aprobarlo, emite el evento `PaymentApproved` que dispara la policy de notificación al residente. Si la pasarela Culqi falla, la compensación revierte la deuda a `PENDING`.*

**Reserva y aprobación de áreas comunes** (Command: `CreateReservation` / `ApproveReservation` → Event: `ReservationApproved`)

![Domain Story reservas](assets/img/domain-story-reservas.png)

*Figura. Domain Story — el Residente solicita la Reserva, el Administrador la aprueba, y Reservation dispara en paralelo la habilitación del Permiso de Acceso (IoT Access Management) y la notificación al Residente.*

![Diagrama de secuencia reserva de áreas comunes](assets/img/secuencia_reservas.png)

*Figura. Reservation valida disponibilidad antes de crear la reserva; al aprobarla, emite `ReservationApproved`, que dispara la notificación al residente vía Notification.*

**Generación de reportes financieros** (Query: `GetFinancialReport` — solo lectura, sin Command ni Event)

![Domain Story reportes](assets/img/domain-story-reportes.png)

*Figura. Domain Story — el Administrador solicita el Reporte Financiero, Report consulta a Payment vía REST, consolida y exporta el reporte de vuelta al Administrador; al ser de solo lectura, no hay Policy ni compensación involucradas.*

![Diagrama de secuencia reportes](assets/img/secuencia_reportes.png)

*Figura. Report consulta datos de Payment vía REST para consolidar y exportar reportes; al ser de solo lectura, no participa del flujo de eventos/compensaciones de los demás contextos.*

#### 4.1.1.3. Bounded Context Canvases

Siguiendo a Nick Tune (*Bounded Context Canvas*, DDD Crew), cada contexto candidato de 4.1.1.1 se elaboró con el proceso iterativo de seis pasos indicado por el enunciado: **(1) Context Overview Definition** (nombre y propósito en una frase), **(2) Business Rules Distillation & Ubiquitous Language Capture** (reglas de negocio que el contexto hace cumplir y términos propios del dominio), **(3) Capability Analysis** (clasificación estratégica: rol de dominio Core/Supporting/Generic, modelo de negocio y estadio de evolución de Wardley), **(4) Capability Layering** (cuando el contexto agrupa más de una capability, se anota la jerarquía), **(5) Dependencies Capture** (comunicación entrante y saliente, con el patrón DDD de 4.1.2), y **(6) Design Critique** (alternativas consideradas y por qué se descartaron).

El orden de elaboración siguió el criterio de importancia pedido por el enunciado: primero los contextos de los que depende toda la plataforma (IAM/Auth, Payment, Residential Management, Reservation), luego los tres contextos IoT que sostienen la propuesta de diferenciación del Capítulo II, y por último los contextos de soporte/genéricos (Communication, Notification, Report, Forum).

**1. IAM / Auth (4.2.1)**

| Campo | Detalle |
|---|---|
| Purpose | Autenticar y autorizar a administradores y residentes, siendo la única fuente de identidad, roles y tokens JWT de la plataforma. |
| Strategic Classification | Domain Role: **Generic** (autenticación JWT es un problema resuelto en la industria) · Business Model: Compliance Enforcer · Evolution: **Product** (patrón bien entendido; se construyó in-house en vez de adoptar un IDaaS externo como Auth0). |
| Ubiquitous Language | User, Role (ADMIN / RESIDENT), Credential, JWT, Session. |
| Business Decisions | Un residente desactivado no puede iniciar sesión · las acciones administrativas exigen rol ADMIN · las contraseñas se almacenan hasheadas y el JWT tiene expiración. |
| Inbound Communication | **Residential Management** (Customer/Supplier, REST síncrono) — provee el vínculo residente–unidad que autoriza la creación de la cuenta de un residente. |
| Outbound Communication | Ninguna: IAM no invoca a ningún otro contexto. Es *upstream* respecto de todos los contextos que validan su JWT (**Conformist** del contrato de token vía API Gateway), y *downstream* únicamente respecto de Residential Management, de quien recibe el vínculo residente–unidad. |
| Model (Aggregates) | `User` (Aggregate Root), `UserRol` (Entity referenciada por el agregado mediante el identificador `RolId`; ver 4.2.1.1). Value Objects: `Email`, `PasswordHash`, `JwtToken`. |
| Design Critique | Se evaluó externalizar a un IDaaS (Auth0/Firebase Auth) para reducir el mantenimiento de hashing/tokens, pero se descartó por el costo recurrente en un SaaS de bajo ticket y porque el modelo de roles (ADMIN/RESIDENT) está fuertemente acoplado al dominio propio de Residential Management. |

**2. Payment (4.2.4)**

| Campo | Detalle |
|---|---|
| Purpose | Registrar deudas y pagos de mantenimiento, y llevar a un residente moroso a un estado que otros contextos (acceso IoT) puedan consultar. |
| Strategic Classification | Domain Role: **Core** (motor de ingresos del negocio) · Business Model: Revenue Generator · Evolution: **Product** (procesamiento de pagos es un dominio bien entendido; lo diferencial es la integración con Culqi y la propagación de morosidad). |
| Ubiquitous Language | Debt (Deuda), Payment (Pago), Receipt (Comprobante), Delinquent Resident (Residente Moroso). |
| Business Decisions | Si el pago es rechazado, la deuda permanece pendiente · un pago aprobado genera constancia y notifica al residente · un residente con deuda vencida se marca moroso y esto restringe su acceso físico (ver IoT Access Management). |
| Inbound Communication | **Report** (Customer/Supplier, REST síncrono) — consulta datos de Payment para consolidar reportes financieros. |
| Outbound Communication | **Notification** (Customer/Supplier, evento `PaymentApproved`) · **IoT Access Management** (Customer/Supplier, evento `ResidentMarkedDelinquent`) · **Culqi** (Anti-Corruption Layer — pasarela de pagos externa). |
| Model (Aggregates) | `Debt` (Entity), `Payment` (Aggregate Root). |
| Design Critique | Se consideró que Payment abriera directamente el acceso/bloqueo físico del residente moroso, pero se descartó: acoplaría un contexto financiero a reglas de hardware. En su lugar, Payment solo publica el evento y es IoT Access Management quien decide la consecuencia sobre el acceso, manteniendo el Single Responsibility de cada contexto. |

**3. Residential Management (4.2.2)**

| Campo | Detalle |
|---|---|
| Purpose | Ser la fuente de verdad de edificios, unidades y del vínculo entre un residente y su unidad. |
| Strategic Classification | Domain Role: **Supporting** (necesario, pero no diferenciador) · Business Model: Engagement Creator · Evolution: **Product** (gestión de catálogo/CRUD es un patrón conocido). |
| Ubiquitous Language | Building (Edificio), Unit (Unidad), Resident-Unit Link (Vínculo Residente–Unidad). |
| Business Decisions | Un residente solo puede vincularse a una unidad activa · el residente no se autorregistra: es el administrador quien crea el vínculo (ver 4.1.1.2, "Autenticación de residente"). |
| Inbound Communication | Ninguna: no consume eventos ni llamadas de otros contextos de negocio. |
| Outbound Communication | **IAM** (Customer/Supplier, REST síncrono) — provee el vínculo residente–unidad que IAM usa para autorizar. |
| Model (Aggregates) | `Building` (Entity), `Unit` (Entity). |
| Design Critique | Se evaluó fusionar este contexto con IAM (ambos gestionan "quién es quién"), pero se mantuvo separado porque su ciclo de cambio es distinto: Residential Management cambia cuando cambia el padrón de residentes/unidades, mientras IAM cambia cuando cambian las políticas de autenticación — fusionarlos violaría el criterio de *single responsibility* de DDD. |

**4. Reservation (4.2.3)**

| Campo | Detalle |
|---|---|
| Purpose | Gestionar disponibilidad, solicitud, aprobación y cancelación de áreas comunes, siendo el disparador de la habilitación de acceso físico y de iluminación. |
| Strategic Classification | Domain Role: **Supporting** · Business Model: Engagement Creator · Evolution: **Product** (los sistemas de booking/disponibilidad son un patrón bien conocido). |
| Ubiquitous Language | Common Area (Área Común), Reservation (Reserva), Availability (Disponibilidad), Time Window (Ventana Horaria). |
| Business Decisions | No se puede reservar un área común fuera de sus reglas de uso/horario configuradas · no se permiten reservas duplicadas para la misma ventana horaria. |
| Inbound Communication | Ninguna: es un contexto *upstream* puro — no consume eventos ni llamadas de otros contextos. |
| Outbound Communication | **Notification** (Customer/Supplier, evento `ReservationApproved`) · **IoT Access Management** (Customer/Supplier, evento `ReservationApproved`) · **Smart Lighting & Automation** (Customer/Supplier, evento `ReservationStarted` disparado por un scheduler interno que detecta el inicio de la ventana horaria). |
| Model (Aggregates) | `CommonArea` (Entity), `Reservation` (Aggregate Root). |
| Design Critique | Se consideró que Reservation controlara directamente el actuador de acceso/luces al aprobar una reserva, pero se descartó: acoplaría un contexto administrativo a protocolos de hardware (MQTT/Edge). Reservation solo emite el evento de dominio; son los contextos IoT quienes lo traducen a una acción física. |

**5. IoT Access Management (4.2.10)**

| Campo | Detalle |
|---|---|
| Purpose | Decidir y auditar quién puede abrir físicamente un área común, combinando credenciales, reservas vigentes y estado de morosidad. |
| Strategic Classification | Domain Role: **Core** (pilar de la propuesta de diferenciación IoT del Capítulo II) · Business Model: Revenue Protector / Compliance Enforcer · Evolution: **Custom Built** (la combinación RFID + reservas + morosidad no es un producto de catálogo). |
| Ubiquitous Language | Access Credential (Credencial de Acceso), Access Permission (Permiso de Acceso), Access Attempt (Intento de Acceso), Delinquent Resident. |
| Business Decisions | Una credencial concede acceso solo si está activa, el residente no está moroso y existe un permiso vigente para esa área en ese instante (`AccessDecisionService`, ver 4.2.10.1) · un residente moroso se suspende automáticamente. |
| Inbound Communication | **Reservation** (Customer/Supplier, evento `ReservationApproved`) · **Payment** (Customer/Supplier, evento `ResidentMarkedDelinquent`). |
| Outbound Communication | **Notification** (Customer/Supplier, eventos `PhysicalAccessGranted` / `PhysicalAccessDenied`) · **Edge API** (**Conformist** — sincroniza credenciales activas, reservas vigentes y blacklist hacia el gateway on-premise). |
| Model (Aggregates) | `AccessCredential` (Aggregate Root), `AccessPermission` (Entity), `AccessAttempt` (Entity). |
| Design Critique | Se evaluó que el Edge API tomara la decisión de acceso de forma autónoma consultando el cloud en cada intento, pero se descartó por latencia y por el requisito de resiliencia offline: la decisión final se cachea en el Edge y solo se sincroniza cuando hay conectividad, de ahí la relación Conformist hacia el Edge en vez de Customer/Supplier síncrona en tiempo real. |

**6. Smart Lighting & Automation (4.2.11)**

| Campo | Detalle |
|---|---|
| Purpose | Encender/apagar luminarias de áreas comunes combinando presencia, lux ambiental, horario de reserva y override manual, priorizando el ahorro energético. |
| Strategic Classification | Domain Role: **Core** (diferenciador IoT) · Business Model: Cost Reducer (ahorro energético) · Evolution: **Custom Built** (la precedencia entre presencia/lux/reserva/override es una regla propia del negocio, no un producto de catálogo). |
| Ubiquitous Language | Automation Rule (Regla de Automatización), Luminaire (Luminaria), Override Command (Comando de Override), Lux Threshold (Umbral de Lux). |
| Business Decisions | Si no hay movimiento por 3 minutos, apagar luces (política capturada en el EventStorm, ver 4.1.1.1) · un override manual suspende temporalmente la automatización con precedencia sobre las reglas programadas. |
| Inbound Communication | **Reservation** (Customer/Supplier, evento `ReservationStarted`) — el inicio de una reserva dispara el encendido programado del área · **Edge API** (Customer/Supplier, evento `AreaPresenceDetected` relayado desde el sensor PIR del nodo de iluminación, ver 4.2.11.3). |
| Outbound Communication | **Edge API** (**Conformist** — envía reglas de programación y comandos de override para ejecución local). |
| Model (Aggregates) | `AutomationRule` (Aggregate Root), `Luminaire` (Entity), `OverrideCommand` (Entity). |
| Design Critique | Se evaluó ejecutar la lógica de decisión (`AutomationDecisionService`) directamente en el Edge para no depender de la conectividad WAN, pero se optó por mantener la autoría de reglas en el cloud (más fácil de versionar y auditar desde la Web Application) y solo *empujar* las reglas ya resueltas al Edge — el mismo patrón Conformist que IoT Access Management. |

**7. IoT Telemetry & Analytics (4.2.12)**

| Campo | Detalle |
|---|---|
| Purpose | Ingerir telemetría de sensores, calcular consumo energético cuantitativo (kWh) y detectar anomalías de hardware, sosteniendo el requisito de analítica cuantitativa IoT del curso. |
| Strategic Classification | Domain Role: **Core** (el más diferenciador de los tres contextos IoT: es el único que produce analítica cuantitativa) · Business Model: Decision Support / Cost Reducer · Evolution: **Genesis → Custom Built** (el cálculo de integración temporal de potencia y la detección de anomalías por baseline estadística se diseñaron a medida para este dominio). |
| Ubiquitous Language | Sensor Reading (Lectura de Sensor), Energy Consumption (Consumo Energético), Consumption Baseline (Línea Base de Consumo), Anomaly Flag (Marca de Anomalía). |
| Business Decisions | El consumo se calcula por integración temporal de la potencia instantánea (`kWh = Σ(V × I × Δt) / 1000`) · una anomalía se distingue de una falla de luminaria por el patrón de corriente nula con la luminaria comandada en ON (`AnomalyDetectionService`, ver 4.2.12.1). |
| Inbound Communication | **Edge API** (Customer/Supplier, el Edge es *upstream* de datos) — reenvía la telemetría bufferizada y los registros de auditoría generados offline. |
| Outbound Communication | **Notification** (eventos `AbnormalConsumptionDetected`, `LuminaireFailureDetected`) · **Report** (Customer/Supplier — aporta las métricas de consumo que Report consolida). |
| Model (Aggregates) | `EnergyConsumption` (Aggregate Root), `ConsumptionBaseline` (Entity), `AnomalyFlag` (Entity), `SensorReading` (Value Object). |
| Design Critique | Se consideró persistir la telemetría en la misma instancia PostgreSQL que el resto del dominio, pero se descartó por el perfil de escritura (alta frecuencia) y de consulta (series temporales) incompatible con el transaccional — de ahí la instancia TimescaleDB dedicada (ver 4.1.3.4), la única decisión de persistencia que rompe el patrón "un PostgreSQL para todos" del resto de contextos. |

**8. Incident Management (4.2.9)**

| Campo | Detalle |
|---|---|
| Purpose | Permitir que un residente reporte una incidencia del edificio y que el administrador la siga hasta su cierre, y difundir alertas de emergencia a toda la comunidad. |
| Strategic Classification | Domain Role: **Supporting** · Business Model: Engagement Creator / Compliance Enforcer · Evolution: **Product** (la gestión de tickets es un patrón conocido; lo propio del dominio es la escalación por severidad y la ubicación por torre/unidad). |
| Ubiquitous Language | Incident (Incidencia), Incident Update (Seguimiento de Incidencias), Emergency Broadcast (Alerta de Emergencia), Severity (Severidad) — términos tomados directamente de 2.5. |
| Business Decisions | Una incidencia de severidad `CRITICAL` se difunde de inmediato a todo el edificio; el resto se enruta solo al administrador · toda incidencia queda georreferenciada a la torre y el departamento del residente que la reporta (US08 esc. 2). |
| Inbound Communication | Ninguna: es el residente o el administrador quien origina el hecho de dominio, no otro contexto. |
| Outbound Communication | **Residential Management** (Customer/Supplier, REST síncrono — resuelve la ubicación del residente) · **Notification** (Customer/Supplier, eventos `IncidentReported`, `IncidentStatusChanged` y `EmergencyDeclared`) · **Cloudinary** (Anti-Corruption Layer — fotografías de la incidencia). |
| Model (Aggregates) | `Incident` (Aggregate Root), `IncidentUpdate` (Entity), `EmergencyBroadcast` (Entity). |
| Design Critique | Se evaluó anexar esta capability a Communication, que ya publica contenido hacia los residentes, pero se descartó por la misma razón que separa Communication de Forum: un comunicado es unidireccional y lo origina el administrador, mientras una incidencia la origina el residente y tiene ciclo de vida, estados y seguimiento propios. También se consideró introducir el rol *Personal de Mantenimiento* que define el Ubiquitous Language de 2.5 para asignarle las incidencias; se difirió porque los Capítulos I y III solo definen dos segmentos objetivo (administrador y residente), y añadir un tercer rol en IAM excedería lo especificado. |

**9. Communication (4.2.6)**

| Campo | Detalle |
|---|---|
| Purpose | Publicar comunicados oficiales y encuestas de la comunidad hacia los residentes. |
| Strategic Classification | Domain Role: **Supporting** · Business Model: Engagement Creator · Evolution: **Product** (publicación de anuncios/encuestas es un patrón conocido). |
| Ubiquitous Language | Announcement (Comunicado), Poll (Encuesta), Reach (Alcance). |
| Business Decisions | Límite de un mensaje diario por residente (HTTP 429 si se excede) · voto único por encuesta (HTTP 409 si se duplica). |
| Inbound Communication | Ninguna. |
| Outbound Communication | **Notification** (Customer/Supplier, evento `AnnouncementPublished`) · **Cloudinary** (Anti-Corruption Layer — imágenes de comunicados). |
| Model (Aggregates) | `Announcement` (Entity), `Poll` (Entity). |
| Design Critique | Se evaluó fusionar Communication con Forum (ambos son "muros" de contenido), pero se mantuvieron separados porque su ubiquitous language y su ciclo de vida difieren: un comunicado es unidireccional y oficial (admin → todos), mientras un post de Forum es conversacional entre pares. |

**10. Notification (4.2.5)**

| Campo | Detalle |
|---|---|
| Purpose | Traducir eventos de dominio de todo el sistema en notificaciones push entregadas al residente o administrador correcto. |
| Strategic Classification | Domain Role: **Generic** (envío de notificaciones es una capability resuelta por FCM) · Business Model: Engagement Creator · Evolution: **Commodity** (delegada casi por completo a Firebase Cloud Messaging). |
| Ubiquitous Language | Notification (Notificación), Device Token (Token de Dispositivo). |
| Business Decisions | Si el envío a FCM falla, la notificación se marca pendiente de reintento sin afectar el estado del contexto que originó el evento (compensación, ver 4.1.1.2). |
| Inbound Communication | **Communication** (`AnnouncementPublished`) · **Payment** (`PaymentApproved`) · **Reservation** (`ReservationApproved`) · **IoT Access Management** (`PhysicalAccessGranted`/`Denied`) · **IoT Telemetry & Analytics** (`AbnormalConsumptionDetected`, `LuminaireFailureDetected`) — todos Customer/Supplier, Notification es downstream puro. |
| Outbound Communication | **Firebase Cloud Messaging** (Anti-Corruption Layer). |
| Model (Aggregates) | `Notification` (Entity), `DeviceToken` (Entity). |
| Design Critique | Al ser el único punto de consumo de eventos de los cinco contextos que publican alertas (Communication, Payment, Reservation, IoT Access Management e IoT Telemetry & Analytics), se evaluó el riesgo de que un fallo en Notification bloqueara el broker para todos; se mitigó con el **Factory Pattern** para desacoplar la creación del tipo de notificación (Push/Email/SMS) de su envío, y con colas de reintento independientes por evento. |

**11. Report (4.2.8)**

| Campo | Detalle |
|---|---|
| Purpose | Consolidar y exportar reportes financieros, de morosidad y de analítica de consumo energético de la comunidad. |
| Strategic Classification | Domain Role: **Supporting** · Business Model: Decision Support · Evolution: **Product** (generación de reportes PDF/Excel es un patrón conocido). |
| Ubiquitous Language | Financial Report (Reporte Financiero), Delinquency (Morosidad). |
| Business Decisions | Contexto mayormente de solo lectura (CQRS): no posee agregados transaccionales propios, solo modelos de lectura. |
| Inbound Communication | Ninguna. |
| Outbound Communication | **Payment** (Customer/Supplier, REST síncrono) · **IoT Telemetry & Analytics** (Customer/Supplier — métricas de consumo). |
| Model (Aggregates) | `FinancialReport` (modelo de lectura, sin Aggregate Root transaccional). |
| Design Critique | Se evaluó que Report consumiera eventos de Payment de forma asíncrona (event sourcing de proyecciones) en vez de consultarlo vía REST síncrono, lo que reduciría el acoplamiento temporal; se descartó por ahora dado el volumen de datos y el timebox del proyecto, dejándolo como una mejora futura explícita. |

**12. Forum (4.2.7)**

| Campo | Detalle |
|---|---|
| Purpose | Sostener el muro comunitario de mensajes entre residentes de un mismo edificio. |
| Strategic Classification | Domain Role: **Generic** · Business Model: Engagement Creator · Evolution: **Commodity** (patrón de muro/foro ampliamente disponible). |
| Ubiquitous Language | Post (Publicación), Wall (Muro). |
| Business Decisions | Límite de publicaciones diarias por residente (HTTP 429 si se excede). |
| Inbound Communication | Ninguna. |
| Outbound Communication | **Cloudinary** (Anti-Corruption Layer — imágenes de publicaciones del foro). |
| Model (Aggregates) | `Post` (Entity). |
| Design Critique | Es el contexto de menor prioridad estratégica de los 12 (Domain Role Generic, Evolution Commodity); se evaluó no construirlo como microservicio independiente y anexarlo a Communication, pero se mantuvo separado porque su Ubiquitous Language y su patrón de acceso (conversacional, muchos-a-muchos) son distintos a los de un comunicado oficial (uno-a-muchos), y porque así puede escalar o degradarse independientemente sin afectar la publicación de comunicados oficiales. |

### 4.1.2. Context Mapping

El context map documenta las relaciones estructurales entre contextos derivadas de los flujos de colaboración de 4.1.1.2 y del modelo de arquitectura ([`arquitectura/diagrama.dsl`](https://github.com/IoT-UPC-202620/edifika-report/blob/main/arquitectura/diagrama.dsl)); la clasificación según los patrones de relación de DDD que se lista en la tabla quedó validada por la discusión de alternativas que cierra esta sección y por el campo *Design Critique* de cada Bounded Context Canvas (4.1.1.3).

El nivel IoT introduce un patrón de relación característico de este tipo de soluciones: el **Conformist**. El Edge API y el firmware de los dispositivos no negocian su modelo con los contextos cloud —consumen el contrato de credenciales, reglas y comandos tal como lo define el nivel cloud— porque duplicar o traducir ese modelo en un dispositivo con recursos limitados no se justifica. La relación inversa (telemetría y auditoría que suben del edge al cloud) sí es Customer/Supplier: el edge es el productor del dato y los contextos cloud lo consumen.

| Contexto origen | Contexto destino | Relación observada | Patrón DDD más cercano (a validar) |
|---|---|---|---|
| Communication | Notification | Emite evento al publicar un comunicado para que se notifique a los residentes. | Customer/Supplier (Communication es upstream) |
| Payment | Notification | Emite evento al aprobar un pago. | Customer/Supplier |
| Reservation | Notification | Emite evento al aprobar una reserva. | Customer/Supplier |
| Payment | Culqi (sistema externo) | Integración vía Adapter/ACL (pasarela de pagos). | Anti-corruption Layer |
| Report | Payment | Consulta síncrona vía REST para consolidar reportes financieros. | Customer/Supplier (Report es downstream, solo lectura) |
| Residential Management | IAM | Provee el vínculo residente–unidad que IAM usa para autorizar el acceso. | Customer/Supplier |
| Reservation | IoT Access Management | `ReservationApproved` habilita el permiso temporal de acceso al área común reservada. | Customer/Supplier (Reservation es upstream) |
| Reservation | Smart Lighting & Automation | El inicio de la reserva dispara el encendido programado del área común. | Customer/Supplier |
| Payment | IoT Access Management | `ResidentMarkedDelinquent` suspende los permisos de acceso del residente moroso. | Customer/Supplier |
| Incident Management | Notification | Emite `IncidentReported`, `IncidentStatusChanged` y `EmergencyDeclared` para avisar al administrador y, en emergencias, a toda la comunidad. | Customer/Supplier |
| Incident Management | Residential Management | Consulta síncrona para resolver la torre y el departamento del residente que reporta la incidencia (US08 esc. 2). | Customer/Supplier (Incident Management es downstream) |
| Incident Management | Cloudinary (sistema externo) | Integración vía Adapter/ACL para las fotografías adjuntas a la incidencia. | Anti-corruption Layer |
| IoT Access Management | Notification | Emite `PhysicalAccessGranted` / `PhysicalAccessDenied` para notificar accesos y rechazos. | Customer/Supplier |
| IoT Telemetry & Analytics | Notification | Emite `AbnormalConsumptionDetected` y `LuminaireFailureDetected` para alertar al administrador. | Customer/Supplier |
| IoT Telemetry & Analytics | Report | Aporta las métricas de consumo energético que Report consolida en la analítica de la comunidad. | Customer/Supplier (Report es downstream) |
| IoT Access Management | Edge API | Sincroniza credenciales activas, reservas vigentes y blacklist hacia el gateway on-premise. | Conformist (el Edge conforma el modelo definido en el cloud) |
| Smart Lighting & Automation | Edge API | Envía las reglas de automatización y los comandos de override manual. | Conformist |
| Edge API | IoT Telemetry & Analytics | Reenvía la telemetría bufferizada y los registros de auditoría generados durante la operación offline. | Customer/Supplier (el Edge es upstream de datos) |
| Edge API | Smart Lighting & Automation | Relaya el evento `AreaPresenceDetected` apenas recibe la lectura del sensor PIR, priorizando latencia de encendido sobre interpretación de dominio. | Customer/Supplier (el Edge es upstream de datos, ver 4.2.11.3) |
| Dispositivos embebidos (ESP32) | Edge API | Intercambio local MQTT de lecturas y comandos; el firmware se adapta al contrato del Edge API. | Conformist (infraestructura física, no bounded context de dominio) |
| API Gateway | Todos los contextos | Enrutamiento y validación de JWT (infraestructura transversal, no bounded context de dominio). | — |

**Discusión de alternativas de context mapping**

Sobre el mapa anterior, el equipo evaluó explícitamente las preguntas de diseño sugeridas por el enunciado. La tabla siguiente resume los casos donde la respuesta no era obvia, la alternativa considerada y la decisión final:

| Pregunta de diseño | Alternativa evaluada | Decisión final y razón |
|---|---|---|
| ¿Qué pasaría si **movemos** este capability a otro contexto? | Mover la decisión de acceso (`AccessDecisionService`) del cloud (IoT Access Management) al Edge API, para que abra la puerta sin ida y vuelta al cloud. | **Se descarta mover el contexto completo**, pero sí se replica su *resultado* (credenciales/permisos ya resueltos) en el Edge vía sincronización — el Edge cachea la decisión, no la recalcula. Mantiene a IoT Access Management como única fuente de verdad y evita que la regla de negocio (moroso → sin acceso) viva en dos lugares. |
| ¿Qué pasaría si **descomponemos** el capability y movemos un sub-capability a otro contexto? | Separar la emisión/gestión de credenciales RFID de la decisión de acceso en tiempo real, creando un contexto "Credential Management" aparte de "Access Decision". | **Se descarta**: ambos sub-capabilities comparten el mismo Aggregate (`AccessCredential`) y el mismo invariante (una credencial suspendida no debe poder decidir un acceso), partirlos forzaría una transacción distribuida para algo que hoy es una operación local. |
| ¿Qué pasaría si **partimos** el bounded context en varios? | Partir Payment en "Billing" (deudas/cuotas) y "Payment Processing" (cobro/Culqi) como dos contextos independientes. | **Se descarta para el alcance actual**: el volumen de reglas de negocio no justifica el costo de coordinación entre dos contextos: la Saga de aprobación (4.1.1.2) necesita ambas responsabilidades en la misma transacción local. Queda anotado como refactor natural si el dominio de facturación creciera (ej. múltiples pasarelas de pago). |
| ¿Qué pasaría si **tomamos capabilities de 3 contexts** para formar uno nuevo? | Extraer la lógica de "generar alerta" que hoy vive de forma repetida en IoT Access Management, Smart Lighting y IoT Telemetry, y consolidarla en un contexto nuevo. | **Ya resuelto por diseño**: ese contexto nuevo es exactamente **Notification** — los tres contextos IoT solo publican el evento de dominio (`PhysicalAccessDenied`, `AbnormalConsumptionDetected`, etc.) y es Notification quien concentra el *Factory Pattern* de creación de la alerta (push/email/SMS), evitando triplicar esa lógica. |
| ¿Qué pasaría si **duplicamos** una funcionalidad para romper una dependencia? | Que Report mantenga su propia copia denormalizada de pagos/deudas (vía eventos) en lugar de consultar a Payment por REST síncrono. | **Se descarta por ahora** (queda como Design Critique de Report en 4.1.1.3): el volumen de datos y el timebox del proyecto no justifican construir un pipeline de proyecciones; se acepta el acoplamiento síncrono Report → Payment sabiendo que es la única lectura cross-context sin desacoplar del informe. |
| ¿Qué pasaría si creamos un **shared service** para reducir duplicación? | Un servicio compartido de "estado de morosidad" consultado tanto por IoT Access Management como por futuras integraciones (ej. bloqueo de reservas a morosos). | **Se descarta un servicio nuevo**: Payment ya es la fuente de verdad y publica `ResidentMarkedDelinquent`; crear un shared service solo agregaría un salto de red adicional sin nueva capability. Se prefiere que cada contexto interesado se suscriba al evento (Customer/Supplier) en vez de introducir un Shared Kernel. |
| ¿Qué pasaría si **aislamos los core capabilities** y movemos el resto a un contexto aparte? | Separar `EnergyCalculationService`/`AnomalyDetectionService` (core, diferenciador) de la ingesta cruda de telemetría (`TelemetryIngestionService`, más genérica) en dos contextos. | **Se descarta dividir en dos microservicios** por el timebox del curso, pero sí se aisló en capas dentro del mismo contexto (Domain Service vs. Application Service, ver 4.2.12): si el volumen de sensores creciera, la ingesta cruda es la primera candidata a externalizarse hacia una plataforma IoT genérica (ej. AWS IoT Core), dejando el cálculo de energía y la detección de anomalías —el verdadero valor de negocio— en el contexto propio. |

Ninguna de las siete preguntas llevó a mover una línea del context map de la tabla anterior; el resultado de la discusión fue, en todos los casos, una confirmación explícita del diseño existente (o una nota de refactor futuro), no un cambio de alcance.

### 4.1.3. Software Architecture

La arquitectura se modeló con **C4 Model** aplicando *Diagram-as-Code* mediante **Structurizr DSL**. El modelo fuente único vive en [`arquitectura/diagrama.dsl`](https://github.com/IoT-UPC-202620/edifika-report/blob/main/arquitectura/diagrama.dsl) y de él se generan las cuatro vistas que se presentan a continuación (System Landscape, System Context, Container y Deployment), de modo que los cuatro diagramas son siempre consistentes entre sí por construcción.

La solución adopta una **arquitectura IoT distribuida en tres niveles** —*Cloud Computing*, *Edge Computing* y *IoT Devices con Embedded Systems*— y se apoya en los siguientes estilos y patrones:

- **Microservices Architecture:** escalabilidad y disponibilidad independientes; un fallo en Comunicados no interrumpe Pagos ni el control de accesos.
- **Layered Architecture** dentro de cada microservicio (Interface / Application / Domain / Infrastructure).
- **API Gateway Pattern:** punto único de entrada, validación del JWT, **políticas CORS** (TS15), rate limiting y enrutamiento.
- **Event-Driven Architecture:** un *Message & Event Broker* AMQP/MQTT desacopla la publicación de eventos de dominio de su consumo. Esto **complementa** —no reemplaza— la comunicación REST entre microservicios comprometida en la historia técnica **TS13** del Capítulo III: se usa REST síncrono cuando el emisor necesita la respuesta para continuar (Report → Payment, Residential Management → IAM, y la sincronización Cloud → Edge), y eventos asíncronos cuando el emisor no debe quedar bloqueado ni acoplado al consumidor (todo lo que desemboca en Notification, y los disparadores hacia los contextos IoT).
- **Saga Pattern coreografiado:** consistencia entre contextos sin locks distribuidos (ver 4.1.1.2).
- **CQRS parcial:** Report separa la lectura de reportes de las operaciones de escritura de los demás contextos.
- **Edge Computing offline-first:** el Edge API cachea credenciales y reservas activas, y mantiene operativos los accesos y la iluminación de áreas comunes aunque se caiga el enlace WAN del condominio.

**Tres decisiones que se apartan de lo especificado en el Capítulo III**

La arquitectura debe ser fiel a los requisitos, y donde se aparta de ellos corresponde declararlo en vez de dejar la divergencia tácita:

| Decisión | Lo que especifica el Capítulo III | Lo que hace la arquitectura y por qué |
|---|---|---|
| **Tres contextos IoT en lugar de uno** | TS16 define un único microservicio *IoT Access Management* que gestiona "el registro, estado y eventos de los dispositivos inteligentes del edificio" | Se separa en IoT Access Management, Smart Lighting & Automation e IoT Telemetry & Analytics. Los tres tienen Ubiquitous Language, invariantes y perfiles de carga distintos —decisión de acceso, precedencia de reglas de iluminación e ingesta de series temporales— y agruparlos habría producido un contexto sin un propósito de negocio único. TS16 debe reescribirse como tres historias técnicas de configuración base. |
| **Edge API entre el cloud y los ESP32** | TS17 especifica MQTT **directo** entre el microservicio y las placas ESP32 | Se interpone un gateway on-premise. **Ningún requisito pide operación sin conexión**: es una decisión propia del equipo, tomada porque una cerradura eléctrica que depende del enlace WAN del condominio deja a los residentes sin acceso ante cualquier corte, y porque la latencia de encendido de luces por presencia no tolera un ida y vuelta al cloud. Su costo debe explicitarse: exige **una instalación física por edificio**, lo que para el caso de la entrevista de 2.2.2 —un administrador con 15 edificios— significa 15 despliegues on-premise. Si ese costo se considera inaceptable, la alternativa fiel a TS17 es MQTT directo aceptando la pérdida de acceso durante los cortes. |
| **Riego fuera de alcance** | TS17 incluye "activar riego" entre los comandos de actuación, y US50–US52 cubren riego y monitoreo de agua | Se difiere por falta de hardware (ver 4.1.1.1). TS17 debe corregirse para retirar el riego de su lista de comandos, de modo que la historia técnica no comprometa una capacidad que el alcance ya excluyó. |

| Categoría | Herramienta / Tecnología |
|---|---|
| IDE | Visual Studio Code / IntelliJ IDEA |
| Landing Page | HTML5 / CSS3 / JavaScript |
| Framework Frontend Web | Angular / TypeScript (SPA) |
| Mobile Application | Flutter / Dart |
| Lenguaje / Framework Backend | Java / Spring Boot / Spring Data JPA |
| API Gateway | Spring Cloud Gateway / Java |
| Edge API | Python / Flask / Peewee ORM / SQLite |
| Embedded Applications | ESP32 / C++ |
| Mensajería y eventos | EMQX / RabbitMQ (AMQP y MQTT) |
| Base de Datos | PostgreSQL (datos de negocio) / TimescaleDB (series de telemetría) |
| Servicios externos | Culqi (pagos con tarjeta, Yape y Plin) / Cloudinary (imágenes y comprobantes) / Firebase Cloud Messaging (push) / Twilio (SMS de emergencia) |
| Documentación de APIs | Swagger / OpenAPI 3 con esquema de seguridad Bearer JWT (TS14) |
| Canal de tiempo real | Server-Sent Events (SSE) sobre el API Gateway |
| Diagramación de arquitectura | Structurizr DSL (C4 Model) |
| Testing | JUnit / Mockito |
| CI / CD | GitHub Actions |

#### 4.1.3.1. Software Architecture System Landscape Diagram

El System Landscape amplía el foco: en lugar de mirar hacia adentro de Edifika, ubica la plataforma dentro del **ecosistema completo del negocio de administración de condominios**. A diferencia del Context Diagram, aquí Edifika no se dibuja como sistema *en alcance* con un boundary propio, sino como un sistema más del paisaje, al mismo nivel que los servicios de terceros de los que depende. Esta vista permite discutir el modelo de negocio —quién llega al producto y por qué canal— antes de entrar a decisiones técnicas.

![System Landscape Diagram](assets/img/system-landscape-diagram.png)

*Figura. System Landscape View de Edifika. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.).*

El paisaje está compuesto por tres segmentos de personas y cuatro sistemas externos:

| Elemento | Tipo | Rol en el ecosistema |
|---|---|---|
| Visitor | Person | Prospecto anónimo que consulta el Landing Page estático para conocer el modelo de negocio, los segmentos objetivo y los precios antes de registrarse. |
| Administrator | Person | Administra residentes, pagos, unidades, reservas, comunicados oficiales, foro, reportes y **reglas de automatización IoT**. |
| Owner or Tenant | Person | Consulta deudas, paga, reserva áreas comunes, accede a los espacios vía RFID, interactúa con la iluminación y participa del foro del edificio. |
| Culqi | Software System | Pasarela de pagos externa para cuotas de mantenimiento, deudas y servicios. Es la que habilita los medios de pago locales **Yape y Plin** además de tarjeta de crédito y débito, cumpliendo la táctica de adaptación al contexto local de 2.1.2 (HTTPS/REST). |
| Cloudinary | Software System | Servicio cloud externo de almacenamiento, optimización y entrega de imágenes: publicaciones del foro, comunicados oficiales, **comprobantes de pago** (US22) y fotografías de incidencias (US08) (HTTPS/REST). |
| Firebase Cloud Messaging | Software System | Servicio externo de notificaciones push en tiempo real hacia las aplicaciones móviles (HTTPS/REST). |
| Twilio | Software System | Pasarela externa de SMS, usada como canal redundante del push en las alertas de emergencia, donde US08 exige alcanzar a todos los residentes en menos de 5 segundos (HTTPS/REST). |

El **Visitor** es el segmento que cierra el circuito Landing Page → Web/Mobile Application exigido para la solución: llega de forma anónima al sitio estático y desde ahí los call-to-action lo dirigen a la aplicación que corresponde a su segmento. Los otros dos segmentos ya operan sobre la plataforma autenticados, con roles distintos sobre las mismas capacidades.

#### 4.1.3.2. Software Architecture Context Level Diagrams

El Context Diagram toma el paisaje anterior y fija el foco en Edifika: la plataforma se representa como una caja única en el centro —sin abrir su interior— rodeada por los usuarios que la operan y por los sistemas de terceros con los que se integra. Es el nivel de abstracción con el que se conversa con stakeholders no técnicos: qué entra, qué sale y con quién se habla, sin comprometer todavía ninguna decisión de tecnología.

![Context Diagram](assets/img/context-diagram.png)

*Figura. System Context View de Edifika. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.).*

Las interacciones representadas son:

- **Visitor → Edifika:** consulta información del modelo de negocio, contenido por segmento objetivo y precios a través del Landing Page.
- **Administrator → Edifika:** gestiona la operación del condominio, aprueba reservas y monitorea alertas (incluidas las alertas de consumo anómalo y de falla de luminarias que produce el nivel IoT).
- **Owner or Tenant → Edifika:** consulta deudas, paga, reserva áreas comunes, activa la iluminación de áreas comunes.
- **Edifika → Culqi:** procesa los pagos en línea (HTTPS/REST).
- **Edifika → Cloudinary:** sube y recupera las imágenes asociadas a comunicados oficiales y publicaciones del foro (HTTPS/REST).
- **Edifika → Firebase Cloud Messaging:** envía las notificaciones push de los eventos del sistema a los usuarios móviles (HTTPS/REST).
- **Edifika → Twilio:** envía por SMS las alertas de emergencia, en paralelo al push, para cumplir el alcance y la latencia que exige US08 (HTTPS/REST).

Las integraciones con terceros se acotan deliberadamente a cuatro: la pasarela de pagos, el servicio de gestión de imágenes, el servicio de notificaciones push y la pasarela de SMS. El resto de las capacidades —incluidas las de acceso físico, iluminación y telemetría— se resuelve dentro de Edifika, de modo que ningún flujo crítico de la operación del condominio queda condicionado a la disponibilidad de un proveedor externo.

#### 4.1.3.3. Software Architecture Container Level Diagrams

El Container Diagram abre la caja de Edifika y muestra los **22 containers** que componen la solución, distribuidos en los tres niveles de la arquitectura IoT. Cada container es una unidad de despliegue independiente —se construye, versiona y despliega por separado— y el color en el diagrama identifica su nivel: naranja el Landing Page y el Edge API, azul los clientes y los microservicios de gestión, verde los microservicios IoT cloud, morado el broker, azul oscuro las bases de datos y rojo los dispositivos embebidos.

![Container Diagram](assets/img/container-diagram.png)

*Figura. Container View de Edifika. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.). Cada container es una unidad de despliegue independiente.*

**Decisiones de tecnología por container**

| Nivel | Container | Tecnología | Responsabilidad |
|---|---|---|---|
| Presentación | Landing Page | HTML5 / CSS3 / JavaScript | Sitio estático que presenta el modelo de negocio, los segmentos objetivo y los precios, con call-to-action por segmento. |
| Presentación | Web Application | Angular / TypeScript (SPA) | Pagos, reservas, comunicados, **dashboards de telemetría IoT** y reportes desde el navegador. |
| Presentación | Mobile Application | Flutter / Dart | Pagos, reservas, comunicados, y foro desde iOS y Android. |
| Entrada | API Gateway | Spring Cloud Gateway / Java | Punto único de entrada: enrutamiento, validación del token JWT mediante `BearerAuthorizationRequestFilter`, **políticas CORS** (TS15), rate limiting y publicación del canal **SSE** de disponibilidad en tiempo real. |
| Cloud — gestión | IAM / Auth Service | Spring Boot / Spring Data JPA / Java | Autenticación, autorización, roles y emisión/validación de JWT. |
| Cloud — gestión | Residential Management Service | Spring Boot / Spring Data JPA / Java | Edificios, unidades, residentes y su vínculo con las unidades. |
| Cloud — gestión | Payment Service | Spring Boot / Spring Data JPA / Java | Deudas, cuotas, pagos, comprobantes e integración con Culqi. |
| Cloud — gestión | Reservation Service | Spring Boot / Spring Data JPA / Java | Áreas comunes, disponibilidad, reservas, aprobaciones y cancelaciones. |
| Cloud — gestión | Communication Service | Spring Boot / Spring Data JPA / Java | Comunicados oficiales y avisos administrativos. |
| Cloud — gestión | Messaging / Forum Service | Spring Boot / Spring Data JPA / Java | Publicaciones, comentarios e interacciones del foro privado de cada edificio. |
| Cloud — gestión | Notification Service | Spring Boot / Spring Data JPA / Java | Consume eventos del sistema y envía las notificaciones push (incluidas las alertas IoT). |
| Cloud — gestión | Report Service | Spring Boot / Spring Data JPA / Java | Reportes de pagos, morosidad, reservas y analítica de la comunidad. |
| Cloud — gestión | Incident Management Service | Spring Boot / Spring Data JPA / Java | Reporte y seguimiento de incidencias del edificio y difusión de alertas de emergencia. |
| Cloud — IoT | IoT Access Management Service | Spring Boot / Spring Data JPA / Java | Permisos de acceso a áreas comunes, credenciales RFID , y control de cerraduras según reservas activas. |
| Cloud — IoT | Smart Lighting & Automation Service | Spring Boot / Spring Data JPA / Java | Control de luminarias según presencia, nivel de lux ambiental, horarios de reserva y override manual. |
| Cloud — IoT | IoT Telemetry & Analytics Service | Spring Boot / Spring Data JPA / Java | Ingesta de telemetría, **cálculo cuantitativo de energía (kWh)**, estadísticas y detección de anomalías de hardware. |
| Asincronía | Message & Event Broker | EMQX / RabbitMQ | Recibe y distribuye los eventos de dominio asíncronos (AMQP/MQTT): pagos, reservas, telemetría y comandos de actuadores. |
| Datos | PostgreSQL Database | PostgreSQL | Usuarios, edificios, unidades, deudas, pagos, reservas, comunicados, foro, notificaciones y credenciales de acceso. |
| Datos | Telemetry Database | TimescaleDB / PostgreSQL | Lecturas de sensores de alta frecuencia, registros de presencia, métricas de consumo y series ambientales. |
| Edge | Edge API & Gateway Controller | Flask / Peewee ORM / SQLite / Python | Gateway on-premise: caché de credenciales offline, coordinación local de dispositivos y operación resiliente ante caídas de internet. |
| Device | Common Area Access Controller | ESP32 / Embedded C++ | Lector RFID (RC522), sensor magnético de puerta, buzzer y relé de cerradura eléctrica. |
| Device | Smart Lighting & Sensing Node | ESP32 / Embedded C++ | Sensor de presencia PIR, sensor de lux LDR, sensor de corriente ACS712 y relé de luminaria. |

**Documentación y contrato de las APIs**

Cada uno de los 12 microservicios expone su propia interfaz **Swagger / OpenAPI 3** con el esquema de seguridad *Bearer JWT* declarado, de modo que los endpoints protegidos puedan probarse desde la propia interfaz gráfica introduciendo un token válido (TS14). El API Gateway no agrega ni unifica esas interfaces: cada servicio es dueño del contrato que publica, coherentemente con el principio de que cada bounded context define su propio modelo.

**Cómo se comunican los containers**

1. **Síncrono REST/JSON sobre HTTPS con JWT:** Web y Mobile Application consumen el API Gateway, que enruta hacia los 12 microservicios. Ningún cliente accede directamente a un microservicio.
2. **Asíncrono AMQP:** los microservicios publican eventos de dominio en el broker (`PaymentApproved`, `ReservationApproved`, `AnnouncementPublished`, `PhysicalAccessGranted`, `AbnormalConsumptionDetected`, etc.) y el broker los entrega a Notification, Report, Access y Lighting. Esto es lo que sostiene el Saga coreografiado de 4.1.1.2.
3. **MQTT local (Edge ↔ Device):** los dispositivos ESP32 envían intentos de acceso, estado de puerta, presencia, lux y corriente al Edge API, y reciben de vuelta comandos de apertura, feedback y PWM de luminaria.
4. **MQTT/AMQP sobre WAN (Edge → Cloud):** el Edge API reenvía al broker los registros de auditoría generados offline y la telemetría acumulada.
5. **Sincronización REST (Cloud → Edge):** IoT Access Management sincroniza credenciales activas, reservas vigentes y blacklist; Smart Lighting envía reglas de programación y overrides manuales.
6. **JDBC/SQL:** los microservicios de gestión e IoT persisten en PostgreSQL; Telemetry escribe y consulta agregaciones en TimescaleDB.
7. **SSE (servidor → cliente):** Reservation publica a través del API Gateway un flujo Server-Sent Events con los cambios de disponibilidad de áreas comunes, de modo que un residente que está consultando un horario vea liberarse u ocuparse ese espacio sin recargar (US19 esc. 3 y Estrategia 6 de 2.1.2). Es el único canal de servidor a cliente que no pasa por notificación push.
8. **Interacción física:** el residente presenta su tarjeta RFID, y su movimiento es detectado por el sensor PIR. Es el único canal del diagrama que no es de software.

La distribución de responsabilidades sigue el mismo criterio en los tres niveles: el cloud concentra las reglas de negocio y la persistencia de largo plazo, el edge concentra la autonomía operativa de cada condominio, y los dispositivos se limitan a sensar y actuar. Esa separación es la que permite que un corte de internet degrade la solución en lugar de detenerla: los dispositivos siguen respondiendo al Edge API y este sigue decidiendo con su caché local.

#### 4.1.3.4. Software Architecture Deployment Diagrams

El Deployment Diagram muestra en qué infraestructura se ejecuta cada uno de los containers del nivel anterior. La solución se despliega en **cinco nodos de infraestructura**: los dispositivos del usuario final, el PaaS que aloja el backend, el proveedor gestionado de bases de datos, el broker gestionado y —la diferencia central respecto de una solución puramente web— el **sitio físico del condominio**, donde viven el Edge Server y los dispositivos embebidos.

![Deployment Diagram](assets/img/deployment-diagram.png)

*Figura. Deployment View de Edifika — entorno Production. Elaborado por el equipo aplicando C4 Model con Structurizr DSL (Structurizr, s.f.).*

| Deployment Node | Infraestructura | Containers desplegados |
|---|---|---|
| Client Devices → Web Browser | Chrome, Edge, Safari o Firefox (desktop/mobile) | Landing Page, Web Application |
| Client Devices → Mobile Device | Smartphone iOS o Android | Mobile Application |
| Render → API Gateway Node | Render Web Service | API Gateway |
| Render → Core Microservices Cluster | Render Web Services | IAM, Residential Management, Payment, Reservation, Communication, Messaging/Forum, Notification, Report e Incident Management |
| Render → IoT Cloud Microservices Cluster | Render Web Services | IoT Access Management, Smart Lighting & Automation, IoT Telemetry & Analytics |
| Supabase → PostgreSQL Instance | PostgreSQL 15 gestionado | PostgreSQL Database |
| Supabase → TimescaleDB Instance | PostgreSQL 15 + TimescaleDB | Telemetry Database |
| Message Broker Cloud | CloudAMQP / EMQX Cloud | Message & Event Broker |
| Condominium Site → Edge Server | Raspberry Pi 4 / Mini PC on-premise | Edge API & Gateway Controller |
| Condominium Site → Common Area Door Unit | Hardware embebido en cada puerta de área común | Common Area Access Controller |
| Condominium Site → Common Area Lighting Unit | Hardware embebido en cada luminaria | Smart Lighting & Sensing Node |

El **Condominium Site** se instala una vez por edificio y es lo que hace viable el requisito de resiliencia: si se cae el enlace a internet, el Edge Server sigue validando credenciales contra su caché local y accionando cerraduras y luminarias; cuando el enlace se restablece, reenvía al broker los registros de auditoría y la telemetría acumulada. Los clusters de Render son *stateless*, de modo que escalan horizontalmente sin coordinación, y toda la persistencia queda confinada a Supabase.

La elección de infraestructura responde al perfil de carga de cada pieza: los clusters de Render son *stateless* y escalan horizontalmente sin coordinación; Supabase concentra la persistencia en dos instancias separadas porque el perfil de escritura de la telemetría —alta frecuencia y consulta por series temporales— no es compatible con el transaccional; el broker se contrata gestionado para no asumir la operación de su alta disponibilidad; y el sitio del condominio es la única infraestructura que el equipo instala y mantiene físicamente.

### 4.1.4. Atributos de Calidad y Presupuesto de Rendimiento

Los criterios de aceptación del Capítulo III no solo describen comportamiento: fijan **once presupuestos de tiempo de respuesta** y un conjunto de decisiones de seguridad y concurrencia que son, en rigor, requisitos no funcionales. Esta sección los recoge como restricciones de arquitectura verificables, en lugar de dejarlos enterrados en los escenarios Gherkin.

#### 4.1.4.1. Presupuesto de latencia

| Requisito | Operación | Presupuesto | Container responsable |
|---|---|---|---|
| TS04 | Rechazo 401 de una petición sin token | **< 100 ms**, sin reenviar al microservicio | API Gateway |
| TS01 | Rechazo 401 del filtro `BearerAuthorizationRequestFilter` | **< 100 ms** | API Gateway |
| TS04 | Sobrecosto de enrutamiento del Gateway | **< 200 ms** adicionales al procesamiento propio | API Gateway |
| TS01 | Inicio de sesión y emisión del token | **< 300 ms** | IAM / Auth Service |
| TS03 | Consulta de los datos de un usuario | **< 300 ms** | IAM / Auth Service |
| TS02 | Registro de usuario (incluye hashing) | **< 500 ms** | IAM / Auth Service |
| TS06 | Lista de residentes vinculados a un edificio | **< 400 ms** | Residential Management Service |
| TS11 | Consulta REST Report → Payment | **< 500 ms** | Payment Service |
| US25 | Reporte financiero consolidado completo | **< 1 s** | Report Service |
| TS10 | Entrega de la notificación push vía Firebase | **< 2 s** | Notification Service |
| US08 | Alerta de emergencia (push **y SMS**) a todos los residentes | **< 5 s** | Incident Management + Notification Service |

**Implicación sobre el diseño.** El presupuesto más exigente no es ninguno individual sino su composición. US25 obliga a que el reporte financiero completo responda en menos de 1 segundo, mientras que Report debe consultar a Payment por REST (**< 500 ms**, TS11) y, para la analítica de consumo, también a IoT Telemetry & Analytics. Encadenar dos llamadas síncronas dentro de ese presupuesto, sumando el sobrecosto del Gateway (**< 200 ms**), deja un margen muy estrecho. Se adoptan dos medidas:

1. **Paralelizar** las dos consultas salientes de Report en vez de encadenarlas, de modo que el costo sea el de la más lenta y no la suma.
2. **Cachear** en Report el resultado consolidado por periodo con TTL corto, dado que un reporte financiero mensual cerrado no cambia entre consultas.

Esta es, además, la razón concreta por la que el *Design Critique* de Report (4.1.1.3) deja anotada la proyección asíncrona de los datos de Payment como refactor natural: es la solución estructural a este presupuesto si el volumen crece.

#### 4.1.4.2. Seguridad

Las historias TS01 y TS02 especifican las decisiones criptográficas y de control de acceso que el sistema debe implementar. Se documentan aquí para que no queden como detalle de implementación:

| Decisión | Especificación | Origen |
|---|---|---|
| Hashing de contraseñas | **BCrypt**; la contraseña nunca se almacena ni circula en claro | TS02 |
| Firma del token | **JWT HMAC-SHA256** | TS01 |
| Contenido del token | `email`, `userId` y `rol` | TS01 |
| Vigencia del token | **7 días** | TS01 |
| Bloqueo por fuerza bruta | **5 intentos fallidos → cuenta bloqueada 15 minutos** | TS01 |
| Validación en el borde | Filtro `BearerAuthorizationRequestFilter` en el API Gateway; ningún microservicio recibe tráfico no autenticado | TS01, TS04 |
| Política de orígenes | **CORS** configurado en el API Gateway: un origen no registrado recibe error de política **sin que la solicitud se reenvíe** a ningún microservicio | TS15 |

#### 4.1.4.3. Concurrencia y consistencia

| Escenario | Requisito | Mecanismo |
|---|---|---|
| Dos residentes reservan la misma ventana horaria | La reserva se otorga **al primero en confirmar**; el segundo recibe **HTTP 409** | Restricción de unicidad sobre `(CommonArea, TimeWindow)` en Reservation, validada por `AvailabilityService` dentro de la transacción local |
| Un tercer usuario está viendo ese mismo horario | La disponibilidad se actualiza **en tiempo real** para él (US19 esc. 3 y Estrategia 6 de 2.1.2) | Canal **SSE** publicado por Reservation a través del API Gateway (ver 4.1.3.3) |
| 50 reservas registradas en 1 minuto | El sistema procesa todas las notificaciones sin degradarse (US11) | Consumo asíncrono vía broker con colas de reintento por evento, en vez de notificación síncrona en la transacción de reserva |
| Límite diario de publicaciones en el foro | **HTTP 429** | `PostQuotaService` (4.2.7) |
| Voto duplicado en una encuesta | **HTTP 409** | `PollVotingService` (4.2.6) |

#### 4.1.4.4. Degradación y tolerancia a fallos

Los criterios de aceptación describen el comportamiento esperado cuando una dependencia falla, y la arquitectura lo resuelve así:

| Fallo | Comportamiento exigido | Mecanismo |
|---|---|---|
| Falla el almacenamiento de comprobantes antiguos | Mostrar "Detalles temporalmente no disponibles" en lugar de un error (US22 esc. 3) | El historial de pagos se sirve desde PostgreSQL aunque la imagen alojada en Cloudinary no resuelva; el adjunto degrada de forma independiente del registro |
| Falla la pasarela Culqi | La deuda revierte a `PENDING` | Compensación de la Saga de pago (4.1.1.2) |
| Falla el envío a Firebase | La notificación queda pendiente de reintento sin afectar al contexto de origen | Colas de reintento en Notification (4.2.5) |
| Un microservicio consultado no responde | El llamante no colapsa y registra el fallo en sus logs (TS13) | Timeouts y manejo controlado de errores en los clientes REST |
| Un dispositivo IoT deja de emitir | Marcarlo **OFFLINE**, descartar comandos pendientes hacia él y notificar al administrador (TS16, TS17) | `DeviceHealthMonitor` en IoT Telemetry & Analytics (4.2.12.3) |

## 4.2. Tactical-Level Domain-Driven Design

**Trazabilidad con el Capítulo III**

Antes del detalle por capas, la tabla siguiente cierra la trazabilidad entre los 12 bounded contexts y el alcance especificado en el Capítulo III, de modo que ningún contexto exista sin una necesidad que lo justifique y ninguna historia comprometida quede sin contexto implementador.

| # | Bounded Context | Épica(s) del Cap. III | Historias que implementa | Historia técnica base |
|---|---|---|---|---|
| 4.2.1 | IAM / Auth | EP01 | US01, US02, US03, US05, US06, US34 | TS01, TS02, TS03 |
| 4.2.2 | Residential Management | EP01 | US04, US07 | TS06 |
| 4.2.3 | Reservation | EP03 | US16, US17, US18, US19, US20, US33, US35, US38, US39, US40 | TS08 |
| 4.2.4 | Payment | EP04 | US21, US22, US23, US24, US27, US28, US30 | TS07 |
| 4.2.5 | Notification | EP02 | US09, US10, US11, US12, US31 | TS10 |
| 4.2.6 | Communication | EP02 | US13, US14, US15, US32, US36 | TS09 |
| 4.2.7 | Forum | EP02 | US29, US37 | TS12 |
| 4.2.8 | Report | EP04 | US25, US26 | TS11 |
| 4.2.9 | Incident Management | EP02 | US08 | *(sin TS — ver nota)* |
| 4.2.10 | IoT Access Management | EP07 | US48, US49 | TS16, TS17 |
| 4.2.11 | Smart Lighting & Automation | EP07 | US53 | TS17 |
| 4.2.12 | IoT Telemetry & Analytics | EP07 | *(sin historia asociada — ver nota)* | TS17 |

Cuatro observaciones que se desprenden de esta trazabilidad:

- **EP05 (Infraestructura, seguridad y arquitectura técnica)** no se mapea a un bounded context propio porque es transversal: TS04, TS13, TS14 y TS15 se materializan en el API Gateway, y TS05 en la estrategia de persistencia descrita en 4.1.1.1 — ambos son infraestructura, no dominio.
- **EP06 (Landing Page e Interfaz Web)**, con US41–US47, tampoco corresponde a un bounded context: se implementa en los containers *Landing Page* y *Web Application* de 4.1.3.3, que consumen los contextos existentes sin aportar dominio propio.
- **Incident Management** implementa US08, la única historia de EP02 que no correspondía a Communication ni a Notification, y no tiene historia técnica asociada porque el Capítulo III no previó el microservicio: TS01–TS17 no incluyen su configuración base. Queda anotado como historia técnica a añadir junto con las de §4.2.12.
- **IoT Telemetry & Analytics** es el único contexto sin respaldo en el backlog de 3.3: responde al requisito del curso sobre procesamiento, cálculo estadístico y visualización de información cuantitativa recolectada por los dispositivos, pero el Capítulo III no llegó a redactar las historias correspondientes (medición de consumo en kWh, dashboard de telemetría y detección de anomalías de hardware). Queda registrado como **brecha de especificación a cerrar en la siguiente entrega**, incorporando esas historias a EP07 antes de dar por cerrado el alcance.

**Nivel de detalle de cada capa**

Cada bounded context se documenta a continuación separando Domain, Interface, Application e Infrastructure Layer. La subsección 4.2.X.1–4.2.X.4 da el diccionario en prosa (nombre, propósito e intención de cada clase, con sus atributos y relaciones principales); el detalle exacto de atributos tipados, métodos, *scope* y multiplicidad que pide el statement para el nivel de código vive en el Class Diagram UML de 4.2.X.6.1 de cada contexto (los 11 contextos ya cuentan con el suyo, ver 4.2.1–4.2.12) — evitando así transcribir en texto plano el mismo detalle que el diagrama ya expresa formalmente.

### 4.2.1. Bounded Context: IAM / Auth

#### 4.2.1.1. Domain Layer

El Domain Layer del bounded context IAM/Auth concentra la lógica de negocio relacionada con la identidad, autenticación y autorización de los usuarios dentro de Edifika. Este contexto se encarga de que cada usuario pueda registrarse, autenticarse y mantener una sesión activa mediante tokens, resguardando en todo momento la unicidad de las credenciales y la correcta asignación de roles.

El agregado principal identificado es:

**User**: concentra los datos y el comportamiento asociado a un usuario del sistema —credenciales, correo, estado de cuenta y rol— y es responsable de aplicar reglas como la validez de la contraseña o la coherencia entre el usuario y su rol.

La validación de reglas de negocio del contexto se apoya en un Domain Service, el **UserDomainService**, que centraliza comprobaciones como la unicidad del correo electrónico antes de registrar o autenticar una cuenta.

## Aggregate: UserAggregate
Representa a un usuario dado de alta en la plataforma, junto con su rol, estado y credenciales de acceso. Es responsable de sus propias transiciones de estado (activar, desactivar, cambiar contraseña).

### Entity: User

| Atributo | Tipo | Descripción |
|---|---|---|
| idUser | Long | Identificador único del usuario. |
| idRol | RolId | Referencia al rol asignado al usuario. |
| user | String | Nombre de usuario utilizado para el acceso. |
| passwordHash | String | Hash de la contraseña, nunca almacenado en texto plano. |
| email | String | Correo electrónico del usuario. |
| status | UserStatus | Estado actual de la cuenta. |
| telefono | String | Número de contacto del usuario. |

### Entity: UserRol

| Atributo | Tipo | Descripción |
|---|---|---|
| idRole | Long | Identificador único del rol. |
| role | String | Nombre del rol. Valores admitidos: `ADMIN` y `RESIDENT`, los dos únicos segmentos objetivo definidos en 1.3 y sobre los que se redactaron las historias de usuario del Capítulo III. |

## ValueObject: Email
Encapsula y valida la estructura del correo electrónico antes de asociarlo a una cuenta de usuario.

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Dirección de correo electrónico. |

## ValueObject: PasswordHash
Protege la contraseña del usuario asegurando que solo su forma hasheada circule dentro del dominio. El algoritmo es **BCrypt**, conforme a TS02.

| Atributo | Tipo | Descripción |
|---|---|---|
| hash | String | Valor resultante del hashing de la contraseña. |

## ValueObject: JwtToken
Representa la sesión activa de un usuario autenticado, junto con su vigencia. Conforme a TS01, el token se firma con **HMAC-SHA256**, transporta `email`, `userId` y `rol` en su payload, y expira a los **7 días** de emitido.

| Atributo | Tipo | Descripción |
|---|---|---|
| token | String | Cadena del token JWT emitido. |
| expiresAt | DateTime | Momento en que el token deja de ser válido. |

## Enumeration

| Enumeración | Valores |
|---|---|
| UserStatus | `ACTIVE`, `INACTIVE`, `BLOCKED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas y métodos |
|---|---|---|
| UserDomainService | Validar las reglas de negocio de usuarios y roles antes de persistir o autenticar una cuenta. | - El correo electrónico debe ser único en todo el sistema.<br>- Las credenciales deben cumplir el formato mínimo de seguridad.<br>- Todo usuario debe tener un rol válido asignado.<br>- Método: `validateUserRules(user)`. |
| LoginAttemptService | Proteger la cuenta frente a ataques de fuerza bruta. | - Tras **5 intentos fallidos consecutivos**, la cuenta pasa a `BLOCKED` durante **15 minutos** (TS01).<br>- Un inicio de sesión exitoso reinicia el contador.<br>- Métodos: `registerFailure(email)`, `isBlocked(email)`. |

#### 4.2.1.2. Interface Layer

Esta capa expone el bounded context al exterior, recibiendo las solicitudes HTTP provenientes del API Gateway y traduciéndolas en comandos hacia la Application Layer.

**AuthController** *(REST Controller)*

Punto de entrada del microservicio de autenticación. Recibe las peticiones de login, registro y validación de sesión desde el API Gateway, valida el formato de entrada (DTOs) y delega la lógica al `AuthApplicationService`.

| Método | Firma | Descripción |
|---|---|---|
| `login` | `login(request: LoginRequest): ResponseEntity<TokenResponse>` | Recibe credenciales y devuelve un JWT si son válidas. |
| `register` | `register(request: RegisterRequest): ResponseEntity<UserResponse>` | Registra un nuevo usuario en el sistema. |
| `validateSession` | `validateSession(token: String): ResponseEntity<Boolean>` | Verifica si un token de sesión sigue siendo válido. |

El `AuthController` no contiene lógica de negocio: su responsabilidad es exclusivamente recibir, validar el formato de la solicitud y delegar.

#### 4.2.1.3. Application Layer

Esta capa coordina los flujos de negocio del bounded context IAM/Auth, sin definir reglas propias, apoyándose en las entidades y servicios del Domain Layer.

Se emplea un Command Handler para procesar las acciones explícitas que un usuario solicita —iniciar sesión o registrarse— y un servicio de soporte encargado de la emisión y verificación de tokens.

Clases principales:

- **AuthApplicationService**: orquesta los comandos de login y registro de usuarios.
- **TokenService**: gestiona la generación y validación de tokens JWT (HMAC-SHA256, vigencia de 7 días) una vez completada la autenticación.
- **AccountLockPolicy**: aplica el bloqueo temporal de la cuenta tras cinco intentos fallidos, apoyándose en `LoginAttemptService`.

## Auth Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Iniciar sesión | AuthApplicationService.handle(LoginCommand) | Verifica las credenciales del usuario y emite un token JWT. |
| Registrar usuario | AuthApplicationService.handle(RegisterCommand) | Aplica las reglas de negocio y crea la cuenta del nuevo usuario. |

## Token Service

| Capability | Método | Descripción |
|---|---|---|
| Generar token | generateToken(user) | Construye y firma un JWT a partir de los datos del usuario autenticado. |
| Validar token | validateToken(token) | Comprueba la firma y el tiempo de vigencia de un token recibido. |

#### 4.2.1.4. Infrastructure Layer

Esta capa implementa el acceso a los recursos externos que el bounded context necesita para operar, garantizando la persistencia de los datos conforme a los contratos definidos en el Domain Layer.

La clase principal de esta capa es:

**UserRepositoryImpl**: implementación concreta de la interfaz `UserRepository`. El hashing de contraseñas con **BCrypt** y la verificación de credenciales se resuelven en esta capa mediante el `PasswordEncoder` de Spring Security, de modo que el dominio solo manipule el Value Object `PasswordHash`. Gestiona el ciclo de vida de los usuarios en la base de datos —guardar, buscar y verificar credenciales— e incorpora validaciones adicionales para evitar registros duplicados de correo antes de crear una cuenta nueva.

## Repositories

### UserRepository

| Método | Descripción |
|---|---|
| save(User user) | Guarda un nuevo usuario o actualiza uno ya existente. |
| findById(Long id) | Recupera un usuario a partir de su identificador único. |
| findByEmail(String email) | Recupera un usuario a partir de su correo electrónico. |
| existsByEmail(String email) | Verifica si ya existe una cuenta registrada con ese correo. |

#### 4.2.1.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes IAM/Auth](assets/img/ComponentView_Auth_Service.png)

*Figura. Diagrama de Componentes — Auth Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.1.6. Bounded Context Software Architecture Code Level Diagrams

En esta sección se presenta el nivel de mayor detalle de implementación del bounded context IAM/Auth, correspondiente al cuarto nivel del C4 Model: el Code diagram. A diferencia de los niveles de Context, Container y Component, este nivel se representa mediante un diagrama de clases UML, ya que detalla la estructura interna de las clases del Domain Layer: sus atributos, métodos, visibilidad y las relaciones con su respectiva multiplicidad. A continuación se desglosa en dos apartados: el diagrama de clases del dominio y el diagrama de diseño de base de datos.

##### 4.2.1.6.1. Bounded Context Domain Layer Class Diagrams

![Clases IAM — vista general](assets/img/iam-auth.png)

*Figura. Diagrama de Clases IAM — vista general. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

![Clases IAM — capas de Aplicación y Dominio](assets/img/iam-auth1.png)

*Figura. Diagrama de Clases IAM — capas de Aplicación y Dominio. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

![Clases IAM — capas de Infraestructura e Interfaces](assets/img/iam-auth2.png)

*Figura. Diagrama de Clases IAM — capas de Infraestructura e Interfaces. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.1.6.2. Bounded Context Database Design Diagram

El modelo entidad-relación del bounded context IAM/Auth está compuesto por las tablas **UserRol** y **User**. UserRol almacena los dos roles disponibles en la plataforma (`ADMIN` y `RESIDENT`, correspondientes a los dos segmentos objetivo de 1.3), mientras que User contiene los datos de cada cuenta registrada —credenciales, correo, estado y teléfono— junto con la referencia al rol que le corresponde.

La relación entre ambas tablas es `UserRol (1) —— (N) User`: un rol puede asignarse a múltiples usuarios, pero cada usuario posee un único rol activo, reforzado por una llave foránea obligatoria (`id_rol`).

El resto de tablas del modelo de Edifika (Payments, Reservations, Forum, Notifications, etc.) hacen referencia a `User.id_user`, pero corresponden a otros bounded contexts del sistema y no forman parte de este diagrama.

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de IAM). Elaborado utilizando LucidChart (LucidChart, s.f.).*

### 4.2.2. Bounded Context: Residential Management

#### 4.2.2.1. Domain Layer

El Domain Layer de Residential Management concentra la lógica de tenencia del sistema: qué administradora opera qué edificio, cómo se estructuran sus unidades y cómo se vincula un residente a la unidad que ocupa.

Los agregados identificados son:

**PropertyManager**: representa a la administradora o junta que opera uno o varios edificios. Es la raíz de tenencia del sistema y responde al caso real recogido en la entrevista, donde un único administrador gestiona 15 edificios.

**Building**: representa el edificio administrado, con su conjunto de torres y unidades.

La regla central del contexto se apoya en el Domain Service **UnitAssignmentService**.

## Aggregate: PropertyManagerAggregate
Representa a la administradora dada de alta en la plataforma y a los edificios que le pertenecen.

### Entity: PropertyManager

| Atributo | Tipo | Descripción |
|---|---|---|
| idPropertyManager | Long | Identificador único de la administradora. |
| name | String | Nombre de la administradora o junta. |

## Aggregate: BuildingAggregate
Representa un edificio administrado y su padrón de unidades.

### Entity: Building

| Atributo | Tipo | Descripción |
|---|---|---|
| idBuilding | Long | Identificador único del edificio. |
| idPropertyManager | PropertyManagerId | Referencia a la administradora propietaria. |
| name | String | Nombre del edificio. |
| address | Address | Dirección del edificio. |

### Entity: Unit

| Atributo | Tipo | Descripción |
|---|---|---|
| idUnit | Long | Identificador único de la unidad. |
| idBuilding | BuildingId | Referencia al edificio al que pertenece. |
| tower | TowerId | Torre a la que pertenece la unidad. |
| number | UnitNumber | Número de la unidad dentro de la torre. |
| status | UnitStatus | Estado actual de la unidad. |

### Entity: ResidentUnitLink

| Atributo | Tipo | Descripción |
|---|---|---|
| idLink | Long | Identificador único del vínculo. |
| idResident | Long | Referencia al residente vinculado. |
| idUnit | UnitId | Referencia a la unidad vinculada. |
| type | LinkType | Tipo de vínculo (`OWNER`/`TENANT`). |
| validFrom | DateTime | Inicio de vigencia del vínculo. |
| validUntil | DateTime | Fin de vigencia del vínculo. |

Este vínculo es el registro que habilita la creación de la cuenta del residente en IAM.

## ValueObject: Address

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Dirección física del edificio. |

## ValueObject: TowerId

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Identificador de la torre dentro del edificio. |

## ValueObject: UnitNumber

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Número de la unidad dentro de la torre. |

## Enumeration

| Enumeración | Valores |
|---|---|
| UnitStatus | `OCCUPIED`, `VACANT` |
| LinkType | `OWNER`, `TENANT` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| UnitAssignmentService | Garantizar la coherencia de la asignación residente–unidad. | - Un residente solo puede vincularse a una unidad activa.<br>- Una unidad no admite dos vínculos `OWNER` simultáneos. |

**Alcance multi-edificio.** Todas las consultas del contexto se resuelven acotadas al `PropertyManager` del administrador autenticado, de modo que un administrador con varios edificios opere sobre todos desde una misma sesión sin que los datos de administradoras distintas se mezclen. El `buildingId` viaja como parte del contexto de la petición hacia los demás microservicios, que lo usan para filtrar sus propios datos.

#### 4.2.2.2. Interface Layer

**BuildingController**: registro y consulta de edificios y sus unidades (US07). **UnitController**: alta, edición y estado de cada unidad. **ResidentUnitController**: vinculación de residentes y verificación de la información por torre y departamento (US04).

#### 4.2.2.3. Application Layer

Esta capa coordina el alta y mantenimiento del padrón de edificios, unidades y vínculos, sin definir reglas propias.

## Residential Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Registrar edificio | BuildingCommandService.handle(RegisterBuildingCommand) | Da de alta un edificio y sus torres. |
| Registrar/editar unidad | UnitCommandService.handle(UpsertUnitCommand) | Crea o actualiza una unidad y su estado. |
| Vincular residente | ResidentUnitCommandService.handle(LinkResidentCommand) | Crea el vínculo residente–unidad aplicando `UnitAssignmentService`. |
| Cerrar vínculo | ResidentUnitCommandService.handle(CloseLinkCommand) | Cierra la vigencia de un vínculo existente. |

`ResidentialQueryService` resuelve el directorio de unidades y residentes. El contexto publica `ResidentLinkedToUnit`, que habilita el alta de la cuenta del residente.

#### 4.2.2.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| PropertyManagerRepository | Persistencia de administradoras. |
| BuildingRepository | Persistencia de edificios. |
| UnitRepository | Persistencia de unidades. |
| ResidentUnitLinkRepository | Persistencia de vínculos residente–unidad. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; `IamProvisioningClient`, cliente REST síncrono que entrega a IAM/Auth el vínculo residente–unidad que autoriza la creación de la cuenta.

#### 4.2.2.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Residential Management](assets/img/ComponentView_Residential_Service.png)

*Figura. Diagrama de Componentes — Residential Management Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.2.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.2.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Residential Management](assets/img/residential_class_diagramm.png)

*Figura. Diagrama de Clases — Residential Management. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.2.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Residential Management). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.3. Bounded Context: Reservation

#### 4.2.3.1. Domain Layer

El agregado principal identificado es:

**Reservation**: solicitud de uso de un área común, con residente, ventana horaria y estado. La regla central del contexto se resuelve mediante el Domain Service **AvailabilityService**.

## Aggregate: ReservationAggregate

### Entity: Reservation

| Atributo | Tipo | Descripción |
|---|---|---|
| idReservation | Long | Identificador único de la reserva. |
| idResident | Long | Residente que solicita la reserva. |
| idCommonArea | CommonAreaId | Área común reservada. |
| timeWindow | TimeWindow | Ventana horaria solicitada. |
| status | ReservationStatus | Estado actual de la reserva. |

## Aggregate: CommonAreaAggregate

### Entity: CommonArea

| Atributo | Tipo | Descripción |
|---|---|---|
| idCommonArea | Long | Identificador único del área común. |
| name | String | Nombre del área. |
| capacity | AreaCapacity | Aforo del área. |
| status | CommonAreaStatus | Estado del área (`ENABLED`/`DISABLED`), que el administrador conmuta según mantenimiento o restricciones (US38). |

### Entity: AreaRule

| Atributo | Tipo | Descripción |
|---|---|---|
| idRule | Long | Identificador único de la regla. |
| idCommonArea | CommonAreaId | Área común a la que aplica. |
| allowedWindow | TimeWindow | Franja horaria permitida. |
| maxDuration | Duration | Duración máxima de una reserva. |
| minAdvance | Duration | Anticipación mínima exigida (US39). |

## ValueObject: TimeWindow

| Atributo | Tipo | Descripción |
|---|---|---|
| start | DateTime | Inicio de la ventana. |
| end | DateTime | Fin de la ventana. |

## ValueObject: AreaCapacity

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Int | Aforo máximo del área común. |

## Enumeration

| Enumeración | Valores |
|---|---|
| ReservationStatus | `PENDING`, `APPROVED`, `REJECTED`, `CANCELLED` |
| CommonAreaStatus | `ENABLED`, `DISABLED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| AvailabilityService | Resolver la disponibilidad de un área común. | - No se admite una reserva fuera de las reglas configuradas del área.<br>- No se admite una segunda reserva sobre una ventana horaria ya ocupada (US19). |

#### 4.2.3.2. Interface Layer

**ReservationController**: solicitud y cancelación de reservas por el residente (US17, US20). **ReservationApprovalController**: aprobación, rechazo y cancelación administrativa (US18, US35). **CommonAreaController**: registro de áreas, habilitación/deshabilitación y configuración de reglas (US38, US39). **AvailabilityQueryController**: disponibilidad del residente y mapa de ocupación global del administrador (US16, US33); expone además el flujo **SSE** al que se suscriben los clientes para recibir los cambios de disponibilidad en vivo (US19 esc. 3). **ReservationHistoryController**: historial y estadísticas de uso (US40).

#### 4.2.3.3. Application Layer

## Reservation Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Solicitar reserva | ReservationCommandService.handle(CreateReservationCommand) | Valida disponibilidad contra `AvailabilityService` antes de crear la reserva. |
| Aprobar/rechazar reserva | ReservationApprovalCommandService.handle(ResolveReservationCommand) | Aplica la decisión administrativa sobre la reserva. |
| Configurar área común | CommonAreaCommandService.handle(UpsertCommonAreaCommand) | Alta, habilitación/deshabilitación y reglas del área. |

`ReservationQueryService` resuelve el calendario de reservas. `ReservationSchedulerService` es el scheduler interno que detecta el inicio de cada ventana horaria. `AvailabilityBroadcastService` reemite los cambios por el canal SSE del API Gateway, de modo que un residente que esté consultando ese horario vea la actualización sin recargar. La unicidad de `(CommonArea, TimeWindow)` se garantiza en la transacción local: el segundo solicitante recibe **HTTP 409**.

## Domain Events Published

| Evento | Disparado por | Consumido por |
|---|---|---|
| ReservationApproved | ReservationApprovalCommandService | Notification, IoT Access Management |
| ReservationStarted | ReservationSchedulerService | Smart Lighting & Automation |
| ReservationCancelled | ReservationApprovalCommandService / ReservationCommandService | Notification |

#### 4.2.3.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| ReservationRepository | Persistencia de reservas. |
| CommonAreaRepository | Persistencia de áreas comunes. |
| AreaRuleRepository | Persistencia de reglas de uso por área. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; publicador AMQP de los eventos del contexto hacia el Message & Event Broker.

#### 4.2.3.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Reservation](assets/img/ComponentView_Reservation_Service.png)

*Figura. Diagrama de Componentes — Reservation Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.3.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.3.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Reservation](assets/img/reservation_class_diagramm.png)

*Figura. Diagrama de Clases — Reservation. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.3.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Reservation). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.4. Bounded Context: Payment

#### 4.2.4.1. Domain Layer

El agregado principal identificado es:

**Payment**: pago de un residente con monto, medio, comprobante adjunto y estado. Las reglas del contexto se resuelven mediante los Domain Services **DebtCalculationService** y **DelinquencyEvaluationService**, este último con efecto fuera del contexto: un residente con deuda vencida se marca moroso, y esa marca restringe su acceso físico.

## Aggregate: PaymentAggregate
Agrupa el pago, su comprobante y la constancia generada al aprobarse.

### Entity: Payment

| Atributo | Tipo | Descripción |
|---|---|---|
| idPayment | Long | Identificador único del pago. |
| idDebt | DebtId | Deuda que el pago cubre. |
| amount | Money | Monto pagado. |
| method | PaymentMethod | Medio de pago utilizado. |
| status | PaymentStatus | Estado del pago. |

### Entity: Debt

| Atributo | Tipo | Descripción |
|---|---|---|
| idDebt | Long | Identificador único de la deuda. |
| idUnit | UnitId | Unidad a la que corresponde la deuda. |
| period | BillingPeriod | Periodo de mantenimiento facturado. |
| amount | Money | Monto adeudado. |
| status | DebtStatus | Estado de la deuda. El estado `IN_REVIEW` es el que exige el Escenario 1 de US22 cuando el residente adjunta su comprobante y este aún no ha sido validado por el administrador. |

### Entity: Receipt

| Atributo | Tipo | Descripción |
|---|---|---|
| idReceipt | Long | Identificador único de la constancia. |
| idPayment | PaymentId | Pago sobre el que se emite. |
| issuedAt | DateTime | Fecha de emisión. |

### Entity: PaymentProof

| Atributo | Tipo | Descripción |
|---|---|---|
| idProof | Long | Identificador único del comprobante. |
| idPayment | PaymentId | Pago al que corresponde. |
| fileReference | String | Referencia al archivo almacenado. |
| reviewResult | String | Resultado de la revisión (US22 esc. 2 contempla el rechazo por comprobante ilegible). |

## Entity independiente: Expense
No forma parte del agregado Payment; registra los egresos del edificio a cargo del administrador. Es el origen de los egresos que US25 y US27 exigen reportar.

| Atributo | Tipo | Descripción |
|---|---|---|
| idExpense | Long | Identificador único del egreso. |
| idBuilding | BuildingId | Edificio al que corresponde el egreso. |
| category | String | Categoría del egreso. |
| provider | String | Proveedor asociado. |
| amount | Money | Monto del egreso. |
| period | BillingPeriod | Periodo del egreso. |

## ValueObject: Money

| Atributo | Tipo | Descripción |
|---|---|---|
| amount | Decimal | Monto monetario. |
| currency | String | Moneda del monto. |

## ValueObject: BillingPeriod

| Atributo | Tipo | Descripción |
|---|---|---|
| month | Int | Mes del periodo de facturación. |
| year | Int | Año del periodo de facturación. |

## Enumeration

| Enumeración | Valores |
|---|---|
| PaymentStatus | `PENDING`, `IN_REVIEW`, `PAID`, `REJECTED` |
| DebtStatus | `PENDING`, `IN_REVIEW`, `SETTLED`, `OVERDUE` |
| PaymentMethod | `CARD`, `YAPE`, `PLIN`, `MANUAL` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| DebtCalculationService | Consolidar el saldo vigente de una unidad. | Suma las deudas y los pagos aplicados de la unidad. |
| DelinquencyEvaluationService | Evaluar la morosidad del residente. | Un residente con deuda vencida se marca moroso; esa marca restringe su acceso físico. |

Repository Pattern aplicado para desacoplar estas reglas de la persistencia.

#### 4.2.4.2. Interface Layer

**DebtController**: consulta de la deuda vigente del residente (US21). **PaymentController**: registro del pago con comprobante y pago en línea (US22, US30). **PaymentApprovalController**: registro y aprobación de pagos por el administrador (US23). **DelinquencyController**: listado de residentes morosos (US24). **PaymentHistoryController**: consulta de pagos pasados (US28). **ExpenseController**: registro de egresos y facturas del edificio por el administrador. **ExpenseSummaryController**: resumen de gastos visible para el residente (US27).

#### 4.2.4.3. Application Layer

## Payment Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Registrar pago | PaymentCommandService.handle(RegisterPaymentCommand) | Registra el pago, deja la deuda en `IN_REVIEW` al recibir el comprobante y orquesta la Saga de aprobación (actualiza el estado → genera la constancia → emite `PaymentApproved`), con compensación si Culqi falla. |
| Registrar egreso | ExpenseCommandService.handle(RegisterExpenseCommand) | Da de alta un egreso o factura del edificio. |
| Evaluar morosidad | DelinquencyCommandService.handle(EvaluateDelinquencyCommand) | Evalúa periódicamente las deudas vencidas. |

`PaymentQueryService` resuelve el estado de cuenta del residente. El contexto publica `PaymentApproved` —consumido por Notification— y `ResidentMarkedDelinquent` —consumido por IoT Access Management—.

#### 4.2.4.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| PaymentRepository | Persistencia de pagos. |
| DebtRepository | Persistencia de deudas. |
| ReceiptRepository | Persistencia de constancias de pago. |
| PaymentProofRepository | Persistencia de comprobantes de pago. |
| ExpenseRepository | Persistencia de egresos y facturas. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; **Adapter Pattern (Anti-Corruption Layer)** hacia la pasarela de pagos **Culqi**, traduciendo su API externa a la interfaz propia del sistema y habilitando tarjeta de crédito/débito junto con los medios locales **Yape y Plin**; **Adapter (ACL) hacia Cloudinary** para almacenar y servir las imágenes de los comprobantes de pago, con degradación independiente —si el adjunto no resuelve, el historial de pagos se sigue sirviendo desde PostgreSQL y la interfaz muestra "Detalles temporalmente no disponibles", según US22 esc. 3—; generador de la constancia de pago y publicador AMQP de los eventos del contexto.

#### 4.2.4.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Payment](assets/img/ComponentView_Payment_Service.png)

*Figura. Diagrama de Componentes — Payment Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.4.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.4.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Payment](assets/img/payment_class.png)

*Figura. Diagrama de Clases — Payment. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.4.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Payment). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.5. Bounded Context: Notification

#### 4.2.5.1. Domain Layer

El agregado principal identificado es:

**Notification**: notificación dirigida a un destinatario, con tipo, canal, contenido y estado. La regla del contexto se resuelve mediante el Domain Service **NotificationRoutingService**.

## Aggregate: NotificationAggregate

### Entity: Notification

| Atributo | Tipo | Descripción |
|---|---|---|
| idNotification | Long | Identificador único de la notificación. |
| recipient | Recipient | Destinatario de la notificación. |
| type | NotificationType | Tipo de notificación. |
| channel | NotificationChannel | Canal de envío. |
| priority | Priority | Prioridad de la notificación. |
| content | String | Contenido de la notificación. |
| status | NotificationStatus | Estado de entrega. |

### Entity: DeviceToken

| Atributo | Tipo | Descripción |
|---|---|---|
| idToken | Long | Identificador único del token. |
| idUser | Long | Usuario propietario del dispositivo. |
| token | String | Token del dispositivo móvil sobre el que se entrega el push. |

### Entity: NotificationPreference

| Atributo | Tipo | Descripción |
|---|---|---|
| idPreference | Long | Identificador único de la preferencia. |
| idUser | Long | Usuario propietario de la preferencia. |
| type | NotificationType | Tipo de notificación configurado. |
| channel | NotificationChannel | Canal preferido para ese tipo (US12). |

## ValueObject: Recipient

| Atributo | Tipo | Descripción |
|---|---|---|
| idUser | Long | Identificador del destinatario. |

## Enumeration

| Enumeración | Valores |
|---|---|
| NotificationChannel | `PUSH`, `EMAIL`, `SMS` |
| Priority | `NORMAL`, `EMERGENCY` |
| NotificationStatus | `PENDING`, `SENT`, `FAILED`, `READ` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| NotificationRoutingService | Resolver destinatarios y canal de entrega según las preferencias vigentes. | Una notificación de prioridad `EMERGENCY` se envía simultáneamente por push y por SMS e ignora las preferencias del usuario, porque US08 exige alcanzar a todos los residentes en menos de 5 segundos. |

#### 4.2.5.2. Interface Layer

**NotificationController**: bandeja y marcado de lectura del residente (US10). **DeviceTokenController**: registro y baja del token del dispositivo. **NotificationPreferenceController**: configuración de notificaciones (US12). Como *Consumers*: `AnnouncementEventConsumer`, `PaymentEventConsumer`, `ReservationEventConsumer`, `AccessEventConsumer`, `TelemetryAlertEventConsumer` e `IncidentEventConsumer`, suscritos por el broker a los seis contextos que publican eventos notificables.

#### 4.2.5.3. Application Layer

**Factory Pattern** (`NotificationFactory`) para crear el tipo de notificación (Push/Email/SMS) según el evento de origen, sin acoplar la creación a la lógica de envío.

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| AnnouncementPublishedEventHandler | AnnouncementPublished | Notifica al residente el nuevo comunicado (US10). |
| PaymentApprovedEventHandler | PaymentApproved | Notifica la aprobación del pago. |
| DebtReminderScheduler | (job periódico) | Recordatorios de pago (US09). |
| ReservationApprovedEventHandler | ReservationApproved | Notifica al residente (US11) y al administrador (US31). |
| PhysicalAccessEventHandler | PhysicalAccessGranted / PhysicalAccessDenied | Notifica eventos de acceso físico. |
| TelemetryAlertEventHandler | AbnormalConsumptionDetected / LuminaireFailureDetected | Notifica alertas de telemetría. |
| IncidentReportedEventHandler | IncidentReported | Avisa al administrador con la ubicación exacta de la incidencia (US08 esc. 2). |
| EmergencyDeclaredEventHandler | EmergencyDeclared | Difusión `EMERGENCY` a todo el edificio por push y SMS en paralelo (US08 esc. 1). |

#### 4.2.5.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| NotificationRepository | Persistencia de notificaciones. |
| DeviceTokenRepository | Persistencia de tokens de dispositivo. |
| NotificationPreferenceRepository | Persistencia de preferencias de notificación. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; cliente de **Firebase Cloud Messaging** (Anti-Corruption Layer) para el envío de notificaciones push y cliente de **Twilio** (Anti-Corruption Layer) para el envío de SMS, ambos invocados en paralelo —no en cascada— cuando la prioridad es `EMERGENCY`, de modo que el fallo o la lentitud de un canal no consuma el presupuesto de 5 segundos del otro; colas de reintento independientes por evento y compensación que marca la notificación como pendiente de reintento si el envío falla, sin afectar el estado del contexto que originó el evento.

#### 4.2.5.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Notification](assets/img/ComponentView_Notification_Service.png)

*Figura. Diagrama de Componentes — Notification Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.5.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.5.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Notification](assets/img/notifications_class.png)

*Figura. Diagrama de Clases — Notification. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.5.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Notification). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.6. Bounded Context: Communication

#### 4.2.6.1. Domain Layer

Los agregados identificados son:

**Announcement** (Comunicado): comunicado oficial con título, contenido, alcance y fecha de publicación. **Poll** (Encuesta): consulta a la comunidad con opciones, votos y estado (US36).

La terna *confirmación de lectura · segmentación · categorización* es la que exige la táctica de comunicación centralizada del proyecto.

## Aggregate: AnnouncementAggregate

### Entity: Announcement

| Atributo | Tipo | Descripción |
|---|---|---|
| idAnnouncement | Long | Identificador único del comunicado. |
| title | String | Título del comunicado. |
| content | String | Contenido del comunicado. |
| scope | AnnouncementScope | Segmentación por tipo de usuario. |
| category | AnnouncementCategory | Categoría del anuncio. |
| publishedAt | DateTime | Fecha de publicación. |

### Entity: ReadReceipt

| Atributo | Tipo | Descripción |
|---|---|---|
| idReceipt | Long | Identificador único del acuse. |
| idAnnouncement | AnnouncementId | Comunicado visualizado. |
| idResident | Long | Residente que lo visualizó. |
| readAt | DateTime | Momento de la lectura. Sostiene el seguimiento de alcance de US15. |

### Entity: Document

| Atributo | Tipo | Descripción |
|---|---|---|
| idDocument | Long | Identificador único del documento. |
| title | String | Título del documento. |
| fileReference | String | Referencia al archivo publicado. |

Normativa legal y manuales del edificio publicados para consulta (US32).

## Aggregate: PollAggregate

### Entity: Poll

| Atributo | Tipo | Descripción |
|---|---|---|
| idPoll | Long | Identificador único de la encuesta. |
| question | String | Pregunta de la encuesta. |
| status | PollStatus | Estado de la encuesta. |

## ValueObject: AnnouncementScope

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Segmento de usuarios al que se dirige el comunicado. |

## ValueObject: PollOption

| Atributo | Tipo | Descripción |
|---|---|---|
| label | String | Texto de la opción. |
| votes | Int | Número de votos recibidos. |

## Enumeration

| Enumeración | Valores |
|---|---|
| AnnouncementCategory | `MANTENIMIENTO`, `ADMINISTRATIVO`, `EVENTO`, `SEGURIDAD`, `OTRO` |
| PollStatus | `OPEN`, `CLOSED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| ReachTrackingService | Consolidar el alcance real de un comunicado a partir de sus acuses de lectura. | — |
| PollVotingService | Garantizar el voto único por residente y encuesta. | Un residente no puede votar dos veces la misma encuesta. |

#### 4.2.6.2. Interface Layer

**AnnouncementController**: publicación de comunicados oficiales y consulta del histórico (US13, US14). **ReadReceiptController**: seguimiento de visualización (US15). **PollController**: creación, votación y cierre de encuestas (US36). **DocumentController**: consulta de leyes y manuales del edificio (US32).

#### 4.2.6.3. Application Layer

## Communication Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Publicar comunicado | AnnouncementCommandService.handle(PublishAnnouncementCommand) | Guarda el comunicado y emite `AnnouncementPublished`, que dispara la Saga coreografiada de notificación. |
| Votar encuesta | PollCommandService.handle(VotePollCommand) | Valida el voto único por encuesta, **HTTP 409** si se duplica. |
| Publicar documento | DocumentCommandService.handle(PublishDocumentCommand) | Publica una normativa o manual del edificio. |

`CommunicationQueryService` resuelve el muro de anuncios y los resultados de encuesta. Valida además el límite de un mensaje diario por residente (**HTTP 429** si se excede). El contexto publica `AnnouncementPublished` y `PollClosed`.

#### 4.2.6.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| AnnouncementRepository | Persistencia de comunicados. |
| PollRepository | Persistencia de encuestas. |
| ReadReceiptRepository | Persistencia de acuses de lectura. |
| DocumentRepository | Persistencia de documentos normativos. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; **Adapter Pattern (Anti-Corruption Layer)** hacia **Cloudinary** para el almacenamiento y la entrega de las imágenes adjuntas a los comunicados; publicador AMQP de los eventos del contexto.

#### 4.2.6.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Communication](assets/img/ComponentView_Communication_Service.png)

*Figura. Diagrama de Componentes — Communication Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.6.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.6.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Communication](assets/img/communications_class.png)

*Figura. Diagrama de Clases — Communication. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.6.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Communication). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.7. Bounded Context: Forum

#### 4.2.7.1. Domain Layer

El agregado principal identificado es:

**Post**: publicación del muro comunitario con autor, contenido, fecha y estado. El estado `HIDDEN` es aplicado por la moderación de US37.

## Aggregate: PostAggregate

### Entity: Post

| Atributo | Tipo | Descripción |
|---|---|---|
| idPost | Long | Identificador único de la publicación. |
| idAuthor | Long | Residente autor de la publicación. |
| content | PostContent | Contenido de la publicación. |
| createdAt | DateTime | Fecha de creación. |
| status | PostStatus | Estado de visibilidad. |

### Entity: Comment

| Atributo | Tipo | Descripción |
|---|---|---|
| idComment | Long | Identificador único del comentario. |
| idPost | PostId | Publicación a la que responde. |
| idAuthor | Long | Residente autor del comentario. |
| content | String | Contenido del comentario. |

### Entity: ModerationAction

| Atributo | Tipo | Descripción |
|---|---|---|
| idAction | Long | Identificador único de la acción. |
| idPost | PostId | Publicación moderada. |
| idAdmin | Long | Administrador que ejecutó la acción. |
| reason | String | Motivo del ocultamiento. |
| actionAt | DateTime | Momento de la acción. Registro auditable de qué administrador ocultó qué publicación y por qué motivo. |

## ValueObject: PostContent

| Atributo | Tipo | Descripción |
|---|---|---|
| text | String | Texto de la publicación. |

## ValueObject: DailyPostQuota

| Atributo | Tipo | Descripción |
|---|---|---|
| maxPerDay | Int | Límite diario de publicaciones por residente. |

## Enumeration

| Enumeración | Valores |
|---|---|
| PostStatus | `VISIBLE`, `HIDDEN` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| PostQuotaService | Hacer cumplir el límite diario de publicaciones por residente. | — |
| ModerationService | Aplicar y revertir el ocultamiento de contenido inapropiado. | — |

#### 4.2.7.2. Interface Layer

**PostController**: publicación y consulta de mensajes del muro del edificio (US29). **CommentController**: respuestas a una publicación. **ModerationController**: revisión y ocultamiento de mensajes inapropiados por el administrador (US37).

#### 4.2.7.3. Application Layer

## Forum Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Publicar mensaje | PostCommandService.handle(CreatePostCommand) | Valida el límite diario de publicaciones vía `PostQuotaService`, **HTTP 429** si se excede. |
| Comentar publicación | CommentCommandService.handle(CreateCommentCommand) | Registra la respuesta a una publicación. |
| Moderar publicación | ModerationCommandService.handle(HidePostCommand) | Oculta una publicación inapropiada y registra la `ModerationAction`. |

`ForumQueryService` resuelve el muro del edificio filtrando las publicaciones ocultas.

#### 4.2.7.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| PostRepository | Persistencia de publicaciones. |
| CommentRepository | Persistencia de comentarios. |
| ModerationActionRepository | Persistencia de acciones de moderación. |

Implementación JPA de los repositorios sobre PostgreSQL, con esquema propio del microservicio; **Adapter Pattern (Anti-Corruption Layer)** hacia **Cloudinary** para las imágenes adjuntas a las publicaciones del foro.

#### 4.2.7.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Forum](assets/img/ComponentView_ForumNotifications.png)

*Figura. Diagrama de Componentes — Forum Service. Elaborado utilizando Structurizr (Structurizr, s.f.). La figura presenta en un mismo lienzo los componentes de Forum y de Notification.*

#### 4.2.7.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.7.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Forum](assets/img/forum_class.png)

*Figura. Diagrama de Clases — Forum. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.7.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado (incluye las tablas de Forum). Elaborado utilizando LucidChart (LucidChart, s.f.).*

---

### 4.2.8. Bounded Context: Report

#### 4.2.8.1. Domain Layer

Al ser un contexto mayormente de solo lectura (CQRS), **no posee agregados transaccionales propios**: su modelo son proyecciones construidas sobre datos de los que Payment e IoT Telemetry & Analytics siguen siendo dueños.

## Read Models

| Read Model | Descripción |
|---|---|
| FinancialReport | Consolidado de ingresos, egresos y deudas por periodo. |
| DelinquencyReport | Morosidad por unidad. |
| EnergyConsumptionReport | Consumo energético del edificio, alimentado por IoT Telemetry & Analytics. |

## ValueObject: ReportPeriod

| Atributo | Tipo | Descripción |
|---|---|---|
| from | Date | Inicio del periodo del reporte. |
| to | Date | Fin del periodo del reporte. |

## Enumeration

| Enumeración | Valores |
|---|---|
| ExportFormat | `PDF`, `EXCEL` |

## Domain Services

| Nombre | Responsabilidad |
|---|---|
| ReportConsolidationService | Unificar en una sola vista los datos que llegan de Payment e IoT Telemetry & Analytics. |

#### 4.2.8.2. Interface Layer

**ReportController**: generación de reportes financieros y de morosidad (US25). **ReportExportController**: exportación del reporte en el formato solicitado para compartirlo con la comunidad (US26).

#### 4.2.8.3. Application Layer

`ReportQueryService` consulta a Payment vía REST y consolida el reporte (Dashboard financiero). `ReportExportCommandService` gestiona la exportación. **Factory Pattern** (`ReportExporterFactory`) para generar el archivo de salida en el formato solicitado (PDF o Excel) sin acoplar la lógica de creación a la de exportación.

#### 4.2.8.4. Infrastructure Layer

`PaymentQueryClient` y `TelemetryQueryClient`, clientes REST síncronos hacia Payment Service e IoT Telemetry & Analytics Service; generador de archivos PDF/Excel. Este contexto no persiste datos de negocio propios: su "persistencia" es la de los contextos que consulta.

#### 4.2.8.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Report](assets/img/ComponentView_Report_Service.png)

*Figura. Diagrama de Componentes — Report Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.8.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.8.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Report](assets/img/reports_class.png)

*Figura. Diagrama de Clases — Report. Elaborado utilizando PlantUML Editor (PlantUML, s.f.).*

##### 4.2.8.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/Edifika_ERD_2.png)

*Figura. Diagrama Entidad-Relación consolidado.*

---

### 4.2.9. Bounded Context: IoT Access Management

#### 4.2.9.1. Domain Layer

El agregado principal identificado es:

**AccessCredential**: credencial de acceso de un residente, con tipo RFID , identificador, titular, vigencia y estado. La regla de negocio central del contexto se resuelve mediante el Domain Service **AccessDecisionService**.

## Aggregate: AccessCredentialAggregate

### Entity: AccessCredential

| Atributo | Tipo | Descripción |
|---|---|---|
| idCredential | Long | Identificador único de la credencial. |
| idResident | Long | Titular de la credencial. |
| type | CredentialType | Tipo de credencial (RFID). |
| identifier | RfidUid | Identificador físico o token de la credencial. |
| validFrom | DateTime | Inicio de vigencia. |
| validUntil | DateTime | Fin de vigencia. |
| status | CredentialStatus | Estado de la credencial. |

### Entity: AccessPermission

| Atributo | Tipo | Descripción |
|---|---|---|
| idPermission | Long | Identificador único del permiso. |
| idResident | Long | Residente habilitado. |
| idCommonArea | Long | Área común habilitada. |
| window | TimeWindow | Ventana horaria vigente del permiso. |

Habilitación de un residente sobre un área común, derivada de una reserva aprobada y acotada a su ventana horaria.

### Entity: AccessAttempt

| Atributo | Tipo | Descripción |
|---|---|---|
| idAttempt | Long | Identificador único del intento. |
| deviceId | String | Dispositivo en el que se registró el intento. |
| credentialPresented | String | Credencial presentada. |
| result | AccessResult | Resultado del intento. |
| occurredAt | DateTime | Marca de tiempo del intento. |

Bitácora auditable del contexto.

## ValueObject: RfidUid

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Identificador único de la tarjeta RFID. |


## Enumeration

| Enumeración | Valores |
|---|---|
| CredentialStatus | `ACTIVE`, `SUSPENDED`, `REVOKED` |
| AccessResult | `GRANTED`, `DENIED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| AccessDecisionService | Resolver si una credencial concede acceso. | Una credencial concede acceso solo si está activa, el residente no está moroso y existe un permiso vigente para esa área en ese instante. |

#### 4.2.9.2. Interface Layer

**AccessCredentialController**: emisión, suspensión y revocación de credenciales RFID. **AccessController**: dar acceso a tarjetas. **DoorControlController**: apertura remota por parte del administrador. **AccessAuditController**: consulta de la bitácora de accesos. Como *Consumers*: `ReservationEventConsumer` y `PaymentEventConsumer`, suscritos a los eventos que llegan por el broker.

#### 4.2.9.3. Application Layer

## Access Command Handler

| Capability | Command Handler | Descripción |
|---|---|---|
| Emitir/suspender/revocar credencial | AccessCredentialCommandService.handle(...) | Gestiona el ciclo de vida de la credencial RFID. |


`AccessQueryService` resuelve las consultas de credenciales, permisos y bitácora.

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| ReservationApprovedEventHandler | ReservationApproved | Crea el `AccessPermission` temporal para el área reservada. |
| ResidentMarkedDelinquentEventHandler | ResidentMarkedDelinquent | Suspende las credenciales del residente moroso. |

Tras cada resolución de acceso el contexto publica `PhysicalAccessGranted` o `PhysicalAccessDenied`.

#### 4.2.9.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| AccessCredentialRepository | Persistencia de credenciales. |
| AccessPermissionRepository | Persistencia de permisos de acceso. |
| AccessAttemptRepository | Persistencia de la bitácora de intentos. |

Implementación JPA de los repositorios sobre PostgreSQL; `EdgeGatewaySyncClient`, cliente REST que empuja al Edge API las credenciales activas, las reservas vigentes y la blacklist para que el condominio siga operando sin conexión; publicador AMQP/MQTT de los eventos del contexto.

#### 4.2.9.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes IoT Access Management](assets/img/ComponentView_Access_Service.png)

*Figura. Diagrama de Componentes — IoT Access Management Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.9.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.9.6.1. Bounded Context Domain Layer Class Diagrams

![Clases IoT Access Management](assets/img/access-management-class.png)

*Figura. Diagrama de Clases — IoT Access Management. Elaborado con PlantUML.*

##### 4.2.9.6.2. Bounded Context Database Design Diagram

![ERD extensión IoT](assets/img/iot-erd-extension.png)

*Figura. Diagrama Entidad-Relación — extensión IoT. Elaborado con PlantUML.*

---

### 4.2.10. Bounded Context: Smart Lighting & Automation

#### 4.2.10.1. Domain Layer

El agregado principal identificado es:

**AutomationRule**: regla que gobierna una o varias luminarias de un área común, con condición de presencia, umbral de lux, franja horaria, duración de apagado por inactividad y prioridad frente a otras reglas. La regla se resuelve mediante el Domain Service **AutomationDecisionService**, que combina presencia, lux ambiental, horario de reserva y anulación vigente, aplicando la precedencia entre reglas.

## Aggregate: AutomationRuleAggregate

### Entity: AutomationRule

| Atributo | Tipo | Descripción |
|---|---|---|
| idRule | Long | Identificador único de la regla. |
| idCommonArea | Long | Área común a la que aplica. |
| presenceRequired | Boolean | Condición de presencia. |
| luxThreshold | LuxThreshold | Umbral de lux para activar la regla. |
| schedule | LightingSchedule | Franja horaria de la regla. |
| inactivityTimeout | PresenceTimeout | Duración de apagado por inactividad. |
| priority | Int | Prioridad frente a otras reglas. |

### Entity: Luminaire

| Atributo | Tipo | Descripción |
|---|---|---|
| idLuminaire | Long | Identificador único de la luminaria. |
| location | String | Ubicación física de la luminaria. |
| idCommonArea | Long | Área común asociada. |
| nominalPower | Decimal | Potencia nominal. |
| state | LuminaireState | Estado ON/OFF. |

### Entity: OverrideCommand

| Atributo | Tipo | Descripción |
|---|---|---|
| idOverride | Long | Identificador único del comando. |
| idLuminaire | Long | Luminaria afectada. |
| requestedBy | Long | Usuario que solicita el override. |
| action | OverrideAction | Encendido o apagado manual solicitado. |
| duration | Duration | Duración del override. |
| reason | String | Motivo del override, que suspende temporalmente la automatización. |

## ValueObject: LuxThreshold

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Umbral de lux ambiental. |

## ValueObject: PresenceTimeout

| Atributo | Tipo | Descripción |
|---|---|---|
| seconds | Int | Tiempo de inactividad antes de apagar. |

## ValueObject: LightingSchedule

| Atributo | Tipo | Descripción |
|---|---|---|
| start | Time | Inicio de la franja horaria. |
| end | Time | Fin de la franja horaria. |

## ValueObject: BrightnessLevel

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Nivel de brillo objetivo. |

## Enumeration

| Enumeración | Valores |
|---|---|
| LuminaireState | `ON`, `OFF` |
| OverrideAction | `ON`, `OFF` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| AutomationDecisionService | Resolver el estado objetivo de cada luminaria. | Combina presencia, lux ambiental, horario de reserva y anulación vigente, aplicando la precedencia entre reglas. |

#### 4.2.10.2. Interface Layer

**AutomationRuleController**: CRUD de reglas de automatización por parte del administrador. **LightingOverrideController**: encendido/apagado manual desde la aplicación del residente o del administrador. **LuminaireController**: registro y consulta de luminarias y su estado. Como *Consumer*: `PresenceEventConsumer`, suscrito a los eventos de presencia y de inicio de reserva.

#### 4.2.10.3. Application Layer

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| AreaPresenceDetectedEventHandler | AreaPresenceDetected | Enciende según la regla vigente cuando se detecta presencia y el lux ambiental está por debajo del umbral. |
| ReservationStartedEventHandler | ReservationStarted | Enciende de forma programada el área al iniciar la reserva. |

`AutomationRuleCommandService`, `OverrideCommandService` (aplica el override y programa su expiración) y `LightingQueryService` completan la capa. El contexto publica `LuminaireTurnedOn`, `LuminaireTurnedOff` y `OverrideTriggered`.

Los dos eventos consumidos por este contexto se cerraron de la siguiente forma:

- **`AreaPresenceDetected`** lo publica el **Edge API**, no Telemetry: el Edge reenvía la lectura cruda del sensor PIR del nodo de iluminación como evento tan pronto la recibe por MQTT local, priorizando la latencia de encendido sobre la interpretación de dominio (que sí aplica Telemetry para sus propios fines analíticos, pero por una ruta de datos separada).
- **`ReservationStarted`** lo publica **Reservation**, mediante un scheduler interno que revisa periódicamente las reservas cuya ventana horaria acaba de comenzar — se mantiene toda la lógica de reservas en un único contexto en vez de que Smart Lighting consulte el calendario de Reservation por su cuenta.

#### 4.2.10.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| AutomationRuleRepository | Persistencia de reglas de automatización. |
| LuminaireRepository | Persistencia de luminarias. |
| OverrideCommandRepository | Persistencia de comandos de override. |

Implementación JPA de los repositorios sobre PostgreSQL; `EdgeCommandPublisher`, que envía por MQTT/REST al Edge API las reglas de programación y los comandos de override para que este los ejecute localmente sobre los nodos de iluminación; publicador AMQP/MQTT de los eventos del contexto.

#### 4.2.10.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Smart Lighting & Automation](assets/img/ComponentView_Lighting_Service.png)

*Figura. Diagrama de Componentes — Smart Lighting & Automation Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.10.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.10.6.1. Bounded Context Domain Layer Class Diagrams

![Clases Smart Lighting & Automation](assets/img/lighting-automation-class.png)

*Figura. Diagrama de Clases — Smart Lighting & Automation. Elaborado con PlantUML.*

##### 4.2.10.6.2. Bounded Context Database Design Diagram

![ERD consolidado](assets/img/db_diagram_lights.png)

*Figura. Diagrama Entidad-Relación — extensión Smart Lighting & Automation. Elaborado con PlantUML.*

---

### 4.2.11. Bounded Context: IoT Telemetry & Analytics

#### 4.2.11.1. Domain Layer

El agregado principal identificado es:

**EnergyConsumption**: consumo acumulado de una luminaria o área común en un periodo, calculado por integración de la potencia instantánea en el tiempo, `kWh = Σ(V × I × Δt) / 1000`.

## Aggregate: EnergyConsumptionAggregate

### Entity: EnergyConsumption

| Atributo | Tipo | Descripción |
|---|---|---|
| idConsumption | Long | Identificador único del registro. |
| idLuminaire | Long | Luminaria o área común medida. |
| bucket | TimeBucket | Periodo de agregación. |
| kwh | Decimal | Consumo acumulado en kWh. |

### Entity: ConsumptionBaseline

| Atributo | Tipo | Descripción |
|---|---|---|
| idBaseline | Long | Identificador único de la línea base. |
| idCommonArea | Long | Área a la que corresponde la línea base. |
| movingMean | Decimal | Media móvil de consumo. |
| movingStdDev | Decimal | Desviación estándar móvil. |

Línea base estadística por área contra la que se contrasta el consumo observado.

### Entity: AnomalyFlag

| Atributo | Tipo | Descripción |
|---|---|---|
| idFlag | Long | Identificador único de la marca. |
| type | String | Tipo de anomalía. |
| severity | String | Severidad de la anomalía. |
| evidence | String | Evidencia de la anomalía. |
| detectedAt | DateTime | Momento de la detección. |

## ValueObject: SensorReading
Value Object inmutable.

| Atributo | Tipo | Descripción |
|---|---|---|
| deviceId | String | Dispositivo de origen. |
| magnitudeType | String | Tipo de magnitud (presencia, lux o corriente). |
| value | Decimal | Valor de la lectura. |
| unit | MeasurementUnit | Unidad de medida. |
| capturedAt | DateTime | Marca de tiempo de la lectura. |

## ValueObject: MeasurementUnit

| Atributo | Tipo | Descripción |
|---|---|---|
| value | String | Unidad de medida de la lectura. |

## ValueObject: TimeBucket

| Atributo | Tipo | Descripción |
|---|---|---|
| start | DateTime | Inicio del bucket temporal. |
| end | DateTime | Fin del bucket temporal. |

## ValueObject: ZScore

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Puntuación Z usada para contrastar contra la baseline. |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| EnergyCalculationService | Integración temporal de la potencia. | `kWh = Σ(V × I × Δt) / 1000`. |
| DeviceHealthService | Evaluar el *heartbeat* de cada dispositivo. | Marca el dispositivo `OFFLINE` cuando deja de emitir durante el tiempo límite configurado (TS16, TS17). |
| AnomalyDetectionService | Comparar la muestra contra la baseline. | Distingue consumo anómalo de falla de luminaria, esta última caracterizada por corriente nula con la luminaria comandada en ON. |

#### 4.2.11.2. Interface Layer

**TelemetryQueryController**: series temporales y agregados que alimentan los dashboards de la Web Application. **EnergyReportController**: consumo por área y por periodo. **AnomalyController**: consulta de anomalías detectadas. Como *Consumer*: `TelemetryIngestionConsumer`, suscrito por MQTT a las lecturas crudas que el Edge API reenvía al broker.

#### 4.2.11.3. Application Layer

`TelemetryIngestionService` (valida, normaliza y persiste la lectura entrante), `EnergyCalculationCommandService` (recalcula el consumo del bucket temporal afectado), `BaselineRecalculationService` (actualiza media y desviación móviles), `AnomalyDetectionHandler` (evalúa cada nueva agregación contra la baseline), `DeviceHealthMonitor` (job periódico que detecta la ausencia de mensajes de un dispositivo, lo marca `OFFLINE`, descarta los comandos pendientes hacia él y notifica al administrador sin afectar la comunicación con el resto) y `TelemetryQueryService` (resuelve las consultas de los dashboards). El contexto publica `AbnormalConsumptionDetected`, `LuminaireFailureDetected` y `DeviceWentOffline`.

#### 4.2.11.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| TelemetryRepository | Persistencia de lecturas crudas (`sensor_readings`, hypertable). |
| EnergyConsumptionRepository | Persistencia del consumo agregado. |
| BaselineRepository | Persistencia de las líneas base de consumo. |

Implementación del repositorio de series sobre **TimescaleDB** —hypertables particionadas por tiempo y agregados continuos para resolver las consultas del dashboard sin recorrer la serie cruda—, a diferencia del resto de contextos, que persisten en PostgreSQL relacional. Suscriptor MQTT hacia el broker y publicador AMQP/MQTT de los eventos de alerta.

#### 4.2.11.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes IoT Telemetry & Analytics](assets/img/ComponentView_Telemetry_Service.png)

*Figura. Diagrama de Componentes — IoT Telemetry & Analytics Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.11.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.11.6.1. Bounded Context Domain Layer Class Diagrams

![Clases IoT Telemetry & Analytics](assets/img/telemetry-analytics-class.png)

*Figura. Diagrama de Clases — IoT Telemetry & Analytics. Elaborado con PlantUML.*

##### 4.2.11.6.2. Bounded Context Database Design Diagram

Por su naturaleza de series temporales, las tablas de este contexto (`sensor_readings` como hypertable, más `energy_consumption`, `consumption_baselines` y `anomaly_flags`) no forman parte del ERD relacional consolidado (LucidChart, solo PostgreSQL). Se documentan en el mismo ERD complementario de IoT Access Management, separadas en su propio paquete TimescaleDB:

![ERD extensión IoT](assets/img/iot-erd-extension.png)

*Figura. Diagrama Entidad-Relación — extensión IoT, paquete TimescaleDB (`sensor_readings`, `energy_consumption`, `consumption_baselines`, `anomaly_flags`). Elaborado con PlantUML.*

### 4.2.12. Bounded Context: Water Pump Leak Detection

#### 4.2.12.1. Domain Layer

El agregado principal identificado es:

**LeakDetectionRule** (Aggregate Root: regla que gobierna una o varias bombas de agua, con umbral de caudal, umbral de presión, franja horaria de consumo esperado y duración mínima de desviación antes de declarar una fuga), **WaterPump** (Entity: bomba física con ubicación, zona asociada, potencia nominal y estado `ON`/`OFF`/`FAULT`), **LeakAlert** (Entity: evento de fuga detectado, con severidad, evidencia y estado de resolución). Value Objects: `FlowThreshold`, `PressureThreshold`, `FlowRate`, `LeakSeverity`. Domain Service: **LeakDetectionService**, que compara la lectura de caudal y presión contra la línea base esperada de la zona y distingue una fuga real de un consumo legítimo fuera de horario. Interfaces `LeakDetectionRuleRepository`, `WaterPumpRepository` y `LeakAlertRepository`.

## Aggregate: LeakDetectionRuleAggregate

### Entity: LeakDetectionRule

| Atributo | Tipo | Descripción |
|---|---|---|
| idRule | Long | Identificador único de la regla. |
| idZone | Long | Zona hidráulica a la que aplica. |
| flowThreshold | FlowThreshold | Caudal máximo esperado fuera de horario de consumo. |
| pressureThreshold | PressureThreshold | Caída de presión mínima que dispara la evaluación. |
| expectedWindow | LightingSchedule | Franja horaria de consumo esperado. |
| minDeviationMinutes | Int | Duración mínima de desviación antes de declarar fuga. |
| isActive | Boolean | Indica si la regla está vigente. |

## Aggregate: WaterPumpAggregate

### Entity: WaterPump

| Atributo | Tipo | Descripción |
|---|---|---|
| idPump | Long | Identificador único de la bomba. |
| idZone | Long | Zona hidráulica asociada. |
| location | String | Ubicación física de la bomba. |
| nominalFlow | Decimal | Caudal nominal de la bomba. |
| state | PumpState | Estado actual de la bomba. |

### Entity: LeakAlert

| Atributo | Tipo | Descripción |
|---|---|---|
| idAlert | Long | Identificador único de la alerta. |
| idPump | PumpId | Bomba en la que se detectó la desviación. |
| severity | LeakSeverity | Severidad de la fuga detectada. |
| evidence | String | Lectura de caudal/presión que sustenta la alerta. |
| detectedAt | DateTime | Momento de la detección. |
| resolvedAt | DateTime | Momento de resolución (si aplica). |
| status | LeakAlertStatus | Estado de la alerta. |

## ValueObject: FlowThreshold

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Caudal límite antes de considerar una posible fuga. |

## ValueObject: PressureThreshold

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Caída de presión mínima que activa la evaluación. |

## ValueObject: FlowRate

| Atributo | Tipo | Descripción |
|---|---|---|
| value | Decimal | Caudal instantáneo medido. |
| unit | String | Unidad de medida del caudal. |

## Enumeration

| Enumeración | Valores |
|---|---|
| PumpState | `ON`, `OFF`, `FAULT` |
| LeakSeverity | `LOW`, `MEDIUM`, `HIGH` |
| LeakAlertStatus | `OPEN`, `ACKNOWLEDGED`, `RESOLVED` |

## Domain Services

| Nombre | Responsabilidad | Reglas aplicadas |
|---|---|---|
| LeakDetectionService | Distinguir una fuga real de un consumo legítimo. | Un caudal por encima del umbral fuera de la franja horaria esperada, sostenido más allá de la duración mínima configurada, se declara fuga. Una caída de presión sin caudal correspondiente marca la bomba como `FAULT`. |

#### 4.2.12.2. Interface Layer

**LeakDetectionRuleController**: CRUD de reglas de detección por parte del administrador. **WaterPumpController**: registro y consulta de bombas y su estado. **LeakAlertController**: consulta y resolución de alertas de fuga. **PumpControlController**: apagado remoto manual de una bomba. Como *Consumer*: `FlowReadingEventConsumer`, suscrito a las lecturas de caudal y presión que reenvía el Edge API.

#### 4.2.12.3. Application Layer

## Event Handlers

| Handler | Evento de origen | Descripción |
|---|---|---|
| FlowReadingReceivedEventHandler | FlowReadingReceived | Evalúa la lectura contra `LeakDetectionService`; si corresponde, crea la `LeakAlert` y ordena el corte de la bomba. |

`LeakDetectionRuleCommandService`, `PumpControlCommandService` (ejecuta el comando de apagado y programa su confirmación) y `LeakQueryService` completan la capa. El contexto publica `LeakDetected`, `PumpShutOff` y `LeakResolved`.

**`FlowReadingReceived`** lo publica el **Edge API**, no Telemetry: reenvía la lectura cruda del sensor de caudal/presión del nodo hidráulico como evento tan pronto la recibe por MQTT local, priorizando la latencia de corte sobre la interpretación de dominio, siguiendo el mismo criterio aplicado en `AreaPresenceDetected` (ver 4.2.10.3).

#### 4.2.12.4. Infrastructure Layer

## Repositories

| Repositorio | Responsabilidad |
|---|---|
| LeakDetectionRuleRepository | Persistencia de reglas de detección. |
| WaterPumpRepository | Persistencia de bombas. |
| LeakAlertRepository | Persistencia de alertas de fuga. |

Implementación JPA de los repositorios sobre PostgreSQL; `EdgeCommandPublisher`, que envía por MQTT/REST al Edge API el comando de corte de la bomba para que este lo ejecute localmente sobre el nodo hidráulico; publicador AMQP/MQTT de los eventos del contexto.

#### 4.2.12.5. Bounded Context Software Architecture Component Level Diagrams

![Componentes Water Pump Leak Detection](assets/img/component_leak.png)

*Figura. Diagrama de Componentes — Water Pump Leak Detection Service. Elaborado utilizando Structurizr (Structurizr, s.f.).*

#### 4.2.12.6. Bounded Context Software Architecture Code Level Diagrams

##### 4.2.12.6.1. Bounded Context Domain Layer Class Diagrams


![Clases Water Pump Leak Detection](assets/img/class_diagram_leak.png)

*Figura. Diagrama de Clases — Water Pump Leak Detection. Elaborado con PlantUML.*

##### 4.2.12.6.2. Bounded Context Database Design Diagram


![ERD extensión Water Pump Leak Detection](assets/img/db_diagram_leak.png)

*Figura. Diagrama Entidad-Relación — extensión Water Pump Leak Detection. Elaborado con PlantUML.*

# Capítulo V: Solution UI/UX Design

## 5.1. Style Guidelines

### 5.1.1. General Style Guidelines

En esta sección hemos establecido las directrices de estilo que rigen todas las pantallas de Edifika (aplicación web, aplicación móvil y dispositivos IoT). Su propósito es garantizar coherencia visual y de comunicación: que un mismo color, un mismo tamaño de texto y un mismo tono de redacción signifiquen siempre lo mismo en todo el producto.

Para que estas directrices no quedaran como recomendaciones subjetivas, se realizó un **levantamiento de las decisiones observables** en los mock-ups de la plataforma (secciones 5.4.1 y 5.4.3): a partir de las siete pantallas de referencia —acceso, registro, unidades y residentes, áreas comunes, muro comunitario, finanzas y formulario de reserva— se identificaron el color de marca, la familia tipográfica, la escala de espaciados y el registro del texto, y con esos hallazgos se definieron los **tokens** de diseño (variables de estilo) que se replican en todas las vistas. Estos tokens funcionan como un mini design system propio, tomando como referencia los sistemas **Material Design 3** y **Tailwind CSS** (para la nomenclatura de la escala de espaciado y de los breakpoints), y fueron adaptados a las necesidades del producto: una interfaz administrativa densa en información, con alto volumen de tablas, estados y alertas, que debe seguir siendo legible por adultos mayores y por usuarios con baja familiaridad tecnológica.

**Sustento: principios de diseño considerados**

Las decisiones no son arbitrarias; cada una se sustenta en principios de diseño establecidos y en las restricciones del contexto de uso:

- **Principio de consistencia y reconocimiento (Nielsen, 2020):** el usuario debe reconocer los controles y su comportamiento a partir de vistas anteriores. Esto exige un único color de marca para toda acción primaria y un único patrón de badges de estado, de modo que un botón morado siempre signifique lo mismo.
- **Principio de jerarquía visual:** la pantalla debe comunicar qué es lo importante primero. Se resuelve con una escala tipográfica, con el uso del color solo para elementos de acción o estado, y con densidad de información controlada (tarjetas KPI superiores, tabla como bloque dominante).
- **Ley de Hick-Hyman:** al cubrir información crítica (deuda vencida, comentarios denunciados, espacios deshabilitados) se reduce el tiempo de decisión. Por eso los estados críticos usan color rojo/verde y no solo texto, y los elementos que requieren acción inmediata se aíslan en bloques separados (tarjetas "Outstanding Balances", "Mod Queue").
- **Principio de correspondencia (Einstellung):** la lectura de una interfaz es más rápida cuando su estructura sigue el orden de lectura. De aquí que la composición se base en un layout de 12 columnas con cabecera de página (título + subtítulo + acciones), contenido principal y panel lateral contextual.
- **Principio de espacio en blanco (Larkin, 2015):** el espacio en blanco agrupa elementos relacionados y reduce la carga cognitiva. Se materializa en el espaciado interno de tarjetas y en los márgenes generosos de los formularios.
- **Principio de la buena forma (Norman, 1986):** los componentes de la interfaz deben parecer presionables: bordes redondeados consistentes, sombras discretas y estados de hover/focus visibles.
- **Accesibilidad y diseño universal:** contraste mínimo 4.5:1 en texto y 3:1 en elementos gráficos, tamaño mínimo de 14 px para texto de formulario, y nunca dependencia única del color para transmitir estado (siempre se acompaña de etiqueta textual, por ejemplo "PAID", "LATE (12D)", "OCCUPIED").
- **Principio de "content first" y revelado progresivo:** la información se presenta en bloques cerrados (cards) en lugar de listas interminables, con revelado progresivo mediante paginación y filtros.

#### Branding

El branding de Edifika se sustenta en el **nombre, el símbolo y el color de marca** como trío indivisible:

- **Nombre:** "Edifika", fusión de "edificio" y el sufijo "-ka" que le da identidad de producto. Se escribe siempre capitalizado ("Edifika") y en ningún caso en mayúsculas sostenidas ni con variantes ("EdifikaApp", "edifika").
- **Símbolo (isotipo):** icono de edificio en línea con ventanas, acompañado del nombre en una misma línea. Aparece en el encabezado del panel lateral izquierdo ("Edifika / Residential Platform"), en las pantallas de acceso y registro, y como favicon.
- **Color de marca:** violeta profundo, que es el único color con permiso de uso como fondo sólido de elementos de marca y de acciones primarias.
- **Descriptor de marca (tagline):** "Residential Platform" como línea de apoyo bajo el logotipo, en tono claro. Resume el posicionamiento (plataforma de gestión residencial) y evita ambigüedad sobre el tipo de producto. En el pie de las pantallas de acceso y registro se añade el aviso legal en versalitas: "© 2024 EDIFIKA RESIDENTIAL PLATFORM".
- **Área de respeto (clear space):** el espacio libre alrededor del logotipo equivale a la altura de la "E" del nombre. El logotipo no se deforma, no se recolorea fuera de la paleta y no se acompaña de sombras ni efectos.
- **Aplicación en marketing vs. en producto:** en piezas de comunicación (login, registro, landing) el logotipo se apoya en un panel fotográfico con duotono de marca y el titular de posicionamiento; dentro de la aplicación el logotipo se mantiene fijo en la cabecera del sidebar y no se repite en cada tarjeta para no competir con el contenido.

#### Lenguaje Aplicado

El tono de comunicación se definió como **serio, semi-formal, respetuoso y sereno con episodios de entusiasmo controlado**, coherente con un producto de gestión administrativa donde el usuario puede estar tratando con deudas y conflictos vecinales. El detalle de las dimensiones adoptadas es el siguiente:

| Dimensión | Posición adoptada | Decisión y sustento |
| :--- | :--- | :--- |
| Divertido / Serio | Serio | El producto comunica estados financieros (deuda, morosidad, arrears) y conflictos entre residentes. El humor restaría credibilidad y puede minimizar un problema serio. Se mantiene un tono profesional y directo, sin juegos de palabras ni emojis en la interfaz. |
| Formal / Casual | Semi-formal | Se usa lenguaje corporativo natural ("Manage your property ecosystem with ease", "Real-time overview of the residential financial health"), evitando tecnicismos y jerga de ingeniería, pero sin tratar al usuario de forma coloquial ni usar slang. |
| Respetuoso / Irreverente | Respetuoso | Se citan los nombres de las personas y de las unidades ("Unit 1204 · Julian Thorne", "Sarah Mitchell · Unit 402") y se evita cualquier carga valorativa sobre los residentes morosos. Los mensajes de estado son descriptivos del hecho, no juicios: "OVERDUE 15 DAYS" en lugar de "You failed to pay". |
| Entusiasta / Sereno | Sereno con entusiasmo controlado | El copy evita la exageración y los signos de exclamación múltiples. El optimismo se transmite con verbos de acción y de logro ("Elevating Residential Living", "Vote Now", "RSVP Now"), con iconografía positiva y con la claridad de las métricas, no con adjetivos enfáticos. |

Además de las dimensiones anteriores, se establecen las siguientes **reglas de redacción de la interfaz (microcopy)**:

- **Voz del producto:** el sistema se expresa con voz activa en primera persona del plural implícita ("Elevating Residential Living", "Seamless building management for the modern homeowner and administrator"), transmitiendo que la plataforma trabaja para el usuario.
- **Títulos y etiquetas:** los títulos de vista y de tarjeta se escriben en **Title Case** ("Finance & Reports", "Units & Residents", "Reservations Calendar", "Manage Areas"); los encabezados de columna, etiquetas de formulario y títulos de bloque lateral van en **MAYÚSCAS** ("TOTAL REVENUE", "UNIT / RESIDENT", "ACTIVE POLLS"); los párrafos de contenido, en oración ("Join us this Saturday for our annual summer celebration!").
- **Botones:** se escribe la acción con verbo en infinitivo o imperativo corto ("Post", "Vote Now", "Send Notice", "Export CSV", "Add New Unit", "Save Changes"), nunca etiquetas vagas ("Aceptar", "OK"). El botón principal de cada pantalla lleva la acción de mayor frecuencia de uso, y las secundarias se degradan a variantes outline o ghost.
- **Mensajes de error y vacíos:** se indica qué pasó y qué hacer a continuación, sin culpar al usuario. El caso de la tarjeta "Flagged Comment" del Mod Queue ilustra el patrón: se muestra la cita del conflicto y se ofrecen las acciones "Dismiss" y "Review" para que el administrador resuelva sin salir del contexto.
- **Textos auxiliares:** los toggles y campos complejos se acompañan de una línea de ayuda que explica la consecuencia de la acción ("Toggle to set as Active or Under Maintenance"), evitando que el usuario descubra el comportamiento a posteriori.
- **Consistencia de mayúsculas en estados:** los badges de estado se escriben en MAYÚSCAS para ser escaneables de un vistazo ("OCCUPIED", "PAID", "LATE (12D)", "VACANT", "CANCELED", "MAINTENANCE"); los títulos de sección, en Title Case.
- **Sin emojis en la interfaz:** los íconos pertenecen a un set vectorial consistente; los emojis se reservan para la comunicación externa (redes, correos).

Esta directriz se complementa con las dimensiones concretas por plataforma (web, móvil e IoT) descritas en la sección 5.1.2.

#### Paleta de Colores

La paleta se construyó sobre una base de **violeta de marca**, neutros fríos para la estructura general (superficies, bordes, tipografía) y una paleta semántica acotada para estados. La regla estructural es: **el color no se usa para decorar, solo para comunicar** (marca, acción primaria, estado); el resto de la superficie se resuelve con blanco, grises muy claros y bordes.

Los tokens definidos, tomados de las variables de estilo de Figma, son:

| Token | Color | Uso |
| :--- | :--- | :--- |
| **Primary / Brand** | `#8C088F` | Botón de acción principal, FAB, item activo del sidebar, toggle en estado "on", chip de reserva confirmada, encabezado de tarjeta destacada ("Manage Areas"), texto de enlace activo. |
| **Primary Dark** | `#6F1D71` | Estado hover/pressed de la acción primaria, relleno de barras de progreso, texto de enlace ("CLEAR", "Forgot password?", "View Full Queue"). |
| **Primary Light / Tint** | `#F9F2F9` | Fondo del ítem activo del menú, fondo de chips y de píldoras de estado informativo, fondo de barras de encuesta. |
| **Primary Icon Tint** | `#F3E7F3` | Contenedor cuadrado de íconos de área común y de anuncio oficial. |
| **Surface** | `#FFFFFF` | Tarjetas, tablas, paneles laterales, campos de formulario y superficie del diálogo modal. |
| **Background** | `#F9FAFC` | Lienzo de la aplicación: separa visualmente las tarjetas blancas del fondo. |
| **Surface Muted** | `#FAFAFA` | Zona de escritura de publicaciones, tarjetas de contenido secundario y encabezados de tabla. |
| **Border** | `#E5E5E5` | Bordes de tarjetas, separadores de tabla, contorno de campos e inputs. |
| **Border Strong** | `#D1D1D1` | Bordes de botones outline ("Export PDF", "Excel", "Remind") y de tarjetas de KPI. |
| **Text Primary** | `#1A1A1A` | Títulos de página, cifras KPI, nombres de personas, celdas de tabla. |
| **Text Secondary** | `#7D787E` | Etiquetas en mayúsculas, encabezados de columna, texto de ayuda y metadatos ("Unit 402 · 5 hours ago", "142 votes · 2 days left"). |
| **Text Tertiary** | `#9A9599` | Subtítulos de KPI ("Across 4 Towers", "Active requests"), pies de tabla y mensajes de baja prioridad. |
| **Success** | `#2C6E4A` sobre `#F0FDF3` | "PAID", tendencias positivas ("+12% vs last month"), metas superadas en barras de progreso. |
| **Danger** | `#B91C1C` sobre `#FDF2F2` | "ARREARS", "LATE (12D)", "OVERDUE 15 DAYS", "CANCELED", "3 NEW", alertas de incidencia y barra lateral del comentario denunciado. |
| **Neutral** | `#6B6B6B` sobre `#F1F1F1` | "VACANT", "PENDING APPROVAL", "GRACE PERIOD", "EVENT", switches en estado off, elementos deshabilitados. |
| **Slate** | `#4E525C` | Categorías de reserva sin acción pendiente ("Gym Center · Tennis") y su entrada en la leyenda del calendario. |
| **Scrim / Overlay** | `#808080` (negro al 50%) | Velo del diálogo modal: atenúa el fondo sin ocultar el contexto de la acción en curso. |
| **Overlay photographic** | `#0F1231` | Duotono índigo del panel fotográfico de acceso y registro, sobre el que se apoya el titular de marca en blanco. |

**Reglas de aplicación de color:**

- **Regla 60-30-10:** aproximadamente 60% superficie (blanco y gris de lienzo), 30% componentes neutros y texto, 10% color de marca y semántico. Así el violeta se percibe como acento y no como fondo dominante.
- **Una sola acción primaria por pantalla:** si hay varios botones sólidos, solo el de mayor frecuencia lleva `Primary`; los demás son `Outline` (borde `Border Strong`, texto `Primary`) o `Ghost` (ícono). Se observa en "Generate Report" (solid) frente a "Export PDF" y "Excel" (outline), y en "Send Notice" (solid) frente a "Remind" (outline).
- **Contraste verificado:** `Primary #8C088F` sobre `#FFFFFF` cumple relación de contraste superior a 4.5:1, por lo que puede usarse también como color de texto de enlace y de badge sobre fondo blanco; los badges semánticos usan texto saturado sobre fondo muy claro del mismo tono para mantener legibilidad sin bloques sólidos que compitan con la acción primaria.
- **Tintes de badge:** cada estado tiene un fondo de baja saturación derivado de su color (`#F0FDF3`, `#FDF2F2`, `#F1F1F1`, `#F9F2F9`), lo que permite tener muchos estados sin aumentar la carga cromática de la pantalla. El estado nunca se transmite solo con color: siempre lleva su etiqueta textual.
- **Color como código de categoría:** en el calendario de reservas, el color del chip identifica el área y su estado, y se acompaña de una leyenda textual ("BBQ AREA", "PARTY ROOM", "CANCELED", "GYM CENTER") para usuarios que no distinguen los tonos.
- **Los dispositivos IoT** (sección 5.1.2) reutilizan los mismos tokens: el LED de estado y la carcasa del dispositivo emplean `Primary` y `Neutral` para mantener coherencia entre el objeto físico y la app. El único token que la plataforma IoT añade a esta paleta es `Warning` (`#B45309` sobre `#FFFBEB`), por la necesidad de representar estados intermedios del dispositivo que las tablas de la web no tienen.

#### Tipografía

La familia tipográfica elegida es una **sans-serif geométrica y humanista de alta legibilidad en tamaños pequeños**, con un juego de pesos completo (Regular a Bold) que permite construir jerarquía sin recurrir a familias adicionales ni a negritas sintéticas. Se definieron los siguientes estilos:

| Rol | Uso | Tamaño / Peso | Interlineado |
| :--- | :--- | :--- | :---: |
| **Display / Hero** | Titular de posicionamiento sobre el panel fotográfico ("Elevating Residential Living"). | 48–56 px / Bold (700), mayúscula inicial, tracking cerrado | 1.1 |
| **Page Title** | Título de la vista actual ("Finance & Reports", "Units & Residents", "Create Account"). | 24–28 px / Bold (700), Title Case | 1.2 |
| **Section / Card Title** | Encabezado de tarjeta o panel ("Revenue vs Projections", "Manage Areas", "Reservations Calendar"). | 18–20 px / Semibold (600) | 1.3 |
| **Subtitle / Description** | Bajada que explica el propósito de la pantalla ("Manage property inventory and resident information across all towers"). | 15–16 px / Regular (400), `Text Tertiary` | 1.4 |
| **Body** | Párrafos de publicaciones, comunicados y descripciones de reglas de uso de un área. | 14–15 px / Regular (400) | 1.5 |
| **Label / Column Header** | Encabezados de tabla, etiquetas de formulario y títulos de bloque ("TOTAL REVENUE", "EMAIL ADDRESS", "ACTIVE POLLS"). | 11–12 px / Semibold (600), MAYÚSCULAS, tracking amplio (+0.05 em) | 1.2 |
| **Metric / KPI** | Cifras destacadas ("$428.5k", "428", "94.2%"). | 28–32 px / Bold (700), `Text Primary` | 1.1 |
| **Button** | Texto de acciones ("Post", "Send Notice", "Save Changes", "Add New Unit"). | 14 px / Semibold (600) | 1.0 |
| **Badge / Status** | Píldoras de estado y chips de calendario ("PAID", "LATE", "BBQ Area · Unit 1205"). | 11–12 px / Semibold (600), MAYÚSCULAS | 1.0 |
| **Caption / Meta** | Información secundaria ("Owner since 2018", "142 votes · 2 days left", "Showing 1–10 of 428 units"). | 12–13 px / Regular (400), `Text Tertiary` | 1.4 |

**Reglas de aplicación tipográfica:**

- **Jerarquía por peso y tamaño, no por color:** los niveles se distinguen por tamaño y peso; el color se reserva para el significado (marca o estado). Así, un título nunca compite cromáticamente con un badge.
- **Máximo dos niveles de jerarquía por bloque:** un `Section Title` y su contenido; nunca tres títulos seguidos sin separación visual.
- **Números con formato tabular:** cifras financieras y de KPI (`$428.5k`, `$1,240.00`, `94.2%`) usan cifras de ancho fijo para que las columnas de la tabla alineen y sean comparables de un vistazo.
- **Límite de longitud de línea:** 60–75 caracteres en párrafos (publicaciones y comunicados); se parte el texto en bloques cortos con espaciado entre párrafos.
- **Legibilidad mínima:** 14 px para texto de formulario y 12 px para metadatos; nunca por debajo de 11 px, para preservar legibilidad en el segmento de adultos mayores.

#### Espaciado

El espaciado sigue una **escala base de 4 px (múltiplos: 4, 8, 12, 16, 20, 24, 32, 40, 48, 64)**, tomado de la convención de Tailwind CSS para que los valores sean consistentes entre diseño y código. Esta escala hace predecibles los ritmos verticales y permite que cualquier componente nuevo encaje sin cálculos ad hoc.

| Token | Valor | Aplicación típica |
| :--- | :---: | :--- |
| space-1 | 4 px | Separación entre ícono y texto dentro de un botón o de una etiqueta. |
| space-2 | 8 px | Gap entre badges e inputs apilados; padding interno de píldoras. |
| space-3 | 12 px | Gap entre elementos de una misma tarjeta; padding de celdas compactas. |
| space-4 | 16 px | Padding interno estándar de tarjetas; separación entre tarjeta KPI y tarjeta principal. |
| space-5 | 20 px | Padding de celdas de tabla (densidad cómoda por defecto). |
| space-6 | 24 px | Separación entre tarjetas de contenido y entre el contenido y el borde del panel. |
| space-8 | 32 px | Separación entre secciones mayores y padding del panel lateral respecto al contenido. |
| space-10 / 12 | 40 / 48 px | Aire de las vistas de acceso y registro, que emplean un diseño más respirado por ser pantallas de bajo número de elementos. |

**Reglas de composición derivadas del espaciado:**

- **Layout de 12 columnas** con gutter de 24 px y márgenes laterales de 48 px en escritorio; el sidebar ocupa una columna fija de 280 px (delimitada por una línea de 1 px en `Border`) y el área de contenido se divide en bloque principal (aproximadamente 8 columnas) más panel lateral contextual (aproximadamente 4 columnas), como se observa en Community Wall, Common Areas y Finance.
- **Ritmo vertical constante:** cabecera de página (título + subtítulo + acciones) → fila de tarjetas KPI → contenido principal, con 24 px de separación entre bloques y 16 px dentro de un mismo bloque.
- **Densidad de tabla:** padding vertical de 20 px por fila y altura mínima de fila de 56 px, suficientes para el objetivo táctil y para separar visualmente los registros en tablas con mucha información. La fila de unidades incluye avatar de 40 px, lo que eleva la altura a 96 px sin romper la alineación de las columnas.
- **Formulario en dos columnas:** los campos del diálogo de reserva se alinean en una retícula de dos columnas con gap de 16 px; los campos de ancho completo (descripción de reglas) ocupan las 12 columnas del diálogo, que tiene un ancho máximo de 512 px y padding interno de 24 px.
- **Radios y bordes:** radios de 8 px para botones y badges, 12 px para tarjetas, campos e inputs, y radio completo para píldoras (badges, buscador, elementos de la barra superior); borde de 1 px en `Border` o `Border Strong` para delimitar superficies claras.
- **Sombras:** muy sutiles (elevación baja en hover de tarjetas); en el panel fotográfico de acceso y registro la profundidad se logra con overlay de color y no con sombras duras.
- **Objetivos táctiles:** ningún control interactivo por debajo de 44 × 44 px en móvil; en escritorio, altura mínima de 40 px para botones y 56 px para filas de tabla, lo que además mejora la precisión del clic.

### 5.1.2. Web, Mobile and IoT Style Guidelines

La sección 5.1.1 definió los tokens del producto: una paleta, una escala tipográfica, una escala de espaciado y un registro de texto. Esos tokens **no se duplican por plataforma**. Lo que cambia de una superficie a otra es la densidad de información, el modelo de navegación y la forma física de la interacción, y eso es precisamente lo que hay que fijar aquí, porque de lo contrario cada frente (web, móvil, firmware) interpretaría los mismos tokens por su cuenta y el producto se leería como tres aplicaciones distintas.

Edifika tiene tres clientes que consumen los mismos datos: la **Web Application** en navegador, la **Mobile Application** en Flutter/Dart para iOS y Android, y los **nodos ESP32** gobernados por el Edge API on-premise (sección 4.1.3). Un mismo hecho de dominio, como una reserva confirmada, una credencial suspendida o una lectura de 340 lux, debe verse y leerse igual en los tres. Por eso el trabajo no consistió en inventar una guía nueva para cada plataforma, sino en bajar de la pantalla a los centímetros.

Las siete pantallas de referencia se diseñaron primero para escritorio, porque el segmento administrador trabaja con tablas densas: 428 unidades, 45 saldos pendientes y reservas de cuatro áreas comunes. A partir de ellas se derivaron las reglas siguientes. Cada decisión se justifica con lo que esas pantallas ya hacen, y cuando una regla no se observa en ninguna de ellas, se declara como regla nueva y no como observación.

| Elemento | Web | Mobile | Dispositivo IoT |
| --- | --- | --- | --- |
| Densidad | Alta: 3 o 4 tarjetas KPI, tabla y panel lateral en la misma vista. | Media: 2 o 3 KPI y una tarjeta por fila; la tabla no viaja. | Nula: un LED, un tono y una etiqueta. |
| Navegación | Sidebar fijo de 280 px con seis destinos. | Barra inferior con cuatro destinos y un FAB. | Ninguna. El pulsador y el contactless son el acceso. |
| Color de acción | `Primary #8C088F` | `Primary #8C088F`, idéntico | `Primary #8C088F` en el LED y en el acento de la carcasa. |
| Tipografía | Escala de 11 a 56 px. | Misma escala, cuerpo a 16 px y tamaño dinámico del sistema. | Altura de letra mínima de 2.5 mm en etiqueta impresa, siempre en mayúsculas. |
| Estado | Píldora con texto ("PAID", "LATE (12D)", "VACANT"). | La misma píldora. | LED más código de parpadeo; el color solo nunca basta. |
| Objetivo táctil | 40 px de alto en botones, 56 px en filas. | 44 × 44 px como mínimo. | Superficie de contactless de 25 mm o más. |
| Diálogo | Modal centrado de 512 px con scrim del 50 %. | Bottom sheet con la acción principal anclada abajo. | Pulsación mantenida de 1.5 s para acciones irreversibles. |
| Movimiento y retardo | Elevación baja en hover, sin animaciones de más de 200 ms. | Gesto con alternativa visible siempre disponible. | Retardo máximo de 500 ms entre la pulsación y el relé. |
| Accesibilidad | Contraste 4.5:1, foco visible, sin dependencia del color. | Tamaño dinámico del sistema, contraste alto del sistema operativo. | Código de parpadeo redundante y silencio programable en horario nocturno. |

#### Web Style Guidelines

La Web Application es la superficie de trabajo del segmento administrador y la única capaz de sostener la densidad de información que ese rol exige. Todas las reglas de este bloque se leen sobre pantallas ya construidas, y la vista de **Units & Residents** es la línea base: sidebar fijo, barra superior, fila de cuatro tarjetas KPI, barra de filtros y tabla como bloque dominante.

| Breakpoint | Ancho | Composición |
| --- | --- | --- |
| xs | Menos de 640 px | Una columna. El sidebar pasa a cajón deslizante con scrim. Las tablas se convierten en tarjetas apiladas y la fila de KPIs se desplaza horizontalmente. |
| sm | 640 px | Dos columnas para los KPIs. El buscador ocupa el ancho completo de la barra superior. |
| md | 768 px | Sidebar reducido a iconos de 72 px con etiqueta al pasar el cursor. El panel lateral contextual pasa debajo del contenido principal. |
| lg | 1024 px | Sidebar de 280 px restaurado. El contenido principal ocupa 8 columnas y el panel lateral 4, con gutter de 24 px. |
| xl | 1280 px | Composición de referencia completa: sidebar fijo, barra superior, fila de KPIs, bloque principal de 8 columnas y panel lateral de 4. |
| 2xl | 1536 px o más | El contenido se limita a 1440 px y se centra. Estirar más solo alarga las líneas por encima de los 75 caracteres fijados en 5.1.1. |

**Sidebar.** Ocupa una columna fija de 280 px delimitada por una línea de 1 px en `Border`, y sostiene seis destinos sin desplazamiento: Dashboard, Units & Residents, Common Areas, Finance, Community Wall y Documentation. El destino activo se marca con fondo `Primary Light`, texto `Primary` y una barra de 4 px en el borde izquierdo. La combinación se repite en las cuatro pantallas de aplicación para que el usuario sepa dónde está sin leer el título. La acción "New Alert" se mantiene por encima de los destinos secundarios (Settings, Support) porque es la de mayor frecuencia del administrador, y no se mezcla con la navegación: mezclar la acción más frecuente con el menú hace que ninguna de las dos se pueda recorrer de un vistazo.

**Barra superior.** El buscador en píldora solo aparece donde hay algo que buscar, con su placeholder "Search community posts..." en el muro comunitario, y se omite en las vistas sin búsqueda, como Common Areas, porque un campo de búsqueda vacío es una promesa que la pantalla no cumple. A la derecha van las notificaciones con punto rojo solo si hay elementos no leídos, la ayuda y el avatar con la etiqueta de rol ("Admin Portal"), que recuerda qué rol está operando la pantalla.

**Composición del contenido.** El ritmo vertical es fijo: cabecera de página con título, bajada y acciones a la derecha; fila de tarjetas KPI; bloque principal. La cantidad de tarjetas KPI varía según la información disponible y la fila no se estira para llenar el ancho: Finance muestra tres porque tiene tres métricas, mientras Units & Residents muestra cuatro. La tarjeta en `Danger` (ARREARS) se sostiene sola por su tinte y su etiqueta roja, sin competir con la acción primaria.

**De la tabla a la tarjeta.** Por debajo de 768 px, las tablas de Units & Residents y de Residents with Outstanding Balances se rehacen como tarjetas apiladas en lugar de comprimirse con desplazamiento horizontal. Cada tarjeta conserva el avatar de 40 px, el nombre de la persona, la unidad, la píldora de estado y las acciones, con los mismos rótulos en `MAYÚSCAS` que antes servían de encabezado de columna. Los filtros y la paginación pasan a una barra fija al pie para que el alcance de los datos siga visible.

**Interacción.** El hover eleva la tarjeta de forma apenas perceptible y el foco de teclado se dibuja como un anillo `Primary` de 2 px con desfase de 2 px, de modo que recorrer la interfaz con el teclado sea tan visible como con el mouse. Cada pantalla conserva una sola acción primaria sólida: "Generate Report" es sólida y "Export PDF" y "Excel" quedan en outline. El diálogo de reglas de reserva es el patrón de referencia para cualquier confirmación en la web.

El modal mide 512 px de ancho máximo, se centra, usa radio de 12 px y un scrim al 50 % que **atenúa pero no oculta** el calendario de fondo: el administrador tiene que seguir viendo sobre qué fecha y sobre qué área estaba trabajando cuando aparece "Reservation of Loreley". El foco queda atrapado dentro del diálogo, se cierra con la X, con la tecla Escape o con un clic en el scrim, y al cerrarse devuelve el foco al elemento que lo abrió. Las acciones irreversibles, como revocar una credencial o suspender un área, exigen un segundo paso de confirmación con el nombre del objeto en la frase.

**Estados de carga, vacío y error.** Los skeletons respetan las dimensiones del contenido final para que la página no salte mientras llegan los datos. El pie de tabla siempre declara el alcance ("Showing 1–10 of 428 units", "Showing 4 of 45"), porque en tablas largas el usuario necesita saber dónde está antes de decidir si pagina. Los estados vacíos explican la causa y ofrecen la acción siguiente, del tipo "No hay reservas para este mes" con el botón para crearla. Nunca se deja un bloque blanco sin explicación, porque el usuario lo lee como una falla del sistema.

**Muro comunitario.** La vista reparte el feed a la izquierda y tres tarjetas de moderación a la derecha, con la misma proporción 8/4 del resto del producto. Esa fila de KPIs y el panel lateral cumplen una función de jerarquía, no de adorno. En el Mod Queue, el comentario denunciado se separa con una barra roja a la izquierda y ofrece "Dismiss" y "Review" dentro del mismo bloque, de modo que la resolución no obliga a navegar. En ACTIVE POLLS, las opciones se leen como barras horizontales con su porcentaje en `Primary` y el conteo debajo ("142 votes · 2 days left"): es una lectura de decisión, no una lectura de datos crudos.

**Áreas comunes.** El calendario es la vista más densa del producto y por eso concentra más reglas. El chip de color identifica área y estado, la leyenda textual de cuatro entradas está siempre visible al pie, y los días deshabilitados quedan en gris, nunca en blanco.

**Acceso y registro.** Las dos vistas de entrada comparten una retícula de dos mitades que resuelve la responsividad sin código adicional: a partir de 1024 px el panel fotográfico ocupa la mitad y el formulario la otra; por debajo de 768 px el panel se oculta y el formulario toma el ancho completo con márgenes de 24 px. El formulario se escribe en columna única, con etiquetas en `MAYÚSCAS`, campos con ícono a la izquierda y separador inferior en lugar de caja completa, y un botón sólido seguido de su variante outline. Ambas vistas comparten el mismo esqueleto y solo cambian los campos, lo que hace que el paso entre una y otra se perciba como continuo.

#### Mobile Style Guidelines

La Mobile Application cubre al propietario y al inquilino en sus tareas de uso frecuente: pagos, reservas, comunicados y foro desde iOS y Android. Los datos y los tokens de color, tipografía y microcopy son los mismos que en la web, porque el residente no debería tener que aprender un segundo idioma visual. Lo que se rediseña es el modelo de navegación: una tabla de 428 unidades no cabe en 360 px, y el error fácil sería comprimirla hasta que quepa en lugar de cambiarla.

**Densidad.** Se conserva la escala tipográfica, pero el cuerpo sube a 16 px, que es el tamaño base que las plataformas móviles esperan y el que evita el auto-zoom al enfocar un campo. El mínimo de 12 px de las tablas web desaparece: en móvil ningún texto baja de 14 px, y los metadatos como "Unit 402 · 5 hours ago" se mantienen en 13 px porque el nombre de la unidad es parte del dato, no decorado.

**Navegación.** La barra inferior admite un máximo de cuatro destinos visibles, el número que un pulgar alcanza sin reposicionar la mano; un quinto destino abre una pantalla secundaria. La regla que gobierna la decisión es "un destino, una tarea". La web organiza por módulo (Finance, Common Areas) porque el administrador trabaja en sesiones largas frente al monitor, mientras la app móvil organiza por intención del momento: pagar, reservar, avisarme.

**Objetivos táctiles.** Ningún control interactivo baja de 44 × 44 px, y los que ejecutan acciones destructivas suben a 48 px de lado. Las celdas de una tarjeta son un objetivo de 56 px de alto, la misma medida ya usada para las filas de tabla en escritorio, lo que preserva el ritmo visual entre las dos plataformas.

**FAB.** El botón flotante violeta que aparece abajo a la derecha en Units & Residents, Finance y Community Wall se conserva como patrón de creación. En móvil se ancla encima de la barra inferior respetando el *safe area* del dispositivo, y no se muestra en las pantallas que no admiten creación, como Finance o la consulta de una reserva existente.

**Diálogos.** El modal centrado de la web se convierte en *bottom sheet*, porque en móvil el teclado ocupa la mitad superior de la pantalla y la acción principal quedaría fuera de vista. Los campos se apilan en una columna con separaciones de 16 px, la acción primaria queda anclada en el borde inferior dentro del alcance del pulgar, y el cierre por arrastre hacia abajo tiene su equivalente accesible en un botón de cerrar explícito.

**Listas y tarjetas.** Cada fila de lista mantiene la composición de la tabla web, con avatar de 40 px, nombre primario, subunitario y píldora de estado, para que el residente reconozca una pantalla que ya conoce en el escritorio. Los filtros se aplican con un botón en la barra superior que muestra la cantidad activa como contador, en lugar de los tres desplegables en línea de la vista web.

**Gestos.** Deslizar para revelar acciones secundarias, tirar hacia abajo para refrescar telemetría y pulsación larga para el menú contextual. Cada gesto tiene una alternativa visible en un botón de tres puntos, porque no todo usuario descubre los gestos por sí solo, y esconder una acción tras un deslizamiento la deja inaccesible para quien no lo conoce. Por el mismo motivo se descarta el gesto de "deslizar para borrar": la confirmación en dos pasos es más segura y produce menos errores de precisión.

**Notificaciones.** Las alertas push usan el mismo `Danger` de la aplicación y el badge se limita visualmente a tres dígitos. Los eventos críticos de IoT, como una fuga o un corte automático de bomba, ignoran el modo silencioso del sistema, porque el costo de no avisar supera al de interrumpir. El toque sobre la notificación lleva directo a la incidencia, sin pasar por el dashboard.

**Sin conexión.** La app muestra los datos en caché con su marca de tiempo ("actualizado hace 4 min") y un banner en `Neutral` cuando el Edge API o la nube no responden. Nunca se muestra un vacío como si fuera un resultado. Esta es la traducción en pantalla de la decisión de arquitectura del capítulo IV: el condominio sigue operando con la última lista de credenciales sincronizadas.

**Estado de madurez.** Las decisiones anteriores se derivan de los mismos tokens de las siete pantallas de referencia aplicados sobre las convenciones de Material Design 3. El juego de pantallas específico de la app móvil todavía no está formalizado, así que estas reglas quedan fijadas aquí como contrato de diseño para esa etapa y no como descripción de pantallas ya construidas.


#### IoT Style Guidelines

La interfaz IoT de Edifika es software: es el dashboard donde el administrador y el residente ven el estado de los dispositivos del edificio, y hereda la paleta sin excepciones. Lo que cambia es la naturaleza del dato. Las lecturas llegan por MQTT desde el Edge API con latencia variable, y un dispositivo puede simplemente no estar conectado. De ahí la regla que gobierna todo este bloque: **cuando no se sabe el estado de un dispositivo, la interfaz dice que no lo sabe**. Un vacío ambiguo es peor que un mensaje explícito de "sin conexión", porque se toman decisiones sobre puertas, luz y bombas de agua sobre la base de ese vacío.

**Anatomía de la tarjeta de dispositivo.** Replica la tarjeta KPI ya usada en Finance: contenedor de ícono en `Primary Icon Tint`, nombre del dispositivo en Semibold de 18 a 20 px, rótulo de zona en `MAYÚSCAS` y fila de lectura con el valor en cifras tabulares. A eso se suman tres elementos que las pantallas web no necesitan: la píldora de conexión (ONLINE, OFFLINE, SYNCING), la hora de la última lectura y la antigüedad de esa lectura.

**Color de estado.** Se reutilizan `Success`, `Danger` y `Neutral` con la semántica de 5.1.1. La única adición de todo el sistema es el token `Warning` (`#B45309` sobre `#FFFBEB`), y la razón es concreta: un dispositivo tiene estados intermedios que una tabla web no tiene. La batería baja del nodo de iluminación, un sensor intermitente o una calibración pendiente no son "todo bien" ni son "falla", y sin ese nivel intermedio el administrador se enfrenta a elegir entre mentir en verde o declarar una alarma donde no la hay.

**Tiempo real.** Las actualizaciones llegan por suscripción y no por sondeo, y la marca de tiempo nunca desaparece de la tarjeta. Si dejan de llegar lecturas durante más de 60 segundos, la tarjeta pasa a estado SYNCING en `Neutral` y deja de presentar el último valor como si fuera actual. Un número congelado mostrado en vivo es la forma más rápida de perder la confianza del usuario en todo el panel.

**Umbrales y alertas.** Los umbrales se definen en el editor de reglas, con el mismo formulario en dos columnas que se ve en las reglas de reserva. Cuando un umbral se cruza, la alerta se presenta con el patrón ya usado en el comentario denunciado: barra de color `Danger` a la izquierda, ícono, título, valor con cifras tabulares, hora y las dos acciones de resolución. Nunca se limita a una franja roja en el calendario.

**Series de tiempo.** Los gráficos de telemetría reutilizan la composición de "Revenue vs Projections", con área de datos, eje temporal y selector de periodo a la derecha, y cifras tabulares. Cuando falta un tramo, la línea se dibuja discontinua y el hueco se rotula como "sin datos": rellenar por interpolación haría ver que el sensor midió cuando en realidad no informó, y esa diferencia importa cuando la lectura es una alarma de nivel de agua.

**Acciones sobre dispositivos.** La tarjeta de dispositivo sirve para leer y para llevar al detalle, no para mandar. El control manual de una luminaria o de una bomba se hace desde el editor de reglas y desde la vista de detalle, con confirmación, para respetar la regla de "una sola acción primaria por pantalla" y para que ninguna acción irreversible quede a un toque de distancia de una lectura rutinaria. La apertura remota de un acceso sí es una acción inmediata y conserva su propio botón sólido, porque es una emergencia con ventana de segundos.

**Modo degradado.** Cuando el Edge API pierde el broker, la aplicación muestra un banner en `Neutral` con el texto "operando con datos locales" y la hora de la última sincronización, siguiendo el patrón de la tarjeta "Maintenance Schedule" de la vista de áreas comunes. Las lecturas que sí llegan se distinguen con una marca de "local", para que nadie confunda lo acumulado en el edificio con lo validado en la nube.

#### IoT Physical Interface Style Guidelines

Los nodos que se despliegan en el edificio (el nodo de iluminación con sensor de presencia y de lux, el nodo hidráulico con sensor de caudal y presión, el lector de credenciales y el medidor de consumo, coordinados por el Edge API) tienen una interfaz física mínima: un LED RGB, un pulsador, una superficie de contactless, un orificio de restablecimiento y una etiqueta. No hay pantalla, y no siempre hay un teléfono en la mano, así que cada señal física tiene que sostenerse por sí sola. La decisión de fondo es mantener el mismo vocabulario de color y de etiquetas que la aplicación, y añadir redundancia donde el color no alcanza.

**Código del LED de estado.** El LED es la única señal siempre disponible: funciona en la oscuridad, a distancia y sin que nadie toque el dispositivo. Cada estado tiene un color tomado de la paleta y además un patrón de parpadeo, para que el significado sobreviva a la daltonía, al sol directo de un estacionamiento o a un LED quemado por un pico de tensión.

| Estado | Color | Patrón | Lectura |
| --- | --- | --- | --- |
| Normal | `Success` `#2C6E4A` | Fijo | Conectado y dentro de parámetros. |
| Atención | `Warning` `#B45309` | Dos parpadeos lentos | Batería baja, sensor intermitente o calibración pendiente. |
| Alarma | `Danger` `#B91C1C` | Tres parpadeos rápidos y continuos | Fuga, nivel de agua crítico o apertura forzada. |
| Acción en curso | `Primary` `#8C088F` | Intermitente rápido | Aceptando una credencial o ejecutando un comando. |
| Sin conexión | `Neutral` `#6B6B6B` | Un parpadeo cada 5 s | Sin broker. El dispositivo conserva el último estado y sigue operando localmente. |
| Apagado | Sin emisión | Ninguno | Sin alimentación. Es el único estado sin señal, y por eso se reserva para un hecho inequívoco. |

**Pulsador.** La pulsación corta ejecuta el control manual local, por ejemplo encender o apagar la luminaria del nodo, porque es la acción de emergencia cuando el teléfono no tiene cobertura o la nube está caída, y es coherente con la decisión de operar en el borde descrita en 4.1.3. La pulsación mantenida de 1.5 s empareja o restablece el dispositivo, y el LED violeta intermitente confirma que el modo está activo. La distinción evita que un residente apoye el pie o una herramienta contra el pulsador en un pasillo y desactive la luz, o corte un equipo sin querer.

**Contactless.** Tocar la credencial es el camino más corto y el único que sigue funcionando sin enlace WAN, así que hereda el mismo criterio del Edge API. Un parpadeo verde y la apertura del relé confirman el acceso aceptado; un parpadeo rojo y un tono corto rechazan la credencial, sin dejar ambigüedad entre "tarjeta no leída" y "credencial suspendida", dos situaciones que exigen respuestas opuestas del residente. La superficie de lectura se dimensiona a 25 mm o más para que no dependa de la precisión del dedo.

**Tono audible.** El buzzer suena solo en tres casos: fuga detectada, corte automático de la bomba y apertura forzada. En un condominio, un tono que se repite por cualquier otra condición entrena a los vecinos a ignorarlo, que es el peor resultado posible para una alarma real. Por eso se limita a tres segundos por evento y admite silenciamiento por horario, de 23:00 a 06:00 por defecto, momento en el que solo queda el LED.

**Retardo de respuesta.** El LED confirma la intención en un máximo de 200 ms, el relé completa la acción física en 500 ms y el tono llega antes de un segundo. Más allá de ese margen el usuario asume que el dispositivo no respondió y repite la acción, y una repetición sobre un actuador es un incidente. Estos tres números son también el criterio con el que se evalúa el firmware en la sección de prototipado.

**Apariencia del objeto.** La carcasa es de plástico claro mate en `Neutral`, con una franja o un aro en `Primary` en el frente, de modo que el dispositivo se lea como parte del producto y no como un aparato ajeno. El acabado mate evita reflejos que confunden tanto al sensor infrarrojo de presencia como a quien intenta ver el LED a contraluz. El radio de las esquinas de la carcasa replica los 12 px de las tarjetas de la aplicación.

**Etiqueta del dispositivo.** Cada nodo lleva una etiqueta con su identificador, un código QR o NFC y el tópico MQTT corto al que publica. La escala tipográfica de 5.1.1 se traduce aquí a milímetros: el `Label` de 11 a 12 px se imprime con una altura de letra mínima de 2.5 mm, siempre en mayúsculas, sobre fondo con contraste superior a 4.5:1, porque una etiqueta se lee a distancia y con la linterna del teléfono, no a la distancia de un monitor.

**Terminología.** Los textos impresos y los mensajes del dispositivo usan el Lenguaje Ubicuo de la sección 2.5: "Credencial suspendida", "Fuga detectada", "Corte automático", "Acceso concedido". Nunca un código interno ni un número de error que el residente tenga que traducir, y nunca el nombre del microservicio que produjo el evento.

**Instalación y accesibilidad.** El lector de credenciales se coloca entre 1.2 y 1.6 m de altura, con iluminación suficiente y sin reflejos en la superficie del sensor. El orificio de restablecimiento exige una aguja y queda sellado para que solo mantenimiento lo alcance. Entre las 23:00 y las 06:00 el LED baja al 10 % de brillo pero **nunca se apaga del todo**: un LED apagado no codifica ningún estado, y el residente terminaría tocando el dispositivo para comprobar si funciona.

**A prueba de fallo.** Si el nodo pierde el broker, mantiene el último estado conocido, su LED pasa a `Neutral` con un parpadeo lento y el Edge lo reporta como desconectado en la aplicación. El sistema no aparenta estar bien cuando no lo está. En el nodo hidráulico eso significa que la bomba se corta por la lectura local aunque el cloud no responda, porque una inundación no espera a la red.

## 5.2. Information Architecture

La arquitectura de información (AI) de Edifika define **cómo se estructura, se nombra, se encuentra y se recorre el contenido** del producto digital. En esta sección no se resuelve el problema del condominio, sino que se toman las decisiones que permiten que ese contenido —que crece con cada torre, cada unidad, cada reserva y cada publicación— siga siendo localizable y comprensible tanto para un administrador con años de responsabilidad administrativa como para un residente que usa la plataforma desde el celular.

El alcance abarca dos superficies digitales que comparten contenido pero no audiencia ni permisos:

- **Landing Page (sitio web estático):** primera fase de la experiencia, dirigida a visitantes que aún no tienen cuenta. Su función es explicar el problema, demostrar el producto y convertir al visitante en usuario registrado.
- **Web Application (aplicación web):** segunda fase, restringida a usuarios autenticados. Atiende a dos audiencias con permisos distintos: **ADMIN** (administrador de la torre o condominio) y **RESIDENT** (propietario o inquilino vinculado a una unidad), los dos roles definidos en el microservicio IAM/Auth (sección 4.2.1).

La estructura de contenido resultante es la siguiente:

| Nivel | Landing Page | Web Application |
| :--- | :--- | :--- |
| **0 — Acceso** | Home pública, sin autenticación | Login · Create Account · recuperación de contraseña |
| **1 — Global** | Hero con propuesta de valor y llamada a la acción | Dashboard (resumen operativo del condominio) |
| **2 — Módulos** | Cómo funciona · Módulos · Planes · Recursos | Units & Residents · Common Areas · Finance · Community Wall · Documentation |
| **3 — Detalle** | Solicitar demo · Contacto | Unidad y residente · Reglas y calendario de un área común · Saldo de un residente · Hilo de una publicación · Documento del reglamento |
| **Transversal** | Barra superior fija y pie con enlaces agrupados | Barra superior (búsqueda, notificaciones, ayuda, perfil) + sidebar + New Alert + Settings + Support |

Cuatro decisiones estructurales rigen esta arquitectura y se explican a lo largo de la sección:

1. **Cinco módulos, no más.** El sidebar del mock-up expone exactamente cinco destinos de gestión (Dashboard, Units & Residents, Common Areas, Finance, Community Wall) más Documentation como fuente de consulta. No existe un sexto módulo: cuando una necesidad no cabe en ninguno, se resuelve como estado, filtro o acción dentro del módulo correspondiente, en lugar de crear un destino nuevo.
2. **Un criterio de nombrado único.** Cada módulo tiene un nombre en inglés fijo ("Finance", "Common Areas") y ese mismo nombre se repite en el título de la vista, en el encabezado del correo de notificación y en el nombre de la columna en el archivo exportado. El detalle se desarrolla en 5.2.2.
3. **Profundidad máxima de tres niveles.** La información definitiva —una regla de uso, un saldo, un comprobante— nunca exige más de tres niveles. Cuando una excepción lo requiere, se resuelve con un enlace directo en la fila de la tabla o con un modal, no con un cuarto nivel de árbol. Esta regla se apoya en la ley de Hick-Hyman ya aplicada en 5.1.1: cada decisión que se elimina del usuario es un clic que se le ahorra.
4. **Acciones a dos clics o menos.** El presupuesto de profundidad se traduce en una regla operativa para la navegación: una acción frecuente debe estar a dos clics o menos desde la pantalla donde el usuario ya se encuentra.

### 5.2.1. Organization Systems

**Jerárquica (Visual Hierarchy):** <br>

La organización jerárquica es el sistema principal de Edifika y se aplica en tres escalas distintas:

- **Escala de producto:** el sidebar establece el orden de prioridad de los módulos, de la tarea más frecuente a la menos frecuente. El orden publicado es *Dashboard → Units & Residents → Common Areas → Finance → Community Wall → Documentation*: primero lo que se consulta a diario (padrón y estado del condominio), luego lo que se opera por evento (reservas), después lo que se revisa mensualmente (finanzas), luego lo que es social (muro comunitario) y al final lo que es referencial y estático (documentación). Documentation se ubica última de forma deliberada: es contenido de consulta, no de acción, y no debe competir con los destinos de trabajo.
- **Escala de vista:** dentro de cada pantalla, la jerarquía se construye con cuatro niveles, siempre en el mismo orden. (1) Cabecera de vista con título y bajada —"Finance & Reports" / "Real-time overview of the residential financial health"—, que enuncia qué es la pantalla y para qué sirve. (2) Fila de tarjetas KPI, que responde primero a "¿cómo va el condominio?" con un máximo de cuatro cifras. (3) Bloque principal, que responde "¿qué detalle debo revisar?" y ocupa el mayor ancho. (4) Panel lateral contextual, que responde "¿qué requiere mi atención ahora?" y contiene las tareas pendientes del módulo: "Manage Areas", "Residents with Outstanding Balances", "ACTIVE POLLS" y "MOD QUEUE". El criterio es que la información accionable nunca compite en el bloque principal con la información consultable.
- **Escala de registro:** dentro de una tabla, la jerarquía se resuelve por peso tipográfico y no por color. El nombre de la unidad y el del residente forman la celda dominante ("Unit 1204 · Julian Thorne"); el estado y la deuda se muestran como badges ("OCCUPIED", "LATE (12D)") porque requieren lectura rápida; y el metadato de contexto ("TOWER A", "Owner since 2018") se degrada a texto terciario porque sirve de apoyo y no de respuesta.

La jerarquía se refuerza con una regla de **escaneo descendente en tres pasos**: título → KPI → bloque principal. Si un usuario solo lee esos tres elementos, ya debe entender en qué módulo está, cómo está la situación general y dónde está el detalle que le compete.

El Dashboard aplica la jerarquía al revés de lo habitual: el contenido de menor prioridad (comunicados del muro, invitaciones a eventos) se presenta en la parte inferior, porque el administrador que abre la aplicación por la mañana solo necesita saber qué cambió desde ayer.

**Secuencial (Step-by-step):** <br>

La organización secuencial se aplica a las tareas que tienen un orden obligatorio, donde saltar un paso produce un error o una tarea incompleta. Se materializa en dos formatos.

- **Paso a paso explícito (flujo guiado):** el alta de un nuevo residente o la configuración de un área común no puede completarse en un solo paso. El administrador configura primero el área (capacidad, tarifa, horario de apertura y cierre, reglas de uso y estado) y recién después la asocia a las unidades que la usan. Los campos del diálogo de reserva del mock-up siguen exactamente ese orden: "Area Name" → "Capacity" y "Fee/Cost ($)" → "Opening Hours" y "Closing Hours" → "Rules & Description" → "Status" → "Save Changes". Los campos derivados se completan solos al elegir el área (elegir "BBQ Area" carga su tarifa de $25.00, su capacidad de 12 y su horario de 08:00 AM a 10:00 PM), de modo que el usuario nunca pierde el contexto ni tiene que recordar lo que escribió.
- **Secuencia de estados dentro de la vista:** en lugar de esconder información, cada entidad muestra su etapa actual en la propia fila. La reserva tiene cuatro estados visibles en la leyenda del calendario (Confirmed, Pending, Blocked, Maintenance); el pago de una unidad tiene cuatro (Paid, Pending Approval, Late, Overdue); y la unidad tiene cuatro estados de ocupación (Occupied, Vacant, In transition y su deuda asociada), mientras que el saldo global del condominio se resume en un quinto estado, ARREARS. La secuencia se comunica con posición en el espacio —de izquierda a derecha en el calendario, de arriba abajo en el flujo— y con color de badge, nunca con numeración de pasos, porque el usuario no necesita saber que va "por el paso 3": necesita saber en qué estado está lo que está viendo.

La secuencia se refuerza con mensajes de transición que explican el siguiente paso. Cuando una reserva entra en mantenimiento, el sistema muestra "System maintenance scheduled for Oct 25" en el panel *Manage Areas*, de modo que el administrador y el residente mencionen el mismo motivo y la misma fecha. Cuando un residente debe, el botón "Send Notice" ofrece el paso siguiente ("Remind") como acción secundaria en la misma fila, sin obligar al administrador a abandonar la tabla.

El principio general es **terminar antes de empezar otra cosa**: cada flujo secuencial cierra con una confirmación que devuelve al usuario al punto de partida con el resultado visible. Una reserva confirmada reaparece en el calendario, un cobro enviado cambia el estado de la fila y una publicación creada aparece en el muro. El usuario nunca queda en un limbo del tipo "¿se guardó?".

**Matricial (matriz de datos):** <br>

Cuando un registro debe leerse en dos dimensiones simultáneas —"¿qué pasa en cada día?" y "¿qué pasa en cada área?"— la organización jerárquica o secuencial resulta insuficiente y se recurre a una matriz. Edifika aplica la matriz en un único y crítico lugar: el **calendario de reservas de áreas comunes**, que es simultáneamente un registro temporal y un inventario de recursos.

La matriz tiene **un eje fijo y un eje cambiante**:

- **Eje X (columnas):** los días de la semana, con el mes y año como contexto de cabecera ("Reservations Calendar · October 2023"). Este eje es cronológico y siempre ocupa la misma posición, de modo que leer en horizontal equivale a recorrer la línea de tiempo del mes.
- **Eje Y (filas):** las semanas del mes. La intersección entre celda y día es la unidad de información: en cada celda caben uno o varios chips de reserva, cada uno rotulado con el área y, cuando corresponde, la unidad o el motivo ("BBQ Area · Unit 402", "Canceled · Renovation", "Gym Center · Tennis"). Hay un chip por celda cuando no existe conflicto, y varios cuando el área admite reservas simultáneas.

La matriz se vuelve navegable gracias a tres convenciones:

- **Leyenda como filtro, no como adorno:** cada entrada de la leyenda ("BBQ AREA", "PARTY ROOM", "CANCELED", "GYM CENTER") funciona como un selector que atenúa las celdas que no corresponden al área o estado elegido, y que funciona además como leyenda para quien no distingue los tonos.
- **Color con redundancia textual:** el chip combina color (violeta = confirmada, ámbar = pendiente, rojo = cancelada) con etiqueta escrita, de modo que el estado nunca dependa de la percepción cromática.
- **Navegación temporal explícita:** los controles `<` `Today` `>` permiten pasar de mes en mes y volver al mes en curso sin recorrer el calendario día por día.

La tabla de saldos pendientes de Finance aplica el mismo principio matricial en forma tabular: las filas son residentes, las columnas son atributos de la deuda (Status, Last Payment, Amount Due) y las acciones ("Send Notice", "Remind") viven en la última columna, de modo que cada fila es una unidad de decisión y no solo un dato. Los indicadores "Collection Rate" y "Expense Efficiency" cierran ese bloque con la versión unidimensional de la misma matriz: el valor real, su barra de progreso y su "TARGET" (95.0% y 85.0%), que permiten comparar de inmediato lo logrado contra lo esperado.

**Por tópicos:** <br>

La categorización por tópicos agrupa el contenido que responde a la misma pregunta, aunque provenga de módulos distintos. Edifika la aplica en tres escalas.

**a) El sidebar es la categoría de primer nivel.** Los cinco módulos son los tópicos maestros del producto: *padrón del condominio* (Units & Residents), *espacios y reservas* (Common Areas), *economía* (Finance), *comunicación entre vecinos* (Community Wall) y *referencia normativa* (Documentation). Un usuario que busca "¿cuánto debo?" no necesita saber en qué módulo vive el dato: sabe que es una cuestión financiera y va directo a Finance.

**b) Los paneles laterales son el segundo nivel temático.** Cada módulo agrupa sus tareas pendientes en un panel con título en mayúsculas, que funciona como categoría contextual: "ACTIVE POLLS" agrupa las encuestas abiertas, "MOD QUEUE" agrupa la moderación pendiente y "MANAGE AREAS" agrupa la configuración de espacios. De este modo, el contenido lateral nunca se mezcla con el contenido principal y el usuario sabe de antemano que está viendo un subconjunto temático.

**c) Las etiquetas de contenido son el tercer nivel.** Dentro de una publicación o de un documento se aplica el mismo criterio con etiquetas de una sola palabra, en mayúsculas y dentro de una píldora: "EVENT" distingue una invitación de un aviso, y "ADMIN" marca un mensaje oficial frente a uno publicado por un vecino. En Documentation, las categorías son los tipos de documento (Reglamento interno, Acta de asamblea, Política de acceso vehicular, Normas de convivencia) y no el orden alfabético, porque el usuario busca el tipo de documento que necesita, no un título que recuerda a medias.

**Cronológico:** la organización cronológica es el eje natural de todo lo que tiene fecha de vencimiento o de ocurrencia. Se aplica en tres escalas, cada una con su granularidad correcta:

- **Día:** el calendario de Common Areas es la vista cronológica por defecto, porque la pregunta del administrador es "¿qué pasa hoy y esta semana?".
- **Mes:** Finance agrega los datos en ventanas de "Last 6 Months" (JAN–JUN en el mock-up), porque la pregunta del administrador es "¿cómo viene el año?", no "¿qué pasó el martes?". La unidad temporal se elige según la decisión que se debe tomar: se cobra por día, se proyecta por mes.
- **Antigüedad relativa:** el muro comunitario usa tiempo relativo ("2 hours ago", "5 hours ago", "2 days left") en lugar de fechas absolutas, porque el valor para el lector está en saber qué es nuevo. Las fechas absolutas se reservan para los datos que citan un hecho ("Owner since 2018", "Last Payment: Oct 12, 2023") o para las vistas de detalle, donde sí se requiere precisión.

La regla que ordena estas tres escalas es: **el reloj más grueso va arriba y el más fino abajo**. Así, la vista anual de ingresos no compite visualmente con la fecha de vencimiento de una cuota, y el usuario baja en la escala solo cuando necesita detalle.

**Alfabético:** se aplica únicamente donde la búsqueda alfabética es un recurso de decisión y no un descuido de diseño, es decir, cuando el usuario recuerda el nombre del elemento y solo necesita alcanzarlo rápido:

- **Documentación:** los reglamentos, actas y políticas se ordenan alfabéticamente por título dentro de cada categoría, de modo que quien recuerda el nombre exacto de un documento ("Reglamento de convivencia", "Política de acceso vehicular") lo alcance con una lectura vertical corta. Los títulos se ordenan por la palabra significativa, ignorando artículos y preposiciones, para que "Política de acceso" ordene bajo P y no bajo una palabra descartable.
- **Directorio de residentes:** el criterio alfabético aparece como opción de orden dentro de la tabla de Units & Residents, junto al criterio por torre. No es el orden por defecto, porque el administrador busca el código de la unidad ("Unit 1204"), no el nombre del propietario; el criterio alfabético cubre el caso inverso —cuando la consulta llega por el nombre de una persona— y ambos criterios conviven en el mismo control, etiquetados con la misma jerarquía.
- **Índice de la landing page:** los enlaces del pie se ordenan alfabéticamente dentro de su grupo, lo que hace predecible encontrarlos sin recorrer la columna.

En todas las pantallas que ofrecen orden alfabético, la alternativa por relevancia está siempre disponible y es la que se aplica por defecto cuando el usuario escribe en el buscador: **el orden alfabético sirve al recuerdo; el orden por relevancia sirve a la búsqueda**.

**Según audiencia (Personalización):** <br>

La organización por audiencia es el eje transversal más importante de Edifika, porque el mismo conjunto de datos —un saldo, una regla de uso, una publicación— se presenta, se ordena y se etiqueta de forma distinta según quién lo mire. La personalización no se limita a ocultar módulos: cambia el orden, la granularidad y la etiqueta.

**a) Dos versiones del sidebar a partir del mismo conjunto de módulos.** El menú del ADMIN es el de los mock-ups: *Dashboard, Units & Residents, Common Areas, Finance, Community Wall, Documentation*. El menú del RESIDENT es un subconjunto del anterior —*Dashboard, Common Areas, Community Wall, Documentation*—, porque un residente no administra el padrón ni tiene legitimidad sobre la economía de la junta. La regla de construcción del menú por audiencia es explícita: **cada rol ve solo los destinos que le corresponden según IAM/Auth (sección 4.2.1), y la estructura de niveles se mantiene idéntica**, de modo que quien aprende a moverse como residente no tiene que reaprender la navegación si más adelante asume la administración.

**b) Reordenamiento por frecuencia, no por completitud.** Dentro de los módulos compartidos, el orden interno cambia según la audiencia. En Common Areas, el ADMIN ve primero "Manage Areas" —su trabajo es configurar reglas, tarifas y horarios— y el RESIDENT ve primero el calendario de disponibilidad —su trabajo es reservar—. Misma pantalla, misma estructura, distinta prioridad.

**c) Etiqueta de contexto del rol.** La barra superior muestra el rol de forma explícita —"Admin Portal" junto al avatar—, de modo que la identidad de la sesión sea visible en todo momento y nunca haya que deducirla. Esto reduce el riesgo de error por sesión compartida, un caso frecuente en condominios donde el administrador atiende desde el mismo equipo que un vecino.

**d) En el muro comunitario, la audiencia define el derecho a actuar, no el derecho a leer.** Todos los residentes leen el mismo feed en el mismo orden (cronológico descendente). Lo que cambia es qué puede hacer cada quien: el ADMIN publica comunicados oficiales ("Official Announcement", firmados "Edifika Management"), modera ("MOD QUEUE" con "Dismiss" y "Review") y crea encuestas; el RESIDENT publica en su perfil ("Sarah Mitchell · Unit 402"), vota ("Vote Now") y confirma asistencia ("RSVP Now"). Las acciones disponibles sobre una publicación dependen del rol del lector, no de un menú distinto: el mismo post muestra "RSVP Now" al residente y "Dismiss"/"Review" al moderador.

**e) El condominio como unidad de aislamiento.** Cuando una administración opera varios condominios, la audiencia se refina por condominio: el sidebar añade un selector que reordina el contenido completo (unidades, saldos, comunicados, reservas) sin duplicar la aplicación. La etiqueta del selector es el nombre del condominio y todo el contenido ajeno se retira de la vista en lugar de mostrarse atenuado, para que un administrador que trabaja entre dos edificios nunca arrastre datos de uno al contexto del otro.

### 5.2.2. Labelling Systems

El sistema de etiquetado de Edifika persigue un objetivo único: que **cada conjunto de información tenga una sola etiqueta y que esa etiqueta baste para encontrarlo**. La regla que gobierna todo el sistema es una restricción de longitud: **ninguna etiqueta de interfaz supera las tres palabras**, porque por debajo de dos palabras la etiqueta es ambigua y por encima de tres ya no cabe en la barra lateral ni en una píldora de estado. Toda decisión de este apartado se evalúa contra ese criterio y contra la pregunta de si el usuario novato entiende la palabra sin ayuda.

**Acciones con verbos descriptivos:** <br>

Un botón debe decir qué hace, no ofrecer una posibilidad. La regla es **verbo + objeto**, con el verbo en infinitivo o imperativo corto y el objeto en el término que el usuario usa en su vida diaria:

| Patrón | Etiquetas de Edifika | Contexto de uso |
| :--- | :--- | :--- |
| Verbo + objeto | **Save Changes**, **Cancel**, **Dismiss**, **Review** | Acciones de un diálogo o de una cola. La confirmación nombra el contenido de la edición ("Save Changes") en lugar de un "OK" genérico. |
| Verbo + recurso | **Add New Unit**, **New Alert** | Creación de entidades. El recurso se nombra como el usuario lo llama ("Unit", "Alert"), nunca con el nombre técnico del modelo de datos. |
| Verbo + formato | **Export CSV**, **Export PDF**, **Excel** | Generación de archivos. El formato se declara en la propia etiqueta, de modo que el usuario sepa qué va a obtener antes de hacer clic. |
| Verbo + destinatario | **Send Notice**, **Remind** | Comunicación con un resident. "Send Notice" es el aviso formal y "Remind" el recordatorio; se distinguen porque producen efectos distintos en la relación con la comunidad. |
| Verbo + intención | **Vote Now**, **RSVP Now**, **Post** | Interacción en el muro. El verbo es la acción concreta que el lector quiere realizar: votar, confirmar asistencia, publicar. |
| Verbo + estado | **Edit Rules** | Modificación de una configuración. Se usa "Edit" y no "Manage" porque la acción es acotada y su resultado es un formulario. |
| Verbo + periodicidad | **Export**, **Generate Report** | Acciones de la barra de Finance. El verbo señala que se produce un archivo nuevo, no que se navega a otra pantalla. |

Dos reglas derivan de esta tabla completan el criterio:

- **El botón principal lleva el verbo de la acción más frecuente de esa pantalla, y solo hay uno.** En Finance el sólido es "Generate Report" (la tarea dominante del administrador) y "Export PDF" y "Excel" degradan a variante secundaria; en Units & Residents el sólido es "Add New Unit" y "Export CSV" es secundario. Nunca hay dos botones sólidos compitiendo en la misma vista, porque el usuario no puede jerarquizar por color lo que la pantalla no jerarquizó por orden.
- **"Cancel" siempre devuelve, nunca borra.** En los diálogos, "Cancel" cierra sin aplicar cambios y el estado previo se conserva; la alternativa a "Save Changes" nunca se presenta como "Discard", porque el usuario no está destruyendo nada, solo está optando por no guardar todavía.

**Categorías uniformes:** <br>

Cada conjunto de información tiene una única etiqueta, y esa etiqueta es la que aparece en **todos** los lugares donde el conjunto aparece: navegación, título de vista, encabezado de tabla, chip del calendario, asunto del correo de notificación y nombre de la columna en el archivo exportado. La uniformidad es total: si el sidebar dice "Finance", el archivo descargado dice "Finance" y el correo de aviso dice "Finance".

| Conjunto de información | Etiqueta en la interfaz | Asociación que debe crear en el usuario |
| :--- | :--- | :--- |
| Inventario de unidades y de las personas que viven en ellas | **Units & Residents** | Une en un solo lugar la unidad física y la persona que la ocupa; quien busca "mi departamento" entiende que ahí también encontrará "quién vive en ella". |
| Espacios de uso compartido y su disponibilidad | **Common Areas** | Anticipa que el contenido incluye tanto las reglas del espacio como el calendario de sus reservas. |
| Salud económica del condominio | **Finance** | Concentración de saldos, pagos, morosidad y reportes; una sola palabra cubre pagos y deudas sin necesidad de dos menús. |
| Comunicación entre los miembros de la comunidad | **Community Wall** | Superficie de publicación con moderación; el nombre en inglés se conserva por consistencia con la etiqueta visible del producto y del sidebar. |
| Reglamento, actas y políticas vigentes | **Documentation** | Fuente de consulta formal y normativa, sin capacidad de escritura. |
| Configuración de las reglas de un espacio | **Manage Areas** | Configura reglas, disponibilidad y estado de cada área; el gerundio indica que es un panel de administración, no una lista. |
| Consultas abiertas a la comunidad | **ACTIVE POLLS** | Rótulo constante aunque cambie la pregunta que se somete a votación. |
| Contenido que requiere intervención del administrador | **MOD QUEUE** | Cola de trabajo; la palabra "Queue" comunica que hay un orden de atención y que las tareas se acumulan. |
| Redacción de un comunicado para los residentes | **Share an update with residents…** | Invita a publicar sin absorbir el formato; el destinatario queda explícito dentro de la propia etiqueta. |
| Autenticación | **Welcome back** / **Create Account** | Entiende la sesión: "Welcome back" reconoce a quien ya tiene cuenta y "Create Account" marca el inicio de una relación nueva. |

La uniformidad se extiende a los subconjuntos: un área común siempre se nombra por su nombre propio ("BBQ Area", "Swimming Pool", "Gym Center", "Party Room") y una unidad siempre por su código ("Unit 1204", "Unit 402"). El nombre de la persona nunca sustituye al código de unidad en un contexto administrativo, porque el código es el dato estable y el nombre puede repetirse o cambiar.

**Mensajes y estados comprensibles:** <br>

Los estados son los rótulos más delicados del sistema, porque describen la situación del usuario y no la del sistema. Se aplican dos reglas: **describir el hecho, sin juzgar**, y **nunca dejar que el color sea el único mensaje**.

Los estados se nombran en **MAYÚSCULAS**, dentro de una píldora de baja saturación, y siempre con una etiqueta textual completa:

| Estado | Etiqueta exacta | Asociación que crea | Cómo se representa |
| :--- | :--- | :--- | :--- |
| Cuota pagada | **PAID** | La unidad está al día y no requiere acción. | Verde sobre fondo verde muy claro. |
| Cuota vencida con retraso | **LATE (12D)** | Hay deuda y la cifra entre paréntesis cuantifica el retraso: el usuario sabe si es urgente o no. | Rojo; el número de días es lo que hace la etiqueta accionable. |
| Deuda acumulada | **ARREARS**, **Action required** | Es la salud financiera del condominio, no la de una persona; el rótulo va en la tarjeta KPI, no junto al nombre de un resident. | Rojo intenso con icono de advertencia. |
| Deuda en manos de la administración | **OVERDUE 15 DAYS** | La administración debe actuar; describe el hecho ("vencida hace 15 días") sin calificar al resident. | Rojo claro en la columna Debt de la tabla. |
| Pago registrado y pendiente de validación | **PENDING APPROVAL** | El pago ya existe pero falta confirmarlo, por eso dice "approval" y no "processing". | Neutro, con texto en dos líneas para no perder legibilidad. |
| Unidad habitada o vacía | **OCCUPIED** / **VACANT** | Hay o no hay alguien residiendo; la diferencia entre propietario e inquilino vive en otra columna ("Owner", "Tenant (Corporate)"), no dentro del estado. | Violeta suave para el dato de ocupación, neutro para la vacancia. |
| Sin resident asignado | **No Resident** + "In transition" | Explica que la vacancia es un proceso en curso y no un abandono; evita la lectura de "unidad abandonada". | Neutro, con avatar vacío. |
| Reserva confirmada | **CONFIRMED** | La reserva podrá usarse en la fecha indicada; no requiere ninguna acción del usuario, por eso comparte color con la acción primaria. | Violeta sólido, el mismo de los botones. |
| Reserva anulada | **CANCELED** + "Renovation" | La reserva ya no existe y el motivo acompaña a la etiqueta, de modo que nadie interpreta la baja como un rechazo. | Rojo claro con barra lateral. |
| Espacio en mantenimiento | **MAINTENANCE** | El espacio no está disponible y hay fecha de retorno, expresada en el panel: "System maintenance scheduled for Oct 25". | Tinte neutro con icono de mantenimiento. |
| Reglas de acceso de un área | **OPEN ACCESS**, **FEE APPLIES**, **CAPACITY: 15**, **PREMIUM AMENITY** | Cada línea del panel "Manage Areas" declara **una sola regla** y se lee como una frase corta, no como un parámetro del sistema. | Mayúsculas, texto secundario, una línea por regla. |
| Encuesta con plazo | **142 votes · 2 days left** | Da el dato y el plazo juntos, porque "142 votes" sin tiempo no permite decidir. | Texto terciario bajo la barra de resultados. |
| Contenido oficial frente a contenido de vecino | **Official Announcement** + "Edifika Management" / nombre propio + "Unit 402" | Distingue la voz institucional de la voz de un resident, y hace visible la unidad desde la que se escribe. | Avatar e ícono distintos: megafono oficial frente al ícono personal. |

Los mensajes de sistema siguen la misma lógica. Los errores y los estados vacíos **dicen qué pasó y qué hacer a continuación, sin culpar al usuario**: en lugar de "No hay datos" se muestra "Unit not found. Check the code and try again."; en lugar de una tabla vacía, se muestra el motivo y la acción ("No outstanding balances in this period. All units are up to date." con el enlace a Finance); y el caso del comentario denunciado se resuelve dentro del contexto, mostrando el texto citado junto a las acciones "Dismiss" y "Review", para que el administrador decida sin salir de la pantalla.

**Contenido de la landing orientado al usuario:** <br>

La landing page comunica en español lo que la aplicación nombra en inglés, porque sus visitantes son administradores y propietarios que todavía no conocen el vocabulario del producto. Cada bloque responde a una pregunta, en el orden en que se pregunta:

| Orden | Bloque | Copy de referencia | Asociación que debe crear |
| :--- | :--- | :--- | :--- |
| 1 | Propuesta de valor | **Elevating Residential Living** | Edifika trabaja por la convivencia del edificio, no por una función técnica. |
| 2 | Promesa concreta | **Seamless building management for the modern homeowner and administrator.** | El producto sirve a las dos audiencias a la vez; quien se identifique con alguna de las dos se reconoce en la frase. |
| 3 | Módulos | Áreas comunes, finanzas, muro comunitario, unidades y residentes | Traduce cada nombre en inglés a su equivalente en el mundo del visitante, para que sepa qué va a encontrar dentro. |
| 4 | Cómo funciona | Tres pasos: crear cuenta, invitar al equipo, operar | Convierte el producto en algo completable: el visitante ve el recorrido completo antes de registrarse. |
| 5 | Planes | Comparativa por tamaño de condominio | La etiqueta del plan describe **a quién corresponde** ("Edificio", "Condominio", "Junta directiva") y no una cifra de usuarios. |
| 6 | Llamado a la acción | **Get Started** / **Solicitar Demo** | Dos intenciones distintas y separables: empezar ahora o conocer antes de decidir. |
| 7 | Pie de página | Logotipo, enlaces agrupados, aviso legal | Cierra con la referencia normativa y repite el nombre del producto. |

Esta tabla se mantiene sincronizada con 5.2.1: los mismos tres pasos del bloque "Cómo funciona" son los del flujo de wireframe de 5.4.2, y el vocabulario de los módulos del bloque 3 es el mismo que usan las etiquetas del sidebar. **La promesa de la landing y el primer minuto del producto dicen exactamente lo mismo.**

### 5.2.3. SEO Tags and Meta Tags

El sitio de Edifika tiene dos superficies con estrategias opuestas: la **landing page**, pública, que debe ser encontrada por administradores y propietarios que buscan una solución; y la **web application**, privada y dependiente de autenticación, que **no debe indexarse** porque su contenido es específico de cada condominio.

Los valores respetan los límites de cada campo: `Title` de hasta 60 caracteres, `Description` de hasta 155 caracteres y un máximo de cinco conceptos en `Keywords`, sin repetir términos ya presentes en el `Title`.

#### Landing:

| Página | Title | Meta Description | Keywords | Author |
| :--- | :--- | :--- | :--- | :--- |
| Home | Edifika \| Gestión de Condominios y Edificios Residenciales | Centraliza pagos, deudas, reservas de áreas comunes y comunicados de tu condominio en una sola plataforma. Menos hojas de cálculo, más orden. | gestión de condominios, software para edificios, plataforma para administradores, reservas de áreas comunes, control de pagos de condominio | Condomia |
| Módulos | Módulos \| Áreas comunes, finanzas y muro comunitario | Conoce cómo Edifika organiza el padrón de residentes, el calendario de reservas, la cobranza y la comunicación interna del edificio. | áreas comunes de condominio, cobranza de condominios, muro comunitario para edificios, padrón de residentes | Condomia |
| Cómo funciona | Cómo Funciona \| De la planilla al condominio en orden | Del registro de pagos a los comunicados oficiales: conoce el recorrido completo de Edifika en tres pasos. | cómo digitalizar un condominio, de gestión residencial, pasos para implementar una plataforma | Condomia |
| Planes | Planes y Precios \| Edifika | Elige el plan según el tamaño de tu edificio: desde un solo edificio hasta varios condominios administrados a la vez. | precio de software para condominios, planes de gestión de edificios, suscripción por condominio | Condomia |
| Solicitar demo | Solicita una Demo \| Edifika | Agenda una demostración guiada con datos de ejemplo y conoce cómo Edifika se adapta a la forma en que hoy administras tu edificio. | demo de gestión de condominios, prueba de software residencial, demostración de plataforma | Condomia |
| Recursos | Recursos y Guías \| Edifika | Guías prácticas sobre reglamento interno, cobranza, uso de áreas comunes y convivencia en edificios verticales. | reglamento de condominio, manual de convivencia en edificios, guías de gestión de edificios | Condomia |
| Contacto | Contacto \| Edifika | Escríbenos o agenda una llamada con nuestro equipo. Respondemos en menos de un día hábil. | contacto Edifika, soporte de software de condominios, correo de contacto plataforma | Condomia |

Etiquetas técnicas comunes a todas las páginas públicas:

| Etiqueta | Valor asignado |
| :--- | :--- |
| `lang` | `es-PE` |
| `viewport` | `width=device-width, initial-scale=1` |
| `canonical` | URL absoluta con barra final y una sola versión por página (con o sin `www`, con o sin parámetros de campaña). |
| `robots` | `index, follow, max-image-preview:large` |
| `theme-color` | `#8C088F`, el violeta de marca definido en 5.1.1 |
| Open Graph | `og:type` `website`, `og:title`, `og:description` (mismo texto que `Description`), `og:image`, `og:locale` `es_PE`, `og:site_name` `Edifika` |
| Twitter Card | `summary_large_image` con la misma imagen de Open Graph |
| `robots.txt` | Permite `/` y bloquea `/app/`, `/login`, `/register` y cualquier ruta con identificador de condominio |
| `sitemap.xml` | Las siete páginas públicas con su `lastmod`, enviada a Search Console |

#### App:

La aplicación web se protege con `noindex, nofollow` en todas sus rutas y declara `canonical` hacia `/app`, de modo que ninguna variante con parámetros de sesión resulte indexable. Aun así se declaran las etiquetas por página porque se usan en el título de la pestaña del navegador, en los enlaces que el usuario comparte por mensajería y en las previsualizaciones de las notificaciones.

| Ruta | Title | Meta Description | Keywords | Author |
| :--- | :--- | :--- | :--- | :--- |
| /app/login | Iniciar sesión \| Edifika | Accede al panel de gestión de tu condominio: unidades, reservas, finanzas y comunicados en un solo lugar. | acceso a panel de condominio, iniciar sesión en Edifika, gestión de edificio online | Condomia |
| /app/register | Crear cuenta \| Edifika | Registra tu condominio en Edifika e invita a tus residentes a gestionar juntos sus unidades y espacios comunes. | registro de plataforma residencial, crear cuenta de administrador de edificio | Condomia |
| /app/dashboard | Dashboard \| Edifika | Resumen del estado de tu condominio: saldos pendientes, reservas activas y comunicados recientes. | panel de control de condominio, resumen de gestión residencial | Condomia |
| /app/units | Unidades y Residentes \| Edifika | Consulta el padrón de unidades, sus residentes, el estado de ocupación y la deuda asociada de cada una. | padrón de residentes, inventario de unidades, control de ocupación residencial | Condomia |
| /app/common-areas | Áreas Comunes \| Edifika | Consulta la disponibilidad de las áreas comunes, reserva espacios y revisa las reglas de uso de cada uno. | reserva de áreas comunes, calendario de espacios comunes, reglas de uso de salones | Condomia |
| /app/finance | Finanzas \| Edifika | Revisa ingresos, cuotas pendientes y morosidad por unidad; exporta reportes y envía avisos de cobro. | estado de cuenta de condominio, morosidad de residentes, reportes financieros de edificios | Condomia |
| /app/community-wall | Muro Comunitario \| Edifika | Publica comunicados, comparte novedades, vota en encuestas y participa en la moderación de tu comunidad. | comunicados de condominio, encuestas para residentes, muro de comunidad | Condomia |
| /app/documentation | Documentación \| Edifika | Consulta el reglamento interno, las actas de asamblea y las políticas vigentes de tu condominio. | reglamento interno de condominio, actas de asamblea, políticas de edificio | Condomia |

**Elementos ASO (App Store Optimization) de la aplicación móvil:**

La versión móvil se distribuye en Google Play y App Store, donde no existe un motor de búsqueda sino un criterio de instalación: la persona instala la aplicación después de leer el título y el subtítulo. Los elementos ASO se definen respetando los límites de cada tienda.

| Elemento | Límite | Valor asignado |
| :--- | :--- | :--- |
| **App Title** | 30 caracteres | Edifika: Gestión de Condominios |
| **App Subtitle** (solo iOS) | 30 caracteres | Áreas comunes, pagos y avisos |
| **App Keywords** (solo iOS) | 100 caracteres, separados por coma y sin espacios | condominio,edificio,residencial,cuotas,morosidad,reservas,areas comunes,comunicados,vecinos,edifika |
| **Descripción corta** | 80 caracteres | Administra tu condominio: pagos, reservas y comunicados en un solo lugar. |
| **Descripción larga** | hasta 4 000 caracteres | Edifika es la plataforma con la que administradores, propietarios e inquilinos gestionan su edificio sin hojas de cálculo ni chats perdidos. Desde una sola cuenta puedes consultar el padrón de unidades y ver quién vive en cada una, revisar el estado de cada cuota y enviar avisos de cobro a tiempo, reservar las áreas comunes del edificio en el calendario disponible y consultar las reglas de uso de cada espacio, y mantener a toda la comunidad informada con comunicados oficiales, encuestas y conversaciones moderadas. Todo se actualiza en tiempo real y cada usuario ve solo la información que le corresponde según su rol: el administrador gestiona el padrón y las finanzas, el residente reserva, paga y participa. Edifika funciona con modo oscuro, avisa cada cambio importante por notificación y permite exportar los reportes de gestión en PDF o Excel cuando los necesitas para la asamblea. Edifika está disponible en español y funciona en Android e iOS. Tu condominio, en orden. |
| **Categoría** | — | Negocios, con Productividad como categoría secundaria |
| **Icono** | 512 × 512 px | El isotipo de edificio de marca sobre fondo violeta `#8C088F`; es el mismo símbolo del favicon y del encabezado del sidebar. |
| **Capturas de pantalla** | mínimo 6 | Login, Dashboard, Calendario de áreas comunes, Muro comunitario, Tabla de unidades y Finanzas, en el mismo orden del sidebar, para que quien navega la tienda imagine el recorrido real de la aplicación. |
| **URL de política de privacidad** | obligatoria en ambas tiendas | https://edifika.com/legal/privacy |
| **Clasificación de contenido** | obligatoria | Sin contenido sensible, apto para todas las edades |

### 5.2.4. Searching Systems

El sistema de búsqueda persigue un objetivo único: **que ninguna tarea termine en "¿dónde estaba eso?"**. Se apoya en tres herramientas complementarias —búsqueda de texto global con alcance contextual, filtros por facetas en cada módulo y contadores de resultados que siempre dicen cuántos elementos quedan fuera de la vista actual—, de modo que el usuario nunca tenga que recordar dónde vio un dato para recuperarlo.

**Búsqueda global con alcance contextual.** La barra superior de la aplicación es un único campo, presente en todas las vistas autenticadas, cuyo alcance cambia según el módulo desde el que se escribe:

| Módulo desde el que se escribe | Placeholder del campo | Qué encuentra |
| :--- | :--- | :--- |
| Community Wall | **Search community posts…** | Título y cuerpo de las publicaciones, nombre del autor, unidad desde la que se escribió y etiquetas del evento o comunicado. |
| Common Areas | **Search reservations or units…** | Nombre del área común, código de unidad ("402", "Unit 1205") y motivo de la reserva o de la cancelación. |
| Unidades y finanzas | **Search residents, units or invoices…** | Nombre del resident, código de unidad, número de comprobante y referencia del pago. |

El uso del mismo campo con alcances distintos evita que el usuario aprenda un buscador diferente en cada pantalla, y el placeholder le dice en todo momento **qué tipo de contenido va a encontrar** antes de escribir. La búsqueda no distingue mayúsculas y tolera errores de tecleo, porque quien busca "julian" no debe fallar si escribió "Julian" o "julián"; los términos coincididos se resaltan dentro del resultado para que el usuario entienda por qué apareció.

**Filtros por facetas.** Cada módulo declara sus propios filtros, elegidos según el atributo que realmente segmenta la información de ese módulo:

| Módulo | Filtros disponibles | Qué resuelve cada filtro |
| :--- | :--- | :--- |
| **Units & Residents** | All Towers · All Occupancy · All Debt Status · CLEAR | **Tower** segmenta por ubicación física; **Occupancy** (Occupied, Vacant, In transition) por situación de la unidad; **Debt Status** (Paid, Late, Overdue) por situación de pago. Son las tres dimensiones con las que el administrador razona sobre el padrón. |
| **Common Areas** | Leyenda del calendario (BBQ AREA, PARTY ROOM, GYM CENTER, CANCELED) y navegación `<` `Today` `>` | La leyenda filtra el calendario por área y por estado de reserva; la navegación de mes cambia la ventana temporal, no el conjunto de datos. |
| **Finance** | Last 6 Months · Export PDF · Excel · paginación de saldos | El selector de período acota la serie de ingresos y proyecciones; la paginación recorre los residentes con saldo pendiente. |
| **Community Wall** | Búsqueda de publicaciones y filtro por tipo (post, encuesta, evento) | El tipo separa publicaciones de comunicados, encuestas y respuestas a encuestas, que requieren lecturas distintas. |
| **Documentation** | Categoría de documento y orden alfabético | La categoría agrupa por tipo (reglamento, acta, política); el orden alfabético organiza dentro de la categoría. |

Tres reglas gobiernan el comportamiento de los filtros:

1. **El filtro aplicado es visible y reversible.** El botón "CLEAR" aparece siempre que hay al menos un filtro activo y elimina todos en un solo paso. Un filtro que no se puede quitar es un error de navegación, porque el usuario queda atrapado en un subconjunto que no recuerda haber elegido.
2. **Los filtros sobreviven a la paginación.** Cambiar de página no reinicia la selección: el administrador que filtró por Tower B y estado Overdue sigue viendo ese subconjunto al avanzar. El filtrado se aplica al conjunto de datos antes de paginar, nunca después.
3. **Cada filtro tiene una etiqueta, no un valor crudo.** El desplegable muestra "All Towers", "All Occupancy" y "All Debt Status" en reposo, y el valor elegido ("Tower B", "Vacant") al aplicarse. El usuario nunca ve un identificador técnico del modelo de datos.

**Cómo se ven los resultados después de buscar.** La presentación responde a la misma estructura del módulo, de modo que el usuario reconoce la pantalla aunque el contenido haya cambiado:

- **Contador de resultados con contexto.** Siempre se indica el rango y el total: "Showing 1–10 of 428 units", "Showing 4 of 45", "142 votes · 2 days left". El usuario sabe de inmediato si está viendo el conjunto completo o una fracción.
- **Paginación predecible.** Botones de página numerada con elipsis ("1 2 3 … 43") y flechas de anterior y siguiente, con acceso a la última página en un solo clic, porque quien busca el final de la lista no debería recorrer 43 páginas.
- **Mismas etiquetas de estado, en cualquier resultado.** Un saldo aparece con el mismo badge "OVERDUE 15 DAYS" que en el listado general y una reserva con el mismo chip que en el calendario. El vocabulario de los resultados es idéntico al del módulo, para que aprenderlo una vez sirva siempre.
- **Criterio de orden explícito.** Por omisión los resultados se ordenan por relevancia y, en empate, por fecha descendente; el usuario puede cambiar a orden alfabético o por unidad, y el criterio activo se muestra en el control de orden.
- **Estado vacío accionable.** Cuando la búsqueda no arroja resultados, la pantalla explica por qué y ofrece la salida: "No posts match 'piscina'. Try a different term or clear filters", acompañado del botón "CLEAR". Nunca se muestra una pantalla vacía sin explicación.
- **Resultados accionables, no solo informativos.** Cada fila ofrece la acción propia de su módulo —"Send Notice" en un saldo vencido, "Edit Rules" en un área, "Review" en un comentario denunciado—, de modo que el usuario no tenga que volver a la pantalla de origen para actuar sobre lo que encontró.
- **La exportación conserva los filtros.** "Export CSV" y "Export PDF" descargan exactamente el conjunto que se está viendo, con los filtros aplicados, y el nombre del archivo incluye el período y el filtro para que sea identificable después.

### 5.2.5. Navigation Systems

La navegación de Edifika tiene cuatro capas que trabajan juntas: la **navegación global** (dónde estoy y a dónde puedo ir), la **navegación por contenido** (cómo recorro los datos), la **navegación de retorno** (cómo vuelvo) y la **navegación por audiencia** (qué veo según mi rol). El objetivo medible es que cualquier acción frecuente se alcance en dos clics o menos desde la pantalla de mayor frecuencia.

**De la landing a la aplicación.** El recorrido de conversión tiene dos finales y ninguno obliga a buscar un enlace oculto:

- **Anfitrión de un condominio (caso principal).** Home → **Get Started** (llamado a la acción del hero) → *Create Account* → *Register New Account* → Dashboard. Cuatro pasos visibles, cada uno con un único botón principal, y el formulario de registro se resuelve en una sola columna vertical (Email address, User, Cellphone, Password), de modo que la cantidad de lo que se pide resulta evidente antes de empezar.
- **Residente invitado (caso secundario).** Home → **Iniciar sesión** → *Login to Dashboard*. El visitante que ya tiene cuenta nunca ve el registro como acción principal; "Register New Account" permanece disponible, pero como botón secundario.
- **Ambos recorridos se entrelazan sin trampas.** Desde *Login to Dashboard* hay un enlace explícito a *Register New Account* y desde *Register New Account* a *Login to Dashboard*. Un usuario que tomó el camino equivocado lo corrige en un clic, sin volver a la home ni abrir el menú.

La navegación del sitio público se apoya en una barra superior fija con enlaces ancla a las secciones de la página (#modulos, #planes, #contacto), de modo que el visitante salte al bloque que le interesa sin recorrerla completa, y en un pie con enlaces agrupados por sección y ordenados alfabéticamente dentro de cada grupo.

**Navegación global dentro de la aplicación.** La posición del usuario es siempre legible porque cuatro elementos cooperan:

| Elemento | Ubicación | Función en la navegación |
| :--- | :--- | :--- |
| **Sidebar** | Izquierda, 280 px, fijo | Es el mapa del producto: cinco destinos de gestión (Dashboard, Units & Residents, Common Areas, Finance, Community Wall) más Documentation como fuente de consulta. Es la única navegación de alcance completo. |
| **Barra superior** | Superior, fija | Herramientas transversales: búsqueda con alcance contextual, notificaciones (campana con indicador de no leídos), ayuda y perfil (avatar con la etiqueta de rol, "Admin Portal"). |
| **New Alert** | Pie del sidebar, destacado | Acción primaria persistente que lleva a la tarea de mayor consecuencia en el producto: emitir un comunicado. Se separa visualmente de los destinos porque es una acción, no un lugar. |
| **Settings / Support** | Pie del sidebar, bajo la línea divisoria | Utilidades de cuenta y de ayuda, fuera del flujo de trabajo principal. |

**Indicación de ubicación.** El ítem activo del sidebar se marca con tres señales redundantes —fondo violeta claro, texto violeta y una barra vertical de 2 px en el borde izquierdo—, de modo que la posición actual se reconozca incluso si el usuario no distingue los tonos. La barra lateral no se colapsa ni se oculta: la visibilidad completa del mapa del producto es parte del principio de reconocimiento. Además, cada vista repite su nombre en el título y la bajada ("Units & Residents" / "Manage property inventory and resident information across all towers"), lo que funciona como una segunda confirmación de ubicación.

**Navegación por contenido.** Dentro de una vista con muchos elementos, la navegación se resuelve con el control que corresponde a la naturaleza del contenido:

- **Registros en tabla → paginación.** Numeración con elipsis, flechas de anterior y siguiente y última página a un clic ("Showing 1–10 of 428 units" con páginas 1, 2, 3 … 43). La paginación vive en el pie de la tabla, porque pertenece a la tabla y no a la navegación del módulo.
- **Series en el tiempo → navegación temporal.** El calendario de reservas y el gráfico de ingresos se recorren con `<` `Today` `>`, de modo que el usuario pase de mes en mes sin perder su posición de lectura.
- **Espacios multidimensionales → filtros persistentes.** Los filtros descritos en 5.2.4 no sustituyen la navegación: acotan el conjunto y dejan visible la posición del usuario mediante el botón "CLEAR" y el contador de resultados.
- **Tareas pendientes → paneles laterales.** "MOD QUEUE" y "MANAGE AREAS" son colas de trabajo con acción directa ("Review", "Edit Rules"), no páginas de navegación: el usuario no "va" a la cola, la cola lo espera en el lateral de la pantalla en la que ya está trabajando.

**Revelado progresivo y retorno.** Las tareas que requieren datos adicionales —configurar las reglas de un área, revisar un comentario denunciado, confirmar una reserva— se revelan en un **diálogo modal** superpuesto al contexto, nunca en una pantalla nueva que pierda el contexto. El modal se cierra por tres vías equivalentes (el botón "Cancel", la "X" de la esquina y la tecla Escape) y las tres devuelven al usuario **al mismo lugar con el mismo contexto**: el calendario, el muro o la tabla quedan exactamente como estaban, con el desplazamiento conservado. El par "Cancel / Save Changes" garantiza además que el modal nunca se cierre por error con cambios a medias.

**Navegación por audiencia.** El menú del RESIDENT es un subconjunto del menú del ADMIN (sección 5.2.1), pero conserva la misma estructura de niveles y la misma posición de cada elemento restante, de modo que quien aprende a moverse como residente no tiene que reaprender la navegación el día que asume la administración. La etiqueta de rol junto al avatar refuerza esta separación sin necesidad de dos productos distintos.

**Reglas de navegación y de error.** Cuatro reglas cierran el sistema:

1. **Ningún elemento del menú es un callejón sin salida.** Todo destino del sidebar tiene al menos una acción principal visible en su propia vista ("Add New Unit", "New Alert", "Generate Report"), de modo que el usuario nunca llega a una pantalla que solo puede observar.
2. **Todo estado vacío contiene una salida.** Si un módulo no tiene datos, muestra el motivo y la acción que los creará ("No outstanding balances in this period. All units are up to date." con el enlace a Finance), en lugar de una pantalla vacía.
3. **La búsqueda es una puerta de entrada, no un destino.** El resultado lleva a la vista de origen con el registro ya posicionado, de modo que el usuario nunca edita un dato desde un contexto que no corresponde a su naturaleza.
4. **El soporte está siempre a un clic.** El enlace "Support" permanece visible en el pie del sidebar en todas las vistas, incluidos los estados vacíos, porque el usuario que se equivoca debe poder preguntar sin abandonar lo que estaba haciendo.

## 5.3. Landing Page UI Design

### 5.3.1. Landing Page Wireframe

### 5.3.2. Landing Page Mock-Up

### 5.4. Applications UX/UI Design

### 5.4.1. Applications Wireframes

**Login**

<p align="center">
  <img src="assets/img/login.jpeg" alt="Login" width="800" />
</p>

**Register**

<p align="center">
  <img src="assets/img/register.jpeg" alt="Register" width="800" />
</p>

**Dashboard**

<p align="center">
  <img src="assets/img/dashboard.jpeg" alt="Dashboard" width="800" />
</p>

**Units & Residents**
<p align="center">
  <img src="assets/img/units.jpeg" alt="Units" width="800" />
</p>

**Common Areas**

<p align="center">
  <img src="assets/img/common.jpeg" alt="Common" width="800" />
</p>

**Finance**
<p align="center">
  <img src="assets/img/finance.jpeg" alt="Finance" width="800" />
</p>

**Community Wall**

<p align="center">
  <img src="assets/img/community.jpeg" alt="Community" width="800" />
</p>

Link del Figma: https://www.figma.com/design/ty6TOS7jOtA6f0111hRNGo/Edifika---Login-Mockup?node-id=19-339&t=GfR39Vruiix1XYFB-0

### 5.4.2. Applications Wireflow Diagrams

**1. Wireflow 1: Registro e inicio de sesión del administrador**

User Persona: Administrador
User goal: El administrador quiere registrarse o iniciar sesión para acceder a Edifika y gestionar su edificio.

<p align="center">
  <img src="assets/img/xd1.jpeg" alt="Community" width="800" />
</p>

Este flujo representa el acceso inicial del administrador a la aplicación web. Puede crear una cuenta aceptando el reglamento interno, volver al inicio de sesión e ingresar al dashboard, desde donde accede a unidades, áreas comunes, finanzas y muro comunitario.



**2. Wireflow 2: Reserva de un área común **

User Persona: Usuario  
User goal: El usuario quiere reservar un área común en una fecha y horario disponibles, y ver su reserva en el calendario.

<p align="center">
  <img src="assets/img/xd2.1.jpeg" alt="Community" width="800" />
</p>
<p align="center">
  <img src="assets/img/xd2.2.jpeg" alt="Community" width="800" />
</p>
<p align="center">
  <img src="assets/img/xd2.3.jpeg" alt="Community" width="800" />
</p>

Este flujo muestra cómo se registra una reserva desde el calendario de áreas comunes. Si el horario elegido ya está ocupado, el sistema avisa y permite elegir otro; si está libre, la reserva queda confirmada y aparece en el calendario.

**3. Wireflow 3: Seguimiento financiero y morosidad**

User Persona: Administrador 
User goal: El administrador quiere revisar los ingresos y las deudas del edificio e identificar a los residentes morosos para enviarles un aviso.

<p align="center">
  <img src="assets/img/xd3.jpeg" alt="Community" width="800" />
</p>

Este flujo parte del dashboard hacia la sección Finance, donde se revisan los indicadores y la lista de residentes con saldos pendientes. Desde ahí el administrador envía un aviso de cobro.

### 5.4.3. Applications Mock-Ups

**Login:**

<p align="center">
  <img src="assets/img/mockups/login.jpg" alt="Login" width="800" />
</p>

**Register:**

<p align="center">
  <img src="assets/img/mockups/register.jpg" alt="Register" width="800" />
</p>

**Units & Residents:**

<p align="center">
  <img src="assets/img/mockups/units-residents.jpg" alt="Units" width="800" />
</p>

**Common Areas:**

<p align="center">
  <img src="assets/img/mockups/common-areas.jpg" alt="Common" width="800" />
</p>

**Finance:**
<p align="center">
  <img src="assets/img/mockups/finance.jpg" alt="Finance" width="800" />
</p>

**Community Wall:**

<p align="center">
  <img src="assets/img/mockups/community-wall.jpg" alt="Community" width="800" />
</p>

Link del Figma: https://www.figma.com/design/ty6TOS7jOtA6f0111hRNGo/Edifika---Login-Mockup?node-id=0-1&p=f&t=GfR39Vruiix1XYFB-0

### 5.4.4. Applications User Flow Diagrams

**User Flow 1: **

**User Persona:**   
**User goal:** 

**Pantallas base:**

- Register
- Login
- Dashboard

**Happy path:**



**Unhappy paths:**





---

**User Flow 2: **

**User Persona:**   
**User goal:** 

**Pantallas base:**



**Happy path:**



**Unhappy paths:**





---

**User Flow 3: **

**User Persona:**   
**User goal:** 

**Pantallas base:**



**Happy path:**



**Unhappy paths:**





## 5.5. Application Prototyping

## 5.6. IoT Device Design

### 5.6.1. Introducción y criterios de diseño

Edifika se ejecuta en el teléfono y en el navegador del administrador, pero la parte de la solución que decide sobre el mundo físico no es software: son cuatro tipos de nodo que se instalan dentro del condominio y que el usuario nunca configura, nunca ve y de los que depende para que un área tenga luz, una puerta se abra a la hora correcta y una fuga no se convierta en una inundación. El diseño de esos dispositivos es, por lo tanto, la decisión de diseño con las consecuencias más físicas del proyecto, y es donde los errores no se manifiestan como una excepción en la consola ni como un estado vacío en una tarjeta: se salen como una puerta que no abre con la visita dentro, o como un área común encendida a las tres de la mañana.

La propuesta de diseño físico y de circuito de estos dispositivos se apoya en **ocho criterios**, que no son una lista de deseos sino el orden en que se resuelven las decisiones cuando dos criterios entran en conflicto.

| Código | Criterio | Fundamento y consecuencia de diseño | Dónde se hace visible |
| :--- | :--- | :--- | :--- |
| **C1** | **A prueba de fallo por defecto** | El fallo más grave de un nodo no es que se apague, sino que se quede en un estado que perjudique a quien lo usa. Por eso cada actuador elige su posición en reposo según la consecuencia de quedarse sin alimentación: la cerradura abre y la luminaria se apaga. Un corte de energía no puede encerrar a un resident ni encender un área vacía. | Posición de reposo de los relés, sección 5.6.4 y 5.6.5 |
| **C2** | **Decisión física sin ida y vuelta a la nube** | La arquitectura ya decidió que el cloud concentra reglas de negocio y el edge la autonomía operativa (4.1.3.3). Traducido al dispositivo, el criterio significa que un umbral de lux, una comparación de caudal o una validación de UID se resuelven en el nodo o en el Edge API: esperar al cloud para abrir una puerta agrega latencia a una acción que el resident mide en el tiempo que tarda en apoyar la tarjeta. | Caché local de credenciales, corte local de bomba, sección 5.6.4 a 5.6.7 |
| **C3** | **Presupuesto de respuesta física** | La guía de estilos fija tres máximos medibles: LED en 200 ms, relé completo en 500 ms y tono antes de un segundo (5.1.2). Más allá de ese margen el usuario asume que el dispositivo no respondió y repite la acción, y una repetición sobre un actuador es un incidente. El firmware se evalúa contra esos tres números, no contra una impresión de rapidez. | Sección 5.6.8 |
| **C4** | **Un solo vocabulario de estado** | El LED, la etiqueta, el serial del Edge y la tarjeta del dashboard describen el mismo hecho con el mismo nombre. No existe un estado que el dispositivo llame de una forma y la aplicación de otra, porque el resident solo conoce una versión de la plataforma. | Sección 5.6.2 |
| **C5** | **Consumo, calor y mantenimiento** | Los nodos quedan conectados a la red eléctrica del edificio, pero se instalan en sitio y no se mantienen: la autonomía, el modo de bajo consumo y la posibilidad de diagnosticarlos importan tanto como el costo de la placa. Un nodo que hay que abrir para reconfigurar es un nodo que nadie reconfigura. | Suspensión profunda, ausencia de pantalla, reset sellado, sección 5.6.3 |
| **C6** | **Aislamiento eléctrico** | Ningún conductor de 220 V debe entrar en la placa de control. La conmutación de cargas se delega a un relé o contactor y la medición de corriente se hace con una pinza sobre el conductor, de modo que el aislamiento entre la red y la lógica sea físico y no una convención del software. | Sección 5.6.5 y 5.6.7 |
| **C7** | **Identidad y trazabilidad del objeto** | Un dispositivo instalado en un edificio real es un objeto físico que se pierde, se daña o se reemplaza. Cada nodo declara su identificador, su código QR y el tópico MQTT al que publica, porque el inventario de la aplicación y el objeto del pasillo tienen que poder reconocerse mutuamente. | Sección 5.6.2 |
| **C8** | **Instalación y accesibilidad** | Las decisiones dimensionales no son detalles de carpintería: determinan si un resident puede usar el dispositivo. La altura de instalación, el tamaño de la superficie de lectura y la separación entre un pulso corto y uno sostenido salen de la experiencia de uso, no del datasheet. | Sección 5.6.2 |

El criterio C4 merece una aclaración, porque es el que más restringe el diseño. Los tres contextos IoT del cloud —IoT Access Management, Smart Lighting & Automation e IoT Telemetry & Analytics— modelan el estado del dispositivo en su propio vocabulario (`ACTIVE`, `SUSPENDED`, `REVOKED`, `ON`, `OFF`, `OPEN`, `RESOLVED`, `LOW`, `MEDIUM`, `HIGH`), y el Edge API lo traduce al contrato MQTT. Ese vocabulario es correcto en el dominio, pero el resident frente a una puerta no conoce esos términos. La decisión de diseño que se adopta es que **el vocabulario físico es un subconjunto del vocabulario de la interfaz, nunca un tercero**: los términos que el usuario puede ver en la tarjeta de un dispositivo del dashboard son exactamente los que el LED codifica y los que el texto del Serial Monitor imprime. Un estado que solo existe en el firmware se considera un defecto de diseño, no una decisión de implementación.

### 5.6.2. Relación con la arquitectura de información y con la guía de estilos de interfaz física

La sección 5.1.2 (IoT Physical Interface Style Guidelines) define la interfaz física de los nodos y la sección 5.2 define cómo se nombra, se encuentra y se recorre el contenido del producto. Ambas condicionan el diseño de los dispositivos, y la relación no es de estilo sino estructural: sin ella existirían cuatro dispositivos técnicamente correctos que el usuario no podría distinguir de un producto ajeno.

| Decisión de arquitectura de información (5.2) | Regla de interfaz física (5.1.2) | Consecuencia en el diseño del dispositivo |
| :--- | :--- | :--- |
| **Criterio de nombrado único** (5.2.2): cada conjunto tiene una sola etiqueta, repetida en navegación, título, tabla y exportación. | Los textos impresos usan el Lenguaje Ubicuo (2.5), nunca un código interno ni un número de error. | La etiqueta del nodo repite el nombre del módulo del que cuelga —`Lighting & Sensing Node`, `Access Controller`, `Leak Detection Node`, `Energy Meter`— y no el nombre del microservicio que consume sus datos. La suscripción MQTT vive en la etiqueta como dato técnico, separada del nombre, para que instalar no exija entender la arquitectura. |
| **Organización por tópicos** en tres escalas (5.2.1). | La etiqueta declara "el tópico MQTT corto al que publica". | El espacio de nombres replica la taxonomía del producto en el orden `edifika/{edificio}/{módulo}/{dispositivo}`: el módulo es el mismo sidebar, el dispositivo es el mismo registro de inventario. Un técnico que lea la etiqueta entiende a qué parte del producto pertenece el nodo. |
| **Estados en mayúsculas con etiqueta textual, nunca solo color** (5.2.2). | Código del LED: cada estado tiene color **y** patrón de parpadeo, para sobrevivir a la daltonía, al sol directo y a un LED quemado. | El WS2812B de cada nodo implementa la tabla completa de 5.1.2 (fijo, dos parpadeos lentos, tres rápidos, intermitente, un parpadeo cada 5 s, apagado). La redundancia no es decorativa: es la traducción literal de la regla "el estado nunca se transmite solo con color" al medio físico. |
| **Cuando no se sabe el estado, la interfaz dice que no lo sabe** (5.1.2, IoT Style Guidelines). | Modo degradado: sin broker, el LED pasa a `Neutral` con parpadeo lento y el dispositivo conserva el último estado. | El firmware nunca re-publica un valor viejo con marca de tiempo reciente ni rellena un hueco por interpolación. La ausencia de lectura se publica como ausencia: `{ts, value: null, stale: true}`. Es la razón por la que el mensaje MQTT lleva el campo `stale` y no solo un número. |
| **Acciones a dos clics o menos** y **una sola acción primaria por pantalla** (5.2). | La pulsación corta ejecuta el control manual local; la mantenida de 1.5 s empareja o restablece. | El pulsador del nodo es la excepción controlada a esa regla de interfaz, y por eso se distinguen las dos duraciones: el control manual es una emergencia cuando el teléfono no tiene cobertura, y el emparejamiento no puede ocurrir por accidente porque un resident apoye el pie en el pulsador de un pasillo. |
| **Términos del Lenguaje Ubicuo** (2.5): "Acceso concedido", "Fuga detectada", "Corte automático", "Credencial suspendida". | El tono audible suena solo en tres casos: fuga detectada, corte automático de la bomba y apertura forzada. | El `Serial Monitor` del prototipo y el texto que el Edge reenvía a la notificación usan esas frases exactas. El firmware no emite "DENY", "TRIP" ni "ERR_07": esos nombres viven en el log técnico del Edge, no en el mensaje que ve el resident. |
| **Anatomía de la tarjeta de dispositivo**: píldora de conexión, hora de la última lectura y antigüedad de esa lectura. | El LED baja al 10 % de brillo entre 23:00 y 06:00 pero nunca se apaga del todo. | El heartbeat de 60 s que publica el nodo es el mismo dato que permite a la tarjeta calcular la antigüedad de la lectura; el brillo nocturno existe para que la señal siga presente sin molestar, que es el compromiso equivalente a "no mostrar un vacío como si fuera un resultado". |
| **Modo degradado**: banner "operando con datos locales" con la hora de la última sincronización. | A prueba de fallo: si el nodo pierde el broker, mantiene el último estado conocido y opera localmente. | La caché en SPIFFS del ESP32 es la contraparte física de ese banner. Sin él, el indicador "datos locales" de la aplicación sería una afirmación sin respaldo. |

De esta tabla se sigue una conclusión de diseño que conviene enunciar antes de entrar en los dispositivos: **el objeto físico y la tarjeta del dispositivo son dos vistas del mismo dato, no dos fuentes de verdad**. Por eso el nodo publica exactamente los campos que la tarjeta necesita mostrar —estado, valor, marca de tiempo, señal, batería— y nada que la tarjeta no sepa presentar. Un campo que solo existe en el firmware es un campo que nadie puede leer.

### 5.6.3. Stack común y cadena de herramientas

Los cuatro nodos comparten la misma base de hardware y de software. Esa decisión reduce el costo por unidad, simplifica el reemplazo de una placa y, sobre todo, hace posible que un solo manual de instalación sirva para todo el condominio.

| Capa | Elección | Justificación |
| :--- | :--- | :--- |
| **Microcontrolador** | ESP32 DevKit V1 | Wi-Fi integrado, suficientes GPIO analógicos y digitales, ecosistema Arduino con cliente MQTT nativo. Es el microcontrolador que ya aparece en el Container Diagram (4.1.3.3) y en TS17. |
| **Transporte** | MQTT 3.1.1 sobre Wi-Fi, QoS 1, mensajes `retained` para estado y credenciales | Es el protocolo que fija TS17 y el que usa el Edge API on-premise. QoS 1 evita perder la orden de cierre de una llave o la lista de credenciales; `retained` permite que un nodo que se enciende después del Edge reciba el estado vigente sin pedirlo. |
| **Broker** | EMQX local en el Edge Server (Raspberry Pi 4), reenvío al broker cloud gestionado | El broker no está en la nube: la arquitectura de 4.1.3.4 despliega el Edge Server on-premise precisamente para que el condominio siga operando sin enlace WAN. Un broker alojado únicamente en la nube convertiría cada corte de internet en una puerta que no abre. |
| **Firmware** | C++ sobre el framework Arduino, con `DeepSleep` por niveles | Común a los cuatro nodos; permite un modo de suspensión automático entre lecturas y reduce el consumo a un presupuesto medible. |
| **Diseño de circuito** | Fritzing (vista esquemática) | Permite documentar el circuito con la red de alimentación y los buses explícitos, condición para que un instalador pueda verificar el cableado sin interpretar un esquema de conexiones en silueta. |
| **Simulación y prototipado** | Wokwi, con ESP32 DevKit V1, MFRC522, sensor PIR, fotorresistencia, relé y buzzer | Es el entorno donde se ejercitan los flujos de interacción antes de tocar el hardware: presentación de credencial, disparo de movimiento, corte de bomba y pérdida de broker. |
| **Identificación** | QR/NFC en la etiqueta con `edificio`, `dispositivo`, `tópico` y `firmware` | Responde al criterio C7 y permite que el inventario de la aplicación y el objeto del pasillo se reconozcan mutuamente. |

Una decisión de diseño que atraviesa a los cuatro nodos y que conviene explicitar porque es contraintuitiva: **no hay pantalla en ningún dispositivo**. Una pantalla obligaría a cada nodo a resolver por su cuenta la composición de texto, los estados y la accesibilidad —es decir, a reimplementar dentro del firmware lo que 5.2 ya resolvió para el conjunto del producto—, y además habría que mantenerla encendida, lo que contradice el criterio de consumo. Toda la información que el resident necesita del objeto cabe en un LED codificado, un tono acotado y una etiqueta impresa.

### 5.6.4. Dispositivo 01 — Controlador de acceso de áreas comunes (ACC-01)

#### Descripción y criterios de diseño

El ACC-01 es el nodo instalado junto a cada puerta de área común que admite reservas. Su función es materializar una decisión que ya está tomada antes de que el resident llegue: la reserva aprobada genera un `AccessPermission` acotado a su ventana horaria, `EdgeGatewaySyncClient` lo empuja al Edge API, y el Edge lo deja disponible para el nodo en un tópico `retained`. El ACC-01 **no consulta al cloud en cada intento**: resuelve la UID contra la caché local y publica el resultado.

Los criterios que gobiernan su diseño son **C1** (la puerta no puede quedar cerrada a alguien dentro), **C2** (la decisión es local), **C4** (verde y rojo significan lo mismo que en la tarjeta) y **C8** (la lectura tiene que funcionar sin mirar el teléfono).

#### Diseño físico

La carcasa es de plástico ABS mate en `Neutral` con una franja frontal en `Primary`, con radios de 12 mm que replican las esquinas de las tarjetas de la aplicación, montada entre **1.2 y 1.6 m de altura** con iluminación suficiente y sin reflejos sobre la superficie del sensor. La superficie de lectura contactless se dimensiona a **25 mm o más**, de manera que el resident no dependa de la precisión de la alineación del dedo o de la tarjeta. No hay pantalla; hay LED, contactless, pulsador y orificio de reset.

El orden de los elementos en el frente responde a la frecuencia de uso, el mismo criterio que 5.2.1 aplica a las pantallas: el LED en la zona más visible del marco, el contactless a la altura natural de la mano, el pulsador debajo y el orificio de reset en la base, sellado con epoxy y alcanzable solo con una aguja por mantenimiento.

| Elemento | Cota / material | Razón de la decisión |
| :--- | :--- | :--- |
| Superficie contactless | ≥ 25 × 25 mm | Un área menor obliga a apuntar la tarjeta; el usuario interpreta el fallo como tarjeta no leída y repite el gesto, que en un lector bloqueado por anti-passback cuenta como intento adicional. |
| LED WS2812B | Ø 8 mm, visible a 3 m | Único indicador que funciona en la oscuridad, a distancia y sin contacto físico. |
| Pulsador tactil | Ø 12 mm, con recorrido distinguible | Permite el control manual local de emergencia y el emparejamiento, separados por duración. |
| Orificio de reset | Ø 2 mm, sellado | Su presencia sin acceso evita que un resident reinicie el dispositivo y borre la caché de credenciales. |
| Etiqueta | Altura de letra ≥ 2.5 mm, mayúsculas, contraste > 4.5:1 | Se lee a distancia y con la linterna del teléfono, no a la distancia de un monitor. |
| Altura de instalación | 1.2 – 1.6 m | Altura de uso de la mano adulta, y accesible para el resident mayor sin agacharse. |

#### Diseño de circuito

| Componente | Función | Nota de diseño |
| :--- | :--- | :--- |
| **ESP32 DevKit V1** | MCU, Wi-Fi, cliente MQTT, decisión local de acceso | Concentra la lógica de `AccessDecisionService` en su versión local: activa, no está en la blacklist y tiene permiso vigente para esa área en ese instante. |
| **MFRC522 (RC522)** | Lector RFID 13.56 MHz por SPI | Se alimenta desde el regulador de **3.3 V**, no del riel de 5 V: es la causa más común de lecturas de UID intermitentes en la implementación de referencia. |
| **Reed magnético** | Estado de la puerta y detección de apertura forzada | Normalmente cerrado dentro del circuito de alarma, de modo que también detecte el sabotaje del cable. |
| **WS2812B** | Código de estado | Un solo pin de datos, con protocolo one-wire de 800 ns; no requiere resistencias limitadoras por canal. |
| **Driver MOSFET IRLZ44N** | Excitación de la bobina | Un GPIO no puede conmutar una bobina de 12 V: la corriente de conmutación lo degrada. |
| **1N4007** | Diodo de volante en paralelo a la bobina | Sin él, el pico inductivo de la bobina al cortar vuelve al GPIO y produce reinicios esporádicos, que en un lector se manifiestan como "puertas que a veces no abren". |
| **Relé fail-safe 12 V** | Cerradura eléctrica | Contacto **NA**: sin alimentación, la puerta queda abierta (C1). |
| **Buzzer piezo 3 V** | Apertura forzada únicamente | Silenciado entre 23:00 y 06:00; máximo 3 s por evento. |

La decisión eléctrica más importante del ACC-01 es la **posición de reposo del relé**. El criterio C1 se resuelve aquí de forma explícita: la cerradura se alimenta en reposo, de modo que un corte de energía, un reinicio del nodo o una falla del Edge dejan la puerta abierta. El peor escenario en un recinto común no es una puerta que se abre de más —que se audita y se registra— sino una persona encerrada en un área común sin cobertura. El control de acceso sigue existiendo en el sentido contrario, que es el que protege a la comunidad, y esa asunción está documentada porque es la que un instalador va a cuestionar.

La segunda decisión es la **resolución por omisión**. Si la UID presentada no está en la caché local —porque el nodo acaba de encenderse, porque la caché está corrupta o porque el resident fue dado de baja hace minutos y la sincronización no ha llegado—, el resultado es `DENEGADO`, no "permitido por no saber". Un sistema de control de acceso que falla hacia la apertura no es un sistema con una tasa de error: es un sistema sin control de acceso.

#### Flujos de interacción que cubre el prototipo

El prototipo en Wokwi ejercita el recorrido completo de una credencial sobre el nodo, con el MFRC522, la puerta, el relé y el buzzer conectados y el ESP32 publicando por MQTT contra el broker del Edge.

| Paso | Actor / componente | Acción | Respuesta del sistema | Verificación observable |
| :--- | :--- | :--- | :--- | :--- |
| 1 | Resident | Acerca la credencial a la superficie | El MFRC522 lee el UID y el nodo lo busca en la caché local | LED violeta intermitente = acción en curso |
| 2 | ACC-01 | Compara contra credenciales, blacklist y permiso vigente | Decide `GRANTED` y acciona el relé | Parpadeo verde antes de 200 ms; relé completo antes de 500 ms |
| 3 | ACC-01 | Publica el intento | `acc-01/attempts {uid, result, rssi, ts}` en menos de 200 ms | El `Serial Monitor` imprime "Acceso concedido" |
| 4 | Edge API | Reenvía el intento | IoT Access Management persiste `AccessAttempt` y publica `PhysicalAccessGranted` | La tarjeta del dispositivo en el dashboard pasa a ONLINE con la hora de la lectura |
| 5 | Resident | Retira la credencial | El relé vuelve a reposo y la puerta se cierra sola | El lector vuelve a LED verde fijo = normal |

Los **caminos infelices** son los que justifican el diseño del hardware, y son cinco:

| Situación | Comportamiento diseñado | Por qué esa respuesta |
| :--- | :--- | :--- |
| Credencial **suspendida o revocada** (por morosidad, `ResidentMarkedDelinquent`) | LED rojo con tono corto; el relé no acciona; se publica `PhysicalAccessDenied` | Son dos situaciones distintas para el resident —“tarjeta no leída” y “me la suspendieron”— y exigen respuestas opuestas: repetir el gesto en el primer caso, llamar al administrador en el segundo. Un único tono genérico obligaría al resident a adivinar siempre. |
| **Sin broker** (WAN caído) | El nodo sigue resolviendo contra la caché, publica en cuanto vuelve el enlace y el LED pasa a `Neutral` con un parpadeo cada 5 s | Es el criterio C2: la operación del condominio no depende del cloud. Lo que se pierde es la inmediatez de la auditoría, no el acceso ya autorizado. |
| **Puerta forzada o cable saboteado** | El reed dispara; LED rojo con tres parpadeos rápidos y tono, y se publica el estado de puerta | Es uno de los tres únicos casos que justifican el tono audible, porque exige una respuesta del resident en el momento y no puede resolverse en el dashboard de mañana. |
| **Sin permiso vigente** (la reserva ya terminó) | LED ámbar, dos parpadeos lentos, sin tono | Es el estado `Atención` de 5.1.2: no es una falla ni una alarma, es una explicación. El resident está en la puerta correcta pero fuera de horario, y el ámbar le dice que la respuesta está en la aplicación. |
| **Reinicio del dispositivo** | Contacto NA: la puerta queda abierta y el LED vuelve a normal al reconectarse | El peor resultado posible de un corte de energía en un espacio común es dejar gente encerrada; el criterio C1 manda sobre la conveniencia de la puerta cerrada. |

### 5.6.5. Dispositivo 02 — Nodo de iluminación inteligente y sensado (LGT-01)

#### Descripción y criterios de diseño

El LGT-01 se instala embebido en cada luminaria de las áreas comunes. Mide presencia, nivel de lux y corriente, decide localmente el encendido y el apagado, y reporta telemetría al Edge. Es el nodo donde el criterio C2 es más estricto, porque la latencia de encendido es lo que el resident percibe como "la luz tarda": si el nodo consultara la nube antes de conmutar, cada vez que una persona cruza la puerta de la sala de fiestas esperaría en la oscuridad el tiempo de un viaje de ida y vuelta a los servidores.

Los criterios que gobiernan su diseño son **C2** (decisión local del umbral de luz), **C3** (presupuesto de respuesta física), **C6** (aislamiento de la red) y **C5** (el nodo queda encima de la luminaria, sin mantenimiento).

#### Diseño físico

El LGT-01 se monta en el techo o en el marco de la luminaria, con el sensor PIR orientado hacia el acceso y con el campo de detección ajustado para que no alcance el fondo de la sala, de modo que un resident que cruza la puerta active la luz sin que alguien sentado al fondo la apague desde el borde opuesto. El acabado mate del frente evita reflejos que confundan tanto al sensor infrarrojo como a quien intenta ver el LED a contraluz; el LED queda en el borde inferior de la carcasa, que es la única posición visible desde el suelo.

| Elemento | Cota / material | Razón de la decisión |
| :--- | :--- | :--- |
| Frontal del sensor PIR | Orientado hacia el acceso, sin detectar el fondo de la sala | Detecta el cruce de una persona y no el movimiento de alguien ya sentado. |
| Ventana del LDR | Opuesta al PIR, nunca tras la propia fuente de luz | Si el LDR midiera la luz emitida por la luminaria, la lectura dependería del estado del actuador y el umbral de lux nunca se estabilizaría. |
| LED de estado | En el borde inferior de la carcasa, visible desde el suelo | Es la única forma de que el resident sepa si el nodo está vivo sin abrir el tablero del condominio. |
| Etiqueta | Con el ID de nodo, QR y tópico | El inventario de la aplicación lista luminarias por ubicación; la etiqueta dice cuál de ellas es. |
| Alimentación | Vía derivación de la propia luminaria | Evita un cable de red por punto de luz y por lo tanto una obra mayor por nodo instalado. |

#### Diseño de circuito

| Componente | Función | Nota de diseño |
| :--- | :--- | :--- |
| **ESP32 DevKit V1** | Sensado, decisión local y publicación | Aplica la regla de `AutomationDecisionService` en su versión local: presencia, lux, franja horaria de reserva y anulación vigente. |
| **PIR HC-SR501** | Presencia, salida digital | Sensor digital: no consume un canal ADC y su señal no requiere filtrado analógico. |
| **LDR GL5528 con divisor 10 kΩ / 10 kΩ** | Nivel de lux | Va al **ADC1**; la salida digital DO del módulo se omite porque el umbral se define en el editor de reglas de la aplicación, no con un potenciómetro en el techo. |
| **ACS712 5 A** | Corriente real de la luminaria, en mA | Pinza sobre la fase: es la forma de medir sin poner un conductor de 220 V en la placa (C6). |
| **WS2812B** | Código de estado completo | Traducción literal de la tabla de 5.1.2. |
| **BC547 + 1N4007** | Driver del relé con diodo de volante | La bobina del relé nunca conecta directamente al GPIO. |
| **Relé SRD-05VDC-SL-C (SPDT 10 A)** | Conmutación de la luminaria | Contacto **NA**: ante reinicio del nodo, la luminaria queda apagada (C1 aplicado a una carga, con el criterio inverso al de la cerradura: el riesgo del error es el consumo de energía, no la seguridad de una persona). |

La decisión de canal analógico es la que más restricciones impone al resto del circuito y conviene explicitarla: **todos los sensores analógicos se conectan al ADC1 (GPIO 32–39)**. El ADC2 del ESP32 deja de estar disponible mientras el driver Wi-Fi está activo, de modo que un LDR o un ACS712 en GPIO 4, 13, 14, 15, 25 o 27 devolvería lecturas corruptas justamente cuando el nodo está conectado, que es cuando más importa medir. Además, el LDR y el ACS712 comparten masa con la bobina del relé, de modo que un cable de potencia colocado mal puede derivar ruido de conmutación sobre la lectura de corriente. Por eso la fuente, la bobina y el plano de sensado se cablean con trayectorias separadas dentro de la caja, y el ACS712 se instala a 10 cm del borne, no sobre él.

#### Flujos de interacción que cubre el prototipo

| Paso | Disparador | Decisión | Respuesta física | Verificación observable |
| :--- | :--- | :--- | :--- | :--- |
| 1 | El PIR detecta presencia | El nodo lee el LDR | LED violeta intermitente durante el sensado | En Wokwi, "Simulate Motion" en el PIR |
| 2 | Lux por debajo del umbral y franja dentro de `LightingSchedule` | Enciende localmente y publica `AreaPresenceDetected` | Relé en menos de 500 ms | El relé de Wokwi cambia de estado; el `Serial Monitor` imprime el valor de lux |
| 3 | La reserva empieza (`ReservationStarted`) | Enciende de forma programada el área | Relé en menos de 500 ms | Simulación de la franja horaria de la regla |
| 4 | Presencia detectada y luz alta | No enciende | LED verde fijo = normal, sin tono | El evento se publica igualmente: "hubo alguien y no encendimos" es un dato de analítica |
| 5 | Inactividad por más de `PresenceTimeout` | Apaga | LED verde fijo | La curva de consumo en el dashboard refleja el ciclo |

**Caminos infelices:**

| Situación | Comportamiento diseñado | Razón |
| :--- | :--- | :--- |
| **Anulación manual desde la aplicación** | El nodo ejecuta la anulación con su duración y expiración, y lo registra como `OverrideTriggered` | Un resident que enciende la luz manualmente y se olvida de apagarla es un caso normal; la anulación tiene fecha de expiración justamente para que no quede una luminaria encendida hasta que alguien se fije. |
| **Sin broker** | El nodo sigue encendiendo y apagando por su regla local, el LED pasa a `Neutral` con parpadeo de 5 s y acumula la telemetría en memoria | Un corte de internet en la noche no puede dejar el área común a oscuras. La telemetría pendiente se publica al restablecerse el enlace, marcada como local. |
| **Reinicio del nodo** | La luminaria queda apagada y el nodo vuelve a su regla en menos de un minuto | Con contacto NA, un reinicio accidental no enciende un área vacía a las tres de la mañana. |
| **Batería de respaldo degradada** (en las instalaciones con respaldo) | LED ámbar, dos parpadeos lentos; la automatización sigue operando | `Atención` es el estado intermedio entre "todo bien" y "falla": el administrador necesita verlo antes de que sea una falla, y el resident no debe presenciarla como una alarma sobre una luz que sí funciona. |
| **Lectura de lux inválida** (LDR desconectado) | No se enciende por presencia en ese punto; publica `stale: true` y el LED pasa a ámbar | El firmware no rellena con el último valor ni interpola: un umbral de lux aplicado sobre una lectura muerta enciende la luz de día, que es el peor modo de falla visible para la comunidad. |

### 5.6.6. Dispositivo 03 — Nodo hidráulico de detección de fugas (HYD-01)

#### Descripción y criterios de diseño

El HYD-01 se instala en la bomba y la cámara de agua de una zona hidráulica. Mide caudal y presión, distingue una fuga real de un consumo legítimo fuera de horario, corta la bomba y emite la alerta. Es el nodo con la consecuencia más grave de los cuatro, y por eso es también el que concentra las decisiones de **C1** (cortar antes que inundar), **C2** (el corte no espera al cloud) y **C5** (está en un cuarto de máquinas, sin nadie que lo mire).

Los criterios que lo gobiernan se refuerzan: un corte de bomba es una molestia discutible; una inundación en un departamento es un daño irreversible. Ante la duda, el diseño corta.

#### Diseño físico

La carcasa se monta en la pared de la cámara de agua, a la altura de la vista del operador de mantenimiento, con prensaestopa y entrada de cable con prensaestopa PG7 para que el agua no entre por el conector. A diferencia de los otros nodos, este puede tener un tono audible porque está en un espacio técnico y no en un pasillo: el criterio de 5.1.2 que limita el tono a tres casos se cumple íntegro, pero el tono de corte automático se emite sin silenciamiento nocturno, porque un corte de bomba a las 3 a. m. sí requiere que alguien lo sepa.

| Elemento | Cota / material | Razón de la decisión |
| :--- | :--- | :--- |
| Carcasa | IP54, con prensaestopa PG7 y junta | El cuarto de máquinas tiene humedad y goteo occasional; un nodo sin protección falla por entrada de agua y arrastra a la bomba. |
| Sensor de caudal | En la línea de impulsión, aguas arriba de la bomba | Medir el caudal que llega a la bomba es lo que permite distinguir una demanda real de una fuga en la línea. |
| Sensor de presión | En la toma de aspiración | Una caída de presión sin caudal correspondiente es lo que marca la bomba como `FAULT`, según `LeakDetectionService`. |
| LED y buzzer | En el frente, visibles desde el acceso | El operador de mantenimiento debe ver el estado sin entrar al cuarto. |
| Etiqueta | Con la zona hidráulica y el ID de la bomba | `LeakAlert` se crea sobre una bomba concreta; la alerta sin ubicación no es accionable. |

#### Diseño de circuito

| Componente | Función | Nota de diseño |
| :--- | :--- | :--- |
| **ESP32 DevKit V1** | Lectura, comparación contra umbrales, corte y publicación | Aplica localmente `LeakDetectionService`: caudal sobre umbral fuera de la franja esperada, sostenido más de `minDeviationMinutes`, se declara fuga. |
| **Sensor de caudal con salida de pulsos** | Caudal instantáneo | Se conecta por interrupción: el firmware cuenta pulsos por intervalo en lugar de leer un ADC, porque el sensor no tiene salida analógica y porque contar pulsos en el flanco es la forma de no perder los eventos que la bomba genera. |
| **Sensor de presión analógico** | Presión de la línea | Al **ADC1**, con la misma restricción de canal que el LGT-01. |
| **Relé de corte de la bomba** | Interrumpe la alimentación de la bomba | Se acciona por **pulsos**, no por nivel mantenido: el corte tiene que funcionar también con la alimentación de la bomba en el mismo circuito que el nodo. |
| **Buzzer piezo** | Fuga detectada y corte automático | Uno de los tres casos que 5.1.2 autoriza a hacer sonar. |
| **WS2812B** | Estado de la bomba y de la línea | Código completo de 5.1.2. |
| **Alimentación con respaldo** | Batería de respaldo del nodo | El corte de bomba por lectura local tiene que funcionar aunque se caiga la red eléctrica, no solo si se cae el internet. |

La decisión de circuito que distingue a este nodo es el **corte por lectura local, no por comando remoto**. La arquitectura ya resolvió que `FlowReadingReceived` lo publica el Edge API y no Telemetry, priorizando la latencia de corte sobre la interpretación de dominio. Traducido al hardware, eso significa que el nodo no espera el comando `shutoff` del cloud: si su propia lectura supera el umbral durante el tiempo mínimo configurado, corta y publica el evento. El corte remoto sigue existiendo como redundancia —el administrador puede cortar desde la aplicación y el nodo obedece—, pero no es el mecanismo primario. Una inundación no espera el tiempo de un viaje de ida y vuelta a los servidores, y un nodo que solo cortara por comando remoto habría convertido la arquitectura offline-first en decorativa.

#### Flujos de interacción que cubre el prototipo

| Paso | Disparador | Decisión | Respuesta física | Verificación observable |
| :--- | :--- | :--- | :--- | :--- |
| 1 | Consumo legítimo dentro de la franja esperada | Caudal bajo el umbral | LED verde fijo = normal | La curva de caudal en el dashboard sigue el perfil de uso |
| 2 | Caudal sobre el umbral fuera de la franja | Comienza el conteo de `minDeviationMinutes` | LED violeta intermitente = evaluando | El `Serial Monitor` imprime el tiempo de desviación acumulado |
| 3 | La desviación se sostiene más de `minDeviationMinutes` | Declara fuga, corta la bomba | LED rojo con tres parpadeos rápidos + tono; relé de corte en menos de 500 ms | El relé de Wokwi se abre; se publica `LeakDetected` y `PumpShutOff` |
| 4 | El administrador revisa y cierra la alerta | Registra la resolución | LED verde fijo = normal | `LeakResolved` publica; la alerta sale de la lista abierta |
| 5 | Presión cae sin caudal correspondiente | Marca la bomba `FAULT` | LED rojo + tono | La bomba aparece como `FAULT` en el inventario |

**Caminos infelices:**

| Situación | Comportamiento diseñado | Razón |
| :--- | :--- | :--- |
| **Consumo legítimo nocturno** (una familia se ducha tarde) | La franja esperada y el umbral por zona evitan la falsa alarma; si aun así llegara a dispararse, la `LeakAlert` queda `OPEN` y el administrador puede resolverla sin que la bomba se haya detenido por un segundo | Una falsa alarma que apaga la bomba entrena al administrador a ignorar las alertas, que es el peor resultado posible para una fuga real. La separación entre `LOW`, `MEDIUM` y `HIGH` existe para que solo `HIGH` corte de inmediato. |
| **Corte de la alimentación eléctrica** | El respaldo del nodo mantiene la lectura y el corte local; al restablecerse, publica el evento acumulado | El corte de bomba por lectura local tiene que ser independiente de la red, no solo del internet. |
| **El sensor de caudal falla (no emite pulsos)** | No se declara ni fuga ni normalidad: publica `stale: true` y el LED pasa a ámbar | La ausencia de lectura se declara como ausencia. Un firmware que asumiera "sin pulsos = sin caudal" apagaría la bomba en cada falla del sensor. |
| **Fuga lenta, por debajo del umbral durante minutos** | `minDeviationMinutes` y la línea base por zona evitan el disparo por ruido; el resto se cubre con analítica, no con corte | El corte es para la fuga evidente; la fuga lenta se detecta en el dashboard por tendencia, que es donde el costo de equivocarse es menor. |
| **Apertura forzada de la caja del nodo** | Reed antimanipulación en la misma caja, publicado como parte del estado del dispositivo | Un nodo del cuarto de máquinas que puede ser abierto sin dejar rastro no es confiable para una función de seguridad hydraulic. |

### 5.6.7. Dispositivo 04 — Medidor de consumo energético (PWR-01)

#### Descripción y criterios de diseño

El PWR-01 mide el consumo de las luminarias y de los equipos comunes de las áreas que las consumen, y es el dispositivo que alimenta el cálculo de kWh, las estadísticas y la detección de anomalías del contexto IoT Telemetry & Analytics. A diferencia de los otros tres nodos, **no actuá**: no enciende ni apaga nada. Su única salida es la lectura.

Los criterios que lo gobiernan son **C5** (consumo y ausencia total de mantenimiento en el punto de medición), **C6** (la pinza de corriente es el único punto de contacto con el conductor energizado) y **C4** (el valor que publica es el mismo que muestra la tarjeta, con su marca de tiempo).

#### Diseño físico

El PWR-01 se monta en el tablero del cuadro eléctrico del área, o en el tablero de la bomba cuando corresponde. La carcasa es más cerrada que la de los otros nodos, porque no hay ninguna superficie de interacción que proteger: no hay LED de estado para el resident ni contactless que esperar. Aun así conserva el LED en estado `Warning` de batería baja cuando la instalación usa respaldo, y la etiqueta con el ID del medidor, porque el inventario de telemetría lista medidores por ubicación igual que lista luminarias.

| Elemento | Cota / material | Razón de la decisión |
| :--- | :--- | :--- |
| Ventana de la pinza | Ø 12 mm, para conductores de hasta 12 mm | La pinza se cierra alrededor del conductor sin cortar ni pelar el cableado del edificio. |
| Posición de la pinza | En la fase, a 10 cm del borne | Evita medir la caída de tensión del propio cable de conexión y mantiene la lectura estable. |
| LED | `Warning` de batería baja, cuando hay respaldo | Único estado que el PWR-01 necesita poder mostrar: el resto se lee en el dashboard. |
| Etiqueta | Con el ID del medidor y la zona | La anomalía se reporta por zona, no por nodo. |

#### Diseño de circuito

| Componente | Función | Nota de diseño |
| :--- | :--- | :--- |
| **ESP32 DevKit V1** | Muestreo, integración y publicación | Publica por evento y con un heartbeat de 60 s, igual que los otros nodos, para que la tarjeta del dispositivo pueda calcular la antigüedad de la lectura. |
| **ACS712 5 A** | Corriente RMS de la zona | Salida analógica al **ADC1**; el cálculo de kWh lo hace el microservicio de telemetría, no el nodo. |
| **WS2812B** | Estado de batería del respaldo | Solo para instalaciones con respaldo. |
| **Pulsador** | Reinicio de fábrica del contador acumulado | Sellado igual que en los otros nodos; reinicia la energía acumulada, no la configuración. |
| **Alimentación** | Derivación del propio cuadro | El medidor no necesita alimentación propia: se alimenta de la línea que mide. |

La decisión que define a este nodo es **dónde se calcula el kWh**. El nodo mide corriente y la publica; el servidor la agrega en ventanas de tiempo. Concentrar el cálculo en el nodo obligaría a cada dispositivo a mantener la línea base y el modelo de consumo, y a sincronizar ese modelo con el servidor en cada cambio de regla, con el riesgo de que dos copias del cálculo diverjan. El cálculo en el servidor mantiene una sola verdad del consumo y deja al nodo con la única tarea que no puede fallar sin que se note, que es medir bien.

#### Flujos de interacción que cubre el prototipo

| Paso | Disparador | Decisión | Respuesta | Verificación observable |
| :--- | :--- | :--- | :--- | :--- |
| 1 | Corriente estable en la zona | Muestreo periódico | Publica `{ma, ts}` | La serie de consumo crece en el dashboard |
| 2 | Consumo por encima de la línea base del área | Se evalúa la desviación | LED violeta intermitente = evaluando | Se publica el evento; el `Serial Monitor` imprime la desviación |
| 3 | Anomalía confirmada | IoT Telemetry crea `AnomalyFlag` | LED `Danger` | `AbnormalConsumptionDetected` aparece en el panel de anomalías |
| 4 | Normalización del consumo | La anomalía se cierra | LED verde fijo = normal | La serie vuelve a la línea base |

**Caminos infelices:**

| Situación | Comportamiento diseñado | Razón |
| :--- | :--- | :--- |
| **Conductor sin corriente** | Publica 0 mA con marca de tiempo válida; no es una lectura ausente | Un cero es un dato. La distinción entre "no hay consumo" y "no sé el consumo" es la misma que la tarjeta de la interfaz necesita para no presentar un vacío como si fuera un resultado. |
| **Pinza abierta o mal cerrada** | Publica `stale: true` y LED ámbar | Es el modo de falla más común de una pinza de corriente, y el más silencioso: sin la marca de `stale`, el dashboard mostraría un cero perfecto durante horas. |
| **Pico de corriente por arranque de la bomba** | Se integra como lectura normal; el filtro no descarta picos | Descartar picos "para limpiar la serie" produce un consumo subestimado justo cuando hay una anomalía real; la limpieza se hace en el análisis, no en la medida. |
| **Sin broker** | El nodo acumula en memoria y publica al restablecerse, con marca de "local" | Criterio C2 aplicado a la lectura: la pérdida del enlace no interrumpe la medición, solo su visibilidad inmediata. |
| **Alimentación interrumpida** | Con respaldo, el nodo sigue midiendo y avisa con LED ámbar cuando la batería baja | Sin respaldo, la lectura se declara ausente en lugar de congelarse en el último valor, porque un valor congelado en vivo es la forma más rápida de perder la confianza del usuario en todo el panel. |

### 5.6.8. Verificación de los prototipos y presupuestos de respuesta

Los cuatro prototipos se construyeron en Wokwi sobre ESP32 DevKit V1, con los sensores y actuadores reales del diseño, y se ejercitaron contra los flujos descritos en cada dispositivo. La verificación no se limita a "funciona": se contrasta contra los presupuestos de respuesta fijados en 5.1.2, porque esos tres números son la diferencia entre una alarma creíble y una alarma que el usuario aprende a ignorar.

| Presupuesto de 5.1.2 | Valor | Verificación en el prototipo | Dispositivo donde es crítico |
| :--- | :--- | :--- | :--- |
| **El LED confirma la intención** | ≤ 200 ms | Con el MFRC522 leyendo la UID, el WS2812B cambia a violeta intermitente antes de los 200 ms | ACC-01, LGT-01 |
| **El relé completa la acción física** | ≤ 500 ms | El relé de Wokwi conmuta dentro de la ventana, medido entre la decisión del firmware y el cambio de estado del contacto | ACC-01, HYD-01, LGT-01 |
| **El tono llega antes de un segundo** | < 1 s | El buzzer suena dentro del segundo en el caso de apertura forzada, corte de bomba y fuga | ACC-01, HYD-01 |
| **El LED baja al 10 % sin apagarse entre 23:00 y 06:00** | Verificado por inspección de firmware | La atenuación se aplica al brillo, nunca al estado: el LED apagado no codifica ningún estado | Todos |
| **Sin broker, el nodo conserva el último estado y sigue operando** | Verificado desconectando el broker en la simulación | La caché en NVS y SPIFFS permite operar y encolar la telemetría | Todos |
| **El mensaje distingue valor ausente de valor cero** | Verificado en el `Serial Monitor` | El campo `stale` acompaña a cualquier lectura que no provenga del sensor | PWR-01, HYD-01, LGT-01 |

Estos presupuestos son, además, el criterio con el que se evalúa el firmware antes de cada despliegue. Un cambio que agregue un retardo perceptible al LED o al relé no es una regresión de rendimiento sino un cambio de comportamiento de la interfaz física, y se trata como tal: se mide contra la tabla, no contra una sensación.

### 5.6.9. Trazabilidad con las historias de usuario

El diseño de los dispositivos no introduce funcionalidades nuevas: materializa las que ya están especificadas. La correspondencia completa está en TS16 y TS17, que fijan el registro y la comunicación de los dispositivos ESP32 por MQTT.

| Historia | Requisito que fija el dispositivo | Dispositivo y decisión de diseño que lo satisface |
| :--- | :--- | :--- |
| **TS16**, escenario 1 | Registrar el dispositivo con tipo, ubicación y edificio; queda `INACTIVO` hasta su primera conexión | Los cuatro nodos declaran su ID, tipo y ubicación en la etiqueta (C7) y no publican estado hasta conectar con el broker, de modo que el inventario de la aplicación y el objeto físico coincidan. |
| **TS16**, escenario 2 | Heartbeat periódico actualiza el estado a `ACTIVO` y la marca de última conexión | Heartbeat de 60 s en los cuatro nodos, que es el mismo dato con el que la tarjeta de la interfaz calcula la antigüedad de la lectura. |
| **TS16**, escenario 3 | Ausencia de heartbeat marca `OFFLINE` y notifica al administrador | El LED pasa a `Neutral` con un parpadeo cada 5 s y el sistema no finge normalidad: la ausencia se declara como ausencia, en el objeto y en la pantalla. |
| **TS17**, escenario 1 | Recibir lecturas por MQTT y evaluar el umbral en menos de 500 ms | El umbral se evalúa localmente (C2) y el corte de la bomba ocurre dentro de la ventana de 500 ms, sin esperar la ida y vuelta al cloud. |
| **TS17**, escenario 2 | Recibir comandos de actuación y confirmar con un ACK | Los nodos suscribidos a `cmd` ejecutan el comando y publican el estado resultante; el comando manual desde la aplicación es la excepción controlada a la regla de "una sola acción primaria por pantalla", con confirmación en la vista de detalle. |
| **TS17**, escenario 3 | Pérdida del broker marca `OFFLINE`, descarta comandos pendientes y notifica sin afectar a los demás dispositivos | La caché local por nodo permite que cada dispositivo siga operando de forma independiente; un nodo sin enlace no arrastra a los demás, y los comandos pendientes hacia él se descartan en lugar de acumularse. |

# Conclusiones
# Conclusiones y Recomendaciones

**Conclusiones**

- El diseño por bounded context aísla reglas de negocio distintas (facturación, reservas, IoT) sin que un cambio en un contexto obligue a tocar otro; la comunicación entre Reservation, Smart Lighting y IoT Access Management ocurre solo por eventos, no por acoplamiento directo.
- Separar PostgreSQL (datos transaccionales) de TimescaleDB (series de tiempo) resuelve el problema de escala de las lecturas de sensores, que crecen de forma continua y degradarían los dashboards de consumo si se consultaran contra un modelo relacional normal.
- La regla de morosidad (`ResidentMarkedDelinquent`) es un acoplamiento intencional bien resuelto: Payment decide quién es moroso y IoT Access Management actúa sobre esa decisión suspendiendo credenciales, sin que ninguno duplique la lógica del otro.

**Recomendaciones**

- Definir un límite explícito de reintentos y de tiempo para `EdgeGatewaySyncClient`: si el Edge API pierde conexión, conviene declarar cuánto tiempo es aceptable operar en modo degradado con la última lista de credenciales sincronizada.
- Formalizar un contrato de eventos versionado (Schema Registry o versión en el payload) para el Message & Event Broker, ya que varios contextos consumen los mismos eventos de Reservation y Payment; un cambio de esquema sin control rompería a todos a la vez.
- Incorporar pruebas de contrato entre publicadores y consumidores de eventos (por ejemplo `ReservationApproved` y sus consumidores) para detectar incompatibilidades antes de desplegar, ya que la comunicación asíncrona no falla en tiempo de compilación.

# Referencias Bibliográficas

  - Aguilar, K. L. B. (2026). Vacíos regulatorios en la Ley de Propiedad en Condominio, análisis de conflictos recurrentes en su modalidad vertical ubicados en el Distrito Central (Tesis doctoral). Centro Universitario Tecnológico CEUTEC. `https://repositorio.unitec.edu/server/api/core/bitstreams/cd97bbd4-204c-49c8-9901-3d0a5a85d7f3/content`
  - Condominos. (2024, 4 de noviembre). Manejo de chats de WhatsApp de vecinos en condominios. `https://www.condominos.app/sitio/detalle/OA/manejo-de-chats-de-whatsapp-de-vecinos-en-condominios`
`https://www2.deloitte.com/us/en/insights/topics/digital-transformation.html`
  - El Comercio. (2026, 3 de abril). Fallas en la gestión de edificios corporativos pueden generar sobrecostos de hasta 30%. `https://elcomercio.pe/economia/fallas-en-la-gestion-de-edificios-corporativos-pueden-generar-sobrecostos-de-hasta-30-noticia/`
  - Gestión. (2023, 12 de septiembre). Advierten que deudas por gastos en condominios llevan a inquilinos a Infocorp. `https://gestion.pe/tu-dinero/inmobiliarias/advierten-que-deudas-por-gastos-en-condominios-llevan-a-inquilinos-a-infocorp-condominios-deudas-por-pagos-de-mantenimiento-noticia/`
  - GitHub. (s.f.). `https://github.com/`
  - Instituto Nacional de Estadística e Informática (INEI). (2023). Perú: Características de las viviendas particulares y hogares. `https://www.gob.pe/institucion/inei/informes-publicaciones/4377979-las-tecnologias-de-informacion-y-comunicacion-en-los-hogares-ene-feb-mar-2023`
  - Lucidchart. (s.f.). `https://www.lucidchart.com`
  - PlantUML. (s.f.). `https://plantuml.com`
  - ProTool. (2026, 11 de marzo). Administrar un condominio por WhatsApp no es gestión, es un riesgo para la comunidad. `https://www.protool.cl/noticia_detalle.php?slug=administrar-condominios-por-whatsapp-no-es-gestion-es-riesgo`
  - Sociedad Peruana de Bienes Raíces. (2024). Digitalización de edificios y condominios en Perú. `https://bienesraicess.com/blogs/digitalizacion-de-edificios-y-condominios-en-peru`
  - UXPressia. (s.f.). `https://uxpressia.com/`
  - Verastegui Leon, P. A., Mendoza Castañeda, J. L. D. C., Zapata Becerra, M. L., Capristan Leon, K. E., & Ravines Garcia, M. A. (2025). Propuesta de un plan estratégico para mejora de la Gestión en Edificios Multifamiliares en Lima Moderna: Caso De Estudio: MONARCH MANAGERS EIRL. Universidad Peruana de Ciencias Aplicadas. `https://repositorioacademico.upc.edu.pe/handle/10757/686137`

# Anexos
