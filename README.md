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
- [CAPÍTULO V: Solution UI/UX Design](#capítulo-v-solution-uiux-design)
  - [5.1. Style Guidelines](#51-style-guidelines)
    - [5.1.1. General Style Guidelines](#511-general-style-guidelines)
    - [5.1.2. Web, Mobile and IoT Style Guidelines](#512-web-mobile-and-iot-style-guidelines)
  - [5.2. Information Architecture](#52-information-architecture)
    - [5.2.1. Organization Systems](#521-organization-systems)
    - [5.2.2. Labeling Systems](#522-labeling-systems)
    - [5.2.3. SEO Tags and Meta Tags](#523-seo-tags-and-meta-tags)
    - [5.2.4. Searching Systems](#524-searching-systems)
    - [5.2.5. Navigation Systems](#525-navigation-systems)
  - [5.3. Landing Page UI Design](#53-landing-page-ui-design)
    - [5.3.1. Landing Page Wireframe](#531-landing-page-wireframe)
    - [5.3.2. Landing Page Mock-up](#532-landing-page-mock-up)
  - [5.4. Applications UX/UI Design](#54-applications-uxui-design)
    - [5.4.1. Applications Wireframes](#541-applications-wireframes)
    - [5.4.2. Applications Wireflow Diagrams](#542-applications-wireflow-diagrams)
      - [5.4.2.1. Applications Mock-ups](#5421-applications-mock-ups)
    - [5.4.3. Applications User Flow Diagrams](#543-applications-user-flow-diagrams)
  - [5.5. Applications Prototyping](#55-applications-prototyping)
  - [5.6. IoT Device Design](#56-iot-device-design)
- [CAPÍTULO VI: Product Implementation, Validation & Deployment](#capítulo-vi-product-implementation-validation--deployment)
  - [6.1. Software Configuration Management](#61-software-configuration-management)
    - [6.1.1. Software Development Environment Configuration](#611-software-development-environment-configuration)
    - [6.1.2. Source Code Management](#612-source-code-management)
    - [6.1.3. Source Code Style Guide & Coding Conventions](#613-source-code-style-guide--coding-conventions)
    - [6.1.4. Software Deployment Configuration](#614-software-deployment-configuration)
  - [6.2. Landing Page, Services & Applications Implementation](#62-landing-page-services--applications-implementation)
    - [6.2.1. Sprint 1](#621-sprint-1)
      - [6.2.1.1. Sprint Planning 1](#6211-sprint-planning-1)
      - [6.2.1.2. Aspect Leaders and Collaborators](#6212-aspect-leaders-and-collaborators)
      - [6.2.1.3. Sprint Backlog 1](#6213-sprint-backlog-1)
      - [6.2.1.4. Development Evidence for Sprint Review](#6214-development-evidence-for-sprint-review)
      - [6.2.1.5. Testing Suite Evidence for Sprint Review](#6215-testing-suite-evidence-for-sprint-review)
      - [6.2.1.6. Execution Evidence for Sprint Review](#6216-execution-evidence-for-sprint-review)
      - [6.2.1.7. Services Documentation Evidence for Sprint Review](#6217-services-documentation-evidence-for-sprint-review)
      - [6.2.1.8. Software Deployment Evidence for Sprint Review](#6218-software-deployment-evidence-for-sprint-review)
      - [6.2.1.9. Team Collaboration Insights during Sprint](#6219-team-collaboration-insights-during-sprint)
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
| EP05 | Infraestructura, seguridad y arquitectura técnica | Esta épica abarca todos los aspectos técnicos necesarios para el correcto funcionamiento del sistema Edifika, incluyendo la configuración de microservicios, autenticación JWT, API Gateway, bases de datos independientes, documentación de APIs, comunicación entre servicios y despliegue en la nube. Su objetivo es garantizar que la plataforma sea segura, escalable y mantenible. | TS01, TS02, TS03, TS04, TS05, TS06, TS07, TS08, TS09, TS10, TS11, TS12, TS13, TS14, TS15, TS16, TS17, TS18, TS19, TS20, TS21, TS22, TS23, TS24, TS25, TS26, TS27, TS28, TS29, TS30, TS31, TS32, TS33, TS34 |
| EP06 | Landing Page e Interfaz Web | Esta épica cubre todas las funcionalidades visibles en la landing page pública de Edifika y la interfaz web de la aplicación. Incluye navegación, presentación de contenido y acceso a la plataforma, con el objetivo de atraer y convertir nuevos usuarios. | US41, US42, US43, US44, US45, US46, US47 |
| EP07 | Smart Building e Internet de las Cosas (IoT) | Esta épica abarca la integración de dispositivos IoT dentro del edificio para automatizar y controlar el acceso a áreas comunes y unidades mediante sensores, cerraduras inteligentes. Permite a los residentes gestionar el acceso a sus reservas de forma remota, mientras que los administradores pueden monitorear en tiempo real el estado de los dispositivos, registrar eventos de apertura/cierre y detectar accesos no autorizados, fortaleciendo la seguridad y la eficiencia operativa del edificio. | US48, US49, US50, US51, US52, US53, US54, US55, US56 |
| EP08 | Iluminación inteligente y automatización | Esta épica abarca la automatización de la iluminación de áreas comunes mediante reglas configurables (presencia, lux, horario y prioridad), el control manual temporal (override) y la gestión del inventario de luminarias, buscando mejorar la seguridad y reducir el consumo energético. | US57, US58, US59, US60 |
| EP09 | Telemetría y analítica IoT | Esta épica cubre la ingesta, almacenamiento y análisis de las lecturas de los sensores. Permite al administrador visualizar consumo energético, recibir alertas de consumo anómalo y fallas de luminarias, y monitorear el estado de conexión de los dispositivos. | US61, US62, US63, US64, US65 |
| EP10 | Detección de fugas en bombas de agua | Esta épica se enfoca en prevenir pérdidas de agua mediante la detección automática de fugas a partir de caudal y presión, el corte de bombas, la gestión de alertas y la detección de fallas de equipos hidráulicos. | US66, US67, US68, US69, US70 |
| EP11 | Edge Gateway e integración con dispositivos ESP32 | Esta épica abarca el servicio Edge Gateway (Python, Flask, Peewee ORM y SQLite) que se ejecuta en el edificio y se comunica por MQTT local con los nodos ESP32 (lector RFID, cerradura eléctrica, buzzer, pantalla OLED, sensor de humedad y sensor ultrasónico). Resuelve accesos con una caché local, opera sin conexión a internet y se sincroniza con la nube. | US71, US72, US73, US74, US75, US76, US77, US78, US79, US80, US81, US82, US83, US84, US85, US86, US87, US88, US89, US90, US91, US92, US93 |

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

<tr>
  <td><strong>US54</strong></td>
  <td>Otorgar acceso temporal por reserva aprobada</td>
  <td>Como residente, quiero que mi reserva aprobada me habilite automáticamente el ingreso al área común solo durante mi horario, para no depender del administrador para entrar.</td>
  <td>
    <strong>Escenario 1: Acceso habilitado dentro de la ventana de reserva.</strong><br>
    Dado que el administrador aprueba la reserva de la piscina de un residente de 18:00 a 20:00 y este tiene una tarjeta ACTIVA,<br>
    cuando el residente presenta su tarjeta en el lector de la piscina a las 18:30,<br>
    entonces el sistema concede el acceso, registra el intento como GRANTED y el lector libera la puerta en menos de 1 segundo.<br><br>
    <strong>Escenario 2: Acceso denegado fuera de la ventana.</strong><br>
    Dado que el residente tiene un permiso vigente de 18:00 a 20:00,<br>
    cuando presenta su tarjeta a las 20:15,<br>
    entonces el sistema deniega el acceso, registra el intento como DENIED y el lector muestra la señal de denegación.<br><br>
    <strong>Escenario 3: Reserva cancelada.</strong><br>
    Dado que el residente tenía un permiso de acceso generado por una reserva aprobada,<br>
    cuando la reserva es cancelada,<br>
    entonces el sistema revoca el permiso, lo sincroniza con el Edge API y cualquier intento posterior con esa reserva es denegado.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US55</strong></td>
  <td>Consultar bitácora de accesos</td>
  <td>Como administrador, quiero consultar la bitácora de intentos de acceso a las áreas comunes para auditar quién ingresó y detectar accesos no autorizados.</td>
  <td>
    <strong>Escenario 1: Consulta con filtros.</strong><br>
    Dado que el administrador selecciona un área común, un rango de fechas y el resultado GRANTED o DENIED,<br>
    cuando solicita la bitácora,<br>
    entonces el sistema retorna los intentos ordenados por fecha descendente con dispositivo, credencial enmascarada, resultado y marca de tiempo en menos de 500 ms.<br><br>
    <strong>Escenario 2: Sin resultados.</strong><br>
    Dado que no existen intentos de acceso para los filtros seleccionados,<br>
    cuando el administrador ejecuta la consulta,<br>
    entonces el sistema muestra "No se encontraron intentos de acceso para los filtros seleccionados" sin generar un error.<br><br>
    <strong>Escenario 3: Intentos denegados repetidos.</strong><br>
    Dado que una misma credencial acumula 3 intentos DENIED consecutivos en el mismo lector en menos de 5 minutos,<br>
    cuando el sistema registra el tercer intento,<br>
    entonces marca el evento como "Posible acceso no autorizado" y notifica al administrador con la ubicación del lector.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US56</strong></td>
  <td>Apertura remota de acceso</td>
  <td>Como administrador, quiero abrir remotamente un acceso desde la aplicación para atender situaciones excepcionales sin desplazarme al lector.</td>
  <td>
    <strong>Escenario 1: Apertura exitosa.</strong><br>
    Dado que el administrador selecciona un lector en estado ACTIVO,<br>
    cuando solicita la apertura remota,<br>
    entonces el sistema publica el comando al dispositivo, recibe el ACK en menos de 2 segundos y registra el evento con el identificador del administrador.<br><br>
    <strong>Escenario 2: Lector desconectado.</strong><br>
    Dado que el lector seleccionado se encuentra en estado OFFLINE,<br>
    cuando el administrador solicita la apertura remota,<br>
    entonces el sistema muestra "El lector no está disponible" y no encola el comando para evitar aperturas diferidas inesperadas.<br><br>
    <strong>Escenario 3: Sin confirmación del dispositivo.</strong><br>
    Dado que el sistema publicó el comando de apertura,<br>
    cuando transcurren 5 segundos sin recibir el ACK,<br>
    entonces el sistema muestra "No se confirmó la apertura" y registra el intento como fallido.
  </td>
  <td>EP07</td>
</tr>

<tr>
  <td><strong>US57</strong></td>
  <td>Configurar reglas de automatización de iluminación</td>
  <td>Como administrador, quiero configurar reglas de iluminación por área común (presencia, umbral de lux, franja horaria, tiempo de apagado y prioridad) para automatizar el uso eficiente de la energía.</td>
  <td>
    <strong>Escenario 1: Configuración exitosa.</strong><br>
    Dado que el administrador define para el pasillo de la Torre A presencia requerida, umbral de 50 lux, franja de 18:00 a 06:00, apagado a los 120 segundos y prioridad 1,<br>
    cuando guarda la regla,<br>
    entonces el sistema la persiste y la envía al Edge API para su ejecución local, retornando 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Conflicto de prioridad.</strong><br>
    Dado que ya existe una regla activa con la misma prioridad y franja solapada en el área,<br>
    cuando el administrador intenta guardar una nueva regla,<br>
    entonces el sistema retorna 409 con "Ya existe una regla con la misma prioridad para esta franja" sin crear el registro.<br><br>
    <strong>Escenario 3: Valores inválidos.</strong><br>
    Dado que el administrador ingresa un umbral de lux negativo o una franja con hora de inicio igual a la de fin,<br>
    cuando envía la configuración,<br>
    entonces el sistema retorna 400 indicando el campo inválido y no guarda la regla.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US58</strong></td>
  <td>Encender o apagar luces manualmente (override)</td>
  <td>Como residente con una reserva vigente o como administrador, quiero encender o apagar manualmente las luces de un área por un tiempo determinado, para cubrir situaciones que la automatización no contempla.</td>
  <td>
    <strong>Escenario 1: Override aplicado.</strong><br>
    Dado que el residente tiene una reserva vigente del salón de eventos,<br>
    cuando solicita encender las luces por 2 horas,<br>
    entonces el sistema aplica el override ON, suspende la automatización de esa zona durante ese tiempo y publica OverrideTriggered.<br><br>
    <strong>Escenario 2: Expiración del override.</strong><br>
    Dado que un override tiene una duración configurada,<br>
    cuando se cumple el tiempo del override,<br>
    entonces el sistema lo da por finalizado y la zona retoma la automatización según la regla vigente.<br><br>
    <strong>Escenario 3: Usuario sin autorización.</strong><br>
    Dado que un residente sin reserva vigente intenta controlar las luces de un área,<br>
    cuando envía la solicitud,<br>
    entonces el sistema retorna 403 con "No tienes permiso para controlar esta zona" sin enviar ningún comando.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US59</strong></td>
  <td>Encender área al iniciar una reserva</td>
  <td>Como sistema, quiero encender automáticamente las luces del área reservada al iniciar la reserva, para que el residente encuentre el espacio listo para su uso.</td>
  <td>
    <strong>Escenario 1: Encendido programado.</strong><br>
    Dado que una reserva aprobada inicia a las 18:00 y el área no tiene presencia detectada,<br>
    cuando el sistema recibe el evento ReservationStarted,<br>
    entonces enciende las luminarias del área y publica LuminaireTurnedOn.<br><br>
    <strong>Escenario 2: Override vigente con precedencia.</strong><br>
    Dado que existe un override OFF vigente solicitado por el administrador en esa área,<br>
    cuando inicia la reserva,<br>
    entonces el sistema respeta el override y no enciende las luces, aplicando la precedencia definida en AutomationDecisionService.<br><br>
    <strong>Escenario 3: Edge API sin respuesta.</strong><br>
    Dado que el sistema envía el comando de encendido al Edge API,<br>
    cuando este no confirma la ejecución,<br>
    entonces el sistema reintenta hasta 3 veces y, si persiste el fallo, notifica al administrador con la ubicación afectada.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US60</strong></td>
  <td>Registrar y consultar luminarias</td>
  <td>Como administrador, quiero registrar las luminarias de cada área común y consultar su estado, para mantener un inventario actualizado del sistema de iluminación.</td>
  <td>
    <strong>Escenario 1: Registro exitoso.</strong><br>
    Dado que el administrador ingresa ubicación, área común y potencia nominal de una luminaria,<br>
    cuando confirma el registro,<br>
    entonces el sistema la guarda con estado OFF y retorna 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Luminaria duplicada.</strong><br>
    Dado que ya existe una luminaria registrada en la misma ubicación y área,<br>
    cuando el administrador intenta registrarla nuevamente,<br>
    entonces el sistema retorna 409 con "La luminaria ya se encuentra registrada" sin crear el registro.<br><br>
    <strong>Escenario 3: Consulta de estado por área.</strong><br>
    Dado que el administrador selecciona un área común,<br>
    cuando consulta sus luminarias,<br>
    entonces el sistema lista cada luminaria con su estado ON/OFF y su última conexión.
  </td>
  <td>EP08</td>
</tr>

<tr>
  <td><strong>US61</strong></td>
  <td>Visualizar consumo energético por área y periodo</td>
  <td>Como administrador, quiero visualizar el consumo energético (kWh) por área común y periodo, para identificar dónde se puede reducir el gasto eléctrico.</td>
  <td>
    <strong>Escenario 1: Consulta exitosa.</strong><br>
    Dado que el administrador selecciona un área y un rango de fechas válido,<br>
    cuando solicita el reporte de consumo,<br>
    entonces el sistema retorna el consumo en kWh agregado por periodo en menos de 1 segundo.<br><br>
    <strong>Escenario 2: Periodo sin datos.</strong><br>
    Dado que no existen lecturas para el área en el rango seleccionado,<br>
    cuando el administrador consulta el consumo,<br>
    entonces el sistema responde 200 con consumo 0 y el mensaje "Sin datos de consumo para el periodo".<br><br>
    <strong>Escenario 3: Rango de fechas inválido.</strong><br>
    Dado que la fecha de inicio es posterior a la fecha de fin,<br>
    cuando el administrador envía la consulta,<br>
    entonces el sistema retorna 400 con "El rango de fechas no es válido" sin consultar la base de series temporales.
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US62</strong></td>
  <td>Alertar consumo anómalo</td>
  <td>Como administrador, quiero recibir una alerta cuando el consumo de un área se desvíe de su comportamiento habitual, para investigar posibles fallas o usos indebidos.</td>
  <td>
    <strong>Escenario 1: Anomalía detectada.</strong><br>
    Dado que el consumo de un área supera su media móvil en más de 3 desviaciones estándar (|z| > 3),<br>
    cuando el sistema evalúa la nueva agregación,<br>
    entonces registra un AnomalyFlag con severidad y evidencia, publica AbnormalConsumptionDetected y notifica al administrador.<br><br>
    <strong>Escenario 2: Consumo dentro de la línea base.</strong><br>
    Dado que el consumo del área se mantiene dentro del rango esperado,<br>
    cuando el sistema evalúa la agregación,<br>
    entonces no genera alerta y actualiza la línea base.<br><br>
    <strong>Escenario 3: Línea base insuficiente.</strong><br>
    Dado que el área tiene menos de 7 días de datos,<br>
    cuando el sistema intenta evaluar anomalías,<br>
    entonces omite la evaluación y registra "Línea base en construcción" sin generar falsas alertas.
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US63</strong></td>
  <td>Detectar falla de luminaria</td>
  <td>Como administrador, quiero ser notificado cuando una luminaria no funcione pese a estar encendida, para repararla oportunamente.</td>
  <td>
    <strong>Escenario 1: Falla detectada.</strong><br>
    Dado que una luminaria fue comandada en ON y su corriente medida es 0 durante más de 30 segundos,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces publica LuminaireFailureDetected y notifica al administrador con la ubicación exacta de la luminaria.<br><br>
    <strong>Escenario 2: Luminaria apagada.</strong><br>
    Dado que una luminaria en estado OFF reporta corriente nula,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces lo considera comportamiento normal y no genera alerta.<br><br>
    <strong>Escenario 3: Sensor sin lectura.</strong><br>
    Dado que el sensor de corriente deja de enviar datos,<br>
    cuando el sistema no recibe lecturas dentro del tiempo límite,<br>
    entonces no declara falla de luminaria y lo trata como dispositivo sin comunicación (US64).
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US64</strong></td>
  <td>Monitorear estado de conexión de dispositivos</td>
  <td>Como administrador, quiero ver el estado de conexión de todos los dispositivos IoT del edificio, para saber cuáles requieren atención.</td>
  <td>
    <strong>Escenario 1: Visualización del estado.</strong><br>
    Dado que el administrador abre el panel de dispositivos,<br>
    cuando el sistema carga la información,<br>
    entonces muestra cada dispositivo con estado ACTIVO u OFFLINE y su última conexión.<br><br>
    <strong>Escenario 2: Dispositivo sin heartbeat.</strong><br>
    Dado que un dispositivo no emite heartbeat durante el tiempo límite configurado,<br>
    cuando se ejecuta la validación periódica,<br>
    entonces el sistema lo marca OFFLINE, descarta los comandos pendientes hacia él, publica DeviceWentOffline y notifica al administrador sin afectar a los demás dispositivos.<br><br>
    <strong>Escenario 3: Reconexión.</strong><br>
    Dado que un dispositivo OFFLINE reanuda su heartbeat,<br>
    cuando el sistema recibe la señal,<br>
    entonces lo marca ACTIVO, registra la recuperación y no ejecuta los comandos que fueron descartados.
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US65</strong></td>
  <td>Consultar lecturas de sensores en tiempo real e históricas</td>
  <td>Como administrador, quiero consultar las lecturas de los sensores en tiempo real y su histórico, para analizar el comportamiento de las áreas del edificio.</td>
  <td>
    <strong>Escenario 1: Consulta de serie temporal.</strong><br>
    Dado que el administrador selecciona un sensor y un rango de tiempo,<br>
    cuando solicita la serie,<br>
    entonces el sistema retorna las lecturas agregadas con su unidad de medida en menos de 1 segundo.<br><br>
    <strong>Escenario 2: Lectura fuera de rango.</strong><br>
    Dado que un sensor envía un valor inválido o fuera del rango físico posible,<br>
    cuando el sistema recibe la lectura,<br>
    entonces la descarta, la registra como inválida y no la incluye en las series ni en los cálculos.<br><br>
    <strong>Escenario 3: Lectura duplicada.</strong><br>
    Dado que llega una lectura con el mismo dispositivo y marca de tiempo ya registrados,<br>
    cuando el sistema procesa el mensaje,<br>
    entonces lo ignora de forma idempotente sin duplicar el registro.
  </td>
  <td>EP09</td>
</tr>

<tr>
  <td><strong>US66</strong></td>
  <td>Configurar reglas de detección de fugas</td>
  <td>Como administrador, quiero configurar las reglas de detección de fugas por zona hidráulica (umbral de caudal, caída de presión, franja de consumo esperado y duración mínima), para adaptar la detección al uso real del edificio.</td>
  <td>
    <strong>Escenario 1: Configuración exitosa.</strong><br>
    Dado que el administrador define para una zona un caudal máximo de 5 L/min fuera de la franja 06:00-22:00 y una duración mínima de 10 minutos,<br>
    cuando guarda la regla,<br>
    entonces el sistema la persiste como activa y retorna 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Zona con regla activa.</strong><br>
    Dado que la zona ya tiene una regla activa,<br>
    cuando el administrador intenta registrar otra,<br>
    entonces el sistema retorna 409 con "La zona ya tiene una regla activa" sin crear el registro.<br><br>
    <strong>Escenario 3: Valores inválidos.</strong><br>
    Dado que el administrador ingresa un umbral de caudal menor o igual a cero,<br>
    cuando envía la configuración,<br>
    entonces el sistema retorna 400 indicando el campo inválido sin guardar la regla.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US67</strong></td>
  <td>Cortar automáticamente la bomba ante una fuga</td>
  <td>Como sistema, quiero detectar una fuga a partir de las lecturas de caudal y presión y apagar la bomba, para minimizar la pérdida de agua.</td>
  <td>
    <strong>Escenario 1: Fuga detectada.</strong><br>
    Dado que el caudal supera el umbral fuera de la franja esperada y se mantiene más allá de la duración mínima configurada,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces crea una LeakAlert en estado OPEN, ordena el corte de la bomba, publica LeakDetected y PumpShutOff, y notifica al administrador en menos de 5 segundos.<br><br>
    <strong>Escenario 2: Consumo legítimo.</strong><br>
    Dado que el caudal elevado ocurre dentro de la franja de consumo esperado,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces no declara fuga ni corta la bomba.<br><br>
    <strong>Escenario 3: Corte no confirmado.</strong><br>
    Dado que el sistema ordenó apagar la bomba,<br>
    cuando esta no confirma la ejecución mediante ACK,<br>
    entonces eleva la severidad de la alerta a HIGH y notifica "No se pudo cortar la bomba" al administrador.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US68</strong></td>
  <td>Gestionar alertas de fuga</td>
  <td>Como administrador, quiero reconocer y resolver las alertas de fuga, para llevar el control del seguimiento de cada incidente.</td>
  <td>
    <strong>Escenario 1: Reconocimiento de alerta.</strong><br>
    Dado que existe una alerta en estado OPEN,<br>
    cuando el administrador la reconoce,<br>
    entonces el sistema cambia su estado a ACKNOWLEDGED y registra el usuario y la hora.<br><br>
    <strong>Escenario 2: Resolución de alerta.</strong><br>
    Dado que existe una alerta en estado ACKNOWLEDGED,<br>
    cuando el administrador la marca como resuelta,<br>
    entonces el sistema cambia su estado a RESOLVED, registra resolvedAt y publica LeakResolved.<br><br>
    <strong>Escenario 3: Alerta ya resuelta.</strong><br>
    Dado que la alerta ya se encuentra en estado RESOLVED,<br>
    cuando el administrador intenta resolverla nuevamente,<br>
    entonces el sistema retorna 409 sin modificar el registro.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US69</strong></td>
  <td>Apagar manualmente una bomba de agua</td>
  <td>Como administrador, quiero apagar remotamente una bomba de agua desde la aplicación, para actuar de inmediato ante una emergencia.</td>
  <td>
    <strong>Escenario 1: Apagado exitoso.</strong><br>
    Dado que la bomba está en estado ON y conectada,<br>
    cuando el administrador solicita su apagado,<br>
    entonces el sistema envía el comando, recibe el ACK, actualiza el estado a OFF y registra el evento con el administrador responsable.<br><br>
    <strong>Escenario 2: Bomba ya apagada.</strong><br>
    Dado que la bomba se encuentra en estado OFF,<br>
    cuando el administrador solicita apagarla,<br>
    entonces el sistema responde "La bomba ya se encuentra apagada" sin enviar un nuevo comando.<br><br>
    <strong>Escenario 3: Dispositivo desconectado.</strong><br>
    Dado que el nodo hidráulico está OFFLINE,<br>
    cuando el administrador solicita el apagado,<br>
    entonces el sistema informa "No se pudo contactar la bomba" y registra el intento fallido.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td><strong>US70</strong></td>
  <td>Detectar falla de bomba por caída de presión</td>
  <td>Como administrador, quiero que el sistema identifique cuando una bomba presenta caída de presión sin caudal correspondiente, para atender una posible falla del equipo.</td>
  <td>
    <strong>Escenario 1: Bomba en falla.</strong><br>
    Dado que la presión cae por debajo del umbral sin un caudal correspondiente,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces marca la bomba como FAULT y notifica al administrador.<br><br>
    <strong>Escenario 2: Caída de presión con caudal.</strong><br>
    Dado que la presión baja y existe caudal acorde al consumo,<br>
    cuando el sistema evalúa la lectura,<br>
    entonces no marca la bomba como FAULT y continúa evaluando posibles fugas.<br><br>
    <strong>Escenario 3: Lectura de presión ausente.</strong><br>
    Dado que el sensor no envía la lectura de presión,<br>
    cuando el sistema no puede completar la evaluación,<br>
    entonces no cambia el estado de la bomba y registra el dispositivo como sin comunicación.
  </td>
  <td>EP10</td>
</tr>

<tr>
  <td>TS18</td>
  <td>Configuración base del microservicio Smart Lighting & Automation</td>
  <td>Como desarrollador, quiero crear el microservicio Smart Lighting & Automation para gestionar luminarias, reglas de automatización y comandos de override de forma independiente de los demás microservicios de Edifika.</td>
  <td>
    <strong>Escenario 1: Persistencia de regla y luminaria</strong><br>
    Dado que el administrador envía una regla de automatización válida con token JWT,<br>
    cuando el microservicio procesa la solicitud,<br>
    entonces persiste la regla en su propia base PostgreSQL y retorna 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Resolución por precedencia</strong><br>
    Dado que coexisten una regla programada y un override vigente sobre la misma luminaria,<br>
    cuando AutomationDecisionService evalúa el estado objetivo,<br>
    entonces aplica el override por encima de la regla y publica el evento correspondiente.<br><br>
    <strong>Escenario 3: Aislamiento de fallos</strong><br>
    Dado que la base de datos del servicio deja de responder,<br>
    cuando ocurre el error de conexión,<br>
    entonces únicamente este microservicio retorna errores 500 mientras los demás continúan operando con normalidad.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS19</td>
  <td>Configuración base del microservicio IoT Telemetry & Analytics con TimescaleDB</td>
  <td>Como desarrollador, quiero crear el microservicio de telemetría con almacenamiento en TimescaleDB para ingerir lecturas de sensores y resolver consultas analíticas con baja latencia.</td>
  <td>
    <strong>Escenario 1: Ingesta de lectura válida</strong><br>
    Dado que el Edge API reenvía una lectura de sensor por MQTT,<br>
    cuando el servicio la valida y normaliza,<br>
    entonces la persiste en la hypertable sensor_readings en menos de 500 ms.<br><br>
    <strong>Escenario 2: Consulta sobre agregados continuos</strong><br>
    Dado que el administrador consulta el consumo de un mes,<br>
    cuando el servicio resuelve la consulta,<br>
    entonces responde usando agregados continuos sin recorrer la serie cruda, en menos de 1 segundo.<br><br>
    <strong>Escenario 3: Mensaje malformado</strong><br>
    Dado que llega un mensaje MQTT con formato inválido,<br>
    cuando el servicio intenta procesarlo,<br>
    entonces lo descarta, registra el error y continúa procesando los siguientes mensajes sin interrumpir la ingesta.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS20</td>
  <td>Configuración base del microservicio Water Pump Leak Detection</td>
  <td>Como desarrollador, quiero crear el microservicio de detección de fugas para gestionar bombas, reglas y alertas, ejecutando el corte de forma confiable ante una fuga.</td>
  <td>
    <strong>Escenario 1: Registro de bomba y regla</strong><br>
    Dado que el administrador registra una bomba y su regla de detección con token JWT,<br>
    cuando el microservicio procesa la solicitud,<br>
    entonces persiste los datos en su base PostgreSQL y retorna 201 en menos de 300 ms.<br><br>
    <strong>Escenario 2: Evaluación de lectura de caudal</strong><br>
    Dado que el servicio recibe el evento FlowReadingReceived,<br>
    cuando LeakDetectionService evalúa la lectura contra la regla activa,<br>
    entonces crea la alerta y ordena el corte únicamente cuando se cumplen umbral, franja y duración mínima.<br><br>
    <strong>Escenario 3: Evento duplicado</strong><br>
    Dado que el mismo FlowReadingReceived llega dos veces,<br>
    cuando el servicio lo procesa,<br>
    entonces no genera una segunda alerta ni un segundo comando de corte.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS21</td>
  <td>Implementación del Edge API con operación sin conexión y sincronización</td>
  <td>Como desarrollador, quiero implementar el Edge API que se comunica por MQTT local con los nodos ESP32 y se sincroniza con la nube, para que el condominio siga operando aun sin conexión a internet.</td>
  <td>
    <strong>Escenario 1: Operación sin conexión</strong><br>
    Dado que se pierde la conexión a internet del edificio,<br>
    cuando un residente presenta una tarjeta con permiso vigente,<br>
    entonces el Edge API resuelve el acceso con las credenciales, reservas y blacklist sincronizadas previamente y mantiene el acceso funcionando.<br><br>
    <strong>Escenario 2: Sincronización al reconectar</strong><br>
    Dado que el Edge API acumuló eventos y lecturas durante la desconexión,<br>
    cuando se restablece la conexión,<br>
    entonces los envía en orden cronológico a la nube sin duplicarlos.<br><br>
    <strong>Escenario 3: Reenvío de eventos de baja latencia</strong><br>
    Dado que el Edge API recibe una lectura de presencia o de caudal por MQTT local,<br>
    cuando la reenvía como evento,<br>
    entonces lo publica en menos de 200 ms priorizando la latencia sobre su interpretación de dominio.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS22</td>
  <td>Publicación y consumo de eventos de dominio entre contextos IoT</td>
  <td>Como desarrollador, quiero implementar la mensajería de eventos de dominio mediante el broker AMQP/MQTT con consumo idempotente, para integrar los contextos IoT con Reservation, Payment y Notification sin acoplarlos.</td>
  <td>
    <strong>Escenario 1: Consumo de evento de otro contexto</strong><br>
    Dado que Reservation publica ReservationApproved,<br>
    cuando IoT Access Management consume el evento,<br>
    entonces crea el permiso temporal correspondiente en menos de 500 ms.<br><br>
    <strong>Escenario 2: Consumo idempotente</strong><br>
    Dado que el broker entrega el mismo evento más de una vez,<br>
    cuando el consumidor lo procesa,<br>
    entonces aplica el efecto una sola vez, registrando el identificador del evento procesado.<br><br>
    <strong>Escenario 3: Broker no disponible</strong><br>
    Dado que el broker no responde al publicar un evento,<br>
    cuando el contexto intenta enviarlo,<br>
    entonces lo conserva en una cola de salida y lo reintenta hasta confirmar su entrega sin perder el evento.
  </td>
  <td>EP05</td>
</tr>


<tr>
  <td><strong>US71</strong></td>
  <td>Leer tarjeta RFID y resolver el acceso</td>
  <td>Como residente, quiero acercar mi tarjeta RFID al lector de la puerta para ingresar a un área común sin depender de otra persona.</td>
  <td>
    <strong>Escenario 1: Acceso concedido</strong><br>
    Dado que el lector RFID del ESP32 lee la tarjeta de un residente con credencial ACTIVA y permiso vigente en la caché local del Edge Gateway,<br>
    cuando el ESP32 publica el UID leído por MQTT local,<br>
    entonces el Edge Gateway resuelve el acceso como GRANTED y responde al nodo en menos de 500 ms, sin consultar a la nube.<br><br>
    <strong>Escenario 2: Tarjeta desconocida o revocada</strong><br>
    Dado que el UID leído no existe en la caché o figura en la blacklist,<br>
    cuando el Edge Gateway evalúa el intento,<br>
    entonces responde DENIED al nodo y registra el intento con el UID, el dispositivo y la marca de tiempo.<br><br>
    <strong>Escenario 3: Lecturas repetidas</strong><br>
    Dado que la misma tarjeta permanece frente al lector,<br>
    cuando el ESP32 detecta el mismo UID varias veces en menos de 2 segundos,<br>
    entonces el sistema procesa una sola lectura y descarta las repetidas para no generar intentos duplicados.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US72</strong></td>
  <td>Abrir la cerradura eléctrica y re-bloquearla automáticamente</td>
  <td>Como sistema, quiero energizar la cerradura eléctrica solo el tiempo necesario cuando se concede un acceso, para que la puerta no quede abierta.</td>
  <td>
    <strong>Escenario 1: Apertura temporal</strong><br>
    Dado que el Edge Gateway resolvió un acceso como GRANTED,<br>
    cuando envía el comando de apertura al ESP32,<br>
    entonces el nodo activa la cerradura durante el tiempo configurado (por ejemplo 5 segundos), vuelve a bloquearla y confirma con un ACK.<br><br>
    <strong>Escenario 2: Cerradura sin confirmación</strong><br>
    Dado que el Edge Gateway envió el comando de apertura,<br>
    cuando no recibe el ACK del nodo en 3 segundos,<br>
    entonces registra el evento como fallido y notifica al administrador "La cerradura no respondió".<br><br>
    <strong>Escenario 3: Reinicio del nodo con la cerradura activa</strong><br>
    Dado que el ESP32 se reinicia mientras la cerradura está energizada,<br>
    cuando el nodo arranca,<br>
    entonces la cerradura inicia en estado bloqueado y no se reactiva hasta recibir un nuevo comando.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US73</strong></td>
  <td>Emitir señales sonoras con el buzzer</td>
  <td>Como residente, quiero escuchar una señal sonora distinta según el resultado de mi acceso, para saber si puedo pasar sin mirar la pantalla.</td>
  <td>
    <strong>Escenario 1: Acceso concedido</strong><br>
    Dado que el Edge Gateway responde GRANTED,<br>
    cuando el ESP32 recibe el resultado,<br>
    entonces el buzzer emite un pitido corto.<br><br>
    <strong>Escenario 2: Acceso denegado</strong><br>
    Dado que el Edge Gateway responde DENIED,<br>
    cuando el ESP32 recibe el resultado,<br>
    entonces el buzzer emite dos pitidos largos.<br><br>
    <strong>Escenario 3: Alerta crítica</strong><br>
    Dado que el Edge Gateway envía un comando de alerta al nodo,<br>
    cuando el ESP32 lo recibe,<br>
    entonces el buzzer emite un patrón intermitente hasta que el comando de silencio llegue o venza el tiempo máximo configurado.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US74</strong></td>
  <td>Mostrar mensajes de estado en la pantalla OLED</td>
  <td>Como residente, quiero ver en la pantalla OLED el resultado de mi acceso y el estado del sistema, para entender por qué se me permite o niega el ingreso.</td>
  <td>
    <strong>Escenario 1: Mensaje de acceso concedido</strong><br>
    Dado que el Edge Gateway responde GRANTED con el nombre del residente,<br>
    cuando el ESP32 recibe el resultado,<br>
    entonces la OLED muestra "Acceso concedido" y el nombre del residente durante 3 segundos y luego regresa a la pantalla de reposo.<br><br>
    <strong>Escenario 2: Mensaje de acceso denegado con motivo</strong><br>
    Dado que el Edge Gateway responde DENIED con un motivo (tarjeta no registrada, fuera de horario o moroso),<br>
    cuando el ESP32 recibe el resultado,<br>
    entonces la OLED muestra "Acceso denegado" y el motivo en un texto de máximo 2 líneas.<br><br>
    <strong>Escenario 3: Edge Gateway inalcanzable</strong><br>
    Dado que el ESP32 no logra comunicarse con el Edge Gateway,<br>
    cuando transcurren 5 segundos sin respuesta,<br>
    entonces la OLED muestra "Sin conexión" y el nodo no concede el acceso hasta restablecer la comunicación.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US75</strong></td>
  <td>Registrar y sincronizar accesos generados sin conexión</td>
  <td>Como administrador, quiero que los accesos ocurridos sin internet queden registrados y se sincronicen luego, para no perder la auditoría.</td>
  <td>
    <strong>Escenario 1: Registro local sin internet</strong><br>
    Dado que el edificio perdió la conexión a internet,<br>
    cuando un residente accede con su tarjeta,<br>
    entonces el Edge Gateway resuelve el acceso con su caché y guarda el intento en la cola local de salida (outbox).<br><br>
    <strong>Escenario 2: Sincronización al reconectar</strong><br>
    Dado que existen intentos pendientes en la cola local,<br>
    cuando se restablece la conexión con la nube,<br>
    entonces los envía en orden cronológico con su marca de tiempo original y marca cada uno como sincronizado solo tras recibir la confirmación.<br><br>
    <strong>Escenario 3: Fallo parcial de sincronización</strong><br>
    Dado que la nube rechaza o no responde a un lote de intentos,<br>
    cuando el Edge Gateway recibe el error,<br>
    entonces conserva los registros no confirmados y reintenta con espera creciente sin eliminar ni duplicar ninguno.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US76</strong></td>
  <td>Medir la humedad con el sensor de humedad</td>
  <td>Como sistema, quiero leer periódicamente el sensor de humedad del ESP32, para disponer de datos confiables del área verde.</td>
  <td>
    <strong>Escenario 1: Lectura periódica</strong><br>
    Dado que el sensor de humedad está conectado y calibrado con sus valores en seco y en húmedo,<br>
    cuando se cumple el intervalo de muestreo configurado (por ejemplo 30 segundos),<br>
    entonces el ESP32 publica la lectura en porcentaje con el identificador del dispositivo y la marca de tiempo, y el Edge Gateway la almacena.<br><br>
    <strong>Escenario 2: Lectura fuera de rango</strong><br>
    Dado que el sensor entrega un valor fuera del rango 0 % a 100 % tras la calibración,<br>
    cuando el Edge Gateway recibe la lectura,<br>
    entonces la descarta, la registra como inválida y notifica "Posible falla del sensor" si ocurren 3 lecturas inválidas consecutivas.<br><br>
    <strong>Escenario 3: Humedad bajo el umbral</strong><br>
    Dado que la humedad medida es menor al umbral configurado,<br>
    cuando el Edge Gateway evalúa la lectura,<br>
    entonces genera el evento "Humedad baja" con la zona y el valor, y lo reenvía a la nube.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US77</strong></td>
  <td>Medir el nivel de agua con el sensor ultrasónico</td>
  <td>Como administrador, quiero que el sensor ultrasónico mida el nivel del tanque de agua, para conocer su nivel sin revisarlo físicamente.</td>
  <td>
    <strong>Escenario 1: Cálculo del nivel</strong><br>
    Dado que el sensor ultrasónico mide una distancia hasta la superficie del agua y la altura del tanque está calibrada,<br>
    cuando el ESP32 publica la medición,<br>
    entonces el Edge Gateway calcula el nivel como porcentaje de llenado y lo almacena con su marca de tiempo.<br><br>
    <strong>Escenario 2: Medición fuera del rango del sensor</strong><br>
    Dado que el sensor entrega una distancia menor a 2 cm o mayor a 400 cm, o no recibe eco,<br>
    cuando el Edge Gateway recibe la medición,<br>
    entonces la descarta y registra "Medición inválida" sin modificar el último nivel válido.<br><br>
    <strong>Escenario 3: Suavizado de ruido</strong><br>
    Dado que el sensor entrega una medición aislada con una variación brusca respecto a las anteriores,<br>
    cuando el Edge Gateway la evalúa,<br>
    entonces la promedia con las últimas muestras (por ejemplo mediana de 5) para evitar falsas alertas.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US78</strong></td>
  <td>Alertar localmente un nivel crítico</td>
  <td>Como administrador, quiero que el sistema alerte con buzzer, pantalla y notificación cuando el nivel del tanque sea crítico, para actuar a tiempo.</td>
  <td>
    <strong>Escenario 1: Nivel bajo crítico</strong><br>
    Dado que el nivel del tanque cae por debajo del umbral crítico configurado (por ejemplo 15 %),<br>
    cuando el Edge Gateway evalúa la medición,<br>
    entonces ordena al nodo mostrar "Nivel crítico" en la OLED, activar el buzzer y envía una notificación al administrador.<br><br>
    <strong>Escenario 2: Recuperación del nivel</strong><br>
    Dado que existe una alerta activa de nivel crítico,<br>
    cuando el nivel supera el umbral más una histéresis (por ejemplo 20 %),<br>
    entonces el Edge Gateway cierra la alerta, silencia el buzzer y restablece la pantalla de reposo.<br><br>
    <strong>Escenario 3: Alerta sin conexión a la nube</strong><br>
    Dado que ocurre un nivel crítico sin conexión a internet,<br>
    cuando el Edge Gateway lo detecta,<br>
    entonces activa la alerta local en el nodo y encola la notificación para enviarla al recuperar la conexión.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US79</strong></td>
  <td>Registrar y autenticar nodos ESP32</td>
  <td>Como administrador, quiero registrar cada ESP32 en el Edge Gateway con sus sensores y actuadores, para que solo los dispositivos autorizados puedan operar.</td>
  <td>
    <strong>Escenario 1: Registro exitoso</strong><br>
    Dado que el administrador ingresa el identificador, la ubicación y las capacidades del nodo (RFID, cerradura, buzzer, OLED, humedad, ultrasonido),<br>
    cuando confirma el registro,<br>
    entonces el Edge Gateway guarda el dispositivo y genera sus credenciales de conexión.<br><br>
    <strong>Escenario 2: Dispositivo no registrado</strong><br>
    Dado que un ESP32 desconocido intenta publicar o suscribirse en el broker local,<br>
    cuando el Edge Gateway lo detecta,<br>
    entonces rechaza sus mensajes, los registra como intento no autorizado y no los procesa.<br><br>
    <strong>Escenario 3: Identificador duplicado</strong><br>
    Dado que ya existe un nodo con el mismo identificador,<br>
    cuando el administrador intenta registrarlo de nuevo,<br>
    entonces el sistema retorna 409 con "El dispositivo ya está registrado" sin crear el registro.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US80</strong></td>
  <td>Monitorear el estado de los nodos desde el Edge Gateway</td>
  <td>Como administrador, quiero que el Edge Gateway detecte cuándo un nodo deja de responder, para atender fallas de hardware o de red.</td>
  <td>
    <strong>Escenario 1: Heartbeat normal</strong><br>
    Dado que un nodo envía su heartbeat dentro del intervalo esperado,<br>
    cuando el Edge Gateway lo recibe,<br>
    entonces marca el nodo como ACTIVO y actualiza su última conexión.<br><br>
    <strong>Escenario 2: Nodo sin respuesta</strong><br>
    Dado que un nodo no envía heartbeat durante el tiempo límite configurado,<br>
    cuando se ejecuta la validación periódica,<br>
    entonces el Edge Gateway lo marca OFFLINE, descarta los comandos pendientes hacia él y reporta el cambio a la nube sin afectar a los otros nodos.<br><br>
    <strong>Escenario 3: Reconexión del nodo</strong><br>
    Dado que un nodo OFFLINE vuelve a enviar su heartbeat,<br>
    cuando el Edge Gateway lo recibe,<br>
    entonces lo marca ACTIVO, registra la recuperación y lo reporta a la nube.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US81</strong></td>
  <td>Sincronizar credenciales, reservas y blacklist desde la nube</td>
  <td>Como sistema, quiero que el Edge Gateway reciba y mantenga actualizada una copia local de credenciales, reservas vigentes y blacklist, para decidir accesos sin depender de internet.</td>
  <td>
    <strong>Escenario 1: Sincronización inicial</strong><br>
    Dado que el Edge Gateway inicia y tiene conexión con la nube,<br>
    cuando solicita el estado vigente,<br>
    entonces almacena en su base local las credenciales activas, las reservas vigentes y la blacklist, y registra la versión sincronizada.<br><br>
    <strong>Escenario 2: Actualización incremental</strong><br>
    Dado que la nube publica el cambio de una credencial (emisión, suspensión o revocación),<br>
    cuando el Edge Gateway recibe la actualización,<br>
    entonces aplica el cambio en su caché en menos de 5 segundos y los siguientes accesos usan el dato actualizado.<br><br>
    <strong>Escenario 3: Caché desactualizada</strong><br>
    Dado que el Edge Gateway no se sincroniza durante más del tiempo máximo permitido (por ejemplo 24 horas),<br>
    cuando se cumple dicho plazo,<br>
    entonces sigue operando con la última caché disponible, registra una advertencia y notifica al administrador al recuperar la conexión.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US82</strong></td>
  <td>Reenviar telemetría y eventos a la nube</td>
  <td>Como sistema, quiero que el Edge Gateway reenvíe las lecturas de los sensores y los eventos hacia la nube, para alimentar la analítica y las alertas.</td>
  <td>
    <strong>Escenario 1: Reenvío en línea</strong><br>
    Dado que el Edge Gateway recibió una lectura válida y tiene conexión con la nube,<br>
    cuando la procesa,<br>
    entonces la reenvía a la nube en menos de 2 segundos con el identificador del dispositivo y la marca de tiempo original.<br><br>
    <strong>Escenario 2: Reenvío tras desconexión</strong><br>
    Dado que la nube estuvo inalcanzable y existen lecturas almacenadas,<br>
    cuando se restablece la conexión,<br>
    entonces las envía en lotes por orden cronológico sin duplicados.<br><br>
    <strong>Escenario 3: Límite de almacenamiento local</strong><br>
    Dado que la cola local alcanza el tamaño máximo configurado,<br>
    cuando ingresan nuevas lecturas,<br>
    entonces el Edge Gateway descarta primero las lecturas de telemetría más antiguas, conserva los eventos de acceso y alertas, y registra la pérdida.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US83</strong></td>
  <td>Ejecutar comandos remotos sobre los dispositivos</td>
  <td>Como administrador, quiero enviar comandos desde la nube (abrir cerradura, activar alerta sonora o mensaje en pantalla) y que el Edge Gateway los ejecute en el dispositivo, para atender situaciones a distancia.</td>
  <td>
    <strong>Escenario 1: Comando ejecutado</strong><br>
    Dado que la nube envía el comando de apertura de una cerradura cuyo nodo está ACTIVO,<br>
    cuando el Edge Gateway lo recibe,<br>
    entonces lo publica al ESP32, espera el ACK y reporta el resultado a la nube en menos de 2 segundos.<br><br>
    <strong>Escenario 2: Nodo OFFLINE o en mantenimiento</strong><br>
    Dado que el nodo destino está OFFLINE o en modo mantenimiento (desactivado),<br>
    cuando el Edge Gateway recibe el comando,<br>
    entonces lo rechaza de inmediato con el motivo "Dispositivo no disponible" o "Dispositivo en mantenimiento" y no lo encola.<br><br>
    <strong>Escenario 3: Comando no autorizado</strong><br>
    Dado que el comando llega sin un token válido de la nube,<br>
    cuando el Edge Gateway lo procesa,<br>
    entonces responde 401, no lo envía al dispositivo y lo registra como intento no autorizado.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td>TS23</td>
  <td>Configuración base del Edge Gateway con Python, Flask, Peewee ORM y SQLite</td>
  <td>Como desarrollador, quiero crear el servicio Edge Gateway con Python, Flask, Peewee ORM y SQLite con configuración por variables de entorno y endpoint de salud, para tener una base ejecutable y desplegable en el equipo del edificio.</td>
  <td>
    <strong>Escenario 1: Arranque del servicio</strong><br>
    Dado que el servicio se inicia con la configuración requerida,<br>
    cuando Flask termina de levantar,<br>
    entonces el endpoint GET /health responde 200 en menos de 200 ms con el estado del servicio, de la base local y del broker.<br><br>
    <strong>Escenario 2: Documentación de la API</strong><br>
    Dado que el desarrollador accede a la interfaz Swagger (OpenAPI) del servicio,<br>
    cuando la interfaz carga,<br>
    entonces muestra todos los endpoints con sus esquemas de solicitud y respuesta definidos en los esquemas de validación.<br><br>
    <strong>Escenario 3: Configuración faltante</strong><br>
    Dado que falta una variable de entorno obligatoria,<br>
    cuando el servicio intenta iniciar,<br>
    entonces falla al arrancar con un mensaje que indica la variable ausente, sin quedar en un estado parcial.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS24</td>
  <td>Contrato de mensajes MQTT entre el Edge Gateway y los ESP32</td>
  <td>Como desarrollador, quiero definir y validar el contrato de tópicos y mensajes JSON entre el Edge Gateway y los nodos ESP32, para que firmware y servicio evolucionen sin romperse.</td>
  <td>
    <strong>Escenario 1: Mensaje válido</strong><br>
    Dado que un ESP32 publica una lectura que cumple el esquema (deviceId, tipo, valor, unidad y marca de tiempo),<br>
    cuando el Edge Gateway la recibe en su tópico,<br>
    entonces la valida con su esquema de validación y la procesa en menos de 100 ms.<br><br>
    <strong>Escenario 2: Mensaje inválido</strong><br>
    Dado que llega un mensaje con campos faltantes o tipos incorrectos,<br>
    cuando el Edge Gateway lo valida,<br>
    entonces lo descarta, registra el error con el tópico de origen y continúa procesando los siguientes.<br><br>
    <strong>Escenario 3: Versión de contrato</strong><br>
    Dado que un nodo publica con una versión de esquema no soportada,<br>
    cuando el Edge Gateway la evalúa,<br>
    entonces rechaza el mensaje y reporta "Versión de firmware incompatible" para ese dispositivo.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS25</td>
  <td>Persistencia local con SQLite y cola de salida</td>
  <td>Como desarrollador, quiero almacenar localmente credenciales, lecturas y eventos pendientes en SQLite, para garantizar la operación offline y la entrega confiable a la nube.</td>
  <td>
    <strong>Escenario 1: Persistencia tras reinicio</strong><br>
    Dado que el Edge Gateway tiene datos en su base local,<br>
    cuando el servicio se reinicia,<br>
    entonces recupera credenciales, reservas y eventos pendientes sin pérdida de información.<br><br>
    <strong>Escenario 2: Escritura atómica del evento</strong><br>
    Dado que se procesa un intento de acceso,<br>
    cuando el sistema lo registra,<br>
    entonces guarda el resultado y el evento de salida en una única transacción para que no exista uno sin el otro.<br><br>
    <strong>Escenario 3: Base local corrupta o llena</strong><br>
    Dado que la base local no puede escribirse,<br>
    cuando el servicio detecta el error,<br>
    entonces lo registra, notifica a la nube cuando es posible y continúa respondiendo accesos de solo lectura con la caché en memoria.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS26</td>
  <td>Firmware base del ESP32 con lectura de sensores y reconexión</td>
  <td>Como desarrollador, quiero implementar el firmware base del ESP32 que lea los sensores, controle los actuadores y mantenga la conexión Wi-Fi y MQTT, para que el nodo opere de forma autónoma y recuperable.</td>
  <td>
    <strong>Escenario 1: Publicación de lecturas</strong><br>
    Dado que el nodo está conectado a Wi-Fi y al broker local,<br>
    cuando se cumple el intervalo de muestreo,<br>
    entonces publica las lecturas de humedad y ultrasonido y el heartbeat en sus tópicos.<br><br>
    <strong>Escenario 2: Reconexión automática</strong><br>
    Dado que se pierde la conexión Wi-Fi o MQTT,<br>
    cuando el nodo detecta la desconexión,<br>
    entonces reintenta con espera creciente sin reiniciarse, y los actuadores permanecen en estado seguro (cerradura bloqueada, buzzer apagado).<br><br>
    <strong>Escenario 3: Watchdog</strong><br>
    Dado que el programa principal se bloquea,<br>
    cuando vence el temporizador watchdog,<br>
    entonces el nodo se reinicia y retoma su operación normal.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS27</td>
  <td>Seguridad de la comunicación del Edge Gateway</td>
  <td>Como desarrollador, quiero asegurar la comunicación entre los ESP32, el Edge Gateway y la nube, para evitar accesos o comandos no autorizados.</td>
  <td>
    <strong>Escenario 1: Conexión de nodo autenticada</strong><br>
    Dado que un ESP32 se conecta al broker local con sus credenciales,<br>
    cuando el broker valida usuario y contraseña,<br>
    entonces permite publicar y suscribirse únicamente a los tópicos asignados a ese dispositivo.<br><br>
    <strong>Escenario 2: Comunicación con la nube</strong><br>
    Dado que el Edge Gateway invoca a la nube,<br>
    cuando envía la solicitud,<br>
    entonces usa HTTPS y un token de servicio, y no registra secretos en los logs.<br><br>
    <strong>Escenario 3: Credencial comprometida</strong><br>
    Dado que el administrador revoca las credenciales de un nodo,<br>
    cuando el nodo intenta reconectarse,<br>
    entonces el broker rechaza la conexión y el Edge Gateway registra el intento.
  </td>
  <td>EP05</td>
</tr>


<tr>
  <td><strong>US84</strong></td>
  <td>Mostrar fecha y hora en la pantalla OLED</td>
  <td>Como residente, quiero ver la fecha y la hora actual en la pantalla OLED del punto de acceso, para saber la hora sin usar mi celular y verificar mi horario de reserva.</td>
  <td>
    <strong>Escenario 1: Pantalla de reposo</strong><br>
    Dado que el nodo no está procesando ningún acceso,<br>
    cuando la OLED está en reposo,<br>
    entonces muestra la fecha y la hora en formato 24 horas (HH:MM) en la zona horaria America/Lima, actualizada cada minuto con una desviación máxima de 1 segundo.<br><br>
    <strong>Escenario 2: Regreso al reloj tras un acceso</strong><br>
    Dado que la OLED muestra el resultado de un acceso,<br>
    cuando transcurren 3 segundos,<br>
    entonces vuelve a mostrar la fecha y la hora sin perder el estado de la hora actual.<br><br>
    <strong>Escenario 3: Hora no válida</strong><br>
    Dado que el reloj del nodo no tiene una hora válida (por ejemplo, tras perder la batería del RTC),<br>
    cuando la OLED intenta mostrar la hora,<br>
    entonces muestra "Hora no sincronizada" en lugar de una hora incorrecta y el nodo solicita la hora al Edge Gateway.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US85</strong></td>
  <td>Mantener y sincronizar el reloj del nodo</td>
  <td>Como sistema, quiero que el nodo mantenga una hora precisa incluso sin internet y la sincronice con el Edge Gateway, para que los permisos por horario y las marcas de tiempo de los eventos sean confiables.</td>
  <td>
    <strong>Escenario 1: Sincronización con el Edge Gateway</strong><br>
    Dado que el Edge Gateway tiene la hora sincronizada con una fuente NTP,<br>
    cuando el nodo detecta una diferencia mayor a 2 segundos respecto a la hora del Edge Gateway,<br>
    entonces ajusta su reloj y registra el ajuste con la diferencia corregida.<br><br>
    <strong>Escenario 2: Operación sin internet</strong><br>
    Dado que el edificio perdió la conexión a internet,<br>
    cuando pasan varias horas sin sincronización NTP,<br>
    entonces el Edge Gateway y el reloj del nodo continúan funcionando con su última hora válida y el sistema registra la desviación estimada.<br><br>
    <strong>Escenario 3: Arranque con hora inválida</strong><br>
    Dado que el nodo se inicia y su reloj no tiene una hora válida,<br>
    cuando se conecta al Edge Gateway,<br>
    entonces solicita la hora, la aplica antes de procesar accesos con ventana horaria y no concede accesos que dependan del horario hasta tenerla.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td>TS28</td>
  <td>Estandarización de marcas de tiempo y zona horaria</td>
  <td>Como desarrollador, quiero que todos los componentes registren las marcas de tiempo en UTC con formato ISO 8601 y las muestren en la zona America/Lima, para evitar inconsistencias entre el ESP32, el Edge Gateway y la nube.</td>
  <td>
    <strong>Escenario 1: Registro en UTC</strong><br>
    Dado que un nodo publica una lectura o evento,<br>
    cuando el Edge Gateway lo recibe,<br>
    entonces lo almacena con la marca de tiempo en UTC (ISO 8601) y el offset original no se pierde.<br><br>
    <strong>Escenario 2: Visualización en hora local</strong><br>
    Dado que el administrador consulta la bitácora de accesos,<br>
    cuando el sistema muestra las fechas,<br>
    entonces las presenta en America/Lima sin alterar el valor almacenado.<br><br>
    <strong>Escenario 3: Marca de tiempo inválida</strong><br>
    Dado que llega un evento con una marca de tiempo muy distinta a la hora actual (por ejemplo, más de 5 minutos en el futuro),<br>
    cuando el Edge Gateway lo valida,<br>
    entonces conserva el evento, lo marca como "Hora sospechosa" y usa la hora de recepción del Edge Gateway como referencia.
  </td>
  <td>EP05</td>
</tr>


<tr>
  <td><strong>US86</strong></td>
  <td>Enrolar una tarjeta RFID desde el lector del nodo</td>
  <td>Como administrador, quiero registrar una tarjeta nueva acercándola al lector del nodo, para asignarla a un residente sin digitar manualmente su número de serie.</td>
  <td>
    <strong>Escenario 1: Registro exitoso</strong><br>
    Dado que el administrador activa el modo registro para un residente en un nodo y el Edge Gateway tiene conexión con la nube,<br>
    cuando acerca una tarjeta no registrada al lector durante la ventana de registro (60 segundos),<br>
    entonces el Edge Gateway captura el UID, lo envía a la nube para vincularlo al residente y la OLED muestra "Tarjeta registrada" con un pitido corto.<br><br>
    <strong>Escenario 2: Tarjeta ya asignada</strong><br>
    Dado que el modo registro está activo,<br>
    cuando se acerca una tarjeta cuyo UID ya pertenece a otro residente,<br>
    entonces el sistema no modifica ninguna asignación, la OLED muestra "Tarjeta en uso" y el buzzer emite dos pitidos largos.<br><br>
    <strong>Escenario 3: Ventana de registro vencida</strong><br>
    Dado que el modo registro está activo y no se acerca ninguna tarjeta,<br>
    cuando transcurren los 60 segundos,<br>
    entonces el Edge Gateway desactiva el modo registro, el nodo vuelve a su pantalla de reposo y registra el evento como "Registro cancelado por tiempo".<br><br>
    <strong>Escenario 4: Registro sin conexión a internet</strong><br>
    Dado que el Edge Gateway no tiene conexión con la nube,<br>
    cuando el administrador necesita registrar una tarjeta,<br>
    entonces el registro por lector no se habilita y el administrador la registra manualmente (UID y residente) desde el sistema local del condominio, que sigue funcionando sin internet a través del Edge Gateway; la tarjeta queda activa de inmediato en los lectores y se sincroniza con la nube al restablecerse la conexión.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US87</strong></td>
  <td>Restringir el acceso a un área por horario</td>
  <td>Como administrador, quiero definir el horario permitido de cada área común, para que no se pueda ingresar fuera de las horas habilitadas aunque se tenga una credencial activa.</td>
  <td>
    <strong>Escenario 1: Configuración exitosa</strong><br>
    Dado que el administrador define que la piscina solo permite ingreso entre las 06:00 y las 22:00,<br>
    cuando guarda el horario,<br>
    entonces el sistema lo almacena, lo sincroniza con el Edge Gateway y los nodos del área lo aplican en menos de 5 segundos.<br><br>
    <strong>Escenario 2: Intento fuera de horario</strong><br>
    Dado que el horario de un área es de 06:00 a 22:00,<br>
    cuando un residente con credencial ACTIVA presenta su tarjeta a las 23:10,<br>
    entonces el Edge Gateway responde DENIED con el motivo "Fuera de horario", la OLED lo muestra y el intento queda registrado.<br><br>
    <strong>Escenario 3: Horario inválido</strong><br>
    Dado que el administrador ingresa una hora de inicio igual o posterior a la de fin,<br>
    cuando intenta guardar el horario,<br>
    entonces el sistema retorna 400 con "El horario no es válido" sin modificar el horario vigente.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US88</strong></td>
  <td>Avisar el fin de una reserva en el punto de acceso</td>
  <td>Como residente, quiero que el nodo del área reservada me avise cuando mi reserva esté por terminar, para desocupar el espacio a tiempo.</td>
  <td>
    <strong>Escenario 1: Aviso previo al fin</strong><br>
    Dado que hay una reserva vigente que termina a las 20:00 y el aviso está configurado a 10 minutos,<br>
    cuando el reloj llega a las 19:50,<br>
    entonces la OLED del nodo del área muestra "Reserva termina en 10 min" y el buzzer emite dos pitidos cortos.<br><br>
    <strong>Escenario 2: Reserva cancelada o modificada</strong><br>
    Dado que se programó un aviso de fin de reserva,<br>
    cuando la reserva se cancela o su horario cambia antes del aviso,<br>
    entonces el Edge Gateway elimina el aviso original y programa uno nuevo solo si la reserva sigue vigente.<br><br>
    <strong>Escenario 3: Operación sin conexión</strong><br>
    Dado que el Edge Gateway no tiene conexión con la nube,<br>
    cuando llega la hora del aviso,<br>
    entonces usa la caché local de reservas y su reloj para mostrar el aviso igualmente.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US89</strong></td>
  <td>Activar el modo mantenimiento en un dispositivo</td>
  <td>Como administrador, quiero poner un nodo en modo mantenimiento, para repararlo o calibrarlo sin generar falsas alertas ni accesos inesperados.</td>
  <td>
    <strong>Escenario 1: Activación del modo</strong><br>
    Dado que el administrador selecciona un nodo ACTIVO y define una duración máxima (por ejemplo, 2 horas),<br>
    cuando activa el modo mantenimiento,<br>
    entonces el Edge Gateway cambia su estado a MANTENIMIENTO y desactiva el nodo: deja de procesar sus lecturas, accesos y comandos, suspende sus alertas de desconexión y de lecturas inválidas, la OLED muestra "En mantenimiento" y registra al administrador que lo activó.<br><br>
    <strong>Escenario 2: Nodo desactivado durante el mantenimiento</strong><br>
    Dado que un nodo está en mantenimiento,<br>
    cuando un residente presenta su tarjeta o llega un comando automático o remoto (incluido el de un administrador),<br>
    entonces el sistema no concede el acceso ni ejecuta el comando, la OLED indica que el nodo está en mantenimiento, la cerradura permanece bloqueada y el intento queda registrado; para operar el nodo se debe finalizar primero el mantenimiento.<br><br>
    <strong>Escenario 3: Finalización del modo</strong><br>
    Dado que un nodo está en mantenimiento,<br>
    cuando el administrador lo finaliza o vence la duración máxima,<br>
    entonces el nodo vuelve a ACTIVO, se reanudan sus alertas y se registra la duración total del mantenimiento.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td>TS29</td>
  <td>Actualización remota (OTA) del firmware de los nodos ESP32</td>
  <td>Como desarrollador, quiero actualizar el firmware de los ESP32 de forma remota desde el Edge Gateway con verificación y reversión, para corregir errores y agregar funciones sin acceder físicamente a cada nodo.</td>
  <td>
    <strong>Escenario 1: Actualización exitosa</strong><br>
    Dado que el administrador carga una nueva versión de firmware y selecciona un nodo ACTIVO sin un acceso en curso,<br>
    cuando el Edge Gateway inicia la actualización,<br>
    entonces el nodo descarga el firmware, verifica su integridad, se reinicia y reporta la nueva versión, y el Edge Gateway la registra.<br><br>
    <strong>Escenario 2: Firmware corrupto o no autorizado</strong><br>
    Dado que el nodo descarga un firmware cuyo hash o firma no coincide con el esperado,<br>
    cuando valida la integridad,<br>
    entonces rechaza la actualización, mantiene la versión actual y reporta el fallo al Edge Gateway.<br><br>
    <strong>Escenario 3: Arranque fallido tras actualizar</strong><br>
    Dado que el nodo se reinicia con la nueva versión,<br>
    cuando el firmware no completa el arranque o no reporta su heartbeat en 60 segundos,<br>
    entonces el nodo vuelve automáticamente a la versión anterior y reporta "Actualización revertida".<br><br>
    <strong>Escenario 4: Acceso en curso</strong><br>
    Dado que el nodo está procesando un acceso o tiene la cerradura energizada,<br>
    cuando se solicita la actualización,<br>
    entonces el Edge Gateway la posterga hasta que el nodo esté en reposo y no interrumpe la operación.
  </td>
  <td>EP05</td>
</tr>


<tr>
  <td><strong>US90</strong></td>
  <td>Acceder a un área con el teléfono móvil</td>
  <td>Como residente, quiero acercar mi teléfono con la app de Edifika al nodo de acceso para ingresar a un área común, igual que con mi tarjeta RFID.</td>
  <td>
    <strong>Escenario 1: Acceso concedido con el teléfono</strong><br>
    Dado que el residente tiene una credencial móvil ACTIVA en la app y un permiso vigente para el área,<br>
    cuando acerca su teléfono al nodo de acceso,<br>
    entonces el nodo lee la credencial, el Edge Gateway la valida y responde GRANTED en menos de 1 segundo, con la misma señal de la OLED, el buzzer y la cerradura que en un acceso con tarjeta.<br><br>
    <strong>Escenario 2: Credencial vencida</strong><br>
    Dado que la credencial móvil presentada tiene una vigencia corta (por ejemplo, 30 segundos) y ya expiró,<br>
    cuando el Edge Gateway la evalúa,<br>
    entonces responde DENIED con el motivo "Credencial vencida", la OLED indica que se debe abrir de nuevo la app y el intento queda registrado.<br><br>
    <strong>Escenario 3: Credencial reutilizada</strong><br>
    Dado que el Edge Gateway ya aceptó una credencial móvil con el mismo identificador único (nonce),<br>
    cuando se presenta de nuevo,<br>
    entonces responde DENIED con el motivo "Credencial ya utilizada" y registra el intento como posible reutilización.<br><br>
    <strong>Escenario 4: Acceso sin internet</strong><br>
    Dado que el Edge Gateway no tiene conexión con la nube,<br>
    cuando un residente acerca su teléfono,<br>
    entonces valida la credencial con las claves y permisos sincronizados previamente y la hora de su reloj, y resuelve el acceso con normalidad.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US91</strong></td>
  <td>Revocar la credencial móvil de un teléfono</td>
  <td>Como residente o administrador, quiero revocar la credencial móvil de un teléfono perdido o reemplazado, para que nadie pueda usarlo para ingresar.</td>
  <td>
    <strong>Escenario 1: Revocación con conexión</strong><br>
    Dado que una credencial móvil ACTIVA es revocada desde la aplicación o por el administrador,<br>
    cuando la nube publica la revocación,<br>
    entonces el Edge Gateway la agrega a su lista de bloqueo en menos de 5 segundos y los intentos posteriores son DENIED con el motivo "Credencial revocada".<br><br>
    <strong>Escenario 2: Cambio de teléfono</strong><br>
    Dado que un residente registra un teléfono nuevo y ya tiene una credencial móvil ACTIVA,<br>
    cuando se emite la nueva credencial,<br>
    entonces la credencial anterior queda revocada y solo la nueva concede acceso.<br><br>
    <strong>Escenario 3: Edge Gateway sin sincronizar</strong><br>
    Dado que el Edge Gateway no tiene conexión con la nube y existe una revocación pendiente,<br>
    cuando el administrador la requiere de inmediato,<br>
    entonces puede bloquear manualmente la credencial desde el sistema local del condominio, se aplica en los nodos al instante y se concilia con la nube al reconectar.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td>TS30</td>
  <td>Verificación de credenciales móviles firmadas en el Edge Gateway</td>
  <td>Como desarrollador, quiero que el Edge Gateway verifique credenciales móviles firmadas criptográficamente sin consultar la nube, para aceptar teléfonos de forma segura incluso sin internet.</td>
  <td>
    <strong>Escenario 1: Firma válida</strong><br>
    Dado que la credencial móvil está firmada con la clave del emisor sincronizada en el Edge Gateway,<br>
    cuando el Edge Gateway verifica la firma, la vigencia y el permiso,<br>
    entonces acepta la credencial y resuelve el acceso en menos de 300 ms sin consultar la nube.<br><br>
    <strong>Escenario 2: Firma inválida o alterada</strong><br>
    Dado que la credencial presentada fue modificada o fue firmada con otra clave,<br>
    cuando el Edge Gateway verifica la firma,<br>
    entonces la rechaza, responde DENIED y registra el intento como "Credencial alterada" sin revelar el motivo detallado al nodo.<br><br>
    <strong>Escenario 3: Rotación de claves</strong><br>
    Dado que la nube emite una nueva clave de firma,<br>
    cuando el Edge Gateway la sincroniza,<br>
    entonces acepta credenciales firmadas con la clave nueva y con la anterior durante el periodo de transición, y luego descarta la anterior.<br><br>
    <strong>Escenario 4: Lectura incompleta</strong><br>
    Dado que el teléfono se aleja antes de transmitir toda la credencial,<br>
    cuando el nodo detecta una lectura incompleta,<br>
    entonces la OLED muestra "Reintente", no se consume el identificador único y no se registra como intento denegado.
  </td>
  <td>EP05</td>
</tr>


<tr>
  <td><strong>US92</strong></td>
  <td>Calibrar los sensores de un nodo</td>
  <td>Como administrador, quiero calibrar los sensores de un nodo (altura del tanque, umbral de humedad baja y umbral de nivel crítico), para que las lecturas y las alertas reflejen las condiciones reales del edificio.</td>
  <td>
    <strong>Escenario 1: Calibración exitosa</strong><br>
    Dado que el administrador define una altura de tanque de 150 cm, un umbral de humedad baja de 30 % y un nivel crítico de 15 %,<br>
    cuando guarda la calibración,<br>
    entonces el Edge Gateway aplica los valores a las lecturas siguientes y reporta el cambio a la nube.<br><br>
    <strong>Escenario 2: Valores fuera de rango</strong><br>
    Dado que el administrador ingresa una altura de tanque menor a 10 cm o un umbral mayor a 100 %,<br>
    cuando intenta guardar la calibración,<br>
    entonces el sistema retorna 422 indicando el valor inválido y mantiene la calibración vigente.<br><br>
    <strong>Escenario 3: Nodo no registrado</strong><br>
    Dado que el identificador del nodo no existe en el Edge Gateway,<br>
    cuando el administrador intenta calibrarlo,<br>
    entonces el sistema retorna 404 sin crear ni modificar ningún registro.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td><strong>US93</strong></td>
  <td>Consultar el estado del Edge Gateway sin internet</td>
  <td>Como administrador, quiero consultar desde el sistema local el estado del Edge Gateway, sus nodos y los eventos pendientes de enviar, para operar y diagnosticar el edificio aunque no haya internet.</td>
  <td>
    <strong>Escenario 1: Estado general</strong><br>
    Dado que el edificio no tiene conexión a internet,<br>
    cuando el administrador consulta el estado del Edge Gateway,<br>
    entonces el sistema muestra la cantidad de nodos por estado, los eventos pendientes de envío, la última sincronización con la nube y si la caché está desactualizada.<br><br>
    <strong>Escenario 2: Eventos pendientes</strong><br>
    Dado que existen eventos que aún no fueron entregados a la nube,<br>
    cuando el administrador consulta la cola de eventos,<br>
    entonces el sistema los lista en orden cronológico con su tipo, la cantidad de intentos y el último error.<br><br>
    <strong>Escenario 3: Consulta sin autorización</strong><br>
    Dado que la solicitud no incluye un token válido,<br>
    cuando se consulta el estado o la cola de eventos,<br>
    entonces el sistema retorna 401 y no revela información del edificio.
  </td>
  <td>EP11</td>
</tr>

<tr>
  <td>TS31</td>
  <td>Despliegue del Edge Gateway con Docker Compose</td>
  <td>Como desarrollador, quiero desplegar el Edge Gateway, el broker MQTT y un backend simulado con Docker Compose, para ejecutar y demostrar toda la solución con un solo comando.</td>
  <td>
    <strong>Escenario 1: Arranque completo</strong><br>
    Dado que el desarrollador ejecuta docker compose up,<br>
    cuando los servicios superan sus verificaciones de salud,<br>
    entonces el Edge Gateway responde 200 en /health, conectado al broker MQTT y al backend.<br><br>
    <strong>Escenario 2: Persistencia tras reinicio</strong><br>
    Dado que el Edge Gateway tiene credenciales y eventos pendientes almacenados,<br>
    cuando se reinicia su contenedor,<br>
    entonces recupera la información desde el volumen sin pérdida de datos.<br><br>
    <strong>Escenario 3: Broker aún no disponible</strong><br>
    Dado que el broker MQTT todavía no está listo o se cae,<br>
    cuando el Edge Gateway intenta conectarse,<br>
    entonces reintenta con espera creciente sin terminar el proceso y se suscribe de nuevo al reconectar.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS32</td>
  <td>Simulador de nodos ESP32 para pruebas sin hardware</td>
  <td>Como desarrollador, quiero un simulador de nodos ESP32 que respete el contrato MQTT, para probar el Edge Gateway sin depender del hardware físico.</td>
  <td>
    <strong>Escenario 1: Nodo virtual en operación</strong><br>
    Dado que el simulador se ejecuta con el identificador de un nodo registrado,<br>
    cuando transcurre el intervalo de muestreo,<br>
    entonces publica el heartbeat y las lecturas de humedad y ultrasonido conforme al contrato y confirma los comandos recibidos.<br><br>
    <strong>Escenario 2: Lectura de una tarjeta</strong><br>
    Dado que el desarrollador indica un UID de tarjeta,<br>
    cuando el simulador lo publica como lectura de acceso,<br>
    entonces muestra el resultado recibido del Edge Gateway y termina con código 0 si el acceso fue concedido y 1 si fue denegado.<br><br>
    <strong>Escenario 3: Cerradura que no responde</strong><br>
    Dado que el simulador se ejecuta sin confirmar comandos,<br>
    cuando el Edge Gateway envía una orden de apertura,<br>
    entonces la orden expira y el Edge Gateway reporta una alerta de cerradura sin respuesta.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS33</td>
  <td>Contrato de integración entre el Edge Gateway y el backend</td>
  <td>Como desarrollador, quiero un contrato de integración entre el Edge Gateway y el backend con entrega por lotes e idempotencia, para transportar la información de los nodos sin pérdidas ni duplicados.</td>
  <td>
    <strong>Escenario 1: Entrega idempotente por lotes</strong><br>
    Dado que el Edge Gateway envía un lote de eventos, cada uno con un identificador único,<br>
    cuando el backend los acepta,<br>
    entonces responde con los identificadores aceptados y un reenvío del mismo lote no duplica ningún evento.<br><br>
    <strong>Escenario 2: Error transitorio</strong><br>
    Dado que el backend responde 5xx, 429 o no está disponible,<br>
    cuando el Edge Gateway intenta entregar los eventos,<br>
    entonces los conserva en su cola y reintenta con espera creciente (máximo 60 segundos) sin perder el orden cronológico.<br><br>
    <strong>Escenario 3: Rechazo permanente</strong><br>
    Dado que el backend rechaza un evento con un error 4xx distinto de 401, 403, 408 y 429,<br>
    cuando se agotan 5 intentos,<br>
    entonces el Edge Gateway descarta ese evento, lo registra y continúa con los siguientes sin bloquear la cola.
  </td>
  <td>EP05</td>
</tr>

<tr>
  <td>TS34</td>
  <td>Pruebas automatizadas del Edge Gateway</td>
  <td>Como desarrollador, quiero una suite de pruebas automatizadas del Edge Gateway que no dependa del broker ni de la red, para detectar regresiones antes de cada integración.</td>
  <td>
    <strong>Escenario 1: Ejecución aislada</strong><br>
    Dado que el desarrollador ejecuta la suite en un equipo sin broker MQTT ni internet,<br>
    cuando las pruebas se ejecutan,<br>
    entonces todas usan dobles de prueba para el broker y el backend, cada una con su propia base de datos, y terminan en menos de 30 segundos.<br><br>
    <strong>Escenario 2: Cobertura de escenarios</strong><br>
    Dado que cada historia del Edge Gateway define sus escenarios de aceptación,<br>
    cuando se revisa la suite,<br>
    entonces existe al menos una prueba por escenario, incluidos los casos de error.<br><br>
    <strong>Escenario 3: Detección de regresiones</strong><br>
    Dado que un cambio altera una regla de negocio, como el orden de entrega de eventos o la decisión de acceso,<br>
    cuando se ejecuta la suite,<br>
    entonces al menos una prueba falla e indica el comportamiento que cambió.
  </td>
  <td>EP05</td>
</tr>

  </tbody>
</table>

**Criterios transversales de aceptación para historias IoT**

Las siguientes condiciones aplican a todas las historias de las épicas EP07 a EP11 y a las historias técnicas TS16 a TS34, además de los escenarios específicos de cada historia:

- **Confirmación de actuación:** todo comando enviado a un dispositivo (abrir, encender, apagar, cortar) debe ser confirmado mediante un mensaje ACK; si no se recibe dentro del tiempo límite, la acción se registra como fallida y se notifica.
- **Trazabilidad:** toda acción de actuación o cambio de configuración registra quién lo realizó (usuario o sistema), cuándo y sobre qué dispositivo.
- **Dispositivos desconectados:** un dispositivo en estado OFFLINE no recibe comandos diferidos; su indisponibilidad no afecta al resto de dispositivos.
- **Idempotencia:** un evento o lectura repetido (mismo identificador o misma marca de tiempo) no produce efectos duplicados.
- **Seguridad:** los endpoints exigen token JWT válido y rol autorizado; en caso contrario retornan 401 o 403.
- **Continuidad operativa:** las funciones críticas de acceso, iluminación y corte de bombas se ejecutan en el Edge API sin depender de la conexión a internet.
- **Marcas de tiempo:** todos los eventos y lecturas se registran en UTC (ISO 8601) con la hora del reloj del nodo sincronizado con el Edge Gateway, y se muestran en la zona America/Lima.
- **Rendimiento:** los tiempos indicados en cada escenario se miden desde la recepción del evento o solicitud hasta la respuesta o confirmación del dispositivo.


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
| **US54 – Otorgar acceso temporal por reserva aprobada** | Residente / Administrador | Control de ingreso a áreas comunes sin intervención manual. | Se deriva del problema de gestión manual de reservas (US18, US19) y de la regla de AccessDecisionService (4.2.9). Las entrevistas no mencionan control físico de ingreso. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US55 – Consultar bitácora de accesos** | Administrador | Falta de trazabilidad sobre el uso de áreas comunes. | Se relaciona con la falta de control y trazabilidad en áreas comunes (US40). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US56 – Apertura remota de acceso** | Administrador | Atención de emergencias o fallas del lector. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US57 – Configurar reglas de automatización de iluminación** | Administrador | Consumo energético innecesario en áreas comunes. | Amplía US53 incorporando condiciones de lux, horario y prioridad (4.2.10). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US58 – Encender o apagar luces manualmente (override)** | Residente / Administrador | Falta de control manual sobre la iluminación de áreas comunes. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US59 – Encender área al iniciar una reserva** | Sistema | Automatización y preparación de áreas comunes. | Integra Reservation Service con Smart Lighting (4.2.10.3). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US60 – Registrar y consultar luminarias** | Administrador | Falta de inventario centralizado de dispositivos. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US61 – Visualizar consumo energético por área y periodo** | Administrador | Falta de transparencia y control de gastos del edificio. | Se relaciona con la preocupación por la transparencia de los gastos (US25). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US62 – Alertar consumo anómalo** | Administrador | Detección tardía de consumos irregulares. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US63 – Detectar falla de luminaria** | Administrador | Mantenimiento correctivo tardío de la iluminación. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US64 – Monitorear estado de conexión de dispositivos** | Administrador | Falta de visibilidad sobre el estado de la infraestructura IoT. | Complementa TS16 y TS17 desde la perspectiva del administrador. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US65 – Consultar lecturas de sensores en tiempo real e históricas** | Administrador | Falta de visibilidad en tiempo real de los dispositivos. | Responde a la funcionalidad de Monitoreo en Tiempo Real e Historial de Eventos definida en el alcance IoT. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US66 – Configurar reglas de detección de fugas** | Administrador | Pérdidas de agua por infraestructura hidráulica. | Se relaciona con US52 (monitoreo de tanque), ampliando el alcance hacia bombas de agua (4.2.12). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US67 – Cortar automáticamente la bomba ante una fuga** | Sistema | Pérdidas mayores de agua por fugas no detectadas. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US68 – Gestionar alertas de fuga** | Administrador | Falta de seguimiento de incidentes de infraestructura. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US69 – Apagar manualmente una bomba de agua** | Administrador | Respuesta lenta ante emergencias hidráulicas. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US70 – Detectar falla de bomba por caída de presión** | Administrador | Fallas de equipos hidráulicos detectadas tarde. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US71 – Leer tarjeta RFID y resolver el acceso** | Residente | Control de ingreso a áreas comunes sin intervención manual. | Se relaciona con la gestión de acceso a áreas comunes (US48 y US54). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US72 – Abrir la cerradura eléctrica y re-bloquearla automáticamente** | Sistema | Seguridad física de las áreas comunes. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US73 – Emitir señales sonoras con el buzzer** | Residente | Falta de retroalimentación inmediata en el punto de acceso. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US74 – Mostrar mensajes de estado en la pantalla OLED** | Residente | Falta de información clara en el punto de acceso. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US75 – Registrar y sincronizar accesos generados sin conexión** | Administrador | Pérdida de trazabilidad ante caídas de internet. | Responde al requisito de resiliencia offline del Edge definido en el Cap. IV. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US76 – Medir la humedad con el sensor de humedad** | Sistema | Monitoreo del estado de las áreas verdes. | Es la base de US51 (riego según humedad). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US77 – Medir el nivel de agua con el sensor ultrasónico** | Administrador | Control del nivel del tanque de agua. | Alimenta la historia US52. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US78 – Alertar localmente un nivel crítico** | Administrador | Detección tardía de problemas en el suministro de agua. | Se relaciona con la prevención de pérdidas del tanque (US52). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US79 – Registrar y autenticar nodos ESP32** | Administrador | Control sobre qué dispositivos forman parte de la red del edificio. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US80 – Monitorear el estado de los nodos desde el Edge Gateway** | Administrador | Falta de visibilidad sobre la salud de los dispositivos. | Es el origen de los datos de US64. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US81 – Sincronizar credenciales, reservas y blacklist desde la nube** | Sistema | Continuidad del acceso ante caídas de internet. | Responde al requisito de resiliencia offline del Edge (Cap. IV). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US82 – Reenviar telemetría y eventos a la nube** | Sistema | Pérdida de datos de sensores ante fallas de conectividad. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US83 – Ejecutar comandos remotos sobre los dispositivos** | Administrador | Atención remota de situaciones excepcionales. | Es la contraparte en el Edge de US56. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US84 – Mostrar fecha y hora en la pantalla OLED** | Residente | Falta de referencia horaria en el punto de acceso. | Complementa US74 y es necesaria para los permisos con ventana horaria de US54. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US85 – Mantener y sincronizar el reloj del nodo** | Sistema | Permisos por horario y auditoría dependen de una hora confiable. | Requisito técnico de US54, US55 y US75, que usan marcas de tiempo y ventanas horarias. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US86 – Enrolar una tarjeta RFID desde el lector del nodo** | Administrador | Registro manual de tarjetas propenso a errores de digitación. | Simplifica el flujo de US48 (registrar tarjeta de acceso). **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US87 – Restringir el acceso a un área por horario** | Administrador | Uso de áreas comunes fuera de las horas permitidas. | Complementa US39 (configurar reglas de área común) en el control físico del acceso. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US88 – Avisar el fin de una reserva en el punto de acceso** | Residente | Conflictos por superposición de horarios en áreas comunes. | Responde al problema de cruces de horarios señalado en las entrevistas (US19). El aviso físico es una funcionalidad propuesta. |
| **US89 – Activar el modo mantenimiento en un dispositivo** | Administrador | Falsas alertas y riesgos al intervenir dispositivos. | **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US90 – Acceder a un área con el teléfono móvil** | Residente | Dependencia de llevar una tarjeta física para ingresar. | Extiende US71 (tarjeta RFID) a un segundo medio de credencial. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US91 – Revocar la credencial móvil de un teléfono** | Residente / Administrador | Riesgo de acceso indebido por pérdida de un teléfono. | Equivale para el teléfono al reporte de tarjeta extraviada de US48. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US92 – Calibrar los sensores de un nodo** | Administrador | Lecturas que no representan el tanque ni el área verde reales. | Complementa US76, US77 y US78, que dependen de valores calibrados. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |
| **US93 – Consultar el estado del Edge Gateway sin internet** | Administrador | Falta de visibilidad del sistema cuando se cae internet. | Responde al requisito de operación sin conexión del Edge (Cap. IV) y respalda el registro manual de US86. **No existe evidencia directa en las entrevistas** que sustente esta necesidad. Corresponde a una funcionalidad propuesta dentro del alcance IoT del sistema. |



## 3.2. Impact Mapping

El Impact Map muestra la relación entre el objetivo de negocio de Edifika y los cambios de comportamiento esperados en los usuarios clave: administradores y residentes. A partir de este análisis, se definen los impactos principales que la solución busca generar en cada tipo de usuario y los entregables necesarios para lograrlo, los cuales están directamente vinculados a las historias de usuario planteadas. Esto permite asegurar que cada funcionalidad desarrollada responda a necesidades reales y contribuya al cumplimiento del objetivo del sistema.

<img src="assets/img/impact/mapping.png" alt="logo" width="500"/>

## 3.3. Product Backlog

En esta sección, se presenta el Product Backlog como una recopilación organizada de historias de usuario priorizadas, la estimación de estas se realizó mediante story points basados en la escala Fibonacci, con el fin de tener una planificación más clara y una gestión eficiente para desarrollo de Edifika.

El backlog contiene la totalidad del alcance vigente: **86 historias de usuario y 33 historias técnicas (119 ítems)**, es decir, todas las historias especificadas en 3.1 salvo las retiradas por la decisión de alcance (US52, US66–US70, US77 y TS20). Las historias técnicas se agrupan en la épica **EP05 (Infraestructura, seguridad y arquitectura técnica)** y las capacidades IoT se distribuyen en cinco épicas: EP07 (control de acceso), EP08 (iluminación inteligente), EP09 (telemetría y analítica), EP10 (riego automático) y EP11 (Edge Gateway y dispositivos ESP32). El orden sigue dos criterios: primero la prioridad MoSCoW (*Must Have*, *Should Have*, *Could Have*) y, dentro de cada prioridad, las dependencias técnicas —la historia técnica de configuración base de cada microservicio precede a las historias de usuario que se implementan sobre él—. Las capacidades de monitoreo de tanque de agua, detección de fugas y calidad del aire quedaron **fuera del alcance del producto** y, por ello, no forman parte del backlog.

| Orden | User Story ID | Título | Descripción | Epic ID | Story Points | MoSCoW |
|-------|--------------|--------|-------------|---------|--------------|--------|
| 1 | TS01 | Configuración de autenticación y autorización con JWT | Como desarrollador, quiero implementar autenticación y autorización basada en JWT en el microservicio IAM, para que solo los administradores autorizados puedan acceder a los endpoints protegidos del sistema. | EP05 | 5 | Must Have |
| 2 | TS02 | Implementación de endpoints de registro e inicio de sesión con validaciones | Como desarrollador, quiero implementar los endpoints de registro e inicio de sesión del microservicio IAM con validaciones estrictas de datos. | EP05 | 5 | Must Have |
| 3 | TS03 | Implementación de endpoints de gestión de usuarios | Como desarrollador, quiero implementar los endpoints CRUD de gestión de usuarios y consulta de roles en el microservicio IAM. | EP05 | 8 | Must Have |
| 4 | TS04 | Configuración del API Gateway como punto de entrada centralizado | Como desarrollador, quiero configurar un API Gateway que centralice todas las solicitudes de la aplicación móvil hacia los microservicios de Edifika. | EP05 | 5 | Must Have |
| 5 | TS05 | Configuración de base de datos PostgreSQL independiente por microservicio | Como desarrollador, quiero configurar una base de datos PostgreSQL independiente para cada microservicio de Edifika. | EP05 | 8 | Must Have |
| 6 | TS15 | Configuración de CORS en el API Gateway | Como desarrollador, quiero configurar las políticas de CORS en el API Gateway para permitir que la aplicación móvil y el frontend se comuniquen correctamente con el backend. | EP05 | 3 | Must Have |
| 7 | TS13 | Implementación de comunicación entre microservicios mediante REST | Como desarrollador, quiero implementar la comunicación entre microservicios de Edifika mediante llamadas REST con manejo controlado de errores. | EP05 | 5 | Must Have |
| 8 | TS06 | Configuración base del microservicio Residential Management | Como desarrollador, quiero crear el microservicio de gestión residencial para administrar edificios, unidades y la vinculación de residentes con sus unidades. | EP05 | 5 | Must Have |
| 9 | US02 | Registro con correo | Como usuario, quiero registrarme con mi correo para acceder a la plataforma. | EP01 | 3 | Must Have |
| 10 | US03 | Inicio de sesión | Como usuario, quiero iniciar sesión para acceder a mi información. | EP01 | 2 | Must Have |
| 11 | US07 | Registrar edificio y unidades | Como administrador, quiero registrar el edificio con sus unidades residenciales para gestionar la comunidad. | EP01 | 8 | Must Have |
| 12 | US01 | Crear cuenta vinculada a unidad | Como residente, quiero crear una cuenta vinculada a mi unidad para acceder a la gestión de mi edificio. | EP01 | 5 | Must Have |
| 13 | US04 | Verificar información de usuarios | Como administrador, quiero verificar la información de los usuarios para asegurar que sea correcta. | EP01 | 3 | Must Have |
| 14 | US05 | Actualizar información de usuarios | Como administrador, quiero actualizar información de usuarios para mantener datos correctos. | EP01 | 2 | Must Have |
| 15 | US34 | Activar/Desactivar cuentas | Como administrador, quiero controlar quién tiene acceso a la app. | EP01 | 3 | Must Have |
| 16 | TS07 | Configuración base del microservicio Payment Service con integración Culqi | Como desarrollador, quiero crear el microservicio de pagos para gestionar deudas, cuotas y transacciones del condominio integrándose con Culqi. | EP05 | 5 | Must Have |
| 17 | US21 | Ver deuda actual | Como residente, quiero saber cuánto debo de mantenimiento para planificar mi pago. | EP04 | 3 | Must Have |
| 18 | US22 | Registrar pago con comprobante | Como residente, quiero subir la foto de mi voucher para que el administrador valide mi pago sin enviarlo por WhatsApp. | EP04 | 5 | Must Have |
| 19 | US23 | Registrar pagos en el sistema | Como administrador, quiero registrar pagos para mantener actualizado el sistema. | EP04 | 3 | Must Have |
| 20 | US30 | Pagar deuda en línea | Como residente, quiero pagar mi deuda con tarjeta de crédito o débito para cancelarla en línea sin trasladarme al banco. | EP04 | 8 | Must Have |
| 21 | US24 | Visualizar residentes morosos | Como administrador, quiero visualizar residentes morosos para tomar acciones. | EP04 | 5 | Must Have |
| 22 | TS08 | Configuración base del microservicio Reservation Service | Como desarrollador, quiero crear el microservicio de reservas para gestionar la disponibilidad y uso de áreas comunes del condominio. | EP05 | 5 | Must Have |
| 23 | US16 | Ver disponibilidad de áreas comunes | Como residente o administrador, quiero ver qué áreas comunes están libres para planificar su uso sin cruces de horario. | EP03 | 3 | Must Have |
| 24 | US17 | Reservar área común | Como residente, quiero reservar un área común para asegurar su uso en el horario que necesito. | EP03 | 5 | Must Have |
| 25 | US19 | Evitar reservas duplicadas | Como administrador, quiero evitar reservas duplicadas para prevenir conflictos. | EP03 | 5 | Must Have |
| 26 | US38 | Habilitar o deshabilitar área común | Como administrador, quiero activar o desactivar áreas comunes para reflejar su disponibilidad real según mantenimiento o restricciones. | EP03 | 3 | Must Have |
| 27 | TS09 | Configuración base del microservicio Communication Service | Como desarrollador, quiero crear el microservicio de comunicados para que los administradores puedan publicar avisos oficiales. | EP05 | 5 | Must Have |
| 28 | TS10 | Configuración base del microservicio Notification Service con Firebase | Como desarrollador, quiero crear el microservicio de notificaciones integrado con Firebase Cloud Messaging. | EP05 | 5 | Must Have |
| 29 | US13 | Publicar comunicados oficiales | Como administrador, quiero publicar comunicados oficiales para informar a los residentes. | EP02 | 3 | Must Have |
| 30 | US10 | Recepción de comunicados | Como residente, quiero recibir los comunicados oficiales del condominio para estar informado de los avisos del edificio. | EP02 | 3 | Must Have |
| 31 | US08 | Notificaciones de emergencias | Como residente o administrador, quiero emitir y recibir avisos inmediatos de emergencias para actuar a tiempo ante situaciones de riesgo en el edificio. | EP02 | 8 | Must Have |
| 32 | US41 | Visualizar sección Hero de la Landing Page | Como visitante, quiero ver una sección principal con el mensaje de valor de Edifika para entender rápidamente de qué trata el producto. | EP06 | 1 | Must Have |
| 33 | US42 | Navegar entre secciones de la Landing Page | Como visitante, quiero usar la barra de navegación para desplazarme entre las secciones de la landing page de forma rápida. | EP06 | 1 | Must Have |
| 34 | US47 | Acceder a la app web desde la Landing Page | Como usuario registrado, quiero acceder a la aplicación web directamente desde la landing page para iniciar sesión sin pasos adicionales. | EP06 | 1 | Must Have |
| 35 | TS23 | Configuración base del Edge Gateway con Python, Flask, Peewee ORM y SQLite | Como desarrollador, quiero crear el servicio Edge Gateway con Python, Flask, Peewee ORM y SQLite con configuración por variables de entorno y endpoint de salud, para tener una base ejecutable y desplegable en el equipo del edificio. | EP05 | 5 | Must Have |
| 36 | TS24 | Contrato de mensajes MQTT entre el Edge Gateway y los ESP32 | Como desarrollador, quiero definir y validar el contrato de tópicos y mensajes JSON entre el Edge Gateway y los nodos ESP32, para que firmware y servicio evolucionen sin romperse. | EP05 | 5 | Must Have |
| 37 | TS25 | Persistencia local con SQLite y cola de salida | Como desarrollador, quiero almacenar localmente credenciales, lecturas y eventos pendientes en SQLite, para garantizar la operación offline y la entrega confiable a la nube. | EP05 | 5 | Must Have |
| 38 | TS26 | Firmware base del ESP32 con lectura de sensores y reconexión | Como desarrollador, quiero implementar el firmware base del ESP32 que lea los sensores, controle los actuadores y mantenga la conexión Wi-Fi y MQTT, para que el nodo opere de forma autónoma y recuperable. | EP05 | 8 | Must Have |
| 39 | TS33 | Contrato de integración entre el Edge Gateway y el backend | Como desarrollador, quiero un contrato de integración entre el Edge Gateway y el backend con entrega por lotes e idempotencia, para transportar la información de los nodos sin pérdidas ni duplicados. | EP05 | 5 | Must Have |
| 40 | US79 | Registrar y autenticar nodos ESP32 | Como administrador, quiero registrar cada ESP32 en el Edge Gateway con sus sensores y actuadores, para que solo los dispositivos autorizados puedan operar. | EP11 | 5 | Must Have |
| 41 | US71 | Leer tarjeta RFID y resolver el acceso | Como residente, quiero acercar mi tarjeta RFID al lector de la puerta para ingresar a un área común sin depender de otra persona. | EP11 | 5 | Must Have |
| 42 | US72 | Abrir la cerradura eléctrica y re-bloquearla automáticamente | Como sistema, quiero energizar la cerradura eléctrica solo el tiempo necesario cuando se concede un acceso, para que la puerta no quede abierta. | EP11 | 5 | Must Have |
| 43 | US75 | Registrar y sincronizar accesos generados sin conexión | Como administrador, quiero que los accesos ocurridos sin internet queden registrados y se sincronicen luego, para no perder la auditoría. | EP11 | 5 | Must Have |
| 44 | US81 | Sincronizar credenciales, reservas y blacklist desde la nube | Como sistema, quiero que el Edge Gateway reciba y mantenga actualizada una copia local de credenciales, reservas vigentes y blacklist, para decidir accesos sin depender de internet. | EP11 | 5 | Must Have |
| 45 | US85 | Mantener y sincronizar el reloj del nodo | Como sistema, quiero que el nodo mantenga una hora precisa incluso sin internet y la sincronice con el Edge Gateway, para que los permisos por horario y las marcas de tiempo de los eventos sean confiables. | EP11 | 5 | Must Have |
| 46 | US06 | Editar perfil | Como residente, quiero editar mi perfil para mantener mi contacto actualizado. | EP01 | 2 | Should Have |
| 47 | US28 | Consultar pagos pasados | Como residente, quiero ver mi historial de pagos para comprobar qué periodos tengo cancelados. | EP04 | 2 | Should Have |
| 48 | US09 | Recordatorios de pago | Como residente, quiero recibir alertas de mis deudas próximas a vencer para pagar a tiempo y evitar la mora. | EP04 | 3 | Should Have |
| 49 | US20 | Cancelar reserva | Como residente, quiero cancelar una reserva que ya no usaré para liberar el espacio a otros residentes. | EP03 | 2 | Should Have |
| 50 | US18 | Aprobar o rechazar reservas | Como administrador, quiero aprobar o rechazar reservas para mantener el control. | EP03 | 3 | Should Have |
| 51 | US11 | Notificaciones de reservas | Como residente, quiero recibir avisos sobre mis reservas de áreas comunes para no olvidar mis turnos ni sus cambios de estado. | EP03 | 2 | Should Have |
| 52 | US31 | Notificación por reserva (Admin) | Como administrador, quiero saber cuándo alguien reserva un área común. | EP03 | 3 | Should Have |
| 53 | US39 | Configurar reglas de área común | Como administrador, quiero definir las reglas, horarios y límites de cada área común para regular su uso correctamente. | EP03 | 5 | Should Have |
| 54 | US33 | Ver disponibilidad global (Admin) | Como administrador, quiero ver el mapa de ocupación de todo el edificio. | EP03 | 5 | Should Have |
| 55 | US35 | Cancelar reserva (Admin) | Como administrador, quiero anular una reserva de un residente. | EP03 | 3 | Should Have |
| 56 | US14 | Visualizar comunicados anteriores | Como residente, quiero ver el historial de comunicados para consultar información anterior cuando la necesite. | EP02 | 2 | Should Have |
| 57 | US15 | Seguimiento de visualización | Como administrador, quiero saber quién ha visto los comunicados para asegurar su alcance. | EP02 | 5 | Should Have |
| 58 | TS11 | Configuración base del microservicio Report Service | Como desarrollador, quiero crear el microservicio de reportes para que los administradores puedan generar y exportar reportes financieros y de actividad del condominio. | EP05 | 8 | Should Have |
| 59 | US25 | Generar reportes financieros | Como administrador, quiero generar reportes financieros para evaluar el estado del condominio. | EP04 | 8 | Should Have |
| 60 | US26 | Exportar reportes financieros | Como administrador, quiero exportar reportes para compartirlos con la comunidad. | EP04 | 3 | Should Have |
| 61 | US27 | Ver resumen de gastos | Como residente, quiero ver en qué se gasta el dinero del edificio para tener transparencia sobre la administración. | EP04 | 5 | Should Have |
| 62 | US45 | Visualizar sección de funcionalidades | Como visitante, quiero ver las funcionalidades principales de Edifika para evaluar si la plataforma se adapta a mis necesidades. | EP06 | 2 | Should Have |
| 63 | TS14 | Documentación de API con Swagger y autenticación JWT | Como desarrollador, quiero integrar Swagger con soporte de autenticación JWT en cada microservicio de Edifika. | EP05 | 3 | Should Have |
| 64 | TS16 | Configuración base del microservicio IoT Access Management | Como desarrollador, quiero crear el microservicio de IoT Access Management para gestionar el registro, estado y eventos de los dispositivos inteligentes del edificio. | EP05 | 5 | Should Have |
| 65 | TS17 | Comunicación con dispositivos ESP32 mediante protocolo MQTT | Como desarrollador, quiero implementar la comunicación entre el microservicio IoT Access Management y las placas ESP32 mediante MQTT, para recibir lecturas de sensores y enviar comandos de actuación en tiempo real. | EP05 | 8 | Should Have |
| 66 | TS21 | Implementación del Edge API con operación sin conexión y sincronización | Como desarrollador, quiero implementar el Edge API que se comunica por MQTT local con los nodos ESP32 y se sincroniza con la nube, para que el condominio siga operando aun sin conexión a internet. | EP05 | 8 | Should Have |
| 67 | TS22 | Publicación y consumo de eventos de dominio entre contextos IoT | Como desarrollador, quiero implementar la mensajería de eventos de dominio mediante el broker AMQP/MQTT con consumo idempotente, para integrar los contextos IoT con Reservation, Payment y Notification sin acoplarlos. | EP05 | 5 | Should Have |
| 68 | TS27 | Seguridad de la comunicación del Edge Gateway | Como desarrollador, quiero asegurar la comunicación entre los ESP32, el Edge Gateway y la nube, para evitar accesos o comandos no autorizados. | EP05 | 5 | Should Have |
| 69 | TS28 | Estandarización de marcas de tiempo y zona horaria | Como desarrollador, quiero que todos los componentes registren las marcas de tiempo en UTC con formato ISO 8601 y las muestren en la zona America/Lima, para evitar inconsistencias entre el ESP32, el Edge Gateway y la nube. | EP05 | 3 | Should Have |
| 70 | US48 | Registrar tarjeta de acceso a áreas comunes | Como administrador, quiero asignar una tarjeta de acceso a cada residente para controlar el ingreso a las áreas comunes del edificio. | EP07 | 5 | Should Have |
| 71 | US49 | Desactivar acceso a áreas comunes por morosidad | Como sistema, quiero desactivar automáticamente el acceso de un residente moroso a las áreas comunes, permitiendo que el administrador pueda revertirlo en casos de emergencia. | EP07 | 5 | Should Have |
| 72 | US54 | Otorgar acceso temporal por reserva aprobada | Como residente, quiero que mi reserva aprobada me habilite automáticamente el ingreso al área común solo durante mi horario, para no depender del administrador para entrar. | EP07 | 5 | Should Have |
| 73 | US55 | Consultar bitácora de accesos | Como administrador, quiero consultar la bitácora de intentos de acceso a las áreas comunes para auditar quién ingresó y detectar accesos no autorizados. | EP07 | 3 | Should Have |
| 74 | US73 | Emitir señales sonoras con el buzzer | Como residente, quiero escuchar una señal sonora distinta según el resultado de mi acceso, para saber si puedo pasar sin mirar la pantalla. | EP11 | 2 | Should Have |
| 75 | US74 | Mostrar mensajes de estado en la pantalla OLED | Como residente, quiero ver en la pantalla OLED el resultado de mi acceso y el estado del sistema, para entender por qué se me permite o niega el ingreso. | EP11 | 3 | Should Have |
| 76 | US84 | Mostrar fecha y hora en la pantalla OLED | Como residente, quiero ver la fecha y la hora actual en la pantalla OLED del punto de acceso, para saber la hora sin usar mi celular y verificar mi horario de reserva. | EP11 | 3 | Should Have |
| 77 | US86 | Enrolar una tarjeta RFID desde el lector del nodo | Como administrador, quiero registrar una tarjeta nueva acercándola al lector del nodo, para asignarla a un residente sin digitar manualmente su número de serie. | EP11 | 5 | Should Have |
| 78 | US87 | Restringir el acceso a un área por horario | Como administrador, quiero definir el horario permitido de cada área común, para que no se pueda ingresar fuera de las horas habilitadas aunque se tenga una credencial activa. | EP11 | 3 | Should Have |
| 79 | US80 | Monitorear el estado de los nodos desde el Edge Gateway | Como administrador, quiero que el Edge Gateway detecte cuándo un nodo deja de responder, para atender fallas de hardware o de red. | EP11 | 3 | Should Have |
| 80 | US82 | Reenviar telemetría y eventos a la nube | Como sistema, quiero que el Edge Gateway reenvíe las lecturas de los sensores y los eventos hacia la nube, para alimentar la analítica y las alertas. | EP11 | 5 | Should Have |
| 81 | US83 | Ejecutar comandos remotos sobre los dispositivos | Como administrador, quiero enviar comandos desde la nube (abrir cerradura, activar alerta sonora o mensaje en pantalla) y que el Edge Gateway los ejecute en el dispositivo, para atender situaciones a distancia. | EP11 | 3 | Should Have |
| 82 | US89 | Activar el modo mantenimiento en un dispositivo | Como administrador, quiero poner un nodo en modo mantenimiento, para repararlo o calibrarlo sin generar falsas alertas ni accesos inesperados. | EP11 | 3 | Should Have |
| 83 | US93 | Consultar el estado del Edge Gateway sin internet | Como administrador, quiero consultar desde el sistema local el estado del Edge Gateway, sus nodos y los eventos pendientes de enviar, para operar y diagnosticar el edificio aunque no haya internet. | EP11 | 3 | Should Have |
| 84 | US90 | Acceder a un área con el teléfono móvil | Como residente, quiero acercar mi teléfono con la app de Edifika al nodo de acceso para ingresar a un área común, igual que con mi tarjeta RFID. | EP11 | 8 | Should Have |
| 85 | US91 | Revocar la credencial móvil de un teléfono | Como residente o administrador, quiero revocar la credencial móvil de un teléfono perdido o reemplazado, para que nadie pueda usarlo para ingresar. | EP11 | 5 | Should Have |
| 86 | TS30 | Verificación de credenciales móviles firmadas en el Edge Gateway | Como desarrollador, quiero que el Edge Gateway verifique credenciales móviles firmadas criptográficamente sin consultar la nube, para aceptar teléfonos de forma segura incluso sin internet. | EP05 | 8 | Should Have |
| 87 | TS29 | Actualización remota (OTA) del firmware de los nodos ESP32 | Como desarrollador, quiero actualizar el firmware de los ESP32 de forma remota desde el Edge Gateway con verificación y reversión, para corregir errores y agregar funciones sin acceder físicamente a cada nodo. | EP05 | 8 | Should Have |
| 88 | TS31 | Despliegue del Edge Gateway con Docker Compose | Como desarrollador, quiero desplegar el Edge Gateway, el broker MQTT y un backend simulado con Docker Compose, para ejecutar y demostrar toda la solución con un solo comando. | EP05 | 5 | Should Have |
| 89 | TS32 | Simulador de nodos ESP32 para pruebas sin hardware | Como desarrollador, quiero un simulador de nodos ESP32 que respete el contrato MQTT, para probar el Edge Gateway sin depender del hardware físico. | EP05 | 3 | Should Have |
| 90 | TS34 | Pruebas automatizadas del Edge Gateway | Como desarrollador, quiero una suite de pruebas automatizadas del Edge Gateway que no dependa del broker ni de la red, para detectar regresiones antes de cada integración. | EP05 | 5 | Should Have |
| 91 | TS18 | Configuración base del microservicio Smart Lighting & Automation | Como desarrollador, quiero crear el microservicio Smart Lighting & Automation para gestionar luminarias, reglas de automatización y comandos de override de forma independiente de los demás microservicios de Edifika. | EP05 | 5 | Should Have |
| 92 | US57 | Configurar reglas de automatización de iluminación | Como administrador, quiero configurar reglas de iluminación por área común (presencia, umbral de lux, franja horaria, tiempo de apagado y prioridad) para automatizar el uso eficiente de la energía. | EP08 | 5 | Should Have |
| 93 | US58 | Encender o apagar luces manualmente (override) | Como residente con una reserva vigente o como administrador, quiero encender o apagar manualmente las luces de un área por un tiempo determinado, para cubrir situaciones que la automatización no contempla. | EP08 | 5 | Should Have |
| 94 | US59 | Encender área al iniciar una reserva | Como sistema, quiero encender automáticamente las luces del área reservada al iniciar la reserva, para que el residente encuentre el espacio listo para su uso. | EP08 | 3 | Should Have |
| 95 | US60 | Registrar y consultar luminarias | Como administrador, quiero registrar las luminarias de cada área común y consultar su estado, para mantener un inventario actualizado del sistema de iluminación. | EP08 | 3 | Should Have |
| 96 | TS19 | Configuración base del microservicio IoT Telemetry & Analytics con TimescaleDB | Como desarrollador, quiero crear el microservicio de telemetría con almacenamiento en TimescaleDB para ingerir lecturas de sensores y resolver consultas analíticas con baja latencia. | EP05 | 8 | Should Have |
| 97 | US64 | Monitorear estado de conexión de dispositivos | Como administrador, quiero ver el estado de conexión de todos los dispositivos IoT del edificio, para saber cuáles requieren atención. | EP09 | 3 | Should Have |
| 98 | US65 | Consultar lecturas de sensores en tiempo real e históricas | Como administrador, quiero consultar las lecturas de los sensores en tiempo real y su histórico, para analizar el comportamiento de las áreas del edificio. | EP09 | 5 | Should Have |
| 99 | US61 | Visualizar consumo energético por área y periodo | Como administrador, quiero visualizar el consumo energético (kWh) por área común y periodo, para identificar dónde se puede reducir el gasto eléctrico. | EP09 | 5 | Should Have |
| 100 | US76 | Medir la humedad con el sensor de humedad | Como sistema, quiero leer periódicamente el sensor de humedad del ESP32, para disponer de datos confiables del área verde. | EP11 | 3 | Should Have |
| 101 | US92 | Calibrar los sensores de un nodo | Como administrador, quiero calibrar el sensor de humedad de un nodo (valores en seco y en húmedo, umbral de humedad baja y umbral crítico), para que las lecturas y las alertas reflejen las condiciones reales del área verde. | EP11 | 3 | Should Have |
| 102 | US50 | Configurar horarios de riego automático | Como administrador, quiero configurar los horarios y la duración del riego automático de las áreas verdes para optimizar el mantenimiento del edificio. | EP10 | 3 | Should Have |
| 103 | US51 | Riego automático según humedad del suelo | Como sistema, quiero activar el riego automáticamente según el nivel de humedad del suelo para evitar el desperdicio de agua en las áreas verdes. | EP10 | 5 | Should Have |
| 104 | US78 | Alertar localmente una humedad crítica del suelo | Como administrador, quiero que el sistema alerte con buzzer, pantalla y notificación cuando la humedad del suelo de un área verde sea crítica, para actuar a tiempo si el riego automático no la corrige. | EP11 | 3 | Should Have |
| 105 | US40 | Ver historial de uso de áreas comunes | Como administrador, quiero consultar el historial completo de uso de las áreas comunes con estadísticas para tomar mejores decisiones de gestión. | EP03 | 5 | Could Have |
| 106 | US12 | Configuración de notificaciones | Como residente, quiero elegir qué tipos de avisos recibir para no saturarme con notificaciones irrelevantes. | EP02 | 3 | Could Have |
| 107 | US46 | Visualizar sección del equipo | Como visitante, quiero conocer al equipo detrás de Edifika para generar confianza antes de contratar el servicio. | EP06 | 1 | Could Have |
| 108 | US43 | Cambiar idioma de la Landing Page | Como visitante internacional, quiero cambiar el idioma entre español e inglés para entender el contenido en mi idioma preferido. | EP06 | 3 | Could Have |
| 109 | US44 | Cambiar tema visual (claro/oscuro) | Como visitante, quiero alternar entre el modo claro y oscuro de la landing page para mejorar mi experiencia visual. | EP06 | 2 | Could Have |
| 110 | TS12 | Configuración base del microservicio Messaging Forum Service | Como desarrollador, quiero crear el microservicio de foro comunitario para que los residentes puedan publicar mensajes en el canal de su edificio. | EP05 | 5 | Could Have |
| 111 | US29 | Publicar mensaje en la comunidad | Como residente, quiero publicar mensajes en el muro comunitario para comunicarme con mis vecinos en un canal ordenado. | EP02 | 3 | Could Have |
| 112 | US37 | Moderar mensajes del muro comunitario | Como administrador, quiero revisar y eliminar mensajes inapropiados del muro para mantener un ambiente respetuoso. | EP05 | 3 | Could Have |
| 113 | US36 | Crear encuestas o votaciones para la comunidad | Como administrador, quiero crear encuestas o votaciones para conocer la opinión de los residentes sobre temas del condominio. | EP05 | 5 | Could Have |
| 114 | US32 | Consultar Leyes y Manuales | Como administrador, quiero ver la normativa legal y del edificio. | EP05 | 3 | Could Have |
| 115 | US56 | Apertura remota de acceso | Como administrador, quiero abrir remotamente un acceso desde la aplicación para atender situaciones excepcionales sin desplazarme al lector. | EP07 | 3 | Could Have |
| 116 | US88 | Avisar el fin de una reserva en el punto de acceso | Como residente, quiero que el nodo del área reservada me avise cuando mi reserva esté por terminar, para desocupar el espacio a tiempo. | EP11 | 3 | Could Have |
| 117 | US53 | Encendido automático de luces por movimiento | Como sistema, quiero encender automáticamente las luces de áreas comunes al detectar movimiento para mejorar la seguridad y el ahorro energético del edificio. | EP08 | 3 | Could Have |
| 118 | US62 | Alertar consumo anómalo | Como administrador, quiero recibir una alerta cuando el consumo de un área se desvíe de su comportamiento habitual, para investigar posibles fallas o usos indebidos. | EP09 | 8 | Could Have |
| 119 | US63 | Detectar falla de luminaria | Como administrador, quiero ser notificado cuando una luminaria no funcione pese a estar encendida, para repararla oportunamente. | EP09 | 5 | Could Have |

**Análisis de costos y viabilidad económica del despliegue Edge por edificio**

La propuesta IoT de Edifika exige instalar hardware en cada edificio: un Edge Gateway y los nodos ESP32 de acceso, iluminación y riego. Para comprobar que ese despliegue es viable, se estimó la inversión inicial (CAPEX) de un **edificio de referencia de 40 departamentos** con 3 áreas comunes con control de acceso (por ejemplo piscina, gimnasio y salón de usos múltiples), 4 zonas de iluminación inteligente y 1 zona de riego. Los precios corresponden a la tienda peruana Naylamp Mechatronics (consulta de octubre de 2026); los ítems marcados con (*) son estimaciones del equipo.

| Componente | Nodo de acceso (S/) | Nodo de iluminación (S/) | Nodo de riego (S/) |
|---|---|---|---|
| ESP32 DevKit V1 | 35.00 | 35.00 | 35.00 |
| Lector RFID RC522 | 20.00 | — | — |
| Cerradura eléctrica 12 VDC | 35.00 | — | — |
| Sensor magnético de puerta MC-38 | 5.00 | — | — |
| Pantalla OLED 0.96" SSD1306 | 25.00 | — | 25.00 |
| Buzzer activo 5 VDC | 2.00 | — | 2.00 |
| Módulo RTC DS3231 | 16.00 | — | — |
| Sensor PIR HC-SR501 | — | 8.00 | — |
| Módulo sensor LDR | — | 5.00 | — |
| Sensor de corriente ACS712 20 A | — | 15.00 | — |
| Sensor de humedad de suelo capacitivo v1.2 | — | — | 15.00 |
| Válvula solenoide 1/2" 12 VDC (NC) | — | — | 25.00 |
| Módulo relé 1 canal 5 VDC | 5.00 | 5.00 | 5.00 |
| Fuente de alimentación | 25.00 (12 V 2 A) | 15.00 (5 V)* | 25.00 (12 V 2 A) |
| Caja, borneras y cableado* | 30.00 | 30.00 | 35.00 |
| **Costo por nodo** | **198.00** | **113.00** | **167.00** |

| Edge Gateway (uno por edificio) | Costo (S/) |
|---|---|
| Raspberry Pi 4 Model B 4 GB | 520.00 |
| Case para Raspberry Pi 4 | 40.00 |
| Fuente USB-C 5 V 3 A* | 45.00 |
| Tarjeta microSD 32 GB* | 35.00 |
| **Total Edge Gateway** | **640.00** |

| Inversión inicial del edificio de referencia | Cantidad | Subtotal (S/) |
|---|---|---|
| Edge Gateway | 1 | 640.00 |
| Nodos de acceso | 3 | 594.00 |
| Nodos de iluminación | 4 | 452.00 |
| Nodo de riego | 1 | 167.00 |
| Tarjetas RFID Mifare 1K (S/ 3.00 c/u) | 40 | 120.00 |
| Instalación y configuración (2 técnicos, 1 día)* | 1 | 400.00 |
| **CAPEX total** | | **2,373.00 (≈ USD 641)** |

El costo de operación del Edge en el edificio es marginal: el Raspberry Pi consume alrededor de 5 W (≈ 3.6 kWh al mes, menos de S/ 3 mensuales) y utiliza la conexión a internet que el edificio ya tiene. Se reserva además un 10 % anual del CAPEX (≈ S/ 20 al mes) para reponer componentes dañados.

**Recuperación de la inversión.** En las entrevistas, el administrador César indicó que las soluciones de gestión se pagan entre **2 y 5 USD por departamento al mes**. Se supone que el 30 % de ese ingreso cubre la infraestructura cloud compartida, el soporte y la operación, y que el 70 % restante recupera el hardware del edificio (tipo de cambio referencial: S/ 3.70 por USD).

| Tarifa por departamento | Ingreso mensual (40 dptos.) | Margen para el hardware (70 %) | Meses para recuperar el CAPEX | Tamaño mínimo para recuperar en 12 meses |
|---|---|---|---|---|
| USD 2.00 | S/ 296.00 | S/ 207.20 | 11.5 | 39 departamentos |
| USD 3.50 | S/ 518.00 | S/ 362.60 | 6.5 | 22 departamentos |
| USD 5.00 | S/ 740.00 | S/ 518.00 | 4.6 | 15 departamentos |

El tamaño mínimo se calcula con la parte fija del CAPEX (S/ 2,253, que no depende del número de departamentos) más S/ 3 por tarjeta RFID de cada departamento.

**Conclusión de viabilidad.** Incluso con la tarifa mínima mencionada en las entrevistas, el hardware de un edificio de 40 departamentos se recupera en menos de un año, y con una tarifa intermedia basta con edificios de 22 departamentos. El componente más caro es el Edge Gateway (27 % del CAPEX). Un Raspberry Pi 4 de 2 GB (S/ 300) es suficiente para el servicio Flask, SQLite y el broker MQTT local, y reduce el CAPEX a S/ 2,153. Para edificios pequeños se recomienda cobrar una tarifa de instalación única o un plan IoT con permanencia mínima de 12 meses, de modo que la inversión en hardware no dependa solo de la suscripción mensual.

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
- **Start-with-value:** se identificaron las partes del dominio con mayor valor diferencial para el negocio, usando como referencia directa las estrategias frente a competidores de 2.1.2, en particular la **Estrategia 6, "Gestión inteligente de áreas comunes"** (optimizar el uso de los recursos compartidos del condominio) y la **Estrategia 5, "Adaptación al contexto local"**,, que son las dos que el nivel IoT lleva más allá de lo que ofrecen Condo Control, Buildium y AppFolio. De las capacidades IoT exploradas en el storm —iluminación inteligente, control de acceso, riego automático, monitoreo de tanque de agua, detección de fugas y calidad del aire— el equipo priorizó **acceso físico**, **iluminación/energía** y **riego automático**. Las dos primeras son las de mayor valor demostrable dentro del alcance de un proyecto académico con hardware real (ESP32); el riego se incorporó porque reutiliza el mismo nodo ESP32 con solo un sensor de humedad de suelo capacitivo y una electroválvula de bajo costo (ver el análisis de costos de 3.3). Se **descartaron** el monitoreo del tanque de agua, la detección de fugas y la calidad del aire: requieren sensores de nivel, caudal, presión y gases que exceden el presupuesto de hardware por edificio, y ninguna de las entrevistas de 2.2 las planteó como necesidad.

  Esta decisión tiene un efecto directo sobre el Product Backlog de 3.3: las historias **US50** (configurar horarios de riego) y **US51** (riego según humedad del suelo) forman la épica **EP10** y se implementan en el bounded context **Smart Irrigation** (4.2.12), mientras que las historias de tanque y fugas (US52, US66–US70 y US77) y sus términos del Ubiquitous Language se retiraron del alcance. Las demás capacidades IoT quedan asignadas así: EP07 (US48, US49, US54–US56) en IoT Access Management, EP08 (US53, US57–US60) en Smart Lighting & Automation y EP09 (US61–US65) en IoT Telemetry & Analytics.

  En la misma iteración se retiró **Incident Management**, que en una primera versión del corte se había identificado como contexto candidato. Su única historia en el Capítulo III es **US08**, que solo exige difundir una alerta de emergencia a todo el edificio y avisar al administrador con la ubicación de quien la reporta. No requiere el ciclo de vida de un ticket (asignación, estados de atención, cierre), que es lo que habría justificado un contexto propio, y el Capítulo III no define el rol de *Personal de Mantenimiento* que lo atendería. Por eso la capacidad se absorbió en **Communication**, que ya publica contenido uno-a-muchos hacia los residentes, y en **Notification**, que entrega el push y el SMS.
- **Start-with-simple:** el timeline ya organizado en el paso 2 de EventStorming se descompuso en sub-timelines secuenciales por proceso (autenticación → gestión residencial → reservas → pagos → comunicación/foro → reportes, y luego los cuatro sub-timelines IoT: acceso, iluminación, telemetría y riego), cada uno lo bastante simple como para sostener un propósito de negocio propio. Ese es, en esencia, el criterio de corte que produjo los 12 bounded contexts de la tabla siguiente.

La tabla resume, por cada proceso de negocio que sí se mantuvo en el alcance, el *Command* y *Actor* que lo origina, los *Domain Events* producidos, y las *Policies* / *Read Models* agregados en el paso 4, es decir, el nivel de detalle sobre el que se hizo el corte de bounded contexts:

| Proceso de negocio | Command (Actor) | Domain Events clave | Policy | Read Model |
|---|---|---|---|---|
| Autenticación (IAM/Auth) | Completar formulario de registro (Residente/Administrador) · Iniciar sesión | Usuario registrado, Rol asignado a usuario, Usuario autenticado, Credenciales rechazadas, Sesión cerrada | Un residente desactivado no puede iniciar sesión | — |
| Gestión residencial | Registrar edificio y unidades (Administrador) | Edificio registrado, Unidad registrada, Residente vinculado a unidad | Rol de usuario debe ser administrador | Directorio de unidades y residentes |
| Reservas | Registrar área común (Administrador) · Solicitar/Cancelar reserva (Residente) | Área común registrada, Reglas de área común registradas, Reserva solicitada, Reserva aceptada/rechazada, Reserva cancelada | — | Calendario de reservas |
| Pagos y deudas | Registrar pago (Residente) | Deuda generada, Pago fue registrado, Pago rechazado, Deuda marcada como pagada, Recordatorio de deuda enviado | Si el pago es rechazado, la deuda permanece pendiente | Estado de cuenta del residente |
| Comunicados y foro | Publicar anuncio (Administrador) · Agregar comentario / Crear encuesta / Votar (Residente) | Anuncio publicado, Comentario agregado, Encuesta creada, Voto registrado, Encuesta finalizada | — | Muro de anuncios, Resultados de la encuesta |
| Alertas de emergencia (dentro de Communication) | Declarar emergencia (Administrador) · Reportar emergencia (Residente) | Emergencia declarada, Emergencia reportada | Si la declara el administrador, difundir a todo el edificio por push y SMS · Si la reporta un residente, avisar al administrador con torre y departamento | — |
| Reportes | Generar reporte financiero (Administrador) | Reporte financiero generado, Reporte financiero exportado | — | Dashboard financiero |
| Notificaciones (transversal) | *(Sistema, automático)* | Notificación enviada, Notificación leída, Notificación de deuda fue enviada, Notificación enviada a usuario/administrador | — | — |
| Acceso físico (IoT) | Escanear tarjeta (Residente) | Tarjeta RFID/NFC fue escaneada, Residente fue validado, Acceso fue concedido/rechazado/denegado, Puerta fue abierta, Tarjeta no reconocida, Residente moroso fue detectado | Si el residente es moroso, denegar el acceso | — |
| Iluminación inteligente (IoT) | Activar interruptor manual (Residente/Administrador) | Movimiento detectado/no detectado en área común, Luces encendidas/apagadas automáticamente, Temporizador de inactividad iniciado, Fallo de conexión en sensor detectado, Luces permanecieron en modo seguro | Si no hay movimiento por 3 minutos, apagar luces | — |
| Riego automático (IoT) | Configurar programación de riego (Administrador) | Programación de riego registrada, Humedad del suelo medida, Riego activado/detenido automáticamente, Riego omitido por humedad suficiente, Fallo en válvula detectado | Si la humedad es suficiente, omitir el riego · Si la válvula no responde, notificar al administrador | Historial de riego |
| *Tanque de agua, fugas y calidad del aire (descartado — ver start-with-value)* | *—* | *Nivel de agua medido, Fuga detectada, Calidad del aire medida* | *Si el nivel es crítico o hay fuga, enviar alerta inmediata* | *Panel de nivel de tanque de agua* |

A partir de este corte por proceso de negocio, y de la incorporación del nivel IoT priorizado, se identificaron **12 bounded contexts**, cada uno implementado como un microservicio independiente (más el API Gateway y el Edge API como componentes de infraestructura transversal, no bounded contexts de dominio). Los ocho primeros cubren la gestión administrativa del condominio; los cuatro últimos son los que sobrevivieron el filtro start-with-value dentro del nivel IoT. Este es el **catálogo único** de contextos de la solución: el resto del informe (context map, arquitectura C4 y diseño táctico) se refiere exactamente a estos 12.

| Sección | Bounded Context | Responsabilidad principal |
|---|---|---|
| 4.2.1 | IAM / Auth | Registro, autenticación (JWT) y gestión de usuarios y roles (administradores/residentes). |
| 4.2.2 | Residential Management | Registro de edificios, unidades y vinculación de residentes a sus unidades. |
| 4.2.3 | Reservation | Disponibilidad, reserva y aprobación de uso de áreas comunes. |
| 4.2.4 | Payment | Registro de deudas, pagos, comprobantes e integración con la pasarela Culqi. |
| 4.2.5 | Notification | Envío de notificaciones push (Firebase Cloud Messaging) y SMS originadas por eventos de otros contextos. |
| 4.2.6 | Communication | Publicación de comunicados oficiales y encuestas a la comunidad, y difusión de alertas de emergencia. |
| 4.2.7 | Forum | Muro comunitario de mensajes entre residentes. |
| 4.2.8 | Report | Generación y exportación de reportes financieros y de morosidad. |
| 4.2.9 | IoT Access Management | Permisos de acceso a áreas comunes, credenciales RFID, y control de cerraduras según reservas activas. |
| 4.2.10 | Smart Lighting & Automation | Reglas de automatización y control de luminarias de áreas comunes según presencia, lux ambiental, horarios de reserva y override manual. |
| 4.2.11 | IoT Telemetry & Analytics | Ingesta de telemetría de sensores (corriente, presencia y humedad del suelo), cálculo cuantitativo de consumo energético (kWh), estadísticas y detección de anomalías de hardware. |
| 4.2.12 | Smart Irrigation | Programación y ejecución del riego de áreas verdes según horarios y humedad del suelo, con registro de los riegos ejecutados, omitidos y fallidos. |

La columna **Sección** fija la numeración con la que cada contexto se desarrolla en 4.2 y se mantiene en todo el capítulo. La única sección que presenta los contextos en otro orden es 4.1.1.3, donde los canvases se elaboran por importancia estratégica según lo pide el enunciado; allí cada canvas indica entre paréntesis la sección que le corresponde.


En cuanto a la persistencia, se mantiene el principio de **database-per-service** comprometido en la historia técnica **TS05** del Capítulo III: cada microservicio es dueño exclusivo de sus tablas y ningún contexto lee directamente las de otro. Lo que el modelo de despliegue de 4.1.3.4 hace es *alojar* esos esquemas lógicamente independientes sobre dos instancias gestionadas en vez de sobre doce servidores separados, una instancia PostgreSQL para los esquemas de los contextos de gestión e IoT transaccionales, y una instancia TimescaleDB dedicada a las series de telemetría de alta frecuencia, cuyo perfil de escritura y consulta es incompatible con el transaccional. Es una decisión de infraestructura y de costo para el alcance académico del proyecto, no una relajación del aislamiento de datos entre contextos: la independencia lógica que exige TS05 se conserva íntegra.

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

El orden de elaboración siguió el criterio de importancia pedido por el enunciado: primero los contextos de los que depende toda la plataforma (IAM/Auth, Payment, Residential Management, Reservation), luego los cuatro contextos IoT que sostienen la propuesta de diferenciación del Capítulo II, y por último los contextos de soporte/genéricos (Communication, Notification, Report, Forum).

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

**5. IoT Access Management (4.2.9)**

| Campo | Detalle |
|---|---|
| Purpose | Decidir y auditar quién puede abrir físicamente un área común, combinando credenciales, reservas vigentes y estado de morosidad. |
| Strategic Classification | Domain Role: **Core** (pilar de la propuesta de diferenciación IoT del Capítulo II) · Business Model: Revenue Protector / Compliance Enforcer · Evolution: **Custom Built** (la combinación RFID + reservas + morosidad no es un producto de catálogo). |
| Ubiquitous Language | Access Credential (Credencial de Acceso), Access Permission (Permiso de Acceso), Access Attempt (Intento de Acceso), Delinquent Resident. |
| Business Decisions | Una credencial concede acceso solo si está activa, el residente no está moroso y existe un permiso vigente para esa área en ese instante (`AccessDecisionService`, ver 4.2.9.1) · un residente moroso se suspende automáticamente. |
| Inbound Communication | **Reservation** (Customer/Supplier, evento `ReservationApproved`) · **Payment** (Customer/Supplier, evento `ResidentMarkedDelinquent`). |
| Outbound Communication | **Notification** (Customer/Supplier, eventos `PhysicalAccessGranted` / `PhysicalAccessDenied`) · **Edge API** (**Conformist** — sincroniza credenciales activas, reservas vigentes y blacklist hacia el gateway on-premise). |
| Model (Aggregates) | `AccessCredential` (Aggregate Root), `AccessPermission` (Entity), `AccessAttempt` (Entity). |
| Design Critique | Se evaluó que el Edge API tomara la decisión de acceso de forma autónoma consultando el cloud en cada intento, pero se descartó por latencia y por el requisito de resiliencia offline: la decisión final se cachea en el Edge y solo se sincroniza cuando hay conectividad, de ahí la relación Conformist hacia el Edge en vez de Customer/Supplier síncrona en tiempo real. |

**6. Smart Lighting & Automation (4.2.10)**

| Campo | Detalle |
|---|---|
| Purpose | Encender/apagar luminarias de áreas comunes combinando presencia, lux ambiental, horario de reserva y override manual, priorizando el ahorro energético. |
| Strategic Classification | Domain Role: **Core** (diferenciador IoT) · Business Model: Cost Reducer (ahorro energético) · Evolution: **Custom Built** (la precedencia entre presencia/lux/reserva/override es una regla propia del negocio, no un producto de catálogo). |
| Ubiquitous Language | Automation Rule (Regla de Automatización), Luminaire (Luminaria), Override Command (Comando de Override), Lux Threshold (Umbral de Lux). |
| Business Decisions | Si no hay movimiento por 3 minutos, apagar luces (política capturada en el EventStorm, ver 4.1.1.1) · un override manual suspende temporalmente la automatización con precedencia sobre las reglas programadas. |
| Inbound Communication | **Reservation** (Customer/Supplier, evento `ReservationStarted`) — el inicio de una reserva dispara el encendido programado del área · **Edge API** (Customer/Supplier, evento `AreaPresenceDetected` relayado desde el sensor PIR del nodo de iluminación, ver 4.2.10.3). |
| Outbound Communication | **Edge API** (**Conformist** — envía reglas de programación y comandos de override para ejecución local). |
| Model (Aggregates) | `AutomationRule` (Aggregate Root), `Luminaire` (Entity), `OverrideCommand` (Entity). |
| Design Critique | Se evaluó ejecutar la lógica de decisión (`AutomationDecisionService`) directamente en el Edge para no depender de la conectividad WAN, pero se optó por mantener la autoría de reglas en el cloud (más fácil de versionar y auditar desde la Web Application) y solo *empujar* las reglas ya resueltas al Edge — el mismo patrón Conformist que IoT Access Management. |

**7. IoT Telemetry & Analytics (4.2.11)**

| Campo | Detalle |
|---|---|
| Purpose | Ingerir telemetría de sensores (corriente, presencia y humedad del suelo), calcular consumo energético cuantitativo (kWh) y detectar anomalías de hardware, sosteniendo el requisito de analítica cuantitativa IoT del curso. |
| Strategic Classification | Domain Role: **Core** (el más diferenciador de los contextos IoT: es el único que produce analítica cuantitativa) · Business Model: Decision Support / Cost Reducer · Evolution: **Genesis → Custom Built** (el cálculo de integración temporal de potencia y la detección de anomalías por baseline estadística se diseñaron a medida para este dominio). |
| Ubiquitous Language | Sensor Reading (Lectura de Sensor), Energy Consumption (Consumo Energético), Consumption Baseline (Línea Base de Consumo), Anomaly Flag (Marca de Anomalía). |
| Business Decisions | El consumo se calcula por integración temporal de la potencia instantánea (`kWh = Σ(V × I × Δt) / 1000`) · una anomalía se distingue de una falla de luminaria por el patrón de corriente nula con la luminaria comandada en ON (`AnomalyDetectionService`, ver 4.2.11.1). |
| Inbound Communication | **Edge API** (Customer/Supplier, el Edge es *upstream* de datos) — reenvía la telemetría bufferizada y los registros de auditoría generados offline. |
| Outbound Communication | **Notification** (eventos `AbnormalConsumptionDetected`, `LuminaireFailureDetected`) · **Report** (Customer/Supplier — aporta las métricas de consumo que Report consolida) · **Smart Irrigation** (Customer/Supplier, evento `SoilMoistureMeasured` con la lectura de humedad ya validada). |
| Model (Aggregates) | `EnergyConsumption` (Aggregate Root), `ConsumptionBaseline` (Entity), `AnomalyFlag` (Entity), `SensorReading` (Value Object). |
| Design Critique | Se consideró persistir la telemetría en la misma instancia PostgreSQL que el resto del dominio, pero se descartó por el perfil de escritura (alta frecuencia) y de consulta (series temporales) incompatible con el transaccional — de ahí la instancia TimescaleDB dedicada (ver 4.1.3.4), la única decisión de persistencia que rompe el patrón "un PostgreSQL para todos" del resto de contextos. |

**8. Smart Irrigation (4.2.12)**

| Campo | Detalle |
|---|---|
| Purpose | Regar las áreas verdes del edificio solo cuando es necesario, combinando las programaciones definidas por el administrador con la humedad del suelo medida por los nodos ESP32. |
| Strategic Classification | Domain Role: **Supporting** (complementa la diferenciación IoT, pero no es el motivo principal de contratación) · Business Model: Cost Reducer (ahorro de agua y de mantenimiento de áreas verdes) · Evolution: **Custom Built** (la combinación de calendario y umbral de humedad por zona es una regla propia del negocio). |
| Ubiquitous Language | Irrigation Zone (Zona de Riego), Irrigation Schedule (Programación de Riego), Moisture Threshold (Umbral de Humedad), Irrigation Run (Ejecución de Riego), Skipped Irrigation (Riego Omitido). |
| Business Decisions | Dos programaciones de una misma zona no pueden superponerse (US50 esc. 2) · el riego programado se omite si la humedad del suelo está sobre el umbral (US51 esc. 2) · una lectura inválida se descarta y se aplica la programación por defecto (US51 esc. 3) · si la electroválvula no confirma la orden, el riego se registra como fallido y se notifica al administrador (US50 esc. 3). |
| Inbound Communication | **IoT Telemetry & Analytics** (Customer/Supplier, evento `SoilMoistureMeasured`) — Telemetry es upstream de las lecturas que ingiere desde el Edge · **Edge API** (Customer/Supplier, evento `IrrigationRunReported`) — confirma la apertura y el cierre de la válvula. |
| Outbound Communication | **Edge API** (**Conformist** — sincroniza programaciones y umbrales, y envía los comandos de apertura/cierre de válvula para su ejecución local) · **Notification** (Customer/Supplier, eventos `IrrigationFailed` y `MoistureSensorFaulty`). |
| Model (Aggregates) | `IrrigationZone` (Aggregate Root), `IrrigationSchedule` (Entity), `IrrigationRun` (Entity). Value Objects: `MoistureThreshold`, `WateringWindow`. |
| Design Critique | Se evaluó incorporar el riego a Smart Lighting & Automation, que también ejecuta reglas programadas sobre actuadores, pero se descartó: las reglas de iluminación dependen de presencia, lux y reservas, mientras que el riego depende de la humedad del suelo y de su propio calendario; un modelo común de "regla genérica" mezclaría dos lenguajes ubicuos y obligaría a compartir tipos entre contextos. También se evaluó que el Edge decidiera el riego de forma autónoma; se optó por mantener la autoría de programaciones y umbrales en el cloud y empujarlas al Edge, que ejecuta el riego aun sin conexión con la última programación sincronizada —el mismo patrón Conformist de IoT Access Management y Smart Lighting & Automation—. |

**9. Communication (4.2.6)**

| Campo | Detalle |
|---|---|
| Purpose | Publicar comunicados oficiales y encuestas de la comunidad hacia los residentes, y difundir alertas de emergencia. |
| Strategic Classification | Domain Role: **Supporting** · Business Model: Engagement Creator · Evolution: **Product** (publicación de anuncios/encuestas es un patrón conocido). |
| Ubiquitous Language | Announcement (Comunicado), Poll (Encuesta), Reach (Alcance), Emergency Alert (Alerta de Emergencia). |
| Business Decisions | Límite de un mensaje diario por residente (HTTP 429 si se excede) · voto único por encuesta (HTTP 409 si se duplica) · una alerta de emergencia declarada por el administrador se difunde a todo el edificio por push y SMS en menos de 5 s (US08 esc. 1) · una emergencia reportada por un residente llega al administrador con su torre y departamento (US08 esc. 2). |
| Inbound Communication | Ninguna. |
| Outbound Communication | **Notification** (Customer/Supplier, eventos `AnnouncementPublished`, `EmergencyDeclared` y `EmergencyReported`) · **Residential Management** (Customer/Supplier, REST síncrono — resuelve la torre y el departamento de quien reporta una emergencia) · **Cloudinary** (Anti-Corruption Layer — imágenes de comunicados). |
| Model (Aggregates) | `Announcement` (Entity), `Poll` (Entity), `EmergencyAlert` (Entity). |
| Design Critique | Se evaluó fusionar Communication con Forum (ambos son "muros" de contenido), pero se mantuvieron separados porque su ubiquitous language y su ciclo de vida difieren: un comunicado es unidireccional y oficial (admin → todos), mientras un post de Forum es conversacional entre pares. Las alertas de emergencia se ubicaron aquí y no en un contexto propio (ver la retirada de Incident Management en 4.1.1.1) porque también son mensajes uno-a-muchos sin ciclo de vida de atención. |

**10. Notification (4.2.5)**

| Campo | Detalle |
|---|---|
| Purpose | Traducir eventos de dominio de todo el sistema en notificaciones push entregadas al residente o administrador correcto. |
| Strategic Classification | Domain Role: **Generic** (envío de notificaciones es una capability resuelta por FCM) · Business Model: Engagement Creator · Evolution: **Commodity** (delegada casi por completo a Firebase Cloud Messaging). |
| Ubiquitous Language | Notification (Notificación), Device Token (Token de Dispositivo). |
| Business Decisions | Si el envío a FCM falla, la notificación se marca pendiente de reintento sin afectar el estado del contexto que originó el evento (compensación, ver 4.1.1.2). |
| Inbound Communication | **Communication** (`AnnouncementPublished`, `EmergencyDeclared`, `EmergencyReported`) · **Payment** (`PaymentApproved`) · **Reservation** (`ReservationApproved`) · **IoT Access Management** (`PhysicalAccessGranted`/`Denied`) · **IoT Telemetry & Analytics** (`AbnormalConsumptionDetected`, `LuminaireFailureDetected`) · **Smart Irrigation** (`IrrigationFailed`, `MoistureSensorFaulty`) — todos Customer/Supplier, Notification es downstream puro. |
| Outbound Communication | **Firebase Cloud Messaging** (Anti-Corruption Layer). |
| Model (Aggregates) | `Notification` (Entity), `DeviceToken` (Entity). |
| Design Critique | Al ser el único punto de consumo de eventos de los seis contextos que publican alertas (Communication, Payment, Reservation, IoT Access Management, IoT Telemetry & Analytics y Smart Irrigation), se evaluó el riesgo de que un fallo en Notification bloqueara el broker para todos; se mitigó con el **Factory Pattern** para desacoplar la creación del tipo de notificación (Push/Email/SMS) de su envío, y con colas de reintento independientes por evento. |

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
| Communication | Notification | Emite `AnnouncementPublished` al publicar un comunicado, y `EmergencyDeclared` / `EmergencyReported` ante una emergencia (US08), para que se notifique a los residentes o al administrador. | Customer/Supplier (Communication es upstream) |
| Communication | Residential Management | Consulta síncrona para resolver la torre y el departamento del residente que reporta una emergencia (US08 esc. 2). | Customer/Supplier (Communication es downstream) |
| Payment | Notification | Emite evento al aprobar un pago. | Customer/Supplier |
| Reservation | Notification | Emite evento al aprobar una reserva. | Customer/Supplier |
| Payment | Culqi (sistema externo) | Integración vía Adapter/ACL (pasarela de pagos). | Anti-corruption Layer |
| Report | Payment | Consulta síncrona vía REST para consolidar reportes financieros. | Customer/Supplier (Report es downstream, solo lectura) |
| Residential Management | IAM | Provee el vínculo residente–unidad que IAM usa para autorizar el acceso. | Customer/Supplier |
| Reservation | IoT Access Management | `ReservationApproved` habilita el permiso temporal de acceso al área común reservada. | Customer/Supplier (Reservation es upstream) |
| Reservation | Smart Lighting & Automation | El inicio de la reserva dispara el encendido programado del área común. | Customer/Supplier |
| Payment | IoT Access Management | `ResidentMarkedDelinquent` suspende los permisos de acceso del residente moroso. | Customer/Supplier |
| IoT Access Management | Notification | Emite `PhysicalAccessGranted` / `PhysicalAccessDenied` para notificar accesos y rechazos. | Customer/Supplier |
| IoT Telemetry & Analytics | Notification | Emite `AbnormalConsumptionDetected` y `LuminaireFailureDetected` para alertar al administrador. | Customer/Supplier |
| IoT Telemetry & Analytics | Smart Irrigation | Publica `SoilMoistureMeasured` con la lectura de humedad del suelo ya validada, que alimenta la decisión de riego (US51). | Customer/Supplier (Telemetry es upstream) |
| Smart Irrigation | Notification | Emite `IrrigationFailed` y `MoistureSensorFaulty` para avisar al administrador de un riego no ejecutado o de un sensor con falla. | Customer/Supplier |
| IoT Telemetry & Analytics | Report | Aporta las métricas de consumo energético que Report consolida en la analítica de la comunidad. | Customer/Supplier (Report es downstream) |
| IoT Access Management | Edge API | Sincroniza credenciales activas, reservas vigentes y blacklist hacia el gateway on-premise. | Conformist (el Edge conforma el modelo definido en el cloud) |
| Smart Lighting & Automation | Edge API | Envía las reglas de automatización y los comandos de override manual. | Conformist |
| Smart Irrigation | Edge API | Sincroniza programaciones y umbrales de humedad, y envía los comandos de apertura y cierre de la electroválvula. | Conformist |
| Edge API | IoT Telemetry & Analytics | Reenvía la telemetría bufferizada y los registros de auditoría generados durante la operación offline. | Customer/Supplier (el Edge es upstream de datos) |
| Edge API | Smart Lighting & Automation | Relaya el evento `AreaPresenceDetected` apenas recibe la lectura del sensor PIR, priorizando latencia de encendido sobre interpretación de dominio. | Customer/Supplier (el Edge es upstream de datos, ver 4.2.10.3) |
| Edge API | Smart Irrigation | Confirma la ejecución de cada riego (`IrrigationRunReported`), incluidos los ejecutados sin conexión. | Customer/Supplier (el Edge es upstream de datos) |
| Dispositivos embebidos (ESP32) | Edge API | Intercambio local MQTT de lecturas y comandos; el firmware se adapta al contrato del Edge API. | Conformist (infraestructura física, no bounded context de dominio) |
| API Gateway | Todos los contextos | Enrutamiento y validación de JWT (infraestructura transversal, no bounded context de dominio). | — |

**Discusión de alternativas de context mapping**

Sobre el mapa anterior, el equipo evaluó explícitamente las preguntas de diseño sugeridas por el enunciado. La tabla siguiente resume los casos donde la respuesta no era obvia, la alternativa considerada y la decisión final:

| Pregunta de diseño | Alternativa evaluada | Decisión final y razón |
|---|---|---|
| ¿Qué pasaría si **movemos** este capability a otro contexto? | Mover la decisión de acceso (`AccessDecisionService`) del cloud (IoT Access Management) al Edge API, para que abra la puerta sin ida y vuelta al cloud. | **Se descarta mover el contexto completo**, pero sí se replica su *resultado* (credenciales/permisos ya resueltos) en el Edge vía sincronización — el Edge cachea la decisión, no la recalcula. Mantiene a IoT Access Management como única fuente de verdad y evita que la regla de negocio (moroso → sin acceso) viva en dos lugares. |
| ¿Qué pasaría si **descomponemos** el capability y movemos un sub-capability a otro contexto? | Separar la emisión/gestión de credenciales RFID de la decisión de acceso en tiempo real, creando un contexto "Credential Management" aparte de "Access Decision". | **Se descarta**: ambos sub-capabilities comparten el mismo Aggregate (`AccessCredential`) y el mismo invariante (una credencial suspendida no debe poder decidir un acceso), partirlos forzaría una transacción distribuida para algo que hoy es una operación local. |
| ¿Qué pasaría si **partimos** el bounded context en varios? | Partir Payment en "Billing" (deudas/cuotas) y "Payment Processing" (cobro/Culqi) como dos contextos independientes. | **Se descarta para el alcance actual**: el volumen de reglas de negocio no justifica el costo de coordinación entre dos contextos: la Saga de aprobación (4.1.1.2) necesita ambas responsabilidades en la misma transacción local. Queda anotado como refactor natural si el dominio de facturación creciera (ej. múltiples pasarelas de pago). |
| ¿Qué pasaría si **tomamos capabilities de 3 contexts** para formar uno nuevo? | Extraer la lógica de "generar alerta" que hoy vive de forma repetida en IoT Access Management, IoT Telemetry y Smart Irrigation, y consolidarla en un contexto nuevo. | **Ya resuelto por diseño**: ese contexto nuevo es exactamente **Notification** — los contextos IoT solo publican el evento de dominio (`PhysicalAccessDenied`, `AbnormalConsumptionDetected`, `IrrigationFailed`, etc.) y es Notification quien concentra el *Factory Pattern* de creación de la alerta (push/email/SMS), evitando triplicar esa lógica. |
| ¿Qué pasaría si **duplicamos** una funcionalidad para romper una dependencia? | Que Report mantenga su propia copia denormalizada de pagos/deudas (vía eventos) en lugar de consultar a Payment por REST síncrono. | **Se descarta por ahora** (queda como Design Critique de Report en 4.1.1.3): el volumen de datos y el timebox del proyecto no justifican construir un pipeline de proyecciones; se acepta el acoplamiento síncrono Report → Payment sabiendo que es la única lectura cross-context sin desacoplar del informe. |
| ¿Qué pasaría si creamos un **shared service** para reducir duplicación? | Un servicio compartido de "estado de morosidad" consultado tanto por IoT Access Management como por futuras integraciones (ej. bloqueo de reservas a morosos). | **Se descarta un servicio nuevo**: Payment ya es la fuente de verdad y publica `ResidentMarkedDelinquent`; crear un shared service solo agregaría un salto de red adicional sin nueva capability. Se prefiere que cada contexto interesado se suscriba al evento (Customer/Supplier) en vez de introducir un Shared Kernel. |
| ¿Qué pasaría si **aislamos los core capabilities** y movemos el resto a un contexto aparte? | Separar `EnergyCalculationService`/`AnomalyDetectionService` (core, diferenciador) de la ingesta cruda de telemetría (`TelemetryIngestionService`, más genérica) en dos contextos. | **Se descarta dividir en dos microservicios** por el timebox del curso, pero sí se aisló en capas dentro del mismo contexto (Domain Service vs. Application Service, ver 4.2.11): si el volumen de sensores creciera, la ingesta cruda es la primera candidata a externalizarse hacia una plataforma IoT genérica (ej. AWS IoT Core), dejando el cálculo de energía y la detección de anomalías —el verdadero valor de negocio— en el contexto propio. |

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
| 4.2.5 | Notification | EP02, EP03, EP04 | US09, US10, US11, US12, US31 | TS10 |
| 4.2.6 | Communication | EP02 | US08, US13, US14, US15, US32, US36 | TS09 |
| 4.2.7 | Forum | EP02 | US29, US37 | TS12 |
| 4.2.8 | Report | EP04 | US25, US26 | TS11 |
| 4.2.9 | IoT Access Management | EP07 | US48, US49, US54, US55, US56 | TS16, TS17 |
| 4.2.10 | Smart Lighting & Automation | EP08 | US53, US57, US58, US59, US60 | TS18 |
| 4.2.11 | IoT Telemetry & Analytics | EP09 | US61, US62, US63, US64, US65 | TS19 |
| 4.2.12 | Smart Irrigation | EP10 | US50, US51 | *(por definir en 3.1)* |

Observaciones que se desprenden de esta trazabilidad:

- **EP05 (Infraestructura, seguridad y arquitectura técnica)** no se mapea a un bounded context propio porque es transversal: TS04, TS13, TS14 y TS15 se materializan en el API Gateway, TS05 en la estrategia de persistencia descrita en 4.1.1.1, y TS21–TS34 en el Edge API; las historias técnicas de configuración base de cada microservicio figuran en la columna correspondiente.
- **EP06 (Landing Page e Interfaz Web)**, con US41–US47, tampoco corresponde a un bounded context: se implementa en los containers *Landing Page* y *Web Application* de 4.1.3.3, que consumen los contextos existentes sin aportar dominio propio.
- **EP11 (Edge Gateway e integración con dispositivos ESP32)**, con US71–US93, se implementa en el container *Edge API & Gateway Controller* y en el firmware de los nodos: es infraestructura on-premise que ejecuta localmente lo que deciden los contextos cloud (relación Conformist de 4.1.2), no un bounded context de dominio.
- **US08 (alertas de emergencia)** se implementa en Communication, que publica `EmergencyDeclared` y `EmergencyReported`, y la entrega por push y SMS la realiza Notification. El contexto Incident Management, identificado en una primera iteración, se retiró del catálogo (ver 4.1.1.1).

**Nivel de detalle de cada capa**

Cada bounded context se documenta a continuación separando Domain, Interface, Application e Infrastructure Layer. La subsección 4.2.X.1–4.2.X.4 da el diccionario en prosa (nombre, propósito e intención de cada clase, con sus atributos y relaciones principales); el detalle exacto de atributos tipados, métodos, *scope* y multiplicidad que pide el statement para el nivel de código vive en el Class Diagram UML de 4.2.X.6.1 de cada contexto (los contextos 4.2.1–4.2.11 ya cuentan con el suyo; el de Smart Irrigation se incorpora junto con su diseño táctico en 4.2.12) — evitando así transcribir en texto plano el mismo detalle que el diagrama ya expresa formalmente.

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

**AutomationRule**: regla que gobierna una o varias luminarias de un área común, con condición de presencia, umbral de lux, franja horaria, duración de apagado por inactividad y prioridad frente a otras reglas. La regla se resuelve mediante el Domain Service **AutomationDecisionService**, que combina presencia, lux ambiental, horario de reserva y override vigente, aplicando la precedencia entre reglas.

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
| AutomationDecisionService | Resolver el estado objetivo de cada luminaria. | Combina presencia, lux ambiental, horario de reserva y override vigente, aplicando la precedencia entre reglas. |

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

### 5.1.2. Web, Mobile and IoT Style Guidelines

## 5.2. Information Architecture

### 5.2.1. Organization Systems

### 5.2.2. Labeling Systems

### 5.2.3. SEO Tags and Meta Tags

### 5.2.4. Searching Systems

### 5.2.5. Navigation Systems

## 5.3. Landing Page UI Design

### 5.3.1. Landing Page Wireframe

### 5.3.2. Landing Page Mock-up

## 5.4. Applications UX/UI Design

### 5.4.1. Applications Wireframes

### 5.4.2. Applications Wireflow Diagrams

#### 5.4.2.1. Applications Mock-ups

### 5.4.3. Applications User Flow Diagrams

## 5.5. Applications Prototyping

## 5.6. IoT Device Design

# Capítulo VI: Product Implementation, Validation & Deployment

## 6.1. Software Configuration Management

### 6.1.1. Software Development Environment Configuration

Esta subsección registra las herramientas utilizadas para desarrollar el **Edge Gateway** (servicio Edge del proyecto). Las herramientas de los demás productos digitales (Landing Page, Web Services, Web Applications y Mobile Applications) se agregan en este mismo cuadro conforme se incorporan.

| Producto de software | Versión | Propósito en el proyecto | Referencia |
|---|---|---|---|
| Python | 3.12 (imagen Docker) | Lenguaje del Edge Gateway, según el enunciado para Edge Services | https://www.python.org/downloads/ |
| Flask | 3.1.3 | Framework web del Edge Gateway (API REST local) | https://flask.palletsprojects.com/ |
| flask-smorest | 0.47.0 | Definición de endpoints y documentación OpenAPI/Swagger | https://flask-smorest.readthedocs.io/ |
| marshmallow | 4.3.1 | Validación de solicitudes REST y de mensajes MQTT | https://marshmallow.readthedocs.io/ |
| Peewee ORM | 4.5.2 | Acceso a datos del Edge Gateway, según el enunciado | https://docs.peewee-orm.com/ |
| SQLite | incluido en Python | Base de datos local del Edge Gateway (modo WAL) | https://www.sqlite.org/ |
| paho-mqtt | 2.1.0 | Cliente MQTT para comunicarse con los nodos ESP32 | https://eclipse.dev/paho/ |
| Eclipse Mosquitto | 2 | Broker MQTT local entre los nodos ESP32 y el Edge Gateway | https://mosquitto.org/ |
| gunicorn | 26.2.0 | Servidor de aplicación del contenedor del Edge Gateway | https://gunicorn.org/ |
| pytest | 9.1.1 | Pruebas unitarias y de integración del Edge Gateway | https://docs.pytest.org/ |
| Docker y Docker Compose | 29.8 / 5.5 | Empaquetado y despliegue local de todo el servicio | https://www.docker.com/products/docker-desktop/ |
| GitHub | — | Control de versiones y repositorio del Edge Gateway | https://github.com/ |

### 6.1.2. Source Code Management

El código fuente se gestiona en GitHub, dentro de la organización pública del equipo. Cada producto digital tiene su propio repositorio, que incluye el proyecto y sus archivos de pruebas.

| Producto | Repositorio |
|---|---|
| Edge Gateway (Python, Flask, Peewee, SQLite) | https://github.com/IoT-UPC-202620/Edifika-Microservice-IoT-Gateway |

**GitFlow.** El Edge Gateway aplica GitFlow con las siguientes ramas:

| Rama | Origen | Destino | Convención de nombre | Ejemplo |
|---|---|---|---|---|
| `main` | — | — | Contiene solo versiones publicadas, cada una con su tag | `v0.1.0` |
| `develop` | `main` | — | Rama de integración | `develop` |
| Feature | `develop` | `develop` (merge `--no-ff`) | `feature/<ID de historia>-<nombre corto>` | `feature/US71-access-control` |
| Release | `develop` | `main` y `develop` | `release/<versión>` | `release/0.1.0` |
| Hotfix | `main` | `main` y `develop` | `hotfix/<nombre>` | `hotfix/lock-timeout` |

Cada historia o grupo de historias relacionadas se desarrolla en su propia rama feature y se integra a `develop` mediante un merge sin avance rápido (`--no-ff`), de modo que el historial conserve qué cambios pertenecen a cada historia.

**Semantic Versioning.** Las versiones siguen el formato `MAJOR.MINOR.PATCH`. La primera versión funcional es la **0.1.0**: se preparó en `release/0.1.0` (con su `CHANGELOG.md`), se integró a `main` y se etiquetó como `v0.1.0`.

**Conventional Commits.** Los mensajes de commit usan el formato `<tipo>(<ámbito>): <descripción>`, con los tipos `feat`, `fix`, `docs`, `test`, `chore` y `refactor`, y mencionan entre paréntesis los identificadores de las historias implementadas. Por ejemplo: `feat(access): resolve RFID access locally with lock, buzzer and OLED feedback (US71-US75, US87)`.

### 6.1.3. Source Code Style Guide & Coding Conventions

Convenciones adoptadas para el código Python del Edge Gateway:

| Aspecto | Convención |
|---|---|
| Estilo general | PEP 8 (https://peps.python.org/pep-0008/) |
| Documentación | Docstrings según PEP 257 (https://peps.python.org/pep-0257/) en módulos y clases públicas |
| Nomenclatura | En inglés. `snake_case` para funciones, variables y módulos; `PascalCase` para clases; `MAYUSCULAS_CON_GUION_BAJO` para constantes |
| Tipado | Anotaciones de tipo en las firmas públicas de los servicios |
| Organización | Capas separadas: `api` (interfaz REST), `services` (reglas de negocio), `mqtt` (contrato y mensajería), `models` y `db` (persistencia) |
| Mensajes al usuario | Inglés como idioma por defecto (mensajes de la API, de la pantalla OLED y de la documentación Swagger), según el enunciado |
| Configuración | Solo mediante variables de entorno con el prefijo `EDGE_`; ningún secreto en el código |
| Pruebas | Un archivo por componente; el nombre de cada prueba describe el comportamiento esperado, y los escenarios Dado/Cuando/Entonces de las historias se traducen en pruebas `pytest` |
| Commits y ramas | Conventional Commits y GitFlow (ver 6.1.2) |

### 6.1.4. Software Deployment Configuration

El Edge Gateway se despliega con **Docker Compose**, junto con el broker MQTT y un backend simulado. La solución completa se levanta con un solo comando:

```bash
docker compose up --build                  # broker + Edge Gateway + backend simulado
docker compose --profile sim up --build    # además, dos nodos ESP32 virtuales
```

**Servicios del `docker-compose.yml`**

| Servicio | Imagen | Puerto | Función |
|---|---|---|---|
| `mosquitto` | `eclipse-mosquitto:2` | 1883 | Broker MQTT local. Verificación de salud con `mosquitto_sub` |
| `edge-gateway` | Construida desde el `Dockerfile` (`python:3.12-slim`) | 8000 | API REST, Swagger (`/docs`) y `/health` |
| `mock-cloud` | Misma imagen | 9000 | Backend simulado que recibe los eventos y entrega las credenciales |
| `seed`, `sim-door`, `sim-garden` | Misma imagen (perfil `sim`) | — | Registro de los nodos de demostración y dos ESP32 virtuales |

**Decisiones de despliegue**

- El Edge Gateway se ejecuta con **un solo worker** de gunicorn (y varios hilos), porque el cliente MQTT y los planificadores de tareas deben existir una única vez.
- La base de datos SQLite se guarda en el volumen `edge-data`, de modo que sobrevive a los reinicios del contenedor. El broker conserva su estado en el volumen `mosquitto-data`.
- El Edge Gateway espera a que el broker y el backend superen sus verificaciones de salud antes de iniciar (`depends_on` con `service_healthy`). Si el broker se cae después, el cliente reintenta la conexión con espera creciente.
- El contenedor se ejecuta con un usuario sin privilegios y define su propio `HEALTHCHECK` sobre `/health`.

**Variables de entorno principales**

| Variable | Valor por defecto en Compose | Descripción |
|---|---|---|
| `EDGE_SERVICE_TOKEN` | `dev-service-token` | Token Bearer de la API REST local (obligatorio) |
| `EDGE_MQTT_HOST` | `mosquitto` | Broker MQTT |
| `EDGE_CLOUD_BASE_URL` | `http://mock-cloud:9000` | Backend al que se envían los eventos |
| `EDGE_CLOUD_TOKEN` | `dev-cloud-token` | Credencial del Edge Gateway ante el backend |
| `EDGE_DATABASE_PATH` | `/data/edge-gateway.db` | Archivo SQLite |
| `EDGE_TIMEZONE` | `America/Lima` | Zona horaria de los horarios de las áreas |

Los valores se pueden sobrescribir con un archivo `.env` (ver `.env.example`). La topología desplegada se representa en el Deployment Diagram de la sección 4.1.3.4.

## 6.2. Landing Page, Services & Applications Implementation

### 6.2.1. Sprint 1

#### 6.2.1.1. Sprint Planning 1

#### 6.2.1.2. Aspect Leaders and Collaborators

#### 6.2.1.3. Sprint Backlog 1

#### 6.2.1.4. Development Evidence for Sprint Review

El Edge Gateway se desarrolló en ramas feature de GitFlow. Cada rama se integró a `develop` con su commit convencional, y el release `0.1.0` se integró a `main`. Repositorio: https://github.com/IoT-UPC-202620/Edifika-Microservice-IoT-Gateway

| Rama | Commit | Historias | Qué se desarrolló |
|---|---|---|---|
| `feature/TS23-flask-base` | `b846d26` | TS23 | Aplicación Flask, configuración por variables de entorno, `/health`, Swagger y token Bearer |
| `feature/TS25-local-persistence` | `d962edc` | TS25 | Modelos Peewee sobre SQLite (modo WAL) y cola de salida de eventos (outbox) |
| `feature/TS24-mqtt-contract` | `6daef9c` | TS24 | Contrato MQTT versionado, router de mensajes, puente paho-mqtt y comandos con confirmación (ACK) |
| `feature/US79-US80-device-registry` | `90a80df` | US79, US80, US85 | Registro de nodos, heartbeat, detección de nodos sin conexión y sincronización de reloj |
| `feature/US71-access-control` | `ab2d202` | US71–US75, US87 | Decisión local de acceso RFID, cerradura, buzzer y OLED, horarios por área y registro manual de tarjetas |
| `feature/US76-sensor-telemetry` | `6a80218` | US76–US78, US92 | Lecturas de humedad y ultrasonido, nivel de agua, alertas locales y calibración |
| `feature/TS33-cloud-integration` | `9ca706a` | TS33, US75, US81, US82, US93 | Envío por lotes al backend, sincronización de la caché y endpoints de estado local |
| `feature/US83-remote-commands-maintenance` | `da711b3` | US83, US89 | Comandos remotos y modo mantenimiento |
| `feature/TS31-docker-compose` | `fb0a2db` | TS31, TS32, TS33 | Docker Compose, simulador de nodos y backend simulado |
| `feature/docs-readme` | `4e7bd48` | — | Documentación del repositorio |
| `release/0.1.0` | `171a6f9` | — | Preparación de la versión 0.1.0 y `CHANGELOG.md` |

**Estructura del código**

```
main.py                    punto de entrada (gunicorn main:app)
edge_gateway/
  config.py  gateway.py    configuración · raíz de composición y tareas en segundo plano
  mqtt/                    contrato (esquemas), router y puente paho-mqtt
  services/                access, devices, telemetry, commands, remote, outbox, sync, alerts, credentials
  api/                     blueprints REST y esquemas
  models.py  db.py         modelos Peewee · configuración de SQLite
mock_cloud/                backend simulado para pruebas locales
simulator/                 nodos ESP32 virtuales
tests/                     suite de pruebas pytest
```

El código de la aplicación tiene cerca de 2 700 líneas y las pruebas cerca de 1 900.

**Decisiones de diseño relevantes**

- **Offline first:** las decisiones de acceso nunca consultan la nube; todo lo que debe llegar al backend pasa por la cola de salida en SQLite. Un registro y su evento se escriben en una misma transacción.
- **Alertas con estado:** cada condición (humedad baja, nivel crítico de agua, nodo sin conexión) se anuncia una vez al producirse y una vez al resolverse, no por cada lectura.
- **Mantenimiento significa desactivado:** un nodo en mantenimiento no procesa tarjetas, lecturas, comandos ni genera alertas hasta que el mantenimiento termina, de forma manual o por vencimiento.
- **Cola con prioridad:** si la cola de salida se llena, se descartan primero las lecturas de telemetría más antiguas; los accesos y las alertas nunca se descartan.

#### 6.2.1.5. Testing Suite Evidence for Sprint Review

Las pruebas se encuentran en la carpeta `tests/` del repositorio y se ejecutan con `pytest`. La suite tiene **188 pruebas** que **no necesitan broker MQTT ni internet**: el broker, el backend y el reloj se reemplazan con dobles de prueba (`FakePublisher`, `FakeCloud`, `FakeClock`), y cada prueba usa su propia base de datos SQLite temporal. La suite completa se ejecuta en unos 12 segundos.

```bash
pip install -r requirements-dev.txt
pytest
# 188 passed
```

| Archivo de pruebas | Pruebas | Qué verifica | Historias |
|---|---|---|---|
| `test_base.py` | 6 | Arranque, `/health`, Swagger/OpenAPI y configuración obligatoria | TS23 |
| `test_persistence.py` | 7 | Modo WAL, persistencia tras reinicio, escritura atómica y límite de la cola | TS25 |
| `test_mqtt_contract.py` | 21 | Esquemas, versión de contrato, router resistente a mensajes inválidos y puente MQTT | TS24 |
| `test_commands.py` | 9 | Comandos, ACK, tiempos de espera y alerta de cerradura sin respuesta | TS24, US72 |
| `test_devices.py` | 19 | Registro de nodos, heartbeat, desconexión, recuperación, sincronización de reloj, planificador y API | US79, US80, US85 |
| `test_access.py` | 29 | Decisiones de acceso (tarjeta válida, desconocida, bloqueada, vencida, sin reserva, fuera de horario), lecturas repetidas, intentos denegados y API | US71–US75, US87 |
| `test_telemetry.py` | 28 | Validación de lecturas, nivel de agua, filtro de picos, alertas con histéresis y calibración | US76–US78, US92 |
| `test_cloud_integration.py` | 38 | Entrega por lotes, reintentos, caída y recuperación de la nube, cliente HTTP, sincronización y estado local | TS33, US75, US81, US82, US93 |
| `test_remote_and_maintenance.py` | 26 | Comandos remotos, errores HTTP y modo mantenimiento | US83, US89 |
| `test_mock_cloud.py` | 5 | Backend simulado: autenticación, idempotencia y sincronización | TS33 |
| **Total** | **188** | | |

**Escenarios de aceptación.** Los escenarios Dado/Cuando/Entonces de cada historia (Capítulo III) se tradujeron en pruebas con nombres descriptivos. Por ejemplo, el escenario de US75 "Registro local sin internet" se verifica en `test_access_attempts_made_while_offline_reach_the_cloud_afterwards`, y el de US89 "Nodo desactivado durante el mantenimiento" en `test_node_in_maintenance_rejects_every_remote_command_even_from_an_admin`.

**Verificación de la suite.** Se comprobó que las pruebas detectan errores reales introduciendo fallos a propósito: invertir el orden de entrega de eventos, eliminar la espera entre reintentos y quitar la protección de las tarjetas registradas sin conexión. En los tres casos al menos una prueba falló y señaló el comportamiento alterado.

#### 6.2.1.6. Execution Evidence for Sprint Review

Se ejecutó el servicio completo de extremo a extremo: broker MQTT real, backend simulado, Edge Gateway y nodos ESP32 virtuales, que se comunican con el contrato MQTT descrito en 6.2.1.7. Para esta verificación el broker fue un broker MQTT de código abierto ejecutado en el mismo equipo.

**1. Arranque y salud.** El Edge Gateway se conectó al broker, sincronizó la caché con el backend y reportó todas sus dependencias en estado correcto:

```
INFO edge_gateway.mqtt.bridge: Connected to MQTT broker localhost:1883
INFO edge_gateway.services.sync: Cache synchronised to version 1: {'credentials': 1, 'permissions': 1, 'areaSchedules': 1, 'removed': 0}
GET /health -> {"status":"ok", "checks":{"database":{"ok":true}, "outbox":{...,"pending":0}, "cache":{"version":1,"stale":false}, "mqtt":{"ok":true}}}
```

**2. Registro de nodos y primer heartbeat.** Se registraron dos nodos mediante la API; a los pocos segundos de iniciar los nodos virtuales ambos pasaron de `INACTIVE` a `ACTIVE`:

```
esp32-door-01   ACTIVE
esp32-garden-01 ACTIVE
```

**3. Lectura de tarjetas en la puerta.** Una tarjeta con reserva vigente abre la puerta y una tarjeta desconocida es rechazada; en ambos casos el nodo recibe qué mostrar en la pantalla OLED y qué sonido emitir:

```
[esp32-door-01] -> card 04A1B2C3
[esp32-door-01] <- access_result {"result": "GRANTED", "reason": "ok", "message": "Access granted", "buzzer": "granted", "name": "Ana Perez", "lockMs": 5000}

[esp32-door-01] -> card DEADBEEF
[esp32-door-01] <- access_result {"result": "DENIED", "reason": "unknown_credential", "message": "Card not registered", "buzzer": "denied"}
```

**4. Operación sin internet.** Se simuló la caída del backend. Con el backend caído, la tarjeta válida igualmente abrió la puerta y los eventos quedaron en la cola local; al restablecerse el servicio llegaron todos, en orden y sin duplicados:

```
(backend caído)   [esp32-door-01] GRANTED: Access granted
                  status -> outbox: {'pending': 17, 'consecutiveFailures': 2, 'lastError': 'HTTP 503'}
(backend restaurado)
                  backend recibió los 3 accesos (GRANTED, DENIED, GRANTED) y 100 lecturas; pendientes en cola: 4 (lecturas nuevas)
```

**5. Comandos remotos y mantenimiento.** El Edge Gateway ejecuta comandos solo en nodos activos y espera su confirmación:

```
POST /devices/esp32-door-01/commands  {"type":"unlock","params":{"durationMs":3000}}  -> 200 {"status":"ACKED"}
PUT  /devices/esp32-door-01/maintenance {"enabled":true,"durationMinutes":30}          -> 200 status MAINTENANCE
POST /devices/esp32-door-01/commands  {"type":"unlock"}                                -> 409 "Device under maintenance"
tarjeta presentada en mantenimiento                                                    -> DENIED: Under maintenance
```

Además, el backend recibió el resultado de cada comando remoto con el administrador que lo solicitó (`requestedBy`).

**6. Seguridad básica.** Una solicitud sin token Bearer a la API responde `401`.

#### 6.2.1.7. Services Documentation Evidence for Sprint Review

El Edge Gateway documenta su API REST con **OpenAPI/Swagger**: la interfaz está disponible en `/docs` y la especificación en `/openapi.json`. Todos los endpoints, excepto `/health`, requieren el token Bearer configurado en `EDGE_SERVICE_TOKEN`. Los textos de la documentación y de las respuestas están en inglés, idioma por defecto del proyecto.

**Endpoints de la API REST local**

| Método | Ruta | Descripción | Historias |
|---|---|---|---|
| GET | `/health` | Estado del servicio y de sus dependencias (base de datos, broker, cola de eventos y caché) | TS23 |
| POST | `/api/v1/devices` | Registrar un nodo; queda `INACTIVE` hasta su primer heartbeat | US79 |
| GET | `/api/v1/devices` | Listar los nodos | US80, US93 |
| GET | `/api/v1/devices/{device_id}` | Consultar un nodo | US80 |
| PATCH | `/api/v1/devices/{device_id}/settings` | Calibrar altura del tanque y umbrales | US92 |
| PUT | `/api/v1/devices/{device_id}/maintenance` | Activar o finalizar el modo mantenimiento | US89 |
| POST | `/api/v1/devices/{device_id}/commands` | Ejecutar un comando (abrir cerradura, mostrar mensaje, sonar buzzer) y esperar su confirmación | US83 |
| POST | `/api/v1/credentials` | Registrar una tarjeta manualmente, también sin internet | US86 (registro manual) |
| GET | `/api/v1/credentials` | Listar las credenciales en caché | US93 |
| PATCH | `/api/v1/credentials/{uid}/status` | Activar, suspender o revocar una credencial | US91 (bloqueo manual) |
| GET | `/api/v1/access-attempts` | Bitácora de accesos, con la credencial enmascarada | US55, US93 |
| GET | `/api/v1/readings` | Lecturas de sensores | US65 |
| POST | `/api/v1/sync` | Recibir credenciales, reservas y horarios enviados por la nube | US81 |
| GET | `/api/v1/status` | Estado del Edge Gateway: nodos, cola de eventos y caché | US93 |
| GET | `/api/v1/outbox` | Eventos pendientes de enviar a la nube | US93 |

Los errores tienen una forma común: `{"code": 409, "status": "Conflict", "message": "..."}`. Los errores de validación (`422`) incluyen un objeto `errors` con el detalle de cada campo.

**Contrato MQTT entre los nodos y el Edge Gateway** (prefijo `edifika/v1`, versión de esquema 1). Todos los mensajes son JSON con la versión `v` y la marca de tiempo `ts` del reloj del nodo.

| Sentido | Tópico | Contenido |
|---|---|---|
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/heartbeat` | `deviceId`, `ts`, `fw` (versión de firmware, opcional) |
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/access` | `credentialType` (`RFID`), `credential` (UID de la tarjeta) |
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/readings` | `sensor` (`humidity` o `ultrasonic`), `value` (puede ser nulo si el sensor no midió), `unit` |
| Nodo → Edge | `edifika/v1/nodes/{deviceId}/ack` | `commandId`, `status` (`OK` o `FAILED`), `detail` |
| Edge → Nodo | `edifika/v1/nodes/{deviceId}/commands` | `commandId`, `type`, `params` |

Tipos de comando que debe atender el firmware: `access_result` (resultado de una lectura de tarjeta: abrir `lockMs`, mensaje para la OLED y patrón del buzzer), `unlock`, `display`, `buzzer`, `alert` (alerta local, por ejemplo nivel crítico de agua), `maintenance` y `time_sync`. El nodo debe confirmar con un `ack` cada comando que incluya `commandId`. Un mensaje con una versión de esquema distinta o con un formato inválido se descarta y se reporta a la nube una sola vez por dispositivo.

**Contrato entre el Edge Gateway y el backend.** Las llamadas incluyen `Authorization: Bearer <token>` y el encabezado `X-Gateway-Id`.

| Operación | Descripción |
|---|---|
| `POST /api/v1/edge/events` | Entrega por lotes de eventos `{eventId, kind, occurredAt, payload}`. El backend responde con los `eventId` aceptados y **debe deduplicar por `eventId`**, porque la entrega es al menos una vez. Tipos de evento: `access_attempt`, `reading`, `alert`, `device_status`, `command_result` y `credential_changed` |
| `GET /api/v1/edge/sync?since={versión}` | Credenciales, ventanas de reserva y horarios de áreas. Entrega una copia completa (`full: true`) o solo los cambios desde la versión indicada |

Ante un error `5xx`, `401`, `403`, `408`, `429` o una falla de red, el Edge Gateway conserva los eventos y reintenta con espera creciente (máximo 60 segundos). Ante cualquier otro error `4xx`, descarta el evento tras 5 intentos para que no bloquee la cola.

#### 6.2.1.8. Software Deployment Evidence for Sprint Review

El despliegue del Edge Gateway se define de forma reproducible en el repositorio (https://github.com/IoT-UPC-202620/Edifika-Microservice-IoT-Gateway):

| Archivo | Contenido |
|---|---|
| `Dockerfile` | Imagen del Edge Gateway (`python:3.12-slim`, usuario sin privilegios, `HEALTHCHECK` y gunicorn con un worker) |
| `docker-compose.yml` | Servicios `mosquitto`, `edge-gateway`, `mock-cloud` y, con el perfil `sim`, `seed`, `sim-door` y `sim-garden`; volúmenes `edge-data` y `mosquitto-data` |
| `mosquitto/mosquitto.conf` | Configuración del broker MQTT local |
| `.env.example` | Variables de entorno que se pueden sobrescribir |

El archivo `docker-compose.yml` se validó con `docker compose config`, que confirma la sintaxis y la resolución de sus variables, y los seis servicios (`mosquitto`, `edge-gateway`, `mock-cloud`, `seed`, `sim-door` y `sim-garden`) quedan definidos. Los pasos de despliegue están en la sección 6.1.4.

> **Pendiente de evidencia:** capturas de la ejecución de `docker compose up --build` con los contenedores en estado `healthy` y de la interfaz Swagger en `http://localhost:8000/docs`.

#### 6.2.1.9. Team Collaboration Insights during Sprint

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
